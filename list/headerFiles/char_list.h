typedef struct char_list_node char_list_node;
typedef struct char_list char_list;

char_list* create_char_list();
char_list_node* char_list_new_node(char data);
void char_list_print(char_list*);
void char_list_print_in_reverse(char_list*);
void char_list_print_in_reverve_recursive_part(char_list_node* head);
void char_list_push(char_list*, char data);
void char_list_shift(char_list*, char data);
char char_list_pop(char_list* tail);
char char_list_unshift(char_list*);
void char_list_reverse(char_list*);
void char_list_insert(char_list*, int,char);
int char_list_delete(char_list* ,int);
char char_list_data(char_list*, int);

struct char_list_node   {
    char data;
    char_list_node *next;
};

struct char_list {
    char_list_node* head;
    char_list_node* tail;
    int count;
};



