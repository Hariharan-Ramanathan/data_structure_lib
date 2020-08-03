typedef struct int_hash int_hash;

int_hash* create_hash(int);
int key(int, int);
void insert_hash(int_hash* , int, int);
int find_hash(int_hash*, int, int);
int pop_hash(int_hash*, int, int);

struct int_hash{
        int_list* list;
};
