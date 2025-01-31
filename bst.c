#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *createnode(int data){
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}
struct node *insert(struct node *root,int data){
    if(root == NULL)
    return createnode(data);
    if(root->data > data)
    root->left = insert(root->left,data);
    else if(root->data < data){
        root->right = insert(root->right,data);
    }
    return root;
}
void inordertraversal(struct node *root){
    if(root != NULL){
        return;
    }
    int parent = root->data;
    if(parent%2==0){
        if(root->left!=NULL && root->left->data%2!=0){
            printf("%d %d\n",parent,root->left->data);
        }

        if(root->right!=NULL && root->right->data%2!=0){
            printf("%d %d\n",parent,root->right->data);
        }
    }
    inordertraversal(root->left);
    inordertraversal(root->right);

}
void preordertraversal(struct node *root){
    if(root != NULL){
    printf("%d_",root->data);
    preordertraversal(root->left);
    preordertraversal(root->right);
    }
}
void postordertraversal(struct node *root){
    if(root != NULL){
        postordertraversal(root->left);
        postordertraversal(root->right);
        printf("%d_",root->data);
    }
}
bool search(struct node *root,int key){
    if(root == NULL)
    return false;
    if(root->data == key)
     return true;
     if(root->data > key){
        return search(root->left,key);
     }
     else if (root->data < key){
         return   search(root->right,key);
     }


}
int main(){
    struct node *root = NULL;
    int n,val,k;
    scanf("%d",&n);
    // scanf("%d",&k);
    for(int i = 1;i<=n;i++){
        scanf("%d",&val);
        root = insert(root,val);
    }
    inordertraversal(root);
    // printf("\n");
    // preordertraversal(root);
    // printf("\n");
    // postordertraversal(root);
    // printf("\n");
    // int key;
    // for(int i = 0;i<k;i++){
    //     scanf("%d",&key);
    //     if(search(root,key))
    //     printf("y\n");
    //     else{
    //         printf("n\n");
    //     }
    // }


} 