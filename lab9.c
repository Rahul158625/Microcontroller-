char ar[5]= {'R','a','h','u','l'};
int main(){
	int i;
	for(i=0;i<5;i++){
		if(ar[i]>=97 && ar[i]<=123)
			ar[i]-=32;
		else
			ar[i]+=32;
	}
	return 0;
}
