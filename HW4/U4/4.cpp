#include <iostream>
#include <list>
using namespace std;

template<typename T> class Stack;

template <typename T>
Stack<T> operator+(Stack<T> a, Stack<T> b){
    a.lst.empty();
    while (a.empty() == 0){
        T item = a.bottom();
        b.push(item);
        a.pop_bottom();
    }
    return b;
}

template <typename T>
class Stack {
    private:
        list <T> lst;
    public:
        int length(){
            return lst.size();
        }
        bool empty(){
            return bool(lst.size() == 0);
        }
        void push(const T &element){
            lst.push_front(element);
        }
        void pop(){
            lst.pop_front();
        }
        T& top (){
            return lst.front();
        }
        T& bottom (){
            return lst.back();
        }
        void pop_bottom(){
            lst.pop_back();
        }
        friend Stack operator+<>(Stack a , Stack b);
};


template <typename T>
std::ostream& operator<<(std::ostream &out, Stack<T> s) {
    out << "[";
    while (!s.empty()) {
        out << s.top();
        if (s.length() > 1) out << ", ";
        s.pop();
    }
    out << "]";
    return out;
}


int main(){
    cout<<"4.cpp\n";
    Stack<int> stack1;
    stack1.push(5);
    stack1.pop();
    stack1.push(3);
    stack1.push(4);
    Stack<int> stack2;
    stack2.push(5);
    stack2.pop();
    stack2.push(3);
    stack2.push(4);
    cout << stack1 + stack2 << "\n";


    // Baba's test case
    Stack<int> sa, sb;
    for (auto x : {3,2,1}) sa.push(x);
    for (auto x : {6,5,4}) sb.push(x);

    cout << "SA:    " << sa << "\n";
    cout << "SB:    " << sb << "\n";
    cout << "SA+SB: " << sa+sb << "\n";

    return 0;
}