#include <stdio.h>

int main(void) {
	// your code goes here
	int i,j,n;
	int half;
	scanf("%d",&n);
	half=n/2;
	for(i=n-half;i>=1;i--){
	    for(j=2*(n-half)-1+half;j>=1;j--){
	        if(j>=(n-half)-(i-1) && j<=(n-half)+(i-1)){
	            printf("@");
	        }else{
	            printf(" ");
	        }
	    }
	    printf("\n");
	}
	for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
	        if(j==1 || j==n || i==1){
	           printf("*"); 
	        }else{
	            printf(" ");
	        }
	    }
	    printf("\n");
	}
	return 0;
}

