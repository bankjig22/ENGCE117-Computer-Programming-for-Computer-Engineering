// 65543206084-7 นาย สุขสันต์ คำยา sec 1
// yt = https://youtu.be/QZ75PGoU7PQ

#include<stdio.h>
#include<stdlib.h>

typedef struct NODE {
    int value ;
    struct NODE *link ;
}NODE ;

void AddNode( NODE **start, int value) ;
void ShowAll(NODE *start) ;
void Update(NODE **start, int value, int Newvalue) ;
void Showback(NODE *start);
void Swap(NODE **start, int value, int value2) ;

int main() {
    NODE *start = NULL ;
    AddNode( &start, 10);
    AddNode( &start, 20);
    AddNode( &start, 30);
    AddNode( &start, 40);
    ShowAll(start) ; //10, 20, 30, 40

    /*
    Update(&start, 10, 99);
    ShowAll(start);
    Update(&start, 10, 98);
    ShowAll(start) ;
    */
   
   /*
   Showback(start) ; //40, 30, 20, 10
   */

   /*
   Swap(&start, 20, 30) ;
   ShowAll(start) ; //10, 30, 20, 40
   Swap(&start, 40, 10) ;
   ShowAll(start) ; // 40, 30 ,20 ,10
   */

    return 0 ;
}

void AddNode(NODE **start , int value) {
    NODE *newnode = NULL, *lastnode = NULL ;
    newnode = (NODE * )malloc(sizeof(NODE)) ;
    newnode->value = value ;
    newnode->link = NULL ;
    if (*start == NULL){
        *start = newnode ;
    }else {
        lastnode = *start ;
        while (lastnode->link != NULL) {
            lastnode = lastnode->link ;
        }
        lastnode->link = newnode ;
    }
}

void ShowAll (NODE *start) {
    while (start != NULL){
        printf("%d ",start->value);
        start = start->link ;
    }
    printf("\n");
}

void Update(NODE **start, int value, int Newvalue) {
    NODE *newnode = *start ;
    while (newnode != NULL && newnode->value != value) {
        newnode = newnode->link ;
    }
    if (newnode != NULL) {
        newnode->value = Newvalue ;
    } 
    
}

void Showback (NODE *start) {
    NODE *temp = NULL, *prev = NULL ;
    NODE *curr = start ;
    while(curr != NULL) {
        temp = curr->link ;
        curr->link = prev ;
        prev = curr ;
        curr = temp ; 
    }
    start = prev ;
    ShowAll(start) ;
}

void Swap( NODE **start , int value , int value2) {
   if ( value == value2 )
      return ;
 
   NODE *prevX ,*currX ;
   prevX = NULL ;
   currX = *start ;
   while ( currX && currX->value != value ) {
      prevX = currX;
      currX = currX->link;
   }
 
   NODE *prevY ,*currY ;
   prevY = NULL ;
   currY = *start ;
   while ( currY && currY->value != value2 ) {
      prevY = currY ;
      currY = currY->link ;
   }
 
   if ( currX == NULL || currY == NULL )
      return ;
 
   if ( prevX != NULL ) {
      prevX->link = currY ;
   }else {
      *start = currY ;
   }
      
   if ( prevY != NULL ) {
      prevY->link = currX ;
   }else {
      *start = currX ;
   }

   NODE *temp = currY->link ;
   currY->link = currX->link ;
   currX->link = temp ;
}// end function Swap