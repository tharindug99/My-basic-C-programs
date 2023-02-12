#include <stdio.h>
int main()
{
	int numbers[7] = {1,2,3,4,6,20,21};
	int size = 7;
	int newsize = size;
	
	printf("The perticular array = ");
	printf("{ ");
	for(int a = 0; a<=size-1;a++ )
	   {
   		 printf("%d,",numbers[a]);
   	   }
	printf(" } \n\n");
	for(int i = 0; i<=newsize-1; i++)
	    {
    		for(int j=i+1; j<=newsize-1;j++)
    		{
		    	if(numbers[i]==numbers[j])
		    	  {
  	    			for(int k=j;k<=newsize-1;k++)
  	    			    {
    			    	  	numbers[k]=numbers[k+1];
			    	    }
  	    			newsize--;
  	    			j--;
  	    		  }
		    }
    	}
    	
 	    if(newsize<size)
		 {
 			
    	    	printf("This array has duplicate values \n\n");
    	    	printf("The array without duplicates = ");
	    	    printf("{ "); 
	                 for(int b = 0; b<=newsize-1;b++ )
	                     {
                          printf("%d,",numbers[b]);
   	                     }
	                 printf(" } \n\n");
  	        
          }
		 else
		 {
 			printf("No duplicate entries are not found\n\n");
         }  
	return 0;
}