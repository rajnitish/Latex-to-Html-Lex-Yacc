%{
#include "y.tab.h"
#include<stdio.h>
#include<string.h>
int issection = 0;
int inmath=0;
%}
 
%%


[a-zA-Z]		{
				printf("%s", yytext);
				yylval.arr = strdup(yytext); 
				return(LETTERS);
			}

[a-zA-Z0-9_]+ 		{
				printf("%s", yytext);
				yylval.arr=strdup(yytext);
				return (WORD);
			}


(\.|\,|\!|\?|\:|\;|"'") {
				printf("%s", yytext);
				yylval.arr=strdup(yytext);
				return (WORD);		

			}
"+"			{
				printf("%s", yytext);
				yylval.arr=strdup(yytext);
				return (WORD);	
			}
"-"			{
				printf("%s", yytext);
				yylval.arr=strdup(yytext);
				return (WORD);	
			}
"*"			{
				printf("%s", yytext);
				yylval.arr=strdup(yytext);
				return (WORD);	
			}
"/"			{
				printf("%s", yytext);
				yylval.arr=strdup(yytext);
				return (WORD);	
			}

"{"			{
				printf("%s", yytext);
				return(LCURLYB);
			}

"}"			{	printf("%s", yytext);
				return(RCURLYB);
			}
"["			{
				printf("%s", yytext);
				return(LBRACKET);
			}

"]"			{	printf("%s", yytext);
				return(RBRACKET);
			}
"|"			{
				printf("%s",yytext);
				return(PIPE);
			}


"\\documentclass[sigconf]{acmart}" 	{
				printf("%s", yytext);
				 return(DOCUMENTCLASS);
			}
"\\usepackage{balance}" {
				printf("%s",yytext);
				return(PREAMBLE);
			}
"\\usepackage{graphicx}" {
				printf("%s",yytext);
				return(PREAMBLE);
			 }

"\\usepackage{url}"      {
				printf("%s",yytext);
				return(PREAMBLE);
			 }
"\\usepackage{amsmath}"      {
				printf("%s",yytext);
				return(PREAMBLE);
			 }

"\\usepackage{mathtools}"      {
				printf("%s",yytext);
				return(PREAMBLE);
			 }
"\\usepackage{tabularx}" {
				printf("%s",yytext);
				return(PREAMBLE);
			 }
"\\usepackage{caption}"      {
				printf("%s",yytext);
				return(PREAMBLE);
			 }
"\\usepackage{subcaption}"      {
				printf("%s",yytext);
				return(PREAMBLE);
			 }
"\\usepackage{multirow}"      {
				printf("%s",yytext);
				return(PREAMBLE);
			 }
   
"\\usepackage{graphics}"      {
				printf("%s",yytext);
				return(PREAMBLE);
			 }
  
"\\begin{document}" 	{
				printf("%s", yytext);
				 return(BEGINDOC);
			}

"\\title"		{
				printf("%s",yytext);
				return(TITLE);
			}

"\\author"		{
				printf("%s",yytext);
				return(AUTHOR);
			}

"\\date"		{
				printf("%s",yytext);
				return(DATE);
			}

"\\maketitle"		{
				printf("%s",yytext);
				return(MAKETITLE);
			}

"\\section" 		{	issection = 1;	
				printf("%s", yytext);
				 return(SECTION);
			}

"\\subsection" 		{	printf("%s", yytext);
				 return(SUBSECTION);
			}

"\\paragraph"		{	printf("%s",yytext);
				return(PARAGRAPH);
			}

"\\label"		{	printf("%s",yytext);
				return(LABEL);

			}
"\\ref"			{	printf("%s",yytext);
				return(REF);

			}
"\\textbf"		{
				printf("%s",yytext);
				return(TEXTBOLD);
			}
"\\bf"			{
				printf("%s",yytext);
				return(TEXTBOLD);
			}
"\\textit"		{
				printf("%s",yytext);
				return(TEXTITALIC);
			}

"\\underline"		{
				printf("%s",yytext);
				return(UNDERLINE);
			}

"\\begin{enumerate}"    {
				printf("%s", yytext);
				 return(BEGINENUM);
			}

"\\item"                {
				printf("%s", yytext);
				return(ITEM);
			}

"\\end{enumerate}"      {	
				printf("%s", yytext);
				return(ENDENUM);
			}

"\\begin{table}"	{

				printf("%s",yytext);
				return(BEGINTABLE);			
			}

"\\begin{tabular}{l|c|r}"	{
				printf("%s",yytext);
				return(BEGINTABULAR);
			}

"\\hline"		{
				printf("%s",yytext);
				return(HLINE);
			}

"&"			{		
				printf("%s",yytext);
				return(AMPERSAND);
			}
	
"\\\\"			{
				printf("%s",yytext);
				return(NEWLINE);
			}

"\\end{table}"		{
				printf("%s",yytext);
				return(ENDTABLE);
			}

"\\end{tabular}"	{
				printf("%s",yytext);
				return(ENDTABULAR);
			}			

"\\end{document}"    	{	printf(" %s ", yytext);
				return(ENDDOC);
			}

"\\begin{figure}"	{	printf("%s",yytext);
				return(BEGINFIG);
		        }

"\\includegraphics"	{	printf("%s",yytext);
				return(INGRAPHICS);
			}

"\\end{figure}"		{       printf("%s",yytext);
				return(ENDFIG);
			}

"width="		{       printf("%s",yytext);
				return(WIDTH);
			}
"height="		{       printf("%s",yytext);
				return(HEIGHT);
			}
"\\caption"		{	printf("%s",yytext);
				return(CAPTION);
			}

"\$\\sum\$"		{
				printf("%s",yytext);
				return(SUM);
			}

"\$\\int\$"		{
				printf("%s",yytext);
				return(INTEGRAL);
			}

"\$\\sqrt{"		{
				printf("%s",yytext);
				return(SQRS);
			}
"}\$"			{
				printf("%s",yytext);
				return(SQRE);
			}
"\$\\frac"		{
				printf("%s",yytext);
				return(FRACS);
			}
%%

