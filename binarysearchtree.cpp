#include <iostream>
using namespace std;

// tree node, including left and right pointers, data 
struct Node{
        Node(int value): data(value), left(NULL), right(NULL) {}
        int data;
        Node *left;
        Node *right;
};

/////////////////////////////////////////////////////////////////////////////////////////
// BST class
class BST{
private:
        Node *root;
        void insert(Node *treeNode, int data);
        bool isBalanced(Node *treeNode);
        int  getHeight(Node *treeNode);
        void deleteBST(Node *treeNode);
        void inOrder(Node * treeNode);
        void preOrder(Node * treeNode);
        void postOrder(Node * treeNode);
public:

        BST();  // constructor     
        ~BST();     // destractor

        void insert(int data)
        {
         insert(root, data);
        }       

        int getHeight()
        {
            return getHeight(root);
        }
        
        Node * getMaxNode();
        Node * getMinNode();

        void deleteBST() {deleteBST(root);}

        bool isBalanced()
        {
            return isBalanced(root);    
        }

        void inOrder() {inOrder(root);}
        void preOrder(){preOrder(root);}
        void postOrder(){postOrder(root);}
};

/////////////////////////////////////////////////////////////////////////////////////////
BST::BST()
{
        root = NULL;
}

/////////////////////////////////////////////////////////////////////////////////////////
void BST::insert(Node *treeNode, int data)
{
        if (treeNode==NULL)
        {
                treeNode = (Node*)malloc(sizeof(Node));
                treeNode->data=data;
                treeNode->left=treeNode->right=NULL;
                root = treeNode;           
        }
        else
        {
                if (data < treeNode->data)
                {
                        if (!treeNode->left)
                        {
                                Node *treeTemp = new Node(data);
                                treeNode->left = treeTemp;
                        }
                        else
                                insert(treeNode->left, data);
                }
                else
                {
                        if (treeNode->right==NULL)
                        {
                                Node *treeTemp = new Node(data);                         
                                treeNode->right = treeTemp;
                        }
                        else
                                insert(treeNode->right, data);
                }
        }
}

/////////////////////////////////////////////////////////////////////////////////////////
int BST::getHeight(Node *treeNode)
{
        if (!treeNode)
                return 0;
        return 1 + max(getHeight(treeNode->left) , getHeight(treeNode->right));
}

/////////////////////////////////////////////////////////////////////////////////////////
bool BST::isBalanced(Node *treeNode)
{
        if (!treeNode)
                return false;
        int leftHeight = getHeight(treeNode->left);
        int rightHeight = getHeight(treeNode->right);

        if (abs(leftHeight - rightHeight) > 1)
                return false;
        return true;
}

/////////////////////////////////////////////////////////////////////////////////////////
Node * BST::getMaxNode()
{
        if (!root)
        {
                cout <<  " the BST is empty!" << endl;
                return NULL;
        }
        Node * treeNode = root;
        while(treeNode->right)
                treeNode = treeNode ->right;
        return treeNode;
}

/////////////////////////////////////////////////////////////////////////////////////////
Node * BST::getMinNode()
{
        if (!root)
        {
                cout <<  " the BST is empty!" << endl;
                return NULL;
        }
        Node * treeNode = root;
        while(treeNode->left)
                treeNode = treeNode ->left;
        return treeNode;
}

/////////////////////////////////////////////////////////////////////////////////////////
void BST::deleteBST(Node *treeNode) 
{
        if (!treeNode)
                return;

        Node * curTreeNode = treeNode;
        Node * leftTreeNode = treeNode->left;
        Node * rightTreeNode = treeNode->right;
        delete(curTreeNode);
        deleteBST(leftTreeNode);
        deleteBST(rightTreeNode);
}

/////////////////////////////////////////////////////////////////////////////////////////
BST::~BST()
{
        deleteBST();
}

/////////////////////////////////////////////////////////////////////////////////////////
void BST::inOrder(Node * treeNode)
{
        if (!treeNode)
                return;
        inOrder(treeNode->left);
        cout << treeNode->data << " " ;
        inOrder(treeNode->right);
}

/////////////////////////////////////////////////////////////////////////////////////////
void BST::preOrder(Node * treeNode)
{
        if (!treeNode)
                return;
        cout << treeNode->data << " ";
        preOrder(treeNode->left);
        preOrder(treeNode->right);
}

/////////////////////////////////////////////////////////////////////////////////////////
void BST::postOrder(Node * treeNode)
{
        if (!treeNode)
                return;
        postOrder(treeNode->left);
        postOrder(treeNode->right);
        cout << treeNode->data << " ";
}

/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
int main()
{
        BST myBST;
        int c=0,val;
        cout<<"how many elements to insert"<<endl;
        cin>>c;

        for(int i=0;i<c;i++)
        {
                cin>>val;
                myBST.insert(val);
        }
        // myBST.insert(5);
        // myBST.insert(10);
        // myBST.insert(3);

        // myBST.insert(51);
        // myBST.insert(110);
        // myBST.insert(13);
        
        int h = myBST.getHeight();
        cout << "the height of this BSt is : " << h << endl;

        Node * mx = myBST.getMaxNode();
        cout << "max value: " << mx->data << endl;

        Node * mi = myBST.getMinNode();
        cout << "min value: " << mi->data << endl;

        bool isbal = myBST.isBalanced();
        if (isbal)
                cout << "BST is balanced! " << endl;
        else
                cout << "BST is not balanced! " << endl;

        cout << " in-order traverse is : " << endl;
        
        myBST.inOrder();cout << endl;
        cout << " pre-order traverse is : " << endl;
        myBST.preOrder();cout << endl;
        cout << " post-order traverse is : " << endl;
        myBST.postOrder();cout << endl;
}
