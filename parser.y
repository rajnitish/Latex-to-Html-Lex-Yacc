%{
#include<ctype.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
FILE *file ;
extern char * yytext;
char arr[100]="",arr1[100]="";
int section1 = 0, subsection = 0, issection;
FILE *fp;
void write_to_file();

struct node {

		struct node* left;
		char value[100000];
		
		struct node* right;
		struct node* sibling;
};

void add_tag(char lvalue[],char value[],char rvalue[])
{
	int len=0;
	memcpy(value+len,lvalue,strlen(lvalue)+1);
	len +=strlen(lvalue);
	memcpy(value+len," ",1);
	len += 1;
	memcpy(value+len,rvalue,strlen(rvalue)+1);
	

}

void add_htmltag(char first[],char second[],char third[], char final[])
{
	int len=0;
	memcpy(final+len,first,strlen(first)+1);
	len +=strlen(first);
	memcpy(final+len,second,strlen(second)+1);
	len +=strlen(second);
	memcpy(final+len,third,strlen(third)+1);
}

void add_tabletag(char first[],char second[],char third[], char final[])
{
	int len=0;
	memcpy(final+len,first,strlen(first)+1);
	len +=strlen(first);
	memcpy(final+len,second,strlen(second)+1);
	len +=strlen(second);
	memcpy(final+len,third,strlen(third)+1);
}

void add_tabletag1(char first[],char second[],char final[])
{
	int len=0;
	memcpy(final+len,first,strlen(first)+1);
	len +=strlen(first);
	memcpy(final+len,second,strlen(second)+1);
	

}

void add_paratag(char first[],char second[],char third[], char final[])
{
	int len=0;
	memcpy(final+len,first,strlen(first)+1);
	len +=strlen(first);
	memcpy(final+len,second,strlen(second)+1);
	len +=strlen(second);
	memcpy(final+len,third,strlen(third)+1);
}

void add_listtag(char first[],char second[],char third[], char final[])
{
	int len=0;
	memcpy(final+len,first,strlen(first)+1);
	len +=strlen(first);
	memcpy(final+len,second,strlen(second)+1);
	len +=strlen(second);
	memcpy(final+len,third,strlen(third)+1);
}

void add_italictag(char first[],char second[],char third[], char final[])
{
	int len=0;
	memcpy(final+len,first,strlen(first)+1);
	len +=strlen(first);
	memcpy(final+len,second,strlen(second)+1);
	len +=strlen(second);
	memcpy(final+len,third,strlen(third)+1);
}

void add_boldtag(char first[],char second[],char third[], char final[])
{
	int len=0;
	memcpy(final+len,first,strlen(first)+1);
	len +=strlen(first);
	memcpy(final+len,second,strlen(second)+1);
	len +=strlen(second);
	memcpy(final+len,third,strlen(third)+1);
}

void add_enumtag(char first[],char second[],char third[], char final[])
{
	int len=0;
	memcpy(final+len,first,strlen(first)+1);
	len +=strlen(first);
	memcpy(final+len,second,strlen(second)+1);
	len +=strlen(second);
	memcpy(final+len,third,strlen(third)+1);
}
void add_nestenumtag(char first[],char second[],char third[],char fourth[], char final[])
{
	int len=0;
	memcpy(final+len,first,strlen(first)+1);
	len +=strlen(first);
	memcpy(final+len,second,strlen(second)+1);
	len +=strlen(second);
	memcpy(final+len,third,strlen(third)+1);
	len +=strlen(third);
	memcpy(final+len,fourth,strlen(fourth)+1);
}
void add_sectiontag(char first[],char second[],char third[], char fourth[],char final[])
{
	int len=0;
	memcpy(final+len,first,strlen(first)+1);
	len +=strlen(first);
	memcpy(final+len,second,strlen(second)+1);
	len +=strlen(second);
	memcpy(final+len,third,strlen(third)+1);
	len +=strlen(third);
	memcpy(final+len,fourth,strlen(fourth)+1);
}
struct node* createnode(struct node* left, char val[], struct node* right)
{
	int len=0;
	struct node *node = (struct node*)malloc(sizeof(struct node));
	node->left = left;
	node->right = right;
	node->sibling = NULL;
	len=strlen(val);
	memcpy(node->value,val,len);
	//node->value = val; 
	return node;

}
struct node* createsiblingnode(struct node* left, char val[], struct node* right,struct node* sibling)
{
	int len=0;
	struct node *node = (struct node*)malloc(sizeof(struct node));
	node->left = left;
	node->right = right;
	node->sibling = sibling;
	len=strlen(val);
	memcpy(node->value,val,len);
	//node->value = val; 
	return node;

}




void print(struct node* node)
{
 if(node==NULL)
	return;
else
	{
	fprintf(file,"%s",node->value);
	}
}
%}

%union 
{
  	char*	arr;
  	int	val;
        struct node* node;
 
} 

%start latexstatement
%token DOCUMENTCLASS BEGINDOC TITLE AUTHOR DATE MAKETITLE SECTION PARAGRAPH SUBSECTION TEXTBOLD TEXTITALIC UNDERLINE ENDDOC LCURLYB RCURLYB
%token BEGINENUM ENDENUM ITEM LABEL CAPTION FRACS SQRE SQRS INTEGRAL SUM
%token BEGINTABLE BEGINTABULAR HLINE AMPERSAND NEWLINE ENDTABLE ENDTABULAR PREAMBLE REF
%token BEGINFIG INGRAPHICS ENDFIG WIDTH HEIGHT RBRACKET LBRACKET H T B L C R PIPE
%token <arr> LETTERS WORD
%type <node> latexstatement body options section textoption ignore subsection paragraph listitem enumoption caption textbold textitalic 
%type <node> graphics sum squareroot fraction integral tablerow hline tabularbody endtabular starttabular tablebody table
%type <node> label ref
%type <arr> word  letters

%%
word : WORD
letters: LETTERS

latexstatement   :  DOCUMENTCLASS
			{
				//fprintf(file,"<!DOCTYPE html> \n <html>\n");
			} 
			PREAMBLE ignore
			BEGINDOC
			{
				//printf("\nIn Begin Document\n");				
				//fprintf(file,"<head>\n");
				//fprintf(file,"</head>\n");
				//fprintf(file,"<body>\n");
			} body ENDDOC
			{
				//fprintf(file,"</body>\n"); 
			}
			{
				//fprintf(file,"</html>\n"); 
				char buff[200000];				
				add_tag($4->value,buff,$7->value);
				$$ = createnode ($4,buff,$7);

				char htmlBuff[200000];
				add_htmltag("<!DOCTYPE html> \n <html>\n<head>\n</head>\n<body>\n",buff,"\n</body>\n</html>\n",htmlBuff);				
				
				print($$);
			}
		  ;

ignore 		 :	PREAMBLE ignore{ 
				char buff[100000];
				add_tag("",buff,"");			
				$$ = createnode(NULL,buff,NULL);
			
			}
		 |	
			{
				char buff[100000];
				add_tag("",buff,"");			
				$$ = createnode(NULL,buff,NULL);
		
			}

		 ;
body         	 :  body options
			{ 		//printf("\nIn Body\n");
					char buff[200000];					
					add_tag($1->value,buff,$2->value);
					$$ = createnode($1,buff,$2);

					
			}
		 |  options
			{ 
					//printf("\nIn Options\n");
					char buff[100000];
					//printf("$1->value is %s\n",$1->value);					
					add_tag($1->value,buff,"");
					$$ = createnode($1,buff,NULL);
					
			}
		 ;


options		 :  section 
			{ 
				char buff[100000];
				add_tag($1->value,buff,"");
				$$ = createnode($1,buff,NULL);
			}
		 |  subsection 
			{ 
				char buff[100000];
				add_tag($1->value,buff,"");
				$$ = createnode($1,buff,NULL);
			}
		|  graphics 
			{ 
				char buff[100000];
				add_tag($1->value,buff,"");
				$$ = createnode($1,buff,NULL);
			}
		|  table 
			{ 
				char buff[100000];
				add_tag($1->value,buff,"");
				$$ = createnode($1,buff,NULL);
			}
		 |  paragraph
			{ 
				char buff[100000];
				add_tag($1->value,buff,"");
				$$ = createnode($1,buff,NULL);
			}
		 |  textoption
			{ 
				char buff[100000];
				add_tag($1->value,buff,"");
				$$ = createnode($1,buff,NULL);
			}
		 |  enumoption
			{ 
				char buff[100000];
				add_tag($1->value,buff,"");
				$$ = createnode($1,buff,NULL);
			}
		 |  listitem
			{ 
				char buff[100000];
				add_tag($1->value,buff,"");
				$$ = createnode($1,buff,NULL);
			}
		 |  caption
			{ 
				char buff[100000];
				add_tag($1->value,buff,"");
				$$ = createnode($1,buff,NULL);
			}
		 | textbold
			{ 
				char buff[100000];
				add_tag($1->value,buff,"");
				$$ = createnode($1,buff,NULL);
			}
		 | textitalic
			{ 
				char buff[100000];
				add_tag($1->value,buff,"");
				$$ = createnode($1,buff,NULL);
			}
		 | label
			{ 
				char buff[100000];
				add_tag($1->value,buff,"");
				$$ = createnode($1,buff,NULL);
			}
		 | ref
			{ 
				char buff[100000];
				add_tag($1->value,buff,"");
				$$ = createnode($1,buff,NULL);
			}
		| sum 	{
				char buff[100000];
				add_tag($1->value,buff,"");
				$$ = createnode($1,buff,NULL);
			}
		| squareroot 	{
				char buff[100000];
				add_tag($1->value,buff,"");
				$$ = createnode($1,buff,NULL);
			}
		| integral 	{
				char buff[100000];
				add_tag($1->value,buff,"");
				$$ = createnode($1,buff,NULL);
			}				
		 
		| fraction	{
				char buff[100000];
				add_tag($1->value,buff,"");
				$$ = createnode($1,buff,NULL);
				}
		;
section		 : section SECTION LCURLYB
			{ 
				section1++; 
				//fprintf(file,"<h4>   %d  ", section1);
				
			} 
			textoption RCURLYB
			{
				//fprintf(file,"</h4>\n");
				char sectionBuff[100000];
				char str[200];
				sprintf(str,"<h4>  %d  ",section1);
				//printf("---------------->>>   %s",str);
				add_sectiontag(str,$1->value,$5->value,"</h4>\n",sectionBuff);
				//printf("SectionBuff -------------->>>   %s",sectionBuff);
				$$ = createnode($1,sectionBuff,$5);
			}
		 | SECTION LCURLYB
			{ section1++; 
			  //fprintf(file,"<h4>  %d  ", section1);
			} textoption RCURLYB
			{
				//fprintf(file,"</h4>\n");
				char sectionBuff[100000];
				char str[200];
				sprintf(str,"<h4>  %d  ",section1);
				add_sectiontag(str,"",$4->value,"</h4>\n",sectionBuff);
				//printf("SectionBuff -------------->>>   %s",sectionBuff);
				$$ = createnode(NULL,sectionBuff,$4);
				
			}
		 ;
subsection 	 : subsection SUBSECTION LCURLYB
			{ 
				subsection++; 
				//fprintf(file,"<h5>  %d.%d  ",section1,subsection);
			} textoption RCURLYB
			{
				//fprintf(file,"</h5>\n");


				char sectionBuff[100000];
				char str[200];
				sprintf(str,"<h5>  %d.%d  ",section1,subsection);
				add_sectiontag(str,$1->value,$5->value,"</h5>\n",sectionBuff);
				//printf("Sub-SectionBuff -------------->>>   %s",sectionBuff);
				$$ = createnode($1,sectionBuff,$5);
			}
		 | SUBSECTION LCURLYB
			{ 
				subsection++; 
				//fprintf(file,"<h5>  %d.%d  ",section1,subsection);
			} textoption RCURLYB
			{
				//fprintf(file,"</h5>\n");
				char sectionBuff[100000];
				char str[200];
				sprintf(str,"<h5> %d.%d  ",section1,subsection);
				add_sectiontag(str,"",$4->value,"</h5>\n",sectionBuff);
				//printf(" JAI HO......... %s",$4->value);
				//printf("Sub-SectionBuff -------------->>>   %s",sectionBuff);
				$$ = createnode(NULL,sectionBuff,$4);
			}
		;
paragraph 	 : PARAGRAPH LCURLYB
			{
				//fprintf(file,"<p>");
			} textoption RCURLYB
			{
				//fprintf(file,"</p>\n");
				char buff[100000];
				add_paratag("\n<p>",$4->value,"</p>\n",buff);
				$$ = createnode(NULL,buff,$4);
			}
		 ;



enumoption	 : BEGINENUM 
			{
				//fprintf(file,"\n<ol>\n"); 
			} listitem ENDENUM 
			{
				//fprintf(file,"\n</ol>\n");
				char buff[100000];
				add_enumtag("\n<ol>\n",$3->value,"\n</ol>\n",buff);
				$$ = createnode(NULL,buff,$3);
			}
		 

		 ;


listitem         : listitem ITEM textoption 
			{
				char buff[100000];
				add_enumtag($1->value,"\n<li>",$3->value,buff);
				//printf("1------in listitem buff is %s\n",buff);
				$$ = createnode($1,buff,$3);

			}
			|
		   ITEM textoption
			{

				char buff[100000];
				add_enumtag("\n<li>",$2->value,"",buff);
				//printf("1------in listitem buff is %s\n",buff);
				$$ = createnode(NULL,buff,$2);
			}
			
		 ;
caption		 : CAPTION LCURLYB 
		 {
			//fprintf(file,"<br>\n<caption> &nbsp;&nbsp;&nbsp");
		 }
		 textoption RCURLYB 
		{
			//fprintf(file,"</caption>");
			char buff[100000];
			add_italictag("<br>\n<caption> &nbsp;&nbsp",$4->value,"</caption>\n",buff);
			$$ = createnode(NULL,buff,$4);
		}	
		;
label 		 : LABEL LCURLYB WORD RCURLYB
		 {
			
			//fprintf(file,"<a name = '%s'></a>",$3);

			char s[200];
			sprintf(s,"<a name = '%s'></a>",$3);
				
			$$ = createnode(NULL,s,NULL);
		 }
		 ;

ref		 : REF LCURLYB WORD RCURLYB
		 {
			
			char s[200];
			sprintf(s,"<a href='#%s'>%s</a>",$3,$3);
			$$ = createnode(NULL,s,NULL);

		 }
		 ;



table		 : BEGINTABLE caption label tablebody ENDTABLE
			{
			  char buff[100000];
			  add_tabletag($2->value,$3->value,$4->value,buff);
			  $$ = createsiblingnode($2,buff,$3,$4);				
			}
		 | BEGINTABLE caption tablebody ENDTABLE
			{
			  char buff[100000];
			  add_tabletag1($2->value,$3->value,buff);
			  $$ = createnode($2,buff,$3);
			}
		 | BEGINTABLE tablebody ENDTABLE
			{
			  char buff[100000];
			  add_tabletag1($2->value,"",buff);
			  $$ = createnode($2,buff,NULL);
			
			}
		 ;



tablebody	 : starttabular tabularbody endtabular
			{
			  char buff[100000];
			  add_tabletag($1->value,$2->value,$3->value,buff);
			  //printf("\n$2 for table is -----%s----------\n",$2->value);
			  $$ = createsiblingnode($1,buff,$2,$3);				
			}
		 ;

starttabular 	 : BEGINTABULAR 
			{
			//printf("MARKER -1"); 
			  char buff[100000];
			  add_tabletag1("<table border=1>\n","",buff);
			  $$ = createnode(NULL,buff,NULL);
				
			} 
		 ;

endtabular 	 : ENDTABULAR 
			{
			  //fprintf(file,"</table>\n");
			//printf("MARKER 0"); 
			  char buff[100000];
			  add_tabletag1("</table>\n","",buff);
			  $$ = createnode(NULL,buff,NULL); 
			}
		 ;



tabularbody	 : hline  tablerow tabularbody
		   {
			//printf("MARKER 1"); 
			  //fprintf(file,"<tr>\n<th> ");
			  char buff[100000];
			  add_tabletag("<tr>\n<th> ",$2->value,$3->value,buff);
			  $$ = createsiblingnode($1,buff,$2,$3);
			  
		   }
		 |
		  {
			//printf("MARKER 2");
			  char buff[100000];
			  add_tabletag1("","",buff);
		          $$ = createnode(NULL,buff,NULL);
		  }
		 ;


hline 		 :  HLINE hline 
			{
				//printf("MARKER 3");
 			  char buff[100000];
			  add_tabletag1("",$2->value,buff);
		          $$ = createnode(NULL,buff,$2);
			}
		 |
			{
			   char buff[100000];
			 // printf("\nIn Ebsilon\n");
				add_tabletag1("","",buff);
		          $$ = createnode(NULL,buff,NULL);
			}
		 ;

tablerow	 : textoption AMPERSAND {
					// fprintf(file," </th> <th>"); 
					} 
		   tablerow
		   {
			char buff[100000];
			add_tabletag($1->value," </th> <th>",$4->value,buff);
   			$$ = createnode($1,buff,$4);
		   }
		 | textoption NEWLINE 
		   {
				//fprintf(file," </th>\n</tr>\n"); 
			char buff[100000];
			add_tabletag($1->value," </th>\n</tr>\n","",buff);
   			$$ = createnode($1,buff,NULL);
		   }
		 ;

sum 		 : SUM  {
			 char buff[100000];
			 add_tag("<b> &#8721 </b>",buff,"");
			$$ = createnode(NULL,buff,NULL);
			}
		 ;

integral 	 : INTEGRAL { 
				char buff[100000];
			 	add_tag("<b> &#x222b </b>",buff,"");
				$$ = createnode(NULL,buff,NULL);
				
			    }
		 ;
squareroot 	 : SQRS WORD SQRE { 
					char buff[100000];
					sprintf(buff,"<b> &#8730 </b> %s",$2);
			 		$$ = createnode(NULL,buff,NULL);
					
				 }
		 | SQRS LETTERS SQRE { 
					char buff[100000];
					sprintf(buff,"<b> &#8730 </b> %s",$2);
			 		$$ = createnode(NULL,buff,NULL);
					
				 }
		 ;
fraction 	 : FRACS LCURLYB textoption RCURLYB LCURLYB textoption SQRE
				{
					char buff[100000];
					sprintf(buff,"<h3><sup>%s</sup>&frasl;<sub>%s</sub></h3>",$3->value,$6->value);
			 		$$ = createnode(NULL,buff,NULL);			
				}
		 | FRACS LCURLYB LETTERS RCURLYB LCURLYB LETTERS SQRE
				{
					char buff[100000];
					sprintf(buff,"<h3><sup>%s</sup>&frasl;<sub>%s</sub></h3>",$3,$6);
			 		$$ = createnode(NULL,buff,NULL);			
				}
		 | FRACS LCURLYB LETTERS RCURLYB LCURLYB textoption SQRE
				{
					char buff[100000];
					sprintf(buff,"<h3><sup>%s</sup>&frasl;<sub>%s</sub></h3>",$3,$6->value);
			 		$$ = createnode(NULL,buff,NULL);			
				}
		 | FRACS LCURLYB textoption RCURLYB LCURLYB LETTERS SQRE
				{
					char buff[100000];
					sprintf(buff,"<h3><sup>%s</sup>&frasl;<sub>%s</sub></h3>",$3->value,$6);
			 		$$ = createnode(NULL,buff,NULL);			
				}
		 ;
graphics	 : BEGINFIG INGRAPHICS LBRACKET WIDTH WORD
		 {
			
			//printf( "\nwidth value is %s\n",$5);
		
		 }
		 WORD HEIGHT WORD
		 {
			
			//printf("\nheight value is %s\n",$9);
			//fprintf(file,"<img style='width:%s;height:%s;'",$5,$9);	
	
		 }
		 RBRACKET LCURLYB WORD WORD WORD
		 {
			
			//printf("\n image value is %s%s%s\n",$13,$14,$15);
			//fprintf(file,"src='%s%s%s'>",$13,$14,$15);
				
		 } RCURLYB caption ENDFIG
		 {
			char buff[100000],l[200],r[200];
			sprintf(l,"<img style='width:%s;height:%s;'",$5,$9);
			sprintf(r,"src='%s%s%s'>",$13,$14,$15);
			add_listtag(l,r,$18->value,buff);
			$$ = createnode(NULL,buff,NULL);
		 }
		 ;

textbold 	 : TEXTBOLD LCURLYB 
		{
			//fprintf(file,"<b>");
		} textoption RCURLYB 
		{
			//fprintf(file,"</b>\n");
			char buff[100000];
			add_italictag("<b>\n",$4->value,"</b>\n",buff);
			$$ = createnode(NULL,buff,$4);
		}  
                ;

textitalic 	 : TEXTITALIC LCURLYB 
		{
			//fprintf(file,"<i>");
		} textoption RCURLYB 
		{
			//fprintf(file,"</i>\n");
			char buff[100000];
			add_italictag("<i>\n",$4->value,"</i>\n",buff);
			$$ = createnode(NULL,buff,$4);
		}
		 ;

textoption 	 : textoption word
			{
				//fprintf(file,"%s ",yytext);
				char buff[100000];
				add_tag($1->value,buff,$2);
				$$ = createnode($1,buff,NULL);
				
			}
		 |  textoption letters
			{
				//fprintf(file,"%s ",yytext);
				char buff[100000];
				add_tag($1->value,buff,$2);
				$$ = createnode($1,buff,NULL);
			}
		 | word {
				//fprintf(file,"%s ",yytext);
				char buff[100000];
				add_tag($1,buff,"");
				$$ = createnode(NULL,buff,NULL);
			}
		| letters {
				//fprintf(file,"%s ",yytext);
				char buff[100000];
				add_tag($1,buff,"");
				$$ = createnode(NULL,buff,NULL);
			  }
		;

%% 

int main(int argc, char *argv[])
{
 char fname[100];
 strcpy(fname, argv[1]);
file = fopen(fname,"w");
if (file == NULL)
printf("Couldnot open the file\n");
 return yyparse();
}

int yyerror (char *msg) {
   
       fprintf(file,"ERROR");
    
    
    
	return fprintf (stderr, "YACC: %s\n ", msg);
	}

