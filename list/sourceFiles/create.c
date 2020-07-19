
int_list* create_int_list() {
    int_list* l = malloc(sizeof(int_list));
    l->head = NULL;
    l->tail = NULL;
    l->count = 0;
    return l;
}


double_list* create_double_list() {
    double_list* l = malloc(sizeof(double_list));
    l->head = NULL;
    l->tail = NULL;
    l->count = 0;
    return l;
}


float_list* create_float_list() {
    float_list* l = malloc(sizeof(float_list));
    l->head = NULL;
    l->tail = NULL;
    l->count = 0;
    return l;
}


char_list* create_char_list() {
    char_list* l = malloc(sizeof(char_list));
    l->head = NULL;
    l->tail = NULL;
    l->count = 0;
    return l;
}


string_list* create_string_list() {
    string_list* l = malloc(sizeof(string_list));
    l->head = NULL;
    l->tail = NULL;
    l->count = 0;
    return l;
}


