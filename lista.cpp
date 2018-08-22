#include<iostream>
using namespace std;

const int tam = 10;

class lista
{
	private:
	 int inicio,fim;
	 int elem[tam];
	 
	public:
	 lista()
	 {
		 inicio = fim =tam/2;
	 } 
	 
	 void inserir(int valor)
	 {
		 int pos;
		 
		 pos = inicio;
		 
		 while(pos<fim && valor >=elem[pos])
		 {
			 pos++;
		 }
		 
		 if(pos<=(inicio+fim-1)/2) && inicio > 0 || fim = tam)
		 {
			 for(int i=inicio;i<pos;i++)
			 {
				 elem[i-1] = elem[i];
			 }
			 elem[pos-1] = valor;
			 inicio--;
		 }
		 
		 else
		 {
			for(int i = fim; i> pos; i--)
			{
				elem[i] = elem[i-1];
			} 
		
			elem[pos] = valor;
			fim++;
		 }
	 }
	 
	 int consultar(int valor)
	 {
		 int pos;
		 pos = inicio;
		 
		 while(pos<fim && elem[pos] < valor)
		 {
			 pos++;
		 }
		 
		 if(pos<fim && elem[pos] == valor)
		 {
			 return (pos - inicio)+1;
		 }
		 else
		 {
			 return 0;
		 }
	 }
	 
	 int remover (int pos)
	 {
		 int indice , valor;
		 indice = (pos+inicio)-1;
		 valor = elem[indice];
		 
		  if(indice<=(inicio+fim-1)/2);
		  {
			  for(int i = indice; i>inicio; i--)
			  {
				  elem[i] = elem[i-1];
			  }
			  inicio++;
		  }
		  
		  else
		  {
			  for(int i = indice; i<fim-1; i++)
			  {
				  elem[i] = elem[i+1];
			  }
			  fim--;
			  
		  }
		  return valor;
	 }
	 
	 bool listavazia()
	 {
		 return inicio==fim;
	 }
	 
	 bool listacheia()
	 {
		 return (inicio == 0 && fim == tam);
	 }
	 
	 void listar()
	 {
		 int i;
		 
		 if(listavazia())
		 {
			 cout<<"Lista Vazia";
		 }
	 }
};


