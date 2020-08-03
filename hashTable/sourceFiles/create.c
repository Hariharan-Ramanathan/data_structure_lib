int_hash* create_hash(int n){
    int_hash* temp = malloc(n * sizeof(int_hash));
    for(int i=0; i<n; i++){
        temp[i].list = create_int_list();
    }
    return temp;
}