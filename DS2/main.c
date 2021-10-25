#include <stdio.h>
#include <stdlib.h>
#include<malloc.h>


struct lista *l1=NULL, *l2=NULL, *l3=NULL;
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
//4,8,17
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


//17
struct lista* suma_2(struct lista *l1, struct lista *l2)
{
 struct lista  *aux1, *aux2, *aux3;
 aux1=l1;
 aux2=l2;
 while(aux1 && aux2)
 {

     aux3=(struct lista *)malloc(sizeof(struct lista));
       aux3->k= aux2->k+aux1->k;
       aux3->next = l3;
       l3=  aux3;
       aux1=aux1->next;
       aux2=aux2->next;
      printf("%d", aux1->k);


 }
    while(aux1)
    {
        aux3=(struct lista *)malloc(sizeof(struct lista));
        aux3->k = aux1->k;
        aux3->next = l3;
        l3 = aux3;
        aux1=aux1->next;
    }

    while(aux2)
    {
        aux3=(struct lista *)malloc(sizeof(struct lista));
        aux3->k = aux2->k;
        aux3->next = l3;
        l3 = aux3;
        aux2=aux2->next;
    }


    return l3;

}



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


	l1=init_l();
	 tipar(l1);
	l2=init_l();
	 tipar(l2);
	l3=suma_2(l1,l2);
	tipar(l3);


    return 0;
}
