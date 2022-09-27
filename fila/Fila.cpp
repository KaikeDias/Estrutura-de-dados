#include <iostream>
#include <string>
#include <stack>

using namespace std;


template <typename T>
class No{
	public:
		T valor;
		No<T> *prox;
		No(T n){
			valor = n;
			prox = nullptr;
		}
};

template <typename T>
class Fila{
    private:
		No<T> *_inicio = nullptr;
		No<T> *_fim = nullptr;
        int count = 0;
	
    public:
		Fila(){}
		
		void enQueue(T n){
            No<T> *item = (No<T>*)malloc(sizeof(No<T>));
            item->valor = n;

            if(isEmpty()){
                _inicio = item;
                _fim = item;
            }else{
                _fim->prox = item;
                _fim = item;
            }

            count++;
		}
		
		T deQueue(){
            if(isEmpty()){
                throw exception();
            }

            count--;
 
            T valor = _inicio->valor;
            
            if(isEmpty()){
                free(_inicio);
                _inicio = nullptr;
                _fim = nullptr;
            }else{
                No<T> *novoInicio = _inicio->prox;
                free(_inicio);
                _inicio = novoInicio;
            }

            return valor;
		}
		
		bool isEmpty(){
			return count == 0;
		}
	
	    void clear(){
	    	while(!isEmpty()){
                cout << deQueue() << endl;
            }
		}

        T inicio(){
            if(!isEmpty()){
                return _inicio->valor;
            }else{
                cout << "Erro fila vazia" << endl;
                throw exception();
            }
        }

        T fim(){
            if(!isEmpty()){
                return _fim->valor;
            }else{
                cout << "Erro fila vazia" << endl;
                throw exception();
            }
        }
};

int main(){
	Fila<char> fila01 = Fila<char>();
    fila01.enQueue('K');
    fila01.enQueue('a');
    fila01.enQueue('i');
    fila01.enQueue('k');
    fila01.enQueue('e');

    fila01.clear();
	
}
