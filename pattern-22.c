#include<stdio.h>

void main(){
	int i,j,k=2,c=1;
	char r='A';
		
	for(i=1; i<=5; i++){
	    for(j=1; j<=i; j++){
		    
		    if(i%2==0){
		    	    if(j%2==0){
		    	    	printf("%d",c++);
					}else{
						printf("%c",r++);
					}
			}else if(j%2==0){
				    printf("%d",c++);
			    }else{
			    	printf("%c",r++);
				}
	    }
	  printf(" \n");
}    
}
