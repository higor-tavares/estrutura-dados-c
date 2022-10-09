typedef struct{
    int *list;
    int size;
    int cap;
} Int_List;

Int_List list_i();
void push(Int_List *l, unsigned el);
int get_i(Int_List *l, unsigned index);
void clear(Int_List *l);
