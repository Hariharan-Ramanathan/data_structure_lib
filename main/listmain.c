#include <stdio.h>
#include <stdlib.h>
#include "../dsa.h"

#define l import_string_listf

void main() {   
    string_list* list = l.create(); 
    while(1){
        printf("\na.push\n"
                "b.pop\n"
                "c.shift\n"
                "d.unshift\n"
                "e.insert\n"
                "f.delete\n"
                "g.print\n"
                "h.print in reverse\n"
                "i.reverse int_list\n"
                "j.data\n"
                "q.quit\n"
            );
        char c;
        scanf("\n%c",&c);
        if(c=='q'){
            break;
        }
        else{
            switch(c){

                case 'a':{
                char a;
                printf("Enter the value");
                scanf("%c",&a);
                printf("%c",a);
                l.push(list,"hari");
                l.push(list,"haran");
                l.push(list,"ramanathan");
                //l.print(list);
                printf("count = %d",list->count);
                break;}
                
                case 'b':
                l.pop(list);
                l.print(list);
                printf("count = %d",list->count);
                break;
                
                case 'c':{
                char* a;
                printf("Enter the value");
                scanf("%s",a);
                l.add(list,a);
                l.print(list);
                printf("count = %d",list->count);
                break;}
                
                case 'd':
                l.remove(list);
                l.print(list);
                printf("count = %d",list->count);
                break;
                         
                case 'e':{
                char* v;
                int p,n;
                printf("Enter the position");
                scanf("%d",&p);
                printf("Enter the value");
                scanf("%s",v);
                l.insert(list,p,v);
                printf("\n%d Value added",v);
                l.print(list);
                break;
                }
                
                case 'f':{
                int v;
                int p;
                printf("Enter the position");
                scanf("%d",&p);
                v=l.delete(list,p);
                printf("\n%d position removed",v);
                l.print(list);
                break;
                }

                case 'g':
                l.print(list);
                break;
                
                case 'h':
                l.print_in_reverse(list);
                break;

                case 'i':
                l.reverse(list);
                break;

                case 'j':   {
                int n;
                printf("Enter the position\n");
                scanf("%d",&n);
                printf("%d",l.data(list,n));
                break;
                }
                default:printf("Check the data entered");    
            }
        }
    }
}
