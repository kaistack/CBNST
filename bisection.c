#include <stdio.h>

int main() {
	int c=0;
	float p,n,bi,bi_val;
	
	printf("Positive root: ");
	scanf("%f",&p);
	printf("Negative root: ");
	scanf("%f",&n);
	
	do{
		bi = (p + n)/2.0;
		bi_val = (bi*(bi-2)*(bi-1));
		
		if(bi_val>0){
			p = bi;
			}
		else if(bi_val<0){
			n = bi;
			}
		if((c++)==50){
			break;
			}
	  }while((bi_val>0.0001) && (bi_val<0));
	  
	  printf("ROOT is : %f",bi);
	  
	  return 0;
}

