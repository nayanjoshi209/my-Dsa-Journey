// SET IS TYPE OF THE VECTOR BUT NOT CANTIAN DUBLICATE VALUES
// ITS ALSO NOT A PRINT VALUES INSIDE ITS BUT PRINTS ITS SIZE
// ADD VALUES INSIDE BY USING THE S.INSERT FN
#include<iostream>
#include<set>
#include<unordered_set>

using namespace std;
int main()
{
    // BY DEFAULT IS ORDER WAYS ARREGMENTS

    set<int>st;
    st.insert(2);
    st.insert(4);
    st.insert(6);
    st.insert(8);
    st.insert(5);
    st.insert(6);
    st.insert(8);
    st.insert(5);

    cout<<st.size()<<endl;

    cout<<endl<<endl;

    auto add = st.begin();  // its will be the conation 2 address

    // and there values will be access by the ptr(by its address)
    cout<<*(add)<<endl;
    cout<<*(add++)<<endl;
    cout<<*(add++++)<<endl;
    cout<<*(--add)<<endl;
    cout<<*(add--)<<endl;
    cout<<*(++add)<<endl;
    cout<<*(++add)<<endl;
    cout<<*(++++add)<<endl;

    cout<<endl<<endl;

    // delete values in set

    st.erase(5);
    st.erase(4);

    //deblicate values dost not be effected set size 
    cout<<st.size()<<endl<<endl;


    // find element in set --> 
    // if present shows 1 or not shows 0

    // find or count works as finding but find does not get return output
    st.find(1);
    st.find(5);

    cout<<st.count(1)<<endl;
    cout<<st.count(8)<<endl;

    auto add2 = st.find(4); // cantain the address of 4 element in the set

    cout<<*(add2)<<endl;
    cout<<&st;

    return 0;

}