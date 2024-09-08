#include <string>
#include <iostream>

using namespace std;

class Veiculo{


public:

    bool ignicao;
    float combustivel;
    float temperatura;

    void ligar(){
        if(combustivel != 0 ){

            ignicao = true;
        cout << "Ligando o Veiculo\n";
            
        }else{
            cout <<"Sem Combustivel"<<::endl;
        }
        
    }
    void desligar(){
        ignicao = false;

        cout <<"Desligando o Veiculo\n";
        
    }
    void nivelCombustivel(){

        combustivel = 0.0;
        if(combustivel == 0.0){
            ignicao = false;
        
        }
    }
    void temperaturaVeiculo(){
        bool ventuinha;
        temperatura = 102.4;

        if(temperatura > 100){

            ventuinha = true;
        }else{

            ventuinha = false;
        }
        cout <<"Temperatura: "<< temperatura<<"\nVentuinha: "<< ventuinha <<::endl;
    }
    
        
};



int main() {
 
    string menu;
    cout <<"[1]Ligar\n";
    cin >>menu ;
    while (true)
    {
        if(menu == "1"){

        Veiculo carro;
        carro.ligar();
        carro.temperaturaVeiculo();
        carro.desligar();

        break;
        }
    }
    
    return 0;
}