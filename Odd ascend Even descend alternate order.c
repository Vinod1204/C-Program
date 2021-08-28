#include <stdio.h>
int main()
{
	int n,a[100],i,j,e[100],o[100],e1=0,o1=0,t;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			e[e1++]=a[i];
		}
	    else
	    {
	    	o[o1++]=a[i];
		}
	}
	for(i=0;i<e1;i++)
	{
		for(j=i+1;j<e1;j++)
        {
        	if(e[i]<e[j])
        	{
        	    t=e[i];
        		e[i]=e[j];
        		e[j]=t;
			}
		}

	}
	for(i=0;i<o1;i++)
     {
     	for(j=i+1;j<o1;j++)
		 {
		 	if(o[i]>o[j])
             {
             	t=o[j];
             	o[j]=o[i];
             	o[i]=t;
			 }
		 }		
		 
	 }
	for(i=0,j=0;i<e1&&j<o1;i++,j++)
	{
		printf("%d %d ",o[j],e[i]);
	}
   	while(i<e1)
   {
   	printf("%d",e[i]);
   	i++;
	}	
	while(j<o1)
	{
		printf("%d",o[i]);
		j++;
	}
	return 0;	 
 }	
 

