#include<stdio.h>
void main()
{
	int t,n,i,p;
	char a[1000];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",a);
		p=0;
		if(a[0]>='A'&&a[0]<='Z')
		{
			for(i=1;i<strlen(a);)
			{
				if(a[i]>='A'&&a[i]<='Z')
					i++;
				else
				{
					a[i]-=32;
					i++;
				}
			}
		}
		else
		{
			for(i=1;i<strlen(a);)
			{
				if(a[i]>='a'&&a[i]<='z')
					i++;
				else
				{
					a[i]+=32;
					i++;
				}
			}
		}
		printf("%s",a);
		if(p<t)
			printf("\n");
	}
}
