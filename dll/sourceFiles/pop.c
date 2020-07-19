
int int_dll_pop(int_dll* l)  {
	int res = 0;
	if(l->head == NULL) {
	return -1;
	}
	else if(l->head == l->tail)	{
		res = (l->head)->data;
		(l->head) = NULL;
		(l->tail) = NULL;
	(l->count)--;
}
	else if((l->head)->next == (l->tail))  {
		res = (l->tail)->data;
		(l->head)->next = NULL;	
		(l->tail) = (l->tail)->prev;
		(l->tail)->next = NULL;
	(l->count)--;
}
	else	{
		res = (l->tail)->data;
		(l->tail) = (l->tail)->prev;
		(l->tail)->next = NULL;
	(l->count)--;
	
	}
		return res;
}	

double double_dll_pop(double_dll* l)  {
	double res = 0;
	if(l->head == NULL) {
	return -1;
	}
	else if(l->head == l->tail)	{
		res = (l->head)->data;
		(l->head) = NULL;
		(l->tail) = NULL;
	(l->count)--;
}
	else if((l->head)->next == (l->tail))  {
		res = (l->tail)->data;
		(l->head)->next = NULL;	
		(l->tail) = (l->tail)->prev;
		(l->tail)->next = NULL;
	(l->count)--;
}
	else	{
		res = (l->tail)->data;
		(l->tail) = (l->tail)->prev;
		(l->tail)->next = NULL;
		(l->count)--;

	}
	return res;
}	

float float_dll_pop(float_dll* l)  {
	float res = 0;
	if(l->head == NULL) {
	return -1;
	}
	else if(l->head == l->tail)	{
		res = (l->head)->data;
		(l->head) = NULL;
		(l->tail) = NULL;
	(l->count)--;
}
	else if((l->head)->next == (l->tail))  {
		res = (l->tail)->data;
		(l->head)->next = NULL;	
		(l->tail) = (l->tail)->prev;
		(l->tail)->next = NULL;
	(l->count)--;
}
	else	{
		res = (l->tail)->data;
		(l->tail) = (l->tail)->prev;
		(l->tail)->next = NULL;
		(l->count)--;

	}
	return res;
}	

char char_dll_pop(char_dll* l)  {
	char res = 0;
	if(l->head == NULL) {
	return -1;
	}
	else if(l->head == l->tail)	{
		res = (l->head)->data;
		(l->head) = NULL;
		(l->tail) = NULL;
	(l->count)--;
}
	else if((l->head)->next == (l->tail))  {
		res = (l->tail)->data;
		(l->head)->next = NULL;	
		(l->tail) = (l->tail)->prev;
		(l->tail)->next = NULL;
	(l->count)--;
}
	else	{
		res = (l->tail)->data;
		(l->tail) = (l->tail)->prev;
		(l->tail)->next = NULL;
		(l->count)--;

	}
	return res;
}	

char* string_dll_pop(string_dll* l)  {
	char* res = 0;
	if(l->head == NULL) {

	}
	else if(l->head == l->tail)	{
		res = (l->head)->data;
		(l->head) = NULL;
		(l->tail) = NULL;
	(l->count)--;
}
	else if((l->head)->next == (l->tail))  {
		res = (l->tail)->data;
		(l->head)->next = NULL;	
		(l->tail) = (l->tail)->prev;
		(l->tail)->next = NULL;
	(l->count)--;
}
	else	{
		res = (l->tail)->data;
		(l->tail) = (l->tail)->prev;
		(l->tail)->next = NULL;
		(l->count)--;

	}
	return res;
}	

