#include <vector>
using namespace std;

class Stack {
    private:
        vector<int> data;
    
    public:

        bool isEmpty(vector<int>& data){
            return data.empty();
        }

        void push(int item){
            data.push_back(item);
        }

        int pop (){
            data.pop_back();
            return data.back();
        }

        int top () {
            return data.back();
        }

        int size () {
            return data.size();
        }
};