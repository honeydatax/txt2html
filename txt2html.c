#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void td(){
	char *a="				<td width=\"50%\" style=\"border: 1px solid #000000; padding: 0.1cm\">";
	printf ("%s",a);
}
void endtd(){
	char *a="</td>";
	printf ("%s\n",a);
}
void row(){
	char *a="				<tr>";
	printf ("%s\n",a);
}
void endrow(){
	char *a="				</tr>";
	printf ("%s\n",a);
}

void table(){
	char *a="			<table width=\"100%\" cellpadding=\"5\" cellspacing=\"0\">";
	printf ("%s\n",a);
}
void endtable(){
	printf ("			</table>\n");
}
style(){
	char *a="				<style type=\"text/css\">";
	char *b="					@page { margin: 2cm }";
	char *c="					p { margin-bottom: 0.25cm; line-height: 120% }";
	char *d="					td p { margin-bottom: 0cm }";
	char *e="				</style>";
	printf ("%s\n",a);
	printf ("%s\n",b);
	printf ("%s\n",c);
	printf ("%s\n",d);
	printf ("%s\n",e);
}
void head (){
	printf ("	<head>\n");
}
void endhead (){
	printf ("	</head>\n");
}

void body (){
	printf ("	<body>\n");
}
void endbody (){
	printf ("	</body>\n");
}
void title (){
	printf ("		<title>\n");
}
void endtitle (){
	printf ("		</title>\n");
}

void html (){
	printf ("<html>\n");
}

 void endhtml (){
	printf ("</html>\n");
}


int main(int argc, char *argv[]){
	int n;
	char c[2080];
	char *cc;
	char *ccc;
	char *cccc;
	FILE *f;
	int r=0;
	if(argc>1){
		html();
		head();
		title();
			printf ("%s.html\n",argv[1]);
		endtitle();
		style();
		endhead();
		body();
			printf ("<h1>%s.html\n</h1><br>",argv[1]);
		f=fopen(argv[1],"r");
		if (f!=NULL){
			while(feof(f)!=1){
				strcpy(c,"");
				fgets(c,2070,f);
				cc=strstr(c,"\n");
				if(cc!=NULL)cc[0]=0;
				cc=strstr(c,"\r");
				if(cc!=NULL)cc[0]=0;
				printf ("%s <br> \n",c);
			}
		}
		endbody();
		endhtml();
	}else{
		return 1;
	}	
	return 0;
}