#include <iostream>
using namespace std;
class Stack
{
public:
    int top = -1;
    int arr[10];

    void push(int x)
    {
        if (top > 10)
            cout << "Stack Overflow" << endl;
        top = top + 1;
        arr[top] = x;
    }

    int getelement()
    {
        if (top == -1)
            cout << "No element is present" << endl;
        return arr[top];
    }

    void popelement()
    {
        if (top == -1)
            cout << "Underflow" << endl;
        top = top - 1;
    }
};
int main()
{
    Stack st;
    st.push(2);
    st.push(2);
    st.push(2);
    st.push(7);
    cout << st.getelement();
    st.popelement();
    cout << endl;
    cout << st.getelement();

    return 0;
}