//C program to implement linked list

    #include <stdio.h>
    #include <stdlib.h>
     
    struct node {
       int data;
       struct node *link;
    };
     
    struct node *ptr = NULL;
    int count = 0;
    void insert_at_begin(int x) {
       struct node *head;
       
       head= (struct node*)malloc(sizeof(struct node));
       count++;
         
       if (ptr== NULL) {
          ptr= head;
          ptr->data = x;
          ptr->link = NULL;
          return;
       }
       
       head->data = x;
       head->link = ptr;
       ptr = head;
    }
     
    void insert_at_end(int x) {
       struct node *head, *temp;
       
       head= (struct node*)malloc(sizeof(struct node));
       count++;
       
       if (ptr == NULL) {
          ptr = head;
          ptr->data = x;
          ptr->link = NULL;
          return;
       }
       
       temp = ptr;
       
       while (temp->link != NULL)
          temp = temp->link;  
       
       temp->link = head;
       head->data    = x;
       head->link    = NULL;
    }
     
    void traverse() {
       struct node *head;
       
       head = ptr;
       
       if (head == NULL) {
          printf("Linked list is empty.\n");
          return;
       }
       
       printf("There are %d elements in linked list.\n", count);
       
       while (head->link != NULL) {
          printf("%d\n", head->data);
          head = head->link;
       }
       printf("%d\n", head->data);
    }
     
    void delete_from_begin() {
       struct node *head;
       int n;
       
       if (ptr == NULL) {
          printf("Linked list is already empty.\n");
          return;
       }
       
       n = ptr->data;
       head = ptr->link;
       free(ptr);
       ptr = head;
       count--;
       
       printf("%d deleted from beginning successfully.\n", n);
    }
     
    void delete_from_end() {
       struct node *head, *u;
       int n;
         
       if (ptr == NULL) {
          printf("Linked list is already empty.\n");
          return;
       }
       
       count--;
       
       if (ptr->link == NULL) {
          n = ptr->data;
          free(ptr);
          ptr= NULL;
          printf("%d deleted from end successfully.\n", n);
          return;
       }
       
       head = ptr;
       
       while (head->link != NULL) {
          u = head;
          head = head->link;
       }
       
       n = head->data;
       u->link = NULL;
       free(head);
       
       printf("%d deleted from end successfully.\n", n);
    }

	void ins_mid(int v1,int v2)
{
	struct node *temp,*temp1;
       temp1=ptr->link;
       count++;
       while(ptr->data!=v2)
	ptr=ptr->link;
       if(ptr->data==v2)
{
	ptr->link=temp;
	temp->data=v1;
	temp->link=temp1;
     }
}
    int main () {
       int input, data,v1,v2;
       
       for (;;) {
          printf("1. Insert an element at beginning of linked list.\n");
          printf("2. Insert an element at end of linked list.\n");
          printf("3. Traverse linked list.\n");
          printf("4. Delete element from beginning.\n");
          printf("5. Delete element from end.\n");
	  printf("6. Insertion at an intermediate pos");
          printf("7. Exit\n");
         
          scanf("%d", &input);
         switch(input)
{
          case 1:
             printf("Enter value of element\n");
             scanf("%d", &data);
             insert_at_begin(data);
	     break;
          case 2:
             printf("Enter value of element\n");
             scanf("%d", &data);
             insert_at_end(data);
          break;
          case 3:
             traverse();
	     break;
          case 4:
             delete_from_begin();
          break;  
          case 5:
             delete_from_end();
	     break;
	  case 6:
		printf("Enter the value and the number after which the value is to be inserted");
		scanf("%d",&v1);
		scanf("%d",&v2);
		ins_mid(v1,v2);
		break;
          case 7:
		exit(0);
             break;
          default:
             printf("Please enter valid input.\n"); 
}     
printf("%d",count);
       }
       
       return 0;
    }
