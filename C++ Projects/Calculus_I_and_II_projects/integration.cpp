#include<stdio.h>
//integration
int main()
{
	//inputs
	int n,one,two,three;
	printf("enter the no.of terms in your equation");
	scanf("%d",&n);
	int po[n];
	int px[n];
	
	printf("input the co-efficents of your terms in the polynomial");
     for(int i=0;i<n;i++)
     {
     	//coefficent input
     	
     	scanf("%d",&px[i]);
     	
	 }
	 
	 printf("input the powers of your respective co-efficent of the term in the polynomial");
	 for(int i=0;i<n;i++)
	 {
	 		//power input
     	scanf("%d",&po[i]);
	 }
	 
	 //calculation
    for(int i=0;i<n;i++)
	{
		if(po[i]==-1)
		{
			one=px[i];
			two=1;
			printf("+(%d)ln(+(%d)x^%d) ",one,one,two);
		}
		else
	    {
		one=px[i]/po[i];
		two=po[i]+1;
		printf("+(+(%d)/(+%d))x^%d ",px[i],two,two);
	}
		 }	 
	
}
