#include <iostream>
#include <cstdlib>
#include <ctime>


void bubbleSort(int v[100000], int n)
{
int i, j, aux;
for(i = n-1; i > 0; i--) {
for(j = 0; j < i; j++) {
if(v[j] > v[j+1]) {
aux = v[j]; v[j] = v[j+1]; v[j+1] = aux;
}
}
}
}

int main (){
	
	srand (time(0));
	
	int i = 0 ,n, v[100000];
	
	printf ("Digite a quantidade de numeros aleatorios: ");
	scanf ("%d",&n);
	
	for (i=0 ; i<n ; i++){
		//cout <<1 + (rand()%n)<<" - ";}
		printf ("%d - ", 1+ (rand ()%n));}
		v[100000] = 1+ (rand ()%n);
		
	
	for(i = 0; i < n; i++) {
scanf("%d", &v[i]);
}
bubbleSort(v, n);
printf("\n\nVetor ordenado:\n");
for(i = 0; i < n; i++) {
printf("%d\t", v[i]);
	
	
	
	return 0;
	
	
}}

