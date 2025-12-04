#include<stdio.h>
#include<stdlib.h>
    struct btreenode{
        struct btreenode *leftchild;
        int data;
        struct btreenode *rchild;
        };
              int   insert(struct btreenode **sr,int num);
              int inorder(struct btreenode *sr);
    int postorder(struct btreenode *sr);
    int preorder(struct btreenode *sr);
          int    insert(leftchild);
          int  insert(rchild);

           int     insert(leftchild);
          int  insert(rchild);

           int    insert(leftchild);
          int  insert(rchild);





        int main(){
            struct btreenode *bt=NULL;
            int req,i,num;
            
            printf("inserted speicify data item \n");
            scanf("%d",&req);
                while(i++<=req){
                    printf("enter no \n");
                    scanf("%d",&num);
                    insert(&bt,num);
                }

             printf("enter inorder traversal \n");
             inorder(bt);
             printf("enter post order traversal \n");
             postorder(bt);
             printf("enter preorder traversal \n");
             preorder(bt);   
        }
      int   insert(struct btreenode **sr,int num){
            if(*sr==NULL){
                *sr=malloc(sizeof(struct btreenode));
                (*sr)->leftchild=NULL;
                (*sr)->data=num;
                (*sr)->rchild=NULL;
                return 0;
  }
           
  
  else{
                    if(num<(*sr)->data){
                insert(&((*sr)->leftchild),num);
                    }
                     else{
                        insert(&((*sr)->rchild),num);
                     }
            }

return 0;
      }

int inorder(struct btreenode *sr){
    if(sr!=NULL){
      int  insert(leftchild);
printf("%d",sr->data);
int  insert(rchild);
 }  
 return 0;
}
    int postorder(struct btreenode *sr){
        if(sr!=NULL){
            int  insert(leftchild);
            int  insert(rchild);
            printf("%d",sr->data);
        }
        return 0;
    }
    int preorder(struct btreenode *sr){
        if(sr!=NULL){
            printf("%d",sr->data);
            int  insert(leftchild);
            int   insert(rchild);
        }
        return 0;
    }