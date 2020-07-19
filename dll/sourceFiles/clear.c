void int_dll_clear(int_dll* l) 
{ 
   int_dll_node* current = l->head; 
   int_dll_node* next; 
  
   while (current != NULL)  
   { 
       next = current->next; 
       (l->count)--;
       free(current); 
       current = next; 
       
   } 
   (l->count)--;
    l->head = NULL; 
}
void double_dll_clear(double_dll* l) 
{ 
   double_dll_node* current = l->head; 
   double_dll_node* next; 
  
   while (current != NULL)  
   { 
       next = current->next; 
       (l->count)--;
       free(current); 
       current = next; 
   } 
     (l->count)--;
   l->head = NULL; 
}

void float_dll_clear(float_dll* l) 
{ 
   float_dll_node* current = l->head; 
   float_dll_node* next; 
  
   while (current != NULL)  
   { 
       next = current->next; 
    (l->count)--;
       free(current); 
       current = next; 
   } 
    (l->count)--;
   l->head = NULL; 
}

void char_dll_clear(char_dll* l) 
{ 
   char_dll_node* current = l->head; 
   char_dll_node* next; 
  
   while (current != NULL)  
   { 
       next = current->next; 
   (l->count)--;
       free(current); 
       current = next; 
   } 
   (l->count)--;
    l->head = NULL; 
}

void string_dll_clear(string_dll* l) 
{ 
   string_dll_node* current = l->head; 
   string_dll_node* next; 
  
   while (current != NULL)  
   { 
       next = current->next; 
	  (l->count)--;
       free(current); 
       current = next; 
   } 
  (l->count)--;
  l->head = NULL; 
}



