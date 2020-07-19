
void int_list_print(int_list* l)
{
    int_list_node *p = l->head;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}


void double_list_print(double_list* l)
{
    double_list_node *p = l->head;
    while (p != NULL)
    {
        printf("%lf ", p->data);
        p = p->next;
    }
    printf("\n");
}


void float_list_print(float_list* l)
{
    float_list_node *p = l->head;
    while (p != NULL)
    {
        printf("%f ", p->data);
        p = p->next;
    }
    printf("\n");
}


void char_list_print(char_list* l)
{
    char_list_node *p = l->head;
    while (p != NULL)
    {
        printf("%c ", p->data);
        p = p->next;
    }
    printf("\n");
}


void string_list_print(string_list* l)
{
    string_list_node *p = l->head;
    while (p != NULL)
    {
        printf("%s ", p->data);
        p = p->next;
    }
    printf("\n");
}


