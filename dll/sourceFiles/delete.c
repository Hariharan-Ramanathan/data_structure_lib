int int_dll_delete(int_dll* l,int pos){
	int count=0;
	int res=0;
	int_dll_node* temp=l->head;
	
	if(pos<=l->count){
		if(pos==1){
			 res=int_dll_unshift(l);
		}
		else if(pos==count){
			 res=int_dll_pop(l);
		}
		else{
			int c=1;
			while(c!=pos){
				temp=temp->next;
				c++;


			}
			temp->next->prev=temp->prev;
			temp->prev->next=temp->next;
			res=temp->data;
			(l->count)--;
			return res;
		}
 }else{
	 printf("Position exceeds list\n");
 }
 }
double double_dll_delete(double_dll* l,int pos){
	int count=0;
	double res=0;
	double_dll_node* temp=l->head;
	
	if(pos<=l->count){
		if(pos==1){
			 res=double_dll_unshift(l);
		}
		else if(pos==count){
			 res=double_dll_pop(l);
		}
		else{
			int c=1;
			while(c!=pos){
				temp=temp->next;
				c++;


			}
			temp->next->prev=temp->prev;
			temp->prev->next=temp->next;
			res=temp->data;
			(l->count)--;
			return res;
		}
 }else{
	 printf("Position exceeds list\n");
 }
 }
float float_dll_delete(float_dll* l,int pos){
	int count=0;
	float res=0;
	float_dll_node* temp=l->head;
	
	if(pos<=l->count){
		if(pos==1){
			 res=float_dll_unshift(l);
		}
		else if(pos==count){
			 res=float_dll_pop(l);
		}
		else{
			int c=1;
			while(c!=pos){
				temp=temp->next;
				c++;


			}
			temp->next->prev=temp->prev;
			temp->prev->next=temp->next;
			res=temp->data;
			(l->count)--;
			return res;
		}
 }else{
	 printf("Position exceeds list\n");
 }
 }
char char_dll_delete(char_dll* l,int pos){
	int count=0;
	char res=0;
	char_dll_node* temp=l->head;
	
	if(pos<=l->count){
		if(pos==1){
			 res=char_dll_unshift(l);
		}
		else if(pos==count){
			 res=char_dll_pop(l);
		}
		else{
			int c=1;
			while(c!=pos){
				temp=temp->next;
				c++;


			}
			temp->next->prev=temp->prev;
			temp->prev->next=temp->next;
			res=temp->data;
			(l->count)--;
			return res;
		}
 }else{
	 printf("Position exceeds list\n");
 }
 }
char* string_dll_delete(string_dll* l,int pos){
	int count=0;
	char* res=0;
	string_dll_node* temp=l->head;
	
	if(pos<=l->count){
		if(pos==1){
			 res=string_dll_unshift(l);
		}
		else if(pos==count){
			 res=string_dll_pop(l);
		}
		else{
			int c=1;
			while(c!=pos){
				temp=temp->next;
				c++;


			}
			temp->next->prev=temp->prev;
			temp->prev->next=temp->next;
			res=temp->data;
			(l->count)--;
			return res;
		}
 }else{
	 printf("Position exceeds list\n");
 }
 }

