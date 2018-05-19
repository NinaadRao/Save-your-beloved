#include<stdio.h>
#include<stdlib.h>

int main(){
	int n;
	scanf("%d",&n);
	int *a=malloc(sizeof(int)*n);
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int strength=2000;
	long int injury=1;
	int count=0;
	int max=0;
	int j=0;
	for(i=0;i<n;i++){
		j=0;
		injury=1;
		strength=2000;
		while(strength>0 && injury<1000000 && (i+j)<n){
			if(a[i+j]<strength && injury*a[i+j]<1000000){
				j++;	
				strength=strength-a[i+j];
				injury=injury*a[i+j];
			}
			else{
				if(j==max){
					count++;
				}
				else if(j>max){
					max=j;
					count=0
				
					}
				break;
			}

		}
	}
	printf("number of positions=%d number of monkeys=%d\n ",count,max);
	free(a);
	return 0;
}
