#include<stdio.h>
#include<stdlib.h>

        struct dnode{
            struct dnode *prev;
            int data;
            struct dnode *next;
        };

                    int addbeg(struct dnode **s,int num);
                    int addend(struct dnode **s,int num);
                            int addafter(struct dnode *s,int loc,int num);
                                    int count(struct dnode *q);
 int display(struct dnode *z);



int main(){
    struct dnode *p=NULL;
    addend(&p,900);
addend(&p,1200);
addend(&p,1500);

    addbeg(&p,100);
    addbeg(&p,200);
    addbeg(&p,300);

    addafter(p,2,400);
    addafter(p,4,600);
   addafter(p,5,1500);
    printf("nodes=%d\n",count(p));
    
    display(p);
    return 0;
}
            int addbeg(struct dnode **s,int num){
                struct dnode *tem;
                tem=malloc(sizeof(struct dnode));
                tem->prev=NULL;
                tem->data=num;
                tem->next=*s;

                (*s)->prev=tem;
                *s=tem;
                return 0;
            }

int addend(struct dnode **s,int num){
    struct dnode *r,*tem;
    tem=*s;
            if(*s==NULL){
                (*s)=malloc(sizeof(struct dnode));
                (*s)->prev=NULL;
                
                (*s)->data=num;
                (*s)->next=NULL;
            }

        else{
            while(tem->next!=NULL){
                tem=tem->next;
            }
                r=malloc(sizeof(struct dnode));
                r->next=NULL;
                r->data=num;
                r->prev=tem;
                tem->next=r;
            
        } 
        return 0;   
}
       int addafter(struct dnode *s,int loc ,int num){
        struct dnode *tem,*r;
        int i;
        tem=s;
            for(i=0;i<loc;i++){
                tem=tem->next;
            }
                    if(tem==NULL){
                        printf("last node location=%d\n",loc);
                    }
                              else{
                                tem=tem->prev;
                                r=malloc(sizeof(struct dnode));
                                r->data=num;
                                r->prev=s;
                                r->next=tem->next;
                                tem->next->prev=r;
                                tem->next=r;
                            }
       }
    

        int display(struct dnode *z){
            while(z!=NULL){
                printf("%2d <--->",z->data);
                z=z->next;
            }
            return 0;
        }

        int count(struct dnode *s){
            int c=0;
            while(s!=NULL){
                s=s->next;
                c++;
            }
            return c;
        }