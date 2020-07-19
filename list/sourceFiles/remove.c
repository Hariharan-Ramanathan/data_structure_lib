int int_list_unshift(int_list* l)
{
    int res = 0;
    if ((l->head) == NULL)
    {
    }
    else if (l->head == l->tail)
    {
        res = (l->head)->data;
        (l->head) = NULL;
        (l->tail) = NULL;
        (l->count)--;
    }
    else
    {
        res = (l->head)->data;
        (l->head) = (l->head)->next;
        (l->count)--;
    } 
    return res;
}

double double_list_unshift(double_list* l)
{
    double res = 0;
    if ((l->head) == NULL)
    {
    }
    else if (l->head == l->tail)
    {
        res = (l->head)->data;
        (l->head) = NULL;
        (l->tail) = NULL;
        (l->count)--;
    }
    else
    {
        res = (l->head)->data;
        (l->head) = (l->head)->next;
        (l->count)--;
    } 
    return res;
}

float float_list_unshift(float_list* l)
{
    float res = 0;
    if ((l->head) == NULL)
    {
    }
    else if (l->head == l->tail)
    {
        res = (l->head)->data;
        (l->head) = NULL;
        (l->tail) = NULL;
        (l->count)--;
    }
    else
    {
        res = (l->head)->data;
        (l->head) = (l->head)->next;
        (l->count)--;
    } 
    return res;
}

char char_list_unshift(char_list* l)
{
    char res = 0;
    if ((l->head) == NULL)
    {
    }
    else if (l->head == l->tail)
    {
        res = (l->head)->data;
        (l->head) = NULL;
        (l->tail) = NULL;
        (l->count)--;
    }
    else
    {
        res = (l->head)->data;
        (l->head) = (l->head)->next;
        (l->count)--;
    } 
    return res;
}

char* string_list_unshift(string_list* l)
{
    char* res = 0;
    if ((l->head) == NULL)
    {
    }
    else if (l->head == l->tail)
    {
        res = (l->head)->data;
        (l->head) = NULL;
        (l->tail) = NULL;
        (l->count)--;
    }
    else
    {
        res = (l->head)->data;
        (l->head) = (l->head)->next;
        (l->count)--;
    } 
    return res;
}


