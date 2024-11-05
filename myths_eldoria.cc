#include <iostream>
#include <windows.h>

struct Personaje{
    std::string nombre;
    std::string Clase;
    //probabilidades representadas como la habilidad de usuario
    int agilidad;
    int sigilo;
    int reputacion;
    int Fuerza;
    int mana;
};

void juego(){
    std::cout<<"Bienvenido";
}
void insertarusuario(){
    //interfaz que se añadira posteriormente
}
void Fase1(){
    //interfaz que se añadira posteriormente
}

void Menu(){
    std::cout <<" ============================================================================" <<'\n';
    std::cout <<"|                                                                            |" <<'\n'    
              <<"|  Bienvenido aventurero ... Listo para la aventura?                         |" <<'\n' 
              <<"|                                                                            |"<<'\n'  
              <<"|                                                                            |"<<'\n'  
              <<"|                                                                            |"<<'\n'         
              <<"|                                                                            |"<<'\n'  
              <<"|                                                                            |"<<'\n'  
              <<"|  Elige una opcion:                                                         |"<<'\n'  
              <<"|  1. Comenzar Partida                                                       |"<<'\n'  
              <<"|  2. Como jugar                                                             |"<<'\n'  
              <<"|  3. Salir                                                                  |"<<'\n'  
              <<"|                                                                            |"<<'\n'  
              <<" ============================================================================" <<'\n';
}

int main(int argc, char *argv[])
{   
    int opcion;
    system("cls");
    std::cout <<" ============================================================================" <<'\n';
    std::cout <<"|                                                 *                          |" <<'\n'    
              <<"|       *                                                                    |" <<'\n' 
              <<"|                   *                                                        |"<<'\n'  
              <<"|                                                                            |"<<'\n'  
              <<"|                            MITHS OF ELDORIA    *                           |"<<'\n'         
              <<"|             *            <El ocaso de la Paz>                              |"<<'\n'  
              <<"|                                                              *             |"<<'\n'  
              <<"|                                            *                               |"<<'\n'  
              <<"|                  *                                                         |"<<'\n'  
              <<"|  *                                                                         |"<<'\n'  
              <<"|   presione <enter> para comenzar                       *                   |"<<'\n'  
              <<"|                                      *                                     |"<<'\n'  
              <<"|             *                                                              |"<<'\n'  
              <<"|                                                   *                        |"<<'\n'  
              <<" ============================================================================" <<'\n';
    std::cin.get();
    //system("pause");
    system("cls");
    do{
        Menu();
        std::cout<<"Opcion: ";
        std::cin >> opcion;
        switch(opcion){
            case 1:
                system("cls");
                std::cout<<'\n'<<"Acceso confirmado";
                Sleep(3000);
                system("cls");
                std::cout<<'\n'<<"espere......";
                Sleep(3000);
                system("cls");
                juego();
                Sleep(3000);
                system("cls");
                break;
            case 2:
                system("cls");
                std::cout<<"Volviendo al menu";
                Sleep(3000);
                system("cls");
                break;
            case 3:
                std::cout<<"Saliendo del sistema";
                Sleep(3000);
                system("cls");
                break;
            default:
                break;
        }
    }while(opcion!=3);
        
    return 0;
}