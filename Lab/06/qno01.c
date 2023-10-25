int main(){
	int n,sum=0;
	printf("enter any number");
	scanf("%d",&n);
	int i;
	for(i=1;i<n;i++){
		if(n%i==0){
			sum = sum +i;
			
		}
	}
	if(sum == n){
		printf("perfect square",sum);
	}
	else{
		printf("not a perfect square",sum);
	}
	
	return 0;
	
}
