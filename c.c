#include<stdio.h>
int main()
{
int i,j,k,l,p;
int c;
for(i=0;i<5;i++)
printf("\n");
	for( i=10 ; i>0 ; i--)
	{	
		for(j=0;j<i;j++)
		{
			printf(" ");
		}
		for(k=10;k>=i;k--)
		{
			switch(k) {  
			 case 8:
			 	if(i==4||i==6||i==1){printf("$");break;}
			 	else
			  	printf("*");
			  	break;
			  case 5:
			  	printf("^");
			  	break;
			 case 3:
			  	printf("@");
			  	break;
			  default:
			  	printf("*");
			}			
		
		}
		for(l=10;l>i;l--)
			{
			switch(l) {  
				 case 8:
				 	if(i==9||i==3||i==8){printf("$");break;}
				 	else
				  	printf("*");
				  	break;
				  case 5:
				  	printf("^");
				  	break;
				 case 3:
				  	printf("@");
				  	break;
				  default:
			  	printf("*");
			}
			}printf("\n");
			}
for(l=0;l<2;l++)
{
	for(p=0;p<9;p++)
	{
		printf(" ");
	}printf("***\n");
}

	printf("Merry Christmas\n");
}