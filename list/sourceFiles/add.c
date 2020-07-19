void int_list_shift(int_list* l, int data)
{
    if ((l->head) == NULL)
    {
        (l->head) = int_list_new_node(data);
        (l->tail) = (l->head);
    }
    else
    {
        int_list_node *p = int_list_new_node(data);
        p->next = (l->head);
        (l->head) = p;
    }
    (l->count)++;
}
void double_list_shift(double_list* l, double data)
{
    if ((l->head) == NULL)
    {
        (l->head) = double_list_new_node(data);
        (l->tail) = (l->head);
    }
    else
    {
        double_list_node *p = double_list_new_node(data);
        p->next = (l->head);
        (l->head) = p;
    }
    (l->count)++;
}

void float_list_shift(float_list* l, float data)
{
    if ((l->head) == NULL)
    {
        (l->head) = float_list_new_node(data);
        (l->tail) = (l->head);
    }
    else
    {
        float_list_node *p = float_list_new_node(data);
        p->next = (l->head);
        (l->head) = p;
    }
    (l->count)++;
}

void char_list_shift(char_list* l, char data)
{
    if ((l->head) == NULL)
    {
        (l->head) = char_list_new_node(data);
        (l->tail) = (l->head);
    }
    else
    {
        char_list_node *p = char_list_new_node(data);
        p->next = (l->head);
        (l->head) = p;
    }
    (l->count)++;
}

void string_list_shift(string_list* l, char* data)
{
    if ((l->head) == NULL)
    {
        (l->head) = string_list_new_node(data);
        (l->tail) = (l->head);
    }
    else
    {
        string_list_node *p = string_list_new_node(data);
        p->next = (l->head);
        (l->head) = p;
    }
    (l->count)++;
}

