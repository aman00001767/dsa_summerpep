class Node{
    public:
    int data;
    Node *next;
    Node(int val){
        data=val;
        next=nullptr;
    }
};
int main(){
    Node *node=new Node(5);
}
