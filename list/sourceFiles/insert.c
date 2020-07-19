
void int_list_insert(int_list* l, int p, int n)
{
    int_list_node *temp = l->head;
    int_list_node *new_node = int_list_new_node(n);
    int count = 0;
    if(p==1)
	    int_list_shift(l,n);
    else{
    while (count != p - 2)
    {
        temp = temp->next;
        count++;
    }
    new_node->next = temp->next;
    temp->next = new_node;
    (l->count)++;
    new_node->data;
}
}

void double_list_insert(double_list* l, int p, double n)
{
    double_list_node *temp = l->head;
    double_list_node *new_node = double_list_new_node(n);
    int count = 0;
  if(p==1)
	  double_list_shift(l,n);
  else{
    while (count != p - 2)
    {
        temp = temp->next;
        count++;
    }
    new_node->next = temp->next;
    temp->next = new_node;
    (l->count)++;
    new_node->data;
}
}

void float_list_insert(float_list* l, int p, float n)
{
    float_list_node *temp = l->head;
    float_list_node *new_node = float_list_new_node(n);
    int count = 0;
    if(p==1)
	    float_list_shift(l,n);
    else{
    while (count != p - 2)
    {
        temp = temp->next;
        count++;
    }
    new_node->next = temp->next;
    temp->next = new_node;
    (l->count)++;
    new_node->data;
}
}

void char_list_insert(char_list* l, int p, char n)
{
    char_list_node *temp = l->head;
    char_list_node *new_node = char_list_new_node(n);
    int count = 0;
    if(p==1)
	    char_list_shift(l,n);
    else{
    while (count != p - 2)
    {
        temp = temp->next;
        count++;
    }
    new_node->next = temp->next;
    temp->next = new_node;
    (l->count)++;
    new_node->data;
}
}

void string_list_insert(string_list* l, int p, char* n)
{
    string_list_node *temp = l->head;
    string_list_node *new_node = string_list_new_node(n);
    int count = 0;
    if(p==1)
	    string_list_shift(l,n);
    else{
    while (count != p - 2)
    {
        temp = temp->next;
        count++;
    }
    new_node->next = temp->next;
    temp->next = new_node;
    (l->count)++;
    new_node->data;
}
}
