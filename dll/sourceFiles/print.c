void int_dll_print(int_dll* l)  { 
 int_dll_node* p = l->head;
 while(p!=NULL)  {
  printf("%d  ",p->data);
  p = p->next;
  }
  printf("\n");
}
void double_dll_print(double_dll* l)  { 
 double_dll_node* p = l->head;
 while(p!=NULL)  {
  printf("%lf  ",p->data);
  p = p->next;
  }
  printf("\n");
}
void float_dll_print(float_dll* l)  { 
 float_dll_node* p = l->head;
 while(p!=NULL)  {
  printf("%f  ",p->data);
  p = p->next;
  }
  printf("\n");
}
void char_dll_print(char_dll* l)  { 
 char_dll_node* p = l->head;
 while(p!=NULL)  {
  printf("%c  ",p->data);
  p = p->next;
  }
  printf("\n");
}
void string_dll_print(string_dll* l)  { 
 string_dll_node* p = l->head;
 while(p!=NULL)  {
  printf("%s  ",p->data);
  p = p->next;
  }
  printf("\n");
}
 
