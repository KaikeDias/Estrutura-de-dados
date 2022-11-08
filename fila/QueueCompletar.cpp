#include <queue>
#include <iostream>
using namespace std;

template <class T>
class Queue: public queue<T> {
	protected:
		queue<T> fila;
	public:
	T popQueue(){
		T tmp=fila.front();
		fila.pop();
		return tmp;
	}
	
	
	void popTodos(){				
		while(!fila.empty()){
			cout << fila.front() << endl;
			fila.pop();
		}
    }
    
    void simulaPilha(T novo){
		queue<T> filaAux;
		if(fila.empty()){
			fila.push(novo);
		} else {
			while(!fila.empty()){
				filaAux.push(fila.front());
				fila.pop();
			}

			fila.push(novo);

			while(!filaAux.empty()){
				fila.push(filaAux.front());
				filaAux.pop();
			}
		
		}
	}
};

int main(){
	Queue<char> fila;
	fila.simulaPilha('a');
	fila.simulaPilha('b');
	fila.simulaPilha('c');
	fila.popTodos();
}
