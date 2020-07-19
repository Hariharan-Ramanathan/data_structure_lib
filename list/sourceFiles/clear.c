void int_list_clear(int_list* l) 
{ 
   int_list_node* current = l->head; 
   int_list_node* next; 
  
   while (current != NULL)  
   { 
       next = current->next; 
       free(current); 
       current = next; 
   } 
    l->head = NULL; 
}

void double_list_clear(double_list* l) 
{ 
   double_list_node* current = l->head; 
   double_list_node* next; 
  
   while (current != NULL)  
   { 
       next = current->next; 
       free(current); 
       current = next; 
   } 
    l->head = NULL; 
}


void float_list_clear(float_list* l) 
{ 
   float_list_node* current = l->head; 
   float_list_node* next; 
  
   while (current != NULL)  
   { 
       next = current->next; 
       free(current); 
       current = next; 
   } 
    l->head = NULL; 
}


void char_list_clear(char_list* l) 
{ 
   char_list_node* current = l->head; 
   char_list_node* next; 
  
   while (current != NULL)  
   { 
       next = current->next; 
       free(current); 
       current = next; 
   } 
    l->head = NULL; 
}


void string_list_clear(string_list* l) 
{ 
   string_list_node* current = l->head; 
   string_list_node* next; 
  
   while (current != NULL)  
   { 
       next = current->next; 
       free(current); 
       current = next; 
   } 
    l->head = NULL; 
}



