void int_list_print_in_reverse(int_list* l)
{
    int_list_print_in_reverve_recursive_part(l->head);
}
void int_list_print_in_reverve_recursive_part(int_list_node* head)  {
    if (head == NULL)
        return;
    int_list_print_in_reverve_recursive_part(head->next);
    printf("%d  ", head->data);
}


void double_list_print_in_reverse(double_list* l)
{
    double_list_print_in_reverve_recursive_part(l->head);
}
void double_list_print_in_reverve_recursive_part(double_list_node* head)  {
    if (head == NULL)
        return;
    double_list_print_in_reverve_recursive_part(head->next);
    printf("%lf  ", head->data);
}


void float_list_print_in_reverse(float_list* l)
{
    float_list_print_in_reverve_recursive_part(l->head);
}

void float_list_print_in_reverve_recursive_part(float_list_node* head)  {
    if (head == NULL)
        return;
    float_list_print_in_reverve_recursive_part(head->next);
    printf("%f  ", head->data);
}

void char_list_print_in_reverse(char_list* l)
{
    char_list_print_in_reverve_recursive_part(l->head);
}

void char_list_print_in_reverve_recursive_part(char_list_node* head)  {
    if (head == NULL)
        return;
    char_list_print_in_reverve_recursive_part(head->next);
    printf("%c  ", head->data);
}


void string_list_print_in_reverse(string_list* l)
{
      	string_list_print_in_reverve_recursive_part(l->head);
}
void string_list_print_in_reverve_recursive_part(string_list_node* head)  {

    if (head == NULL)
        return;
    string_list_print_in_reverve_recursive_part(head->next);
    printf("%s  ", head->data);
}


