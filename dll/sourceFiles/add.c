void int_dll_shift(int_dll* l, int data)  {
   if((l->head) == NULL)  {
    (l->head) = int_dll_new_node(data);
    (l->tail) = (l->head);
	} 
   else  {
    int_dll_node* p = int_dll_new_node(data);
    p->next = (l->head);
    (l->head) = p;
    }
	(l->count)++;	
}
void double_dll_shift(double_dll* l, double data)  {
   if((l->head) == NULL)  {
    (l->head) = double_dll_new_node(data);
    (l->tail) = (l->head);
	} 
   else  {
    double_dll_node* p = double_dll_new_node(data);
    p->next = (l->head);
    (l->head) = p;
    }
(l->count)++;
}
void float_dll_shift(float_dll* l, float data)  {
   if((l->head) == NULL)  {
    (l->head) = float_dll_new_node(data);
    (l->tail) = (l->head);
	} 
   else  {
    float_dll_node* p = float_dll_new_node(data);
    p->next = (l->head);
    (l->head) = p;
    }(l->count)++;
}
void char_dll_shift(char_dll* l, char data)  {
   if((l->head) == NULL)  {
    (l->head) = char_dll_new_node(data);
    (l->tail) = (l->head);
	} 
   else  {
    char_dll_node* p = char_dll_new_node(data);
    p->next = (l->head);
    (l->head) = p;
    }(l->count)++;
}
void string_dll_shift(string_dll* l, char* data)  {
   if((l->head) == NULL)  {
    (l->head) = string_dll_new_node(data);
    (l->tail) = (l->head);
	} 
   else  {
    string_dll_node* p = string_dll_new_node(data);
    p->next = (l->head);
    (l->head) = p;
    }(l->count)++;
}





