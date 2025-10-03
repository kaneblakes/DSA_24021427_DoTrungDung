using namespace std;

struct Node {
    int data;
    Node* next;

    Node (int value) {
        data = value;
        next = nullptr;
    }
};

class Stack {
    private:
        Node* head;
        int count;
    
    public:
        bool isEmpty(){
            return head == nullptr;
        }

        void push (int item){
            Node* newNode = new Node(item);
            newNode -> next = head;
        }

        int pop(){
            Node* temp = head;
            int popped = head->data;
            head = head->next;
            delete temp;
            count--;
            return popped;
        }

        int top(){
            return head->data;
        }

        int size(){
            return count;
        }
};