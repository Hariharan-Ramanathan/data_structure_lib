typedef struct char_dll_node char_dll_node;
typedef struct char_dll char_dll;

char_dll* create_char_dll();
char_dll_node* char_dll_new_node(char);
void char_dll_print(char_dll*);
void char_dll_print_in_reverse(char_dll*);
void char_dll_print_in_reverve_recursive_part(char_dll_node* head);
void char_dll_push(char_dll*, char data);
void char_dll_shift(char_dll*, char data);
char char_dll_pop(char_dll* tail);
char char_dll_unshift(char_dll*);
void char_dll_reverse(char_dll*);
void char_dll_insert(char_dll*, int,char);
char char_dll_delete(char_dll*,int);

struct char_dll_node {
 char data;
 char_dll_node *next;
 char_dll_node *prev;

};
struct char_dll{
	char_dll_node* head;
	char_dll_node* tail;
	int count;
};
