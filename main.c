#include "llistaBidOrd.h"

void main () {
	ListaBid l;
	int valor, e;
	char car, aux;

	l = LISTABID_crea();

	do {
		printf ("Introduce un número: ");
		scanf ("%d", &valor);

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

		printf ("\nQuieres introducir más números? (y/n): ");
		scanf ("%c", &car);
		scanf ("%c", &aux);

	} while (aux != 'n');

	LISTABID_vesInicio(&l);
	while (!LISTABID_final(l)) {
		e = LISTABID_consulta(l);
		printf ("%d ", e);
		LISTABID_avanza(&l);
	}
	
}
