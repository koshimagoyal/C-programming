#include<stdio.h>
void main()
{
	FILE *fp;
	char str[20],fnam[10];
	int c;
	printf("\n enter the filename");
	scanf("%s",fnam);
	fp=fopen(fnam,"w");
	printf("\n enter the contents of file");
	fflush(stdin);
		gets(str);
		fflush(stdin);
		fputs(str,fp);
	fclose(fp);
	fflush(stdin);
	fp=fopen(fnam,"r");
	printf("\n read the contents of file\n");
	while(!feof(fp))
	{
		fgets(str,20,fp);
		puts(str);
		fflush(stdin);
	}
	fclose(fp);
}
