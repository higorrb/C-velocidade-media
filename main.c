#include <stdio.h>
#include <stdlib.h>

int main(){

	
	int *array_dinamico = (int *) malloc(2 * sizeof(int));
	
	if(array_dinamico == NULL){	
		printf("Erro no processo de alocaçao de memoria dinamica...");
		return 1;
	}
	
	printf("Digite o inicio do percurso[metros]: ");
    scanf("%d", &array_dinamico[0]);
    printf("Digite o final do percurso[metros]: ");
    scanf("%d", &array_dinamico[1]);

    int var_espaco = array_dinamico[1] - array_dinamico[0];

    free(array_dinamico);

    printf("Digite o tempo inicial[segundos]: ");
    scanf("%d", &array_dinamico[0]);
    printf("Digite o tempo do termino[segundos]: ");
    scanf("%d", &array_dinamico[1]);

    int var_tempo = array_dinamico[1] - array_dinamico[0];

	printf("A velocidade media desse percurso foi: %d m/s", var_espaco/var_tempo);
	
	free(array_dinamico);
	
	return 0;
}

