int a[5];
int main(){
	int temp;
	int i,j;
	for(i=0;i<5;i++){
		for(j=0;j<5-i-1;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
	return 0;
}
