
const int SIZE = 8;

class StackA {
private:
    int _body[SIZE];
    int _top;
public:
    StackA();
    void push(int val);
    int pop();
}