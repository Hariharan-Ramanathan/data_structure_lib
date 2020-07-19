typedef struct string_list_node string_list_node;
typedef struct string_list string_list;

string_list* create_string_list();
string_list_node* string_list_new_node(char* data);
void string_list_print(string_list*);
void string_list_print_in_reverse(string_list*);
void string_list_print_in_reverve_recursive_part(string_list_node* head);
void string_list_push(string_list*, char* data);
void string_list_shift(string_list*, char* data);
char* string_list_pop(string_list* tail);
char* string_list_unshift(string_list*);
void string_list_reverse(string_list*);
void string_list_insert(string_list*, int,char*);
int string_list_delete(string_list* ,int);
char* string_list_data(string_list*, int);

struct string_list_node   {
    char* data;
    string_list_node *next;
};

struct string_list {
    string_list_node* head;
    string_list_node* tail;
    int count;
};


