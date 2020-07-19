void int_dll_push(int_dll* l, int data)  { 
  int_dll_node* new_node = int_dll_new_node(data);
    
   if((l->head) == NULL)  {
    (l->head) = new_node;
    (l->tail) = (l->head);
   } 
   else if((l->head)->next == NULL)	{
     new_node->prev = l->head;
    (l->head)->next = new_node;
    (l->tail) = new_node;
   }
   else {
   	new_node->prev = l->tail;
   	(l->tail)->next = new_node;
   	(l->tail) = (l->tail)->next;
   }	 
   (l->count)++;
}

void double_dll_push(double_dll* l, double data)  { 
  double_dll_node* new_node = double_dll_new_node(data);
    
   if((l->head) == NULL)  {
    (l->head) = new_node;
    (l->tail) = (l->head);
   } 
   else if((l->head)->next == NULL)	{
     new_node->prev = l->head;
    (l->head)->next = new_node;
    (l->tail) = new_node;
   }
   else {
   	new_node->prev = l->tail;
   	(l->tail)->next = new_node;
   	(l->tail) = (l->tail)->next;
   }	 
   (l->count)++;
}

void float_dll_push(float_dll* l, float data)  { 
  float_dll_node* new_node = float_dll_new_node(data);
    
   if((l->head) == NULL)  {
    (l->head) = new_node;
    (l->tail) = (l->head);
   } 
   else if((l->head)->next == NULL)	{
     new_node->prev = l->head;
    (l->head)->next = new_node;
    (l->tail) = new_node;
   }
   else {
   	new_node->prev = l->tail;
   	(l->tail)->next = new_node;
   	(l->tail) = (l->tail)->next;
   }	 
   (l->count)++;
}

void char_dll_push(char_dll* l, char data)  { 
  char_dll_node* new_node = char_dll_new_node(data);
    
   if((l->head) == NULL)  {
    (l->head) = new_node;
    (l->tail) = (l->head);
   } 
   else if((l->head)->next == NULL)	{
     new_node->prev = l->head;
    (l->head)->next = new_node;
    (l->tail) = new_node;
   }
   else {
   	new_node->prev = l->tail;
   	(l->tail)->next = new_node;
   	(l->tail) = (l->tail)->next;
   }	 
   (l->count)++;
}

void string_dll_push(string_dll* l, char* data)  { 
  string_dll_node* new_node = string_dll_new_node(data);
    
   if((l->head) == NULL)  {
    (l->head) = new_node;
    (l->tail) = (l->head);
   } 
   else if((l->head)->next == NULL)	{
     new_node->prev = l->head;
    (l->head)->next = new_node;
    (l->tail) = new_node;
   }
   else {
   	new_node->prev = l->tail;
   	(l->tail)->next = new_node;
   	(l->tail) = (l->tail)->next;
   }	 
   (l->count)++;
}


