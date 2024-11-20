#include<stdio.h>
#include<string.h>

int main()
{
	char eq[100];
	int n,n1;
	printf("enter the no.of terms in your trignometric equation\n");
	scanf("%d",&n);
	printf("\nenter the no.of terms inside the brackets of your trig function\n");
	scanf("%d",&n1);
	printf("\n enter the equation\n");
	scanf("%s",eq);
	int l=strlen(eq);
	char sign;
	for(int i=0;i<l;i++)
	{    
	  
	//SINE FUNCTION
		if((eq[i]=='s')&&(eq[i+1]=='i')&&(eq[i+2]=='n'))
		{
			
		//extraction for sign
		if(eq[i+9]=='\0')
		{
			sign='\0';
		}
		else
	    {
		sign=eq[i+9];
    	}
    	
		int pow[n1],coeff[n1],ncoeff[n1],npow[n1],k=4+i,x=7+i;
		//extraction for coeff
		for(int i=0;i<n1;i++)
		{
			coeff[i]=(int)(eq[k]-'0');
			k=k+5;
		}
		//extraction for power
	   for(int i=0;i<n1;i++)
	   {
	   	   pow[i]=(int)(eq[x]-'0');
	   	   x=x+5;
		   }	
     //calculation
     	for(int i=0;i<n1;i++)
	{
		ncoeff[i]=coeff[i]*pow[i];
	
	}
	//calculation for power
	for(int i=0;i<n1;i++)
	{
		npow[i]=pow[i]-1;
		
		}
	//PRINTING
	for(int i=0;i<n1;i++)
	{
		printf("(+(%d)x^%d))",ncoeff[i],npow[i]);
		}	
	printf("cos");
	
	for(int i=0;i<n1;i++)
	{
		printf("((%d)x^%d)) %c ",coeff[i],pow[i],sign);
		}	
		}
	//END OF SINE FUNCTION
	
	
		
	//COSINE FUNCTION	
		else if((eq[i]=='c')&&(eq[i+1]=='o')&&(eq[i+2]=='s'))
		{
			//extraction for sign
		if(eq[i+9]=='\0')
		{
			sign='\0';
		}
		else
	    {
		sign=eq[i+9];
    	}
			int pow[n1],coeff[n1],ncoeff[n1],npow[n1],k=4+i,x=7+i;
		//extraction for coeff
		for(int i=0;i<n1;i++)
		{
			coeff[i]=(int)(eq[k]-'0');
			k=k+5;
		}
		
		//extraction for power
	   for(int i=0;i<n1;i++)
	   {
	   	   pow[i]=(int)(eq[x]-'0');
	   	   x=x+5;
		   }	
     //calculation
     	for(int i=0;i<n1;i++)
	{
		ncoeff[i]=(coeff[i]*pow[i])*-1;
	
	}
	//calculation for power
	for(int i=0;i<n1;i++)
	{
		npow[i]=pow[i]-1;
		
		}
	//PRINTING
	for(int i=0;i<n1;i++)
	{
		printf("(+(%d)x^%d))",ncoeff[i],npow[i]);
		}	
	printf("sin");
	
	for(int i=0;i<n1;i++)
	{
		printf("(+(%d)x^%d)) %c ",coeff[i],pow[i],sign);
		}	
		}
	//TANGENT FUNCTION 	
		else if((eq[i]=='t')&&(eq[i+1]=='a')&&(eq[i+2]=='n'))
		{
			//extraction for sign
		if(eq[i+9]=='\0')
		{
			sign='\0';
		}
		else
	    {
		sign=eq[i+9];
    	}
    	
		int pow[n1],coeff[n1],ncoeff[n1],npow[n1],k=4+i,x=7+i;
		//extraction for coeff
		for(int i=0;i<n1;i++)
		{
			coeff[i]=(int)(eq[k]-'0');
			k=k+5;
		}
		
		//extraction for power
	   for(int i=0;i<n1;i++)
	   {
	   	   pow[i]=(int)(eq[x]-'0');
	   	   x=x+5;
		   }	
     //calculation
     	for(int i=0;i<n1;i++)
	{
		ncoeff[i]=(coeff[i]*pow[i]);
	
	}
	//calculation for power
	for(int i=0;i<n1;i++)
	{
		npow[i]=pow[i]-1;
		
		}
	//PRINTING
	for(int i=0;i<n1;i++)
	{
		printf("(+(%d)x^%d))",ncoeff[i],npow[i]);
		}	
	printf("(sec^2)");
	
	for(int i=0;i<n1;i++)
	{
		printf("(+(%d)x^%d)) %c ",coeff[i],pow[i],sign);
		}	
		}
	}
	return 0;
}











































