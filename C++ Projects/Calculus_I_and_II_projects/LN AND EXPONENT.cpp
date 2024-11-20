#include<stdio.h>
#include<string.h>

int main()
{
	char typ;
	printf("please specify equation type:"
	"\n type 'e' for exponential"
	"\n type 'l' for natural log");
	scanf(" %c",&typ);
	
	

	switch(typ)
	{
     //NATURAL LOG
   
	case 'l':
   {
   	char eq[1000];
	int n;	
	printf("enter the no.of terms of inside the brackets of ln\n");
	scanf("%d",&n);	
	int coeff[n],pow[n],npow[n],ncoeff[n];
	printf("enter the equation\n");
	scanf("%s",eq);
	int l=strlen(eq),j=0,k=3,x=6;
	
	//extraction for coeff inside the brackets
	
		for(int i=0;i<n;i++)
		{
	    coeff[i]=(int)(eq[k]-'0');
		k=k+5;
		}
		
	//extraction for powers inside the brackets
	
	for(int i=0;i<n;i++)
	{
		pow[i]=(int)(eq[x]-'0');
		x=x+5;
		}	
		
	//CALCULATION	
	//calculation for coeff
	for(int i=0;i<n;i++)
	{
		ncoeff[i]=coeff[i]*pow[i];
	
	}
	//calculation for power
	for(int i=0;i<n;i++)
	{
		npow[i]=pow[i]-1;
		
		}		
      
	 //PRINTING
	for(int i=0;i<n;i++)
	{
		printf(" +(%d)x^%d",ncoeff[i],npow[i]);
	  }  
	  printf("/");
	  	for(int i=0;i<n;i++)
	{
		printf("+(%d)x^%d",coeff[i],pow[i]);
	  }
	  
   }
   break;
    //EXPONENTIAL
    case 'e':
    	{
    char eq[1000];
	int n;			
   	printf("enter the no.of terms of in the power of exponential\n");
	scanf("%d",&n);	
	int coeff[n],pow[n],ncoeff[n],npow[n];
	printf("enter the equation\n");
	scanf("%s",eq);
	int l=strlen(eq),j=0,k=3,x=6;
	
	//extracrion for coefficents
	
	for(int i=0;i<n;i++)
	{
		coeff[i]=(int)(eq[k]-'0');
		k=k+5;
	}
	

	
 //extraction for power in the powerof exponential
    
		for(int i=0;i<n;i++)
    { 
		pow[i]=(int)(eq[x]-'0');
		x=x+5;
	}	
	
														
	
 //CALCULATION
    	//calculation for coeff
	for(int i=0;i<n;i++)
	{
		ncoeff[i]=coeff[i]*pow[i];
	
	}
	//calculation for power
	for(int i=0;i<n;i++)
	{
		npow[i]=pow[i]-1;
		
		}
	//PRINTING
   for(int i=0;i<n;i++)
   {
   	printf("(+(%d)x^%d)x",ncoeff[i],npow[i]);
	   }	
	printf("e^");
	for(int i=0;i<n;i++)
	{
		printf("(+(%d)x^%d)",coeff[i],pow[i]);
		}	
		}
    break;
    
  }
  
	return 0;
}











