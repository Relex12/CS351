#include <stdio.h>

typedef struct {
	int num; 		/* num�rateur */
	int den;		/* d�nominateur */
} Fraction ;

int pgcd (int a, int b) ;

void addFraction(Fraction f1, Fraction f2);

/*
void subFraction(Fraction f1, Fraction f2);
void mulFraction(Fraction f1, Fraction f2);
void divFraction(Fraction f1, Fraction f2);
*/