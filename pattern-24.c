#include<stdio.h>

void main(){
	int i,j,s;
	
	for(i=5;i>0;i--){
		for(s=2;s<=i;s++){
			printf(" ");
		}
		for(j=i;j<=5;j++){
			printf("%d ",j);
		}
		printf("\n");
	}
}
