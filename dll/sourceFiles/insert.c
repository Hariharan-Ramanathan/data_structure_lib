void int_dll_insert(int_dll* l,int pos,int data){
	int count=0;
	int_dll_node* temp=l->head;
	if(pos<=l->count){
		if(pos==1){
			int_dll_shift(l,data);
		}else if(pos==l->count){
			int_dll_push(l,data);
			}
		else{
			int_dll_node* newnode=int_dll_new_node(data);
			int c=2;
			while(c!=pos){
				temp=temp->next;
				c++;
				//printf("\ntemp value=%d \n",temp->data);
			}
			
			newnode->next=temp->next;
			temp->next->prev=newnode;
			temp->next=newnode;
			newnode->prev=temp;
		}	
	}else{
		printf("Position exceeds list\n");
	}
	(l->count)++;

 }
void double_dll_insert(double_dll* l,int pos,double data){
	int count=0;
	double_dll_node* temp=l->head;
	if(pos<=l->count){
		if(pos==1){
			double_dll_shift(l,data);
		}else if(pos==l->count){
			double_dll_push(l,data);
			}
		else{
			double_dll_node* newnode=double_dll_new_node(data);
			int c=2;
			while(c!=pos){
				temp=temp->next;
				c++;
				//printf("\ntemp value=%d \n",temp->data);
			}
			
			newnode->next=temp->next;
			temp->next->prev=newnode;
			temp->next=newnode;
			newnode->prev=temp;
		}	
	}else{
		printf("Position exceeds list\n");
	}
	(l->count)++;

 }
void float_dll_insert(float_dll* l,int pos,float data){
	int count=0;
	float_dll_node* temp=l->head;
	if(pos<=l->count){
		if(pos==1){
			float_dll_shift(l,data);
		}else if(pos==l->count){
			float_dll_push(l,data);
			}
		else{
			float_dll_node* newnode=float_dll_new_node(data);
			int c=2;
			while(c!=pos){
				temp=temp->next;
				c++;
				//printf("\ntemp value=%d \n",temp->data);
			}
			
			newnode->next=temp->next;
			temp->next->prev=newnode;
			temp->next=newnode;
			newnode->prev=temp;
		}	
	}else{
		printf("Position exceeds list\n");
	}
	(l->count)++;

 }
void char_dll_insert(char_dll* l,int pos,char data){
	int count=0;
	char_dll_node* temp=l->head;
	if(pos<=l->count){
		if(pos==1){
			char_dll_shift(l,data);
		}else if(pos==l->count){
			char_dll_push(l,data);
			}
		else{
			char_dll_node* newnode=char_dll_new_node(data);
			int c=2;
			while(c!=pos){
				temp=temp->next;
				c++;
				//printf("\ntemp value=%d \n",temp->data);
			}
			
			newnode->next=temp->next;
			temp->next->prev=newnode;
			temp->next=newnode;
			newnode->prev=temp;
		}	
	}else{
		printf("Position exceeds list\n");
	}
	(l->count)++;

 }
void string_dll_insert(string_dll* l,int pos,char* data){
	int count=0;
	string_dll_node* temp=l->head;
	if(pos<=l->count){
		if(pos==1){
			string_dll_shift(l,data);
		}else if(pos==l->count){
			string_dll_push(l,data);
			}
		else{
			string_dll_node* newnode=string_dll_new_node(data);
			int c=2;
			while(c!=pos){
				temp=temp->next;
				c++;
				//printf("\ntemp value=%d \n",temp->data);
			}
			
			newnode->next=temp->next;
			temp->next->prev=newnode;
			temp->next=newnode;
			newnode->prev=temp;
		}	
	}else{
		printf("Position exceeds list\n");
	}
	(l->count)++;

 }

