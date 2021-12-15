#include <stdio.h> 		
#include <stdlib.h>		
#include <locale.h> 
#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main(){
	
	int vetor1[15], vetor2[10];
	
		for (int i = 0; i<15; i++) {
			printf("Insira a matricula dos alunos de Logica de Programacao: ");
			scanf("%d", &vetor1[i]);
		
	}
	
		for(int x=0; x < 10; x++){
			printf("Insira a matricula dos alunos de Linguagem de Programacao: ");
			scanf("%d", &vetor2[x]);		
	}
		for(int i=0; i<15; i++){
    		for(int x=0; x<10; x++){
        		if(vetor1[i] == vetor2[x]) 
					printf("As matriculas iguais sao: %d\n", vetor1[i]);
    	}
	}
}
