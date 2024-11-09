#include <iostream>
#include <windows.h>

struct Personaje{
    std::string nombre;
    std::string clase;
    //probabilidades representadas como la habilidad de usuario
    int agilidad;
    int sigilo;
    int reputacion;
    int Fuerza;
    int mana;
};

void InsertarUsuario(struct Personaje &p){
    std::string nombre_usuario;
    int personaje;
    std::cout<<"------------------------Bienvenido a la interfaz de usuario----------------------"<<'\n';
    std::cout<<'\n'<<"Ingrese su personaje:"<<'\n';
    std::cout<<"1. Mago: "<<'\n'
             <<"   Habilidades:"<<'\n'
             <<"        Fuerza: 15%"<<'\n'
             <<"      Agilidad: 51%"<<'\n'
             <<"        Sigilo: 68%"<<'\n'
             <<"          Mana: 70%"<<'\n'
             <<"    reputacion: 50%"<<'\n';
    std::cout<<"2. Caballero: "<<'\n'
             <<"   Habilidades:"<<'\n'
             <<"        Fuerza: 68%"<<'\n'
             <<"      Agilidad: 19%"<<'\n'
             <<"        Sigilo: 13%"<<'\n'
             <<"          Mana:  5%"<<'\n'
             <<"    reputacion: 70%"<<'\n';
    std::cout<<"3. Ladron: "<<'\n'
             <<"   Habilidades: "<<'\n'
             <<"        Fuerza: 51%"<<'\n'
             <<"      Agilidad: 70%"<<'\n'
             <<"        Sigilo: 69%"<<'\n'
             <<"          Mana:  5%"<<'\n'
             <<"    reputacion:  1%"<<'\n';
    std::cout<<"Eliga la opcion que desee de personaje: ";
    std::cin>>personaje;
    switch(personaje){
        case 1:{
            std::cout << "Usted eligio al mago"<<'\n';
            std::cout << "Ingresa el nombre por el que te conoceran como mago"<<'\n';
            std::cin >> nombre_usuario;
            p.nombre=nombre_usuario;
            struct Personaje mago;
            mago = {nombre_usuario,"Mago",51,68,50,15,70};
            p=mago;
            }
        break;
        case 2:{
            std::cout << "Usted eligio al caballero"<<'\n';
            std::cout << "Ingresa el nombre por el que te conoceran como caballero"<<'\n';
            std::cin >> nombre_usuario;
            p.nombre=nombre_usuario;
            struct Personaje caballero;
            caballero = {nombre_usuario,"Caballero",19,68,70,68,5};
            p=caballero;
            }
        break;
        case 3:{
            std::cout << "Usted eligio al caballero"<<'\n';
            std::cout << "Ingresa el nombre por el que te conoceran como ladron"<<'\n';
            std::cin >> nombre_usuario;
            p.nombre=nombre_usuario;
            struct Personaje ladron;
            ladron = {nombre_usuario,"ladron",70,69,01,51,5};
            p=ladron;
        }
        break;

    }

}

void juego(){
    struct Personaje personaje_usuario;
    std::cout << "=============================================================================" <<'\n';
    std::cout << "En una tierra donde los mitos se pierden en el tiempo, existe una historia de" << '\n' 
              << "un tesoro legendario que pertenecio al fundador de un gran reino. Personas de" << '\n' 
              << "diversas partes se embarcaron en la busqueda de dicho tesoro hasta que los" << '\n' 
              << "pensamientos de la  avaricia y codicia se apoderaron de los corazones de los" <<'\n'
              << "hombres desatando un cruel conflicto." << '\n';
    std::cout << "=============================================================================" <<'\n';
    std::cin.get();
    system("cls");
    std::cout << "=============================================================================" <<'\n';
    std::cout << "Cuando se puso fin al conflicto se procedio a la reunificacion de los reinos" << '\n' 
              << "en una era de prosperidad que a veces se veia interrumpida cuando grupos de " << '\n'
              << "personas se revelaban y peleaban por tratar de llegar al tesoro. Actualmente" << '\n'
              << "los tiempos buenos que parecían eternos, se acercan a un periodo de declive" << '\n'
              << "y con ello el resurgimiento de una era de codicia" <<'\n'<<'\n'; 
    std::cout << "=============================================================================" <<'\n';

    std::cout << "Podra alguien conseguir ese tesoro y terminar con el ciclo de auge y caida?" << '\n';
    std::cin.get();
    system("cls");
    InsertarUsuario(personaje_usuario);
    Sleep(1000);
    system("cls");
    std::cout <<"Bienvenido/a "<<personaje_usuario.clase<<" "<<personaje_usuario.nombre<<'\n'
              <<"Suerte en tu aventura";
    Sleep(2000);
    Fase1(personaje_usuario);
}

void Fase1(struct Personaje p){
    //interfaz que se añadira posteriormente
}

void Menu(){
    std::cout <<" ============================================================================" <<'\n';
    std::cout <<"|                                                                            |" <<'\n'    
              <<"|  Bienvenido/a aventurero ... Listo para la aventura?                       |" <<'\n' 
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
                std::cin.ignore();
                system("cls");
                std::cout<<'\n'<<"Acceso confirmado";
                Sleep(1000);
                system("cls");
                std::cout<<'\n'<<"espere......";
                Sleep(2000);
                system("cls");
                juego();
                Sleep(2000);
                system("cls");
                break;
            case 2:
                system("cls");
                std::cout<<"Volviendo al menu";
                Sleep(3000);
                system("cls");
                break;
            case 3:
                system("cls");
                std::cout <<'\n';
                std::cout <<'\n'    
                          <<'\n' 
                          <<'\n'  
                          <<'\n'  
                          <<'\n'         
                          <<"                            ====================                              "<<'\n'  
                          <<"                           |    Saliendo del    |                             "<<'\n'  
                          <<"                           |      Sistema       |                             "<<'\n'  
                          <<"                            ====================                              "<<'\n';
                          
                Sleep(2000);
                system("cls");
                break;
            default:
                break;
        }
    }while(opcion!=3);
        
    return 0;
}