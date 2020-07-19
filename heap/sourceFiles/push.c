void double_heap_push(double_heap* h, double data)  {
  h->heap[(*(h->count))++] = data;
  double_heap_up(h, (*h->count)-1);
}

void int_heap_push(int_heap* h, int data)  {
  h->heap[(*(h->count))++] = data;
  int_heap_up(h, (*h->count)-1);
}

void float_heap_push(float_heap* h, float data)  {
  h->heap[(*(h->count))++] = data;
  float_heap_up(h, (*h->count)-1);
}

void char_heap_push(char_heap* h, char data)  {
  h->heap[(*(h->count))++] = data;
  char_heap_up(h, (*h->count)-1);
}
