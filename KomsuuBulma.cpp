#include <stdio.h>
#include <stdlib.h>
#include <time.h>  
int main(){
    srand(time(NULL)); 
    int n=4; 
    int satir;
    int matris[n][n]; 
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            matris[i][j] = rand() % 2 - 0; 
        }
    }
    printf("Satir bilgisini girin :" );
    scanf("%d",&satir); 
    if(satir<n){
    	printf("\n");  
    	for(int x=1; x<=n; x++){
        	if(matris[satir][x]==1){ 
            	printf("\n %d satirin %d sutunu 1' e esittir\n",satir,x); 
            	printf("\n %d . Nodenin komsusu :  %d \n",satir,x);            
        	}
    	}

    	printf("\nMatris\n");   
    	for(int i=1; i<=n; i++){
        	for(int j=1; j<=n; j++){
            	printf("%3d ", matris[i][j]);  
        	}
        printf("\n");
   	 	}
	}
   	else{
		printf("HATA!! boyle bir satir yok");
	}
    return 0;
}

