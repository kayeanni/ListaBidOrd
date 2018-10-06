#ifndef _LLISTABIDORD_H_
#define _LLISTABIDORD_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct N {
	int e;
	struct N * sig;
	struct N * ant;
} Nodo;

typedef struct {
	Nodo * pri;
	Nodo * ult;
	Nodo * pdi;
} ListaBid;

ListaBid LISTABID_crea();
void LISTABID_inserirDelante (ListaBid * l, int e);
void LISTABID_inserirDetras (ListaBid * l, int e);
int LISTABID_consulta(ListaBid l);
//int LISTABID_elimina (ListaBid * l);
void LISTABID_avanza (ListaBid * l);
void LISTABID_retrocede (ListaBid * l);
void LISTABID_vesInicio (ListaBid * l);
void LISTABID_vesFinal (ListaBid * l);
int LISTABID_inicio (ListaBid l);
int LISTABID_final (ListaBid l);
int LISTABID_estaVacia (ListaBid l);
//void LISTABID_destruye (ListaBid * l);

#endif
