#include<stdio.h>
#include<string.h>
void main()
{
char c[100],h[100];
int i,j=0;
clrscr();
/*printf("Enter the string \n " );*/
gets(c);
strrev(c);
printf("%s\n",c);
for(i=0;a[i]!='\0';++i)
{
if((a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')==0)
{
h[j]=c[i];
j++;
}
}
h[j]='\0';
printf("%s",h);
getch();
}
