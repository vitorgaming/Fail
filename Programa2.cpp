#include <stdio.h> 		
#include <stdlib.h>		
#include <locale.h> 
#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main(){
	srand(time(NULL));
	int vetor[11], aux;
	
	for (int i = 0; i<11; i++) {
		vetor[i]=rand()%100;
		
	}
	
		for(int x=0; x < 11; x++){
			for(int y=x; y < 11; y++) {
				if(vetor[x] > vetor[y]){
					aux = vetor[x];
					vetor[x] = vetor[y];
					vetor[y] = aux;
				}
			}
		}
		for(int i=0; i < 11; i++) {
			printf("Numero %d e o: %d\n", i, vetor[i]);
		}
	}
