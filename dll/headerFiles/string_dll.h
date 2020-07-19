typedef struct string_dll_node string_dll_node;
typedef struct string_dll string_dll;

string_dll* create_string_dll();
string_dll_node* string_dll_new_node(char*);
void string_dll_print(string_dll*);
void string_dll_print_in_reverse(string_dll*);
void string_dll_print_in_reverve_recursive_part(string_dll_node* head);
void string_dll_push(string_dll*, char* data);
void string_dll_shift(string_dll*, char* data);
char* string_dll_pop(string_dll* tail);
char* string_dll_unshift(string_dll*);
void string_dll_reverse(string_dll*);
void string_dll_insert(string_dll*, int,char*);
char* string_dll_delete(string_dll*,int);

struct string_dll_node {
 char* data;
 string_dll_node *next;
 string_dll_node *prev;

};
struct string_dll{
	string_dll_node* head;
	string_dll_node* tail;
	int count;
};
