
int int_list_pop(int_list* l)
{
    int res = 0;
    if (l->head == NULL)
    {
    }
    else if (l->head == l->tail)
    {
        res = (l->head)->data;
        (l->head) = NULL;
        (l->tail) = NULL;
        (l->count)--;
    }
    else if ((l->head)->next == (l->tail))
    {
        res = (l->tail)->data;
        (l->head)->next = NULL;
        (l->tail) = (l->head);
        (l->count)--;
    }
    else
    {
        res = (l->tail)->data;
        int_list_node *p = (l->head);
        while (p->next->next != NULL)
            p = p->next;
        (l->tail) = p;
        (l->tail)->next = NULL;
        (l->count)--;
    }
    return res;
}


double double_list_pop(double_list* l)
{
    double res = 0;
    if (l->head == NULL)
    {
    }
    else if (l->head == l->tail)
    {
        res = (l->head)->data;
        (l->head) = NULL;
        (l->tail) = NULL;
        (l->count)--;
    }
    else if ((l->head)->next == (l->tail))
    {
        res = (l->tail)->data;
        (l->head)->next = NULL;
        (l->tail) = (l->head);
        (l->count)--;
    }
    else
    {
        res = (l->tail)->data;
        double_list_node *p = (l->head);
        while (p->next->next != NULL)
            p = p->next;
        (l->tail) = p;
        (l->tail)->next = NULL;
        (l->count)--;
    }
    return res;
}


float float_list_pop(float_list* l)
{
    float res = 0;
    if (l->head == NULL)
    {
    }
    else if (l->head == l->tail)
    {
        res = (l->head)->data;
        (l->head) = NULL;
        (l->tail) = NULL;
        (l->count)--;
    }
    else if ((l->head)->next == (l->tail))
    {
        res = (l->tail)->data;
        (l->head)->next = NULL;
        (l->tail) = (l->head);
        (l->count)--;
    }
    else
    {
        res = (l->tail)->data;
        float_list_node *p = (l->head);
        while (p->next->next != NULL)
            p = p->next;
        (l->tail) = p;
        (l->tail)->next = NULL;
        (l->count)--;
    }
    return res;
}


char char_list_pop(char_list* l)
{
    char res = 0;
    if (l->head == NULL)
    {
    }
    else if (l->head == l->tail)
    {
        res = (l->head)->data;
        (l->head) = NULL;
        (l->tail) = NULL;
        (l->count)--;
    }
    else if ((l->head)->next == (l->tail))
    {
        res = (l->tail)->data;
        (l->head)->next = NULL;
        (l->tail) = (l->head);
        (l->count)--;
    }
    else
    {
        res = (l->tail)->data;
        char_list_node *p = (l->head);
        while (p->next->next != NULL)
            p = p->next;
        (l->tail) = p;
        (l->tail)->next = NULL;
        (l->count)--;
    }
    return res;
}


char* string_list_pop(string_list* l)
{
    char* res = 0;
    if (l->head == NULL)
    {
    }
    else if (l->head == l->tail)
    {
        res = (l->head)->data;
        (l->head) = NULL;
        (l->tail) = NULL;
        (l->count)--;
    }
    else if ((l->head)->next == (l->tail))
    {
        res = (l->tail)->data;
        (l->head)->next = NULL;
        (l->tail) = (l->head);
        (l->count)--;
    }
    else
    {
        res = (l->tail)->data;
        string_list_node *p = (l->head);
        while (p->next->next != NULL)
            p = p->next;
        (l->tail) = p;
        (l->tail)->next = NULL;
        (l->count)--;
    }
    return res;
}


