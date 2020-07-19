int int_dll_unshift(int_dll* l)	{
	int res = 0;
	if((l->head) == NULL)	{
	}	
	else if(l->head == l->tail)	{
		res = (l->head)->data;
		(l->head) = NULL;
		(l->tail) = NULL;
		(l->count)--;
	}
	else  {
		res = (l->head)->data;
		(l->head) = (l->head)->next;
		(l->head)->prev = NULL;
		(l->count)--;
	}	
	return res;	 		
}				

double double_dll_unshift(double_dll* l)	{
	double res = 0;
	if((l->head) == NULL)	{
	}	
	else if(l->head == l->tail)	{
		res = (l->head)->data;
		(l->head) = NULL;
		(l->tail) = NULL;
		(l->count)--;
	}
	else  {
		res = (l->head)->data;
		(l->head) = (l->head)->next;
		(l->head)->prev = NULL;
		(l->count)--;
	}
		return res;	 		
}				

float float_dll_unshift(float_dll* l)	{
	float res = 0;
	if((l->head) == NULL)	{
	}	
	else if(l->head == l->tail)	{
		res = (l->head)->data;
		(l->head) = NULL;
		(l->tail) = NULL;
		(l->count)--;
	}
	else  {
		res = (l->head)->data;
		(l->head) = (l->head)->next;
		(l->head)->prev = NULL;
		(l->count)--;
	}
		return res;	 		
}				

char char_dll_unshift(char_dll* l)	{
	char res = 0;
	if((l->head) == NULL)	{
	}	
	else if(l->head == l->tail)	{
		res = (l->head)->data;
		(l->head) = NULL;
		(l->tail) = NULL;
		(l->count)--;
	}
	else  {
		res = (l->head)->data;
		(l->head) = (l->head)->next;
		(l->head)->prev = NULL;
		(l->count)--;
	
	}
	return res;	 		
}				

char* string_dll_unshift(string_dll* l)	{
	char* res = 0;
	if((l->head) == NULL)	{
	}	
	else if(l->head == l->tail)	{
		res = (l->head)->data;
		(l->head) = NULL;
		(l->tail) = NULL;
		(l->count)--;
	}
	else  {
		res = (l->head)->data;
		(l->head) = (l->head)->next;
		(l->head)->prev = NULL;
		(l->count)--;
	}
		return res;	 		
}				


