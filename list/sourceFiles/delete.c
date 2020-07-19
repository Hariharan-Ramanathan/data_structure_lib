
int int_list_delete(int_list* l, int p)
{
    int_list_node *temp = l->head;
    int count = 1;
    if (p == 1)
        int_list_unshift(l);
    else
    {
        while (count != p - 1)
        {
            temp = temp->next;
            count++;
        }
    }
    temp->next = temp->next->next;
    (l->count)--;
    return p;
}
int double_list_delete(double_list* l, int p)
{
    double_list_node *temp = l->head;
    int count = 1;
    if (p == 1)
        double_list_unshift(l);
    else
    {
        while (count != p - 1)
        {
            temp = temp->next;
            count++;
        }
    }
    temp->next = temp->next->next;
    (l->count)--;
    return p;
}
int float_list_delete(float_list* l, int p)
{
    float_list_node *temp = l->head;
    int count = 1;
    if (p == 1)
        float_list_unshift(l);
    else
    {
        while (count != p - 1)
        {
            temp = temp->next;
            count++;
        }
    }
    temp->next = temp->next->next;
    (l->count)--;
    return p;
}
int char_list_delete(char_list* l, int p)
{
    char_list_node *temp = l->head;
    int count = 1;
    if (p == 1)
        char_list_unshift(l);
    else
    {
        while (count != p - 1)
        {
            temp = temp->next;
            count++;
        }
    }
    temp->next = temp->next->next;
    (l->count)--;
    return p;
}
int string_list_delete(string_list* l, int p)
{
    string_list_node *temp = l->head;
    int count = 1;
    if (p == 1)
        string_list_unshift(l);
    else
    {
        while (count != p - 1)
        {
            temp = temp->next;
            count++;
        }
    }
    temp->next = temp->next->next;
    (l->count)--;
    return p;
}
