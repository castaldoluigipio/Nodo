# include  <stdio.h>
# include  "nodo.h"


int  main ()
{
    Nodo * head = NULL ;

    
	stampa(head);

    
    Nodo n1;
    n1.v = 4;
    n1.next = NULL;
    head = &n1;
   

    
    stampa(head);

    
    Nodo n2;
    n2.v = 6;
    n2.next = NULL;
    n2.next = head;
    head = &n2;
    
    stampa(head);

    Nodo n3;
    n3.v = 12;
    n3.next = NULL;
    n3.next = head;
    head = &n3;
    
    stampa(head);
    
    Nodo n4;
    n4.v = 5;
    n4.next = NULL;
    n4.next = head;
    head = &n4;
    
    stampa(head);
    
    
    return 0 ;
}


void  stampa (Nodo * head)
{
    Nodo * temp;

    temp = head;
    if(temp != NULL){
	while (temp != NULL) {
        printf ("%d \n" , temp->v);
        temp = temp-> next ;
    }
	}else{
		printf("NULL \n");
	}
    printf ("\n");
}
