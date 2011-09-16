#define TAM 10

int main(){

	float af[TAM] = {2.5, 3.8, 2.4, 12.9, 7.1, 8.8, 2.1, 5, 9.7, 6};
	int ai[TAM] = {1, 2, 0, 4, 5, 0, 2, 3, 2, 6};

	int i;
	
	for(i=0;i<TAM;i++){
		if (ai[i]!=0){
			af[i] = af[i] / ai[i];
		}
	}
}
