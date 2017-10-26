#include <iostream>
using namespace std;


struct Node {
    int data;
    struct Node* next;
};
struct Node* head;

void Insert(int x) {
    Node* temp = (Node*)malloc(sizeof(struct Node));
}

int main() {
    head = NULL; //list is empty
    cout << "How many numbers?" << endl;
    int n;
    int x;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout<<"Enter the number \n";
        cin >> x;
        Insert(x);
        Print();
    }
}