typedef struct hashf hashf;

struct int_hashf{
    int_hash* (*create)();
    int (*key)(int, int);
    void (*insert)(int_hash*, int, int);
    int (*find)(int_hash*, int, int);
    int (*delete)(int_hash*, int, int);
};

struct int_hashf import_int_hashf = {
    create_hash,
    key,
    insert_hash,
    find_hash,
    pop_hash,
};