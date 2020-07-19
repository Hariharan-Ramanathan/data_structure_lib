int_list_node *int_list_new_node(int data)
{
    int_list_node *temp = malloc(sizeof(int_list_node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

float_list_node *float_list_new_node(float data)
{
    float_list_node *temp = malloc(sizeof(float_list_node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

double_list_node *double_list_new_node(double data)
{
    double_list_node *temp = malloc(sizeof(double_list_node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

char_list_node *char_list_new_node(char data)
{
    char_list_node *temp = malloc(sizeof(char_list_node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

string_list_node *string_list_new_node(char* data)
{
    string_list_node *temp = malloc(sizeof(string_list_node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

