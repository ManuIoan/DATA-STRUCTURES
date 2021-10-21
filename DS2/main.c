#include <stdio.h>
#include <stdlib.h>


struct lista{
int k;
struct lista* next;


};

// Writing the linked list
struct lista* init_l()
{
    struct lista *l = NULL;
    char c1,c2;
    printf("Start:");
    scanf("%c", &c1);
    c2= getchar();



    while(c1=='d'|| c1=='D'){
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
void tipar(struct lista *l)
{
	struct lista *p;
	for(p=l;p;p=p->next)
		printf("%d->",p->k);
	printf("NULL\n");
}




int main()
{
    struct lista *l;

	l=init_l();
	printf("The list, already introduced is:");
    tipar(l);
    return 0;
}
