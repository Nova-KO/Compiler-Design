#include<stdio.h>
#include<ctype.h>
#include<string.h>
void main()
	{
		FILE *fi,*fo,*fop,*fk;
		int flag=0,i=1;
		char c,t,a[15],ch[15],file[20];
		printf("Enter the file name:");
		scanf("%s",file);
		fi=fopen("file","r");
		fo=fopen("inter.c","w");
		fop=fopen("key.c","r");
		c=getc(fi);
		while(!feof(fi))
			{
				if(isalpha(c)||isdigit(c)||(c=='['||c==']'||c=='.'==1))
					fputc(c,fo);
				else
				{
					if(c=='\n')
					fprintf(fo,"\t$\t");
					else
					fprintf(fo,"\t%c\t",c);
					
				}
				c=getc(fi);
			}
		fi=fopen("inter.c","r");
		printf("\nLexical Analysis");
		fscanf(fi,"%s",a);
		printf("\n Line: %d \n",i++);
		while(!feof(fi))
		{
			if(strcmp(a,"$")==0)
			{
				printf("\nLine:%d\n",i++);
				fscanf(fi,"%s",a);
			}
		fscanf(fop,"%s",ch);
		}
		rewind(fop);
		fscanf(fk,"%s",ch);
		while(!feof(fk))
		{
			if(strcmp(ch,a)==0)
			{
				fscanf(fk,"%c",ch);
				printf("\t\t%s\t\tKeyword\n",a);
				flag=1;
			}
			fscanf(fk,"%s",ch);
		}
		rewind(fk);
		if(flag==0)
		{	
			if(isdigit(a[0]))
			{
				printf("\t\t%s\t\tConstant\n",a);
			}
			else
			printf("\t\t%s\t\tIdentifier\n",a);
		}
		flag==0;
		fscanf(fi,"%s",a);
		
				
	}
