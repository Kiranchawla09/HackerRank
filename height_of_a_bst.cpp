/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    int height(Node* root) {
        // Write your code here.
        if (root==NULL)
        return -1;
        else
        {
        int left_height= height(root->left);
        int right_height= height(root->right);

        if (left_height>right_height)
        {
            return (left_height+1);
        }
        else 
        return (right_height+1);
        }
    }

}; //End of Solution