#include <iostream>
#include <cctype>
#include "stack.h"
int main()
{
    using namespace std;
    Stack st;
    char ch;
    unsigned long po;
    cout << "Please enter A to add a purchase order\n"
         << "p to process a PO, or q to quit" << endl;
    while (cin >> ch && toupper(ch) != 'Q') //tippper 小写转大写
    {
        while(cin.get() != '\n')
        {
            continue;
        }
        if (!isalpha(ch))
        {
            cout << '\a';
            continue;
        }
        switch (ch)
        {
        case 'A':
        case 'a':
            cout << "Enter a PO number to add: ";
            cin >> po;
            if (st.isfull())
                cout << "Stack already full\n";
            else
                st.push(po);
            break;
        case 'p':
        case 'P':
            if (st.isempty())
                cout << "Stack already empty\n";
            else
            {
                st.pop(po);
                cout << "po #" << po << " poped \n";
            }
            break;
        default:
            break;
        }
        cout << "Please enter A to add a purchase order\n"
         << "p to process a PO, or q to quit" << endl;
    }
    cout << "BYBE\n";
    return 0;
}