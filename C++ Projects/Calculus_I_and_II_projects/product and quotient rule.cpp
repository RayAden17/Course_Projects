#include<stdio.h>
#include<string.h>

//product rule and quotient rule

int main()
{
	char eq[1000];
	int n1,n2,t;
	printf("enter the no.of terms in your first polynomial\n");
	scanf("%d",&n1);
	printf("enter the no.of terms in your second polynomial\n");
	scanf("%d",&n2);
	printf("\nenter the equation");
	scanf("%s",eq);
	int l=strlen(eq);
	char eq1[5],eq2[5];
    for(int i=0;i<l;i++)
    {
		if(eq[i]=='*')
		{   int k=i+1;
		    for(int j=0;j<i;j++)
		    {
		    	eq1[j]=eq[j];
			}
			int p=0;
		    for(int j=i+1;j<=l;j++)
		    {
		    	eq2[p]=eq[k];
		    	k++;
		    	p++;
			}
	
		//EQ1
	int m=0,n=3,d=0;
	int pow[n];
	int coef[n];
    int l1=strlen(eq1); 
		//extraction for coeff
    for(int i=0;i<n1;i++)
	{
		
		coef[m]=(int)(eq1[d]-'0');
		m++;
		d=d+5;
		
		
    }
    

	//extraction for power
	for(int i=0;i<n1;i++)
	{
		pow[i]=(int)(eq1[n]-'0');
		n=n+5;
	}
	
	//calculation for coeff
	for(int i=0;i<n1;i++)
	{
		coef[i]=coef[i]*pow[i];
		
	}
	
		//calculation for power
	for(int i=0;i<n1;i++)
	{
		pow[i]=pow[i]-1;
		
		}
   
   //EQ2
   	m=0,n=3;
	int pow1[n];
	int coef1[n];
		//extraction for coeff
    for(int i=0;i<n2;i++)
	{
		if(i%5==0)
		{
		coef1[m]=(int)(eq2[i]-'0');
		m++;
		}	
    }

	//extraction for power
	for(int i=0;i<n2;i++)
	{
		pow1[i]=(int)(eq2[n]-'0');
		n=n+5;
	}
	
	//calculation for coeff
	for(int i=0;i<n2;i++)
	{
		coef1[i]=coef1[i]*pow1[i];
	}
	

		//calculation for power
	for(int i=0;i<n2;i++)
	{
		pow1[i]=pow1[i]-1;
		
		}
	//PRINTING
	
	printf("(%s)",eq1);
	for(int i=0;i<n1;i++)
	{
		printf("(+(%d)x^(%d))",coef[i],pow[i]);
	}
	printf(" + (%s)",eq2);
	for(int i=0;i<n2;i++)
	{
		printf("(+(%d)x^(%d))",coef1[i],pow1[i]);
	}
   }
   //QUOTIENT RULE
   else if(eq[i]=='/')
   {
   	int k=i+1;
   	for(int j=0;j<i;j++)
		    {
		    	eq1[j]=eq[j];
			}
			int p=0;
		    for(int j=i+1;j<=l;j++)
		    {
		    	eq2[p]=eq[k];
		    	k++;
		    	p++;
			}
			
				//EQ1
	int m=0,n=3,d=0;
	int pow[n];
	int coef[n];
		//extraction for coeff
    for(int i=0;i<n1;i++)
	{
		coef[m]=(int)(eq1[d]-'0');
		m++;
		d=d+5;
    }

	//extraction for power
	for(int i=0;i<n1;i++)
	{
		pow[i]=(int)(eq1[n]-'0');
		n=n+5;
	}
	
	//calculation for coeff
	for(int i=0;i<n1;i++)
	{
		coef[i]=coef[i]*pow[i];
	}
	
		//calculation for power
	for(int i=0;i<n1	;i++)
	{
		pow[i]=pow[i]-1;
		
		}
   
   //EQ2
   	m=0,n=3;
	int pow1[n];
	int coef1[n];
		//extraction for coeff
    for(int i=0;i<n2;i++)
	{
		if(i%5==0)
		{
		coef1[m]=(int)(eq2[i]-'0');
		m++;
		}	
    }

	//extraction for power
	for(int i=0;i<n2;i++)
	{
		pow1[i]=(int)(eq2[n]-'0');
		n=n+5;
	}
	
	//calculation for coeff
	for(int i=0;i<n2;i++)
	{
		coef1[i]=coef1[i]*pow1[i];
	}
	

		//calculation for power
	for(int i=0;i<n2;i++)
	{
		pow1[i]=pow1[i]-1;
		}
	//PRINTING
	
	printf("(%s)",eq2);
	
	for(int i=0;i<n1;i++)
	{
		printf("(+(%d)x^(%d))",coef[i],pow[i]);
	}
			printf("-");
	printf("(%s)",eq1);
	for(int i=0;i<n2;i++)
	{
		printf("(+(%d)x^(%d))",coef1[i],pow1[i]);
	}		
	
	printf(" / ");
	printf("(%s)^2",eq2);
	
	
			
   }
    


   }
	
	}
	
	
	
	
	
	














