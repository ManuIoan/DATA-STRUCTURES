#include <stdio.h>
#include <stdlib.h>

//The struct that define the linked list
struct lista{
int k;
struct lista* next;


};

// Writing the linked list
struct lista* init_l()
{
    struct lista *l = NULL;
    char c1,c2;
    printf("Start?");
    scanf("%c", &c1);
    c2= getchar();



    while(c1=='y'|| c1=='Y'){
        struct lista *aux;
        aux=(struct lista *)malloc(sizeof(struct lista));

        printf("k=");

        scanf("%d", &aux->k);
        c2=getchar();
        aux->next =l;
        l = aux;

        printf("Continue?");
        scanf("%c", &c1);
        c2=getchar();


    }






 return l;
}

//Reading the linked list
void tipar(struct lista *l)
{
	struct lista *p;
	for(p=l;p;p=p->next)
		printf("%d->",p->k);
	printf("NULL\n");
}

//exercise 1

//Eliminating the positive numbers from a linked list

void els(struct lista *l)
{
    struct lista* aux=l;
    while(aux)
    {
        if(aux->k>0)
        {
            aux->k=NULL;


        }
        aux=aux->next;

    }
    l=aux;



}

int main()
{
    struct lista *l;

	l=init_l();
	els(l);
    tipar(l);
    printf("This");
    return 0;
}
