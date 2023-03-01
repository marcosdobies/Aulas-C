#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float nota[4] = {0, 0, 0, 0};
	float media = 0;
	
	printf ("Software de media de notas escolares");

for (int i = 0; i < 4; i++)	
	{
    printf("\nEscreva a %i nota: ", i + 1);
	scanf("%f", &nota[i]);
	
}

	if(media < 5)
	{
		printf("\nReprovado! \nAte ano que vem!");
	}
	else if (media < 7)
	{
		printf("\nAprovado pelo conselho! \nDeu sorte desta vez!");
	}
	else{
		printf("\nAprovado!\nAte nunca mais!");
	}
	return 0;
}
