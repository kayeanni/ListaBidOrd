#include "llistaBidOrd.h"

void main () {
	ListaBid l;
	int i, num;
	int valor, e;
	char car, aux;

	l = LISTABID_crea();
	
	printf ("Hola, ¿cuantos numeros quieres introducir? ");
	scanf ("%d", &num);

	for (i=0; i < num; i++) {
		printf("Introduce numero %d: ", i +1);
		scanf ("%d", &num);

		LISTABID_vesInicio (&l);
		if (LISTABID_estaVacia(l)) {
			LISTABID_inserirDelante (&l, valor);
		}
		else {
			while (!LISTABID_final(l)) {
				LISTABID_avanza(&l);
			}
			LISTABID_inserirDetras (&l, valor);
		}

	LISTABID_vesInicio(&l);
	while (!LISTABID_final(l)) {
		e = LISTABID_consulta(l);
		printf ("%d ", e);
		LISTABID_avanza(&l);
	}
	printf ("\n");	
}
