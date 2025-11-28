#include "stack.h"
int main()
{
	stack st;
	st.push(10);
	st.push(20);
	st.push(30);
	st.display();
	cout<<st.peek()<<endl;
	cout << st.isempty()<< endl;
	st.pop();
	st.display();	
}
