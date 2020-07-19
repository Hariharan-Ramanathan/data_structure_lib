int int_list_data(int_list* l,int n)    {
    if(n < l->count) {
        int_list_node *p = l->head;
        for (int i=0; i<n; i++)
        {
            p = p->next;
        }
        return p->data;
    }
    return -1;
}

double double_list_data(double_list* l,int n)    {
    if(n < l->count) {
        double_list_node *p = l->head;
        for (int i=0; i<n; i++)
        {
            p = p->next;
        }
        return p->data;
    }
    return -1;
}


float float_list_data(float_list* l,int n)    {
    if(n < l->count) {
        float_list_node *p = l->head;
        for (int i=0; i<n; i++)
        {
            p = p->next;
        }
        return p->data;
    }
    return -1;
}


char char_list_data(char_list* l,int n)    {
    if(n < l->count) {
        char_list_node *p = l->head;
        for (int i=0; i<n; i++)
        {
            p = p->next;
        }
        return p->data;
    }
    return -1;
}


char* string_list_data(string_list* l,int n)    {
    if(n < l->count) {
        string_list_node *p = l->head;
        for (int i=0; i<n; i++)
        {
            p = p->next;
        }
        return p->data;
    }
    return NULL;
}
