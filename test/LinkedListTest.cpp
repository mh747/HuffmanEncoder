#include<iostream>
#include "LinkedList.cpp"

int main()
{
    LinkedList<int> *ll = new LinkedList<int>;
    ll->push_front(3);
    ll->push_front(2);
    ll->push_front(1);
    LinkedList<int>::list_iterator li;

    for(li=ll->begin(); li!=ll->end(); ++li)
        cout << "Value: \t" << li.val() << "\n";

    ll->pop_front();
    ll->push_back(4);
    cout << "new size: " << ll->size << endl;

    LinkedList<char> ll2;
    for(char i='a'; i<='z'; i++)
        ll2.push_back(i);

    LinkedList<char>::list_iterator li2;
    for(li2=ll2.begin(); li2!=ll2.end(); li2++)
        cout << "Character: \t" << li2.val() << "\n";

    cout << "\nPopping last 4 elements...\n\n";
    for(int i=0; i<4; i++)
        cout << "Popping value: " << ll2.pop_back() << "\n\n";

    cout << "New list:\n";
    for(li2=ll2.begin(); li2!=ll2.end(); li2++)
        cout << "Character: \t" << li2.val() << "\n";

    li2 = ll2.begin();
    for(int i=0; i<5; i++)
        li2++;

    LinkedList<char>::list_iterator li3 = ll2.insert('E',li2);

    cout << "\n\nInserting 'E' at 5th element.\n\nNew List:\n";

    for(li2=ll2.begin(); li2!=ll2.end(); li2++)
        cout << "Character: \t" << li2.val() << "\n";

    cout << "\nReturn value for last insert: " << li3.val() << "\n\n";

    cout << "Removing new value from list...\n\nNew List:\n";

    li3 = ll2.remove(li3);

    for(li2=ll2.begin(); li2!=ll2.end(); li2++)
        cout << "Character: \t" << li2.val() << "\n";

    cout << "\nValue of returned iterator: " << li3.val() << "\n\n";

    cout << "\nRemoving first element using remove.\n\n";
    li3 = ll2.begin();
    li3 = ll2.remove(li3);

    cout << "New begin value: " << ll2.begin().val() << "\nNew li3 value: " << li3.val() << "\n\n";

    cout << "\n\nSearching for first occurance of value: c\n\n";
    bool found = ll2.find_first('c', li3);
    if(found)
        cout << "\nfound " << li3.val() << "\n\n";

    cout << "\n\nSearching for first occurence of E\n\n"; //testing null return
    found = ll2.find_first('E',li3);

    cout << "\nfound " << li3.val() << "\n\n";


    cout << "Adding another 'c' to the list.\nNew List:\n";
    ll2.push_back('c');
    ll2.push_back('c');

    for(li2=ll2.begin(); li2!=ll2.end(); li2++)
        cout << "Character: \t" << li2.val() << "\n";

    li3 = ll2.find_last('c');
    cout << "found " << li3.val() << "\nNow removing last instance of c\n\n";

    li3 = ll2.remove(li3);

    cout << "\nNew List:\n\n";
    for(li2=ll2.begin(); li2!=ll2.end(); li2++)
        cout << "Character: \t" << li2.val() << "\n";

    cout << "\n\nAdding 'a' to end of list...\n\n";
    ll2.push_back('a');

    cout << "\nSorting ll2...\n\n";

   ll2.sort_list();

    cout << "\n\nNew List\n";
    for(li2=ll2.begin(); li2!=ll2.end(); li2++)
        cout << "Character: \t" << li2.val() << "\n";


    cout << "Finished executing. Exiting...\n\n";
    
    return 0;
}

