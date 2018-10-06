#include "llistaBidOrd.h"

ListaBid LISTABID_crea () {
	ListaBid l;
	
	l.pri = (Nodo*)malloc(sizeof(Nodo));
	if (l.pri != NULL) {
		l.ult = (Nodo*)malloc(sizeof(Nodo));
		if (l.ult == NULL) {
			free (l.pri);
		}
		else {
			l.pri->sig = l.ult;
			l.pri->ant = NULL;
			l.ult->ant = l.pri;
			l.ult->sig = NULL;
			l.pdi = l.ult;
		}
	}
	return l;
}

void LISTABID_vesInicio (ListaBid * l) {
	l->pdi = l->pri->sig;
}

void LISTABID_vesFinal (ListaBid * l) {
	l->pdi = l->ult->ant;
}

void LISTABID_inserirDelante (ListaBid * l, int e) {
	Nodo * aux;
	if (l->pdi != l->pri) {
		aux = (Nodo*)malloc(sizeof(Nodo));
		if (aux != NULL) {
			aux->e = e;
			aux->sig = l->pdi;
			aux->ant = l->pdi->ant;
			l->pdi->ant->sig = aux;
			l->pdi->ant = aux;
		}
	}
}

void LISTABID_inserirDetras (ListaBid * l, int e) {
	Nodo * aux;
	if (l->pdi->sig != NULL) {
		aux = (Nodo*)malloc(sizeof(Nodo));
		if (aux != NULL) {
			aux->e = e;
			aux->sig = l->pdi->sig;
			aux->ant = l->pdi;
			l->pdi->sig->ant = aux;
			l->pdi->sig = aux;
		}
	}
}

int LISTABID_final (ListaBid l) {
	return l.pdi == l.ult;
}	

int LISTABID_inicio (ListaBid l) {
	return l.pdi == l.pri;
}

int LISTABID_estaVacia (ListaBid l) {
	return l.pri->sig == l.ult;
}

int LISTABID_consulta (ListaBid l) {
	int e;
	if (LISTABID_final(l) || LISTABID_inicio(l)) {
		e = -1;
	}
	else {
		e = l.pdi->e;
	}
	return e;
}

void LISTABID_avanza (ListaBid * l) {
	if (l->pdi != l->ult) {
		l->pdi = l->pdi->sig;
	}
}

void LISTABID_retrocede (ListaBid * l) {
	if (l->pdi != l->pri) {
		l->pdi = l->pdi->ant;
	}
}

