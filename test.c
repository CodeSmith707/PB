#include <stdio.h>
typedef struct node {
  int data;
  Node* next_node;
} Node;

Node* create_node(int);
void insert_node(Node*, int);
 
int main() {
  Node* head;
  head->next_node = NULL;
  int data_new_node = 5;
  insert_node(head, data_new_node);
  return 0;
}

Node* create_node(int data) {
  Node* new_node = (Node*)malloc(sizeof(Node));
  if (new_node == NULL) {
    return new_node;
  }
    
  new_node->data = data;
  new_node->next_node = NULL;
  return new_node;
}

void insert_node(Node* head, int data) {
  Node* temp_ptr = head;
  Node* new_node = create_node(data);

  if (head->next_node == NULL) {
    head->next_node = new_node;
  }
  else {
    while (temp_ptr != NULL){
      temp_ptr = temp_ptr->next_node;
    }
  }
  temp_ptr->next_node = new_node;
}