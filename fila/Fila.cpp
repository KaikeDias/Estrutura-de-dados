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
		No<T> *inicio = nullptr;
		No<T> *fim = nullptr;
	
    public:
		Fila(){}
		
		void enQueue(T n){
            No<T> *item = (No<T>*)malloc(sizeof(No<T>));
            item->valor = n;

            if(isEmpty()){
                inicio = item;
                fim = item;
            }else{
                fim->prox = item;
                fim = item;
            }
		}
		
		T deQueue(){
            T valor = inicio->valor;

			inicio = inicio->prox;
            

            return valor;
		}
		
		bool isEmpty(){
			return (inicio == NULL);
		}
	
	    void popAll(){
	    	
	    	
		}

        T inicio(){
            if(!isEmpty()){
                return inicio->valor;
            }else{
                cout << "Erro fila vazia" << endl;
                throw exception;
            }
        }

        T fim(){
            if(!isEmpty()){
                return fim->valor;
            }else{
                cout << "Erro fila vazia" << endl;
                throw exception;
            }
        }
};

int main(){
	
	
    
	

	
}
