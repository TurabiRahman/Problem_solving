#include <bits/stdc++.h>
using namespace std;
/*
void change_A(int &b)
{
    b = 20;
}

int main()
{
    int a;
    a = 10;

    change_A(a);

    cout << a << endl;

    return 0;
}
*/


/*
#include <bits/stdc++.h>
using namespace std;

void print_binary(int n)
{
    for(int i = 10; i >= 0; i--)
    {
        cout << ((n >> i) & 1);
    }

    cout << endl;
}



int main()
{
    int n;
    cin >> n;

    print_binary(n);

    return 0;
}
*/
/*

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *number_pointer = NULL;
    int number = 20;

    number_pointer = &number;
    *number_pointer = 16;

    cout << *number_pointer << " " << number_pointer << " " << &number_pointer << endl;

    return 0;
}
*/
/*
#include <bits/stdc++.h>
using namespace std;


void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int x = 5, y = 10;
    cout << "Before swap function: ";
    cout << "x = " << x << ", y = " << y << endl;
    swap(&x, &y);
    cout << "After swap function: ";
    cout << "x = " << x << ", y = " << y << endl;
    return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;

unordered_map <char, int> symbols = {{'[', -1}, {'(', -2}, {'{', -3}, {']', 1}, {')', 2}, {'}', 3}}

string is_balanced(string s)
{
    stack <char> st;

    for(char brackets : s)
    {
        if(symbols[brackets] < 0)
        {
            st.push(brackets);
        }
        else
        {
            char top = st.top();
            st.pop();

            if(symbols[top] + symbols[brackets] != 0)
            {
                return "NO";
            }
        }
    }

    if(st.empty())
    {
        return "YES";
    }
    else
    {
        return "NO";
    }
}
*/
/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    double f = tgamma(n + 1);
    cout << f << endl;
}
*/
/*
#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Function to define precedence
int precedence(char op) {
    if (op == '^') return 3;
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return 0;
}

// Function to check if character is operator
bool isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '^';
}

// Main conversion function
string infixToPostfix(string infix) {
    stack<char> st;
    string postfix = "";

    for (char c : infix) {
        if (isalnum(c)) {
            // Operand directly to postfix
            postfix += c;
        }
        else if (c == '(') {
            st.push(c);
        }
        else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                postfix += st.top();
                st.pop();
            }
            if (!st.empty()) st.pop(); // remove '('
        }
        else if (isOperator(c)) {
            while (!st.empty() && precedence(st.top()) >= precedence(c)) {
                postfix += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    // Pop remaining operators
    while (!st.empty()) {
        postfix += st.top();
        st.pop();
    }

    return postfix;
}

int main() {
    string infix;
    cout << "Enter infix expression: ";
    cin >> infix;

    cout << "Postfix expression: " << infixToPostfix(infix) << endl;

    return 0;
}


void recurse(int n)
{
    if(n == 0)
        return;
    else{
        cout << n << endl;
        recurse(n - 1);
    }
}

int main()
{
    int n;
    cin >> n;

    recurse(n);

    return 0;
}



int main()
{
    int a, b;
    cin >> a >> b;

    if(!(a ^ b))
    {
        cout << "T" << endl;
    }
    else
    {
        cout << "F\n";
    }
}
*/

int sum(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else
    {
        return n + sum(n - 1);
    }
}

int main()
{
    int n;
    cin >> n;

    int x = sum(n);

    cout << x << endl;
}


int findCeil(Node* root, int key)
{
    int ceil = -1;

    while(root != nullptr)
    {
        if(root-> val == key)
        {
            ceil = root->val;
            break;
        }
        else if(key > root->val)
        {
            root = root->right;
        }
        else
        {
            ceil = root-> val;
            root = root -> left;
        }
    }

    return ceil;
}
