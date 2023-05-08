#include <stdio.h>

int main()
        {
                int zahl1;
                float zahl2;
                char buchstabe;

                printf("Gebe eine Ganzzahl ein \n");
                scanf("%d", &zahl1);
                printf("Gebe eine Gleitkommazahl ein \n");
                scanf("%f", &zahl2);
                printf("Gebe einen Buchstaben ein \n");
                scanf(" %c", & buchstabe);
                printf("Ihre Zahlen sind %d und %f und ihr Buchstabe ist %c \n", zahl1, zahl2, buchstabe);

                return 0;
        }
