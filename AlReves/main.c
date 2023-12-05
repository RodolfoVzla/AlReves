#include <stdio.h>

int main() {
	int numero, digito1, digito2, digito3, digito4;

	// Entrada de un número de 4 dígitos
	printf("Programa Al Revés\nIngrese un número de 4 dígitos: ");
	scanf("%d", &numero);

	// Verificar si el número tiene 4 dígitos
	if (numero < 1000 || numero > 9999) {
		printf("Por favor, ingrese un número de 4 dígitos.\n");
		return 1; // Código de error
	}

	// Extraer cada dígito
	digito1 = numero % 10;
	digito2 = (numero / 10) % 10;
	digito3 = (numero / 100) % 10;
	digito4 = (numero / 1000) % 10;

	// Imprimir el número al revés
	printf("Número al revés: %d%d%d%d\n", digito1, digito2, digito3, digito4);

	return 0;
}
