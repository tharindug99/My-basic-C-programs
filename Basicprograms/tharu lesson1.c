#include <stdio.h>
int main()
{   
    int size ;
    
    printf("Enter the number of elements which shoul be included in the array = ");
    scanf("%d",&size);
	int numbers[size];
	
	int newsize = size;
	
	printf("Enter the values for the array \n");
	   for(int l = 0; l<size;l++)
	      {
	          printf("[%d] = ",l);
	          scanf("%d",&numbers[l]);
	      }
	    
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
