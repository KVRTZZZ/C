#include <stdio.h>
//comentarios podem serem feito de duas maneiras, a primeira e com duas barra // assim sera comentarios mas somente nesta linha

/*
agora comentarios de blocos sao feitos assim, desta forma

nada de anormal

*/

void minhaFuncao(){
	printf("assim sao chamadas funcoes, funcoes voids, sao funcoes na quais nao vao retornar valores, e nao precisam de parametros, podem ser tanto feitas vazias, ou autopreenchidas com void no paranmetro\n");
}


void minhaFuncao2(void){
	printf("esta funcao esta sendo escrita com um void dentro do paramentro\n");
}


int main(){
	printf("buceta bradesco\n");
	minhaFuncao();
	minhaFuncao2();
	return 0;
}
