#include <stack>
#include <iostream>
using namespace std;

template <class T>
class Stack: public stack<T> {
	protected:
		stack<T> pilha;
	public:
	T popStack(){
		T tmp=pilha.top();
		pilha.pop();
		return tmp;
	}
	
	
	void popTodos(){
		while(!pilha.empty()){
			cout << pilha.top() << endl;
			pilha.pop();
		}
    }
	
	void simulaFila(T novo){
		stack<T> pilhaAux;

		if(pilha.empty()){
			pilha.push(novo);
		} else {
			while(!pilha.empty()){
				pilhaAux.push(pilha.top());
				pilha.pop();
			}

			pilha.push(novo);

			while(!pilhaAux.empty()){
				pilha.push(pilhaAux.top());
				pilhaAux.pop();
			}
		}	
	}
	
	
};

main(){
	Stack<char> pilha;
	pilha.simulaFila('a');
	pilha.simulaFila('b');
	pilha.simulaFila('c');
	pilha.popTodos();
}
