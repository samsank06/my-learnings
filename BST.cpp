#include<bits/stdc++.h>
using namespace std;

class BST{

    public:
        int data;
        BST* left;
        BST* right;

        BST()
        {
            data=0;
            left=NULL;
            right=NULL;
        }

        void inorder(BST* root);
        void preorder(BST* root);
        void postorder(BST* root);
        void inorderwithstack(BST* root);
        void postorderwithtwostacks(BST* root);
        void levelorder(BST* root);

        int getHeight(BST* root);
        int getMaxvalue(BST* root);
        int getMinvalue(BST* root);
        bool isBalanced(BST* root);
        int getHeightbyqueue(BST* root);






        
};

void BST::inorder(BST* tempnode)
{
   // cout<<"tempnode= "<<tempnode<<endl;
    if(!tempnode)
        return;
    inorder(tempnode->left);
    cout<<tempnode->data<<" ";
    inorder(tempnode->right);
}

void BST::inorderwithstack(BST* tempnode)
{

    if(!tempnode)
        return;

    stack<BST*> st;
    while(tempnode!=NULL || st.empty()==false)
    {
        while(tempnode!=NULL)
        {
            st.push(tempnode);
            tempnode=tempnode->left;
        }
        tempnode= st.top();
        st.pop();
        cout<<tempnode->data<<" ";

        tempnode=tempnode->right;
    }

}

void BST::preorder(BST* tempnode)
{
    if(!tempnode)
        return;
    cout<<tempnode->data<<" ";
    preorder(tempnode->left);
    preorder(tempnode->right);

}

void BST::postorder(BST* tempnode)
{
    if(!tempnode)
        return;
    postorder(tempnode->left);
    postorder(tempnode->right);
    cout<<tempnode->data<<" ";
}

void BST::postorderwithtwostacks(BST* tempnode)
{
    if(!tempnode)
        return;
    
    stack<BST*> st1,st2;
    st1.push(tempnode);

    while(!st1.empty())
    {
        BST* temp1= st1.top();
        st1.pop();
        st2.push(temp1);

        if(temp1->left!=NULL)
            st1.push(temp1->left);
        if(temp1->right!=NULL)
            st1.push(temp1->right);
    }

    while(!st2.empty())
    {
        cout<<st2.top()->data<<" ";
        st2.pop();
    }
}


int BST::getHeight(BST* temp)
{
    if(temp==NULL)
        return 0;
    return 1+ max(getHeight(temp->left), getHeight(temp->right));
}


bool BST::isBalanced(BST* temp)
{
    if(temp==NULL)
        return false;
    
    int leftheight= getHeightbyqueue(temp->left);
    int rightheight= getHeight(temp->right);

    if(abs(leftheight-rightheight)>1)
        return false;
    return true;
    
}

void BST::levelorder(BST* temp)
{
    queue<BST*> q;
    q.push(temp);
    while(q.empty()==false)
    {
        BST* temp1= q.front();
        q.pop();
        cout<<temp1->data<<" ";
        if(temp1->left!=NULL)
            q.push(temp1->left);
        if(temp1->right!=NULL)
            q.push(temp1->right);
    }
}


int BST::getHeightbyqueue(BST* temp)
{
    int level=0,height=0;
    queue<BST*> q;
    q.push(temp);

     
    while(1)
    {
        level=q.size();
        if(level==0)
            break;
        
        height++;
        while(level>0)
        {
            BST* p=q.front();
            q.pop();
            if(p->left!=NULL)
                q.push(p->left);
            if(p->right!=NULL)
                q.push(p->right);
            
            level--;
        }
    }

    
return height;
}


BST *root= (BST*)malloc(sizeof(BST));

int main()
{

root->data=10;
root->left=NULL;
root->right=NULL;

BST *left1= new BST();
left1->data=5;
left1->left=left1->right=NULL;

BST *left2= new BST();
left2->data=3;
left2->left=left2->right=NULL;

BST* left3= new BST();
left3->data=4;
left3->left=left3->right=NULL;

BST *right1= new BST();
right1->data=15;
right1->left=right1->right=NULL;

BST *right2= new BST();
right2->data=13;
right2->left=right2->right=NULL;

BST* right3= new BST();
right3->data=17;
right3->left=right3->right=NULL;

BST* right4= new BST();
right4->data=19;
right4->left=right4->right=NULL;

root->left=left1;
root->left->left=left2;
root->left->right=left3;
root->right=right1;
root->right->left=right2;
root->right->right=right3;
root->right->right->right=right4;


// cout<<"inorder traversal of tree= "<<endl;
// root->inorder(root);
// cout<<endl;

// cout<<"preorder traversal of tree= "<<endl;
// root->preorder(root);
// cout<<endl;

// cout<<"postorder traversal of tree= "<<endl;
// root->postorder(root);
// cout<<endl;

// cout<<"inorder traversal using stack"<<endl;
// root->inorderwithstack(root);
// cout<<endl;

// cout<<endl;
// cout<<"postorder traversal using  two stack"<<endl;
// root->postorderwithtwostacks(root);

int choice=0,h=0,h1=0;
while(1)
{
    cout<<"enter your choice "<<endl;
    cin>>choice;

    switch(choice)
    {
        case 1:
            h=root->getHeight(root);
            cout<<"height = "<<h<<endl;
            cout<<endl;
            break;
        case 2:cout<<"inorder traversal using stack"<<endl;
            root->inorderwithstack(root);
            cout<<endl;
            cout<<endl;
            break;
        case 3:cout<<"postorder traversal using  two stack"<<endl;
            root->postorderwithtwostacks(root);
            cout<<endl;
            cout<<endl;
            break;
        case 4:cout<<"inorder traversal of tree= "<<endl;
            root->inorder(root);
            cout<<endl;
            cout<<endl;
            break;
        case 5:cout<<"preorder traversal of tree= "<<endl;
            root->preorder(root);
            cout<<endl;
            cout<<endl;
            break;
        case 6:cout<<"postorder traversal of tree= "<<endl;
            root->postorder(root);
            cout<<endl;
            cout<<endl;
            break;
        case 7:cout<<"The binary tree is"<<endl;
            if(root->isBalanced(root))
                cout<<"balanced"<<endl;
            else
                cout<<"not Balanced"<<endl;
            cout<<endl;
            break;
        case 8: cout<<"level order traversal"<<endl;
            root->levelorder(root);
            cout<<endl;
            break;

        case 9:cout<<"height without using recursion "<<endl;
            h1=root->getHeightbyqueue(root);
            cout<<"height= "<<h1<<endl;
            break;
        case 0:
            exit(1);
            break;
    }
}

}