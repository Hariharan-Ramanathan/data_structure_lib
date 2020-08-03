void insert_hash(int_hash* s, int data, int n){
    int i = key(data, n);
    int_list_push(s[i].list, data);
}