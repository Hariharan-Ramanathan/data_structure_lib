
void int_list_reverse(int_list* l)
{
    int_list_node *currn = (l->head);
    int_list_node *prevn = NULL;
    int_list_node *nextn = NULL;
    while (currn != NULL)
    {
        nextn = currn->next;
        currn->next = prevn;
        prevn = currn;
        currn = nextn;
    }
    (l->head) = prevn;
}


void double_list_reverse(double_list* l)
{
    double_list_node *currn = (l->head);
    double_list_node *prevn = NULL;
    double_list_node *nextn = NULL;
    while (currn != NULL)
    {
        nextn = currn->next;
        currn->next = prevn;
        prevn = currn;
        currn = nextn;
    }
    (l->head) = prevn;
}


void float_list_reverse(float_list* l)
{
    float_list_node *currn = (l->head);
    float_list_node *prevn = NULL;
    float_list_node *nextn = NULL;
    while (currn != NULL)
    {
        nextn = currn->next;
        currn->next = prevn;
        prevn = currn;
        currn = nextn;
    }
    (l->head) = prevn;
}


void char_list_reverse(char_list* l)
{
    char_list_node *currn = (l->head);
    char_list_node *prevn = NULL;
    char_list_node *nextn = NULL;
    while (currn != NULL)
    {
        nextn = currn->next;
        currn->next = prevn;
        prevn = currn;
        currn = nextn;
    }
    (l->head) = prevn;
}


void string_list_reverse(string_list* l)
{
    string_list_node *currn = (l->head);
    string_list_node *prevn = NULL;
    string_list_node *nextn = NULL;
    while (currn != NULL)
    {
        nextn = currn->next;
        currn->next = prevn;
        prevn = currn;
        currn = nextn;
    }
    (l->head) = prevn;
}


