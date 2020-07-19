int_dll_node* int_dll_new_node(int data)  { 
 int_dll_node* temp = malloc(sizeof(int_dll_node));
 temp->data = data;
 temp->prev = NULL;
 temp->next = NULL;
 return temp;
}

double_dll_node* double_dll_new_node(double data)  { 
 double_dll_node* temp = malloc(sizeof(double_dll_node));
 temp->data = data;
 temp->prev = NULL;
 temp->next = NULL;
 return temp;
}

float_dll_node* float_dll_new_node(float data)  { 
 float_dll_node* temp = malloc(sizeof(float_dll_node));
 temp->data = data;
 temp->prev = NULL;
 temp->next = NULL;
 return temp;
}

char_dll_node* char_dll_new_node(char data)  { 
 char_dll_node* temp = malloc(sizeof(char_dll_node));
 temp->data = data;
 temp->prev = NULL;
 temp->next = NULL;
 return temp;
}

string_dll_node* string_dll_new_node(char* data)  { 
 string_dll_node* temp = malloc(sizeof(string_dll_node));
 temp->data = data;
 temp->prev = NULL;
 temp->next = NULL;
 return temp;
}


