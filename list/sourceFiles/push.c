void int_list_push(int_list* l, int data)
{
    int_list_node *new_node = int_list_new_node(data);

    if ((l->head) == NULL)
    {
        (l->head) = new_node;
        (l->tail) = (l->head);
    }
    else if ((l->head)->next == NULL)
    {
        (l->head)->next = new_node;
        (l->tail)->next = (l->head)->next;
        (l->tail) = (l->tail)->next;
    }
    else
    {
        (l->tail)->next = new_node;
        (l->tail) = (l->tail)->next;
    }
    (l->count)++;
}

void double_list_push(double_list* l, double data)
{
    double_list_node *new_node = double_list_new_node(data);

    if ((l->head) == NULL)
    {
        (l->head) = new_node;
        (l->tail) = (l->head);
    }
    else if ((l->head)->next == NULL)
    {
        (l->head)->next = new_node;
        (l->tail)->next = (l->head)->next;
        (l->tail) = (l->tail)->next;
    }
    else
    {
        (l->tail)->next = new_node;
        (l->tail) = (l->tail)->next;
    }
    (l->count)++;
}

void float_list_push(float_list* l, float data)
{
    float_list_node *new_node = float_list_new_node(data);

    if ((l->head) == NULL)
    {
        (l->head) = new_node;
        (l->tail) = (l->head);
    }
    else if ((l->head)->next == NULL)
    {
        (l->head)->next = new_node;
        (l->tail)->next = (l->head)->next;
        (l->tail) = (l->tail)->next;
    }
    else
    {
        (l->tail)->next = new_node;
        (l->tail) = (l->tail)->next;
    }
    (l->count)++;
}

void char_list_push(char_list* l, char data)
{
    char_list_node *new_node = char_list_new_node(data);

    if ((l->head) == NULL)
    {
        (l->head) = new_node;
        (l->tail) = (l->head);
    }
    else if ((l->head)->next == NULL)
    {
        (l->head)->next = new_node;
        (l->tail)->next = (l->head)->next;
        (l->tail) = (l->tail)->next;
    }
    else
    {
        (l->tail)->next = new_node;
        (l->tail) = (l->tail)->next;
    }
    (l->count)++;
}

void string_list_push(string_list* l, char* data)
{
    string_list_node *new_node = string_list_new_node(data);

    if ((l->head) == NULL)
    {
        (l->head) = new_node;
        (l->tail) = (l->head);
    }
    else if ((l->head)->next == NULL)
    {
        (l->head)->next = new_node;
        (l->tail)->next = (l->head)->next;
        (l->tail) = (l->tail)->next;
    }
    else
    {
        (l->tail)->next = new_node;
        (l->tail) = (l->tail)->next;
    }
    (l->count)++;
}






