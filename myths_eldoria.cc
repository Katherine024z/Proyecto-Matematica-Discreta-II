#include <iostream>
#include <windows.h>
#include <ctime>
#include <vector>

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

void Menu();
void InsertarUsuario(struct Personaje &p);
void Juego();
void Fase1(struct Personaje &p, bool &tablero);
void Caballero(struct Personaje& p);
void Ladron(struct Personaje& p);
void Mago(struct Personaje& p);
void Fase2(struct Personaje& p, bool &fin, bool &tablero);
//funciones de prob
bool AleatorioAccion(int Probabilidad);
void Objetos(struct Personaje &p);
void Penalizacion(struct Personaje &p, int penalizacion);
//Mitos
void Mito1(struct Personaje &p, int penalizacion, bool &fin);
void Mito2(struct Personaje &p, int penalizacion);
void Cofre1(struct Personaje &p);
void Cofre2(struct Personaje &p);
void Mito3(struct Personaje &p, int penalizacion, bool &fin, bool &tablero);

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
                Juego();
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
                std::cout<<"La opcion ingresada no es correcta"<<'\n';
                break;
        }
    }while(opcion!=3);
        
    return 0;
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
            caballero = {nombre_usuario,"Caballero",19,13,70,68,5};
            p=caballero;
            }
        break;
        case 3:{
            std::cout << "Usted eligio al ladron"<<'\n';
            std::cout << "Ingresa el nombre por el que te conoceran como ladron"<<'\n';
            std::cin >> nombre_usuario;
            p.nombre=nombre_usuario;
            struct Personaje ladron;
            ladron = {nombre_usuario,"Ladron",70,69,01,51,5};
            p=ladron;
        }
        break;
        default:
          std::cout << "La opcion ingresada no se encuentra entre los personajes" << '\n';
          break;
    }

}

void Juego(){
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
    std::cin.ignore();
    std::cin.get();
    if(personaje_usuario.clase=="Caballero"){
      Caballero(personaje_usuario);
    }else if(personaje_usuario.clase =="Mago"){
      Mago(personaje_usuario);
    }else{
      Ladron(personaje_usuario);
    }
}

void Fase1(struct Personaje &p, bool &tablero){
  int penalizacion=15;//para evaluar despues de obtener cada item
  int opcion, encargos;
  bool sucede;
  char encargo1, encargo2, encargo3;
  std::cout << "============================================================================" <<'\n';
  std::cout << "Decides buscar una taberna para pasar la noche, mientras te diriges a la \n"
               "taberna escuchas gente hablando sobre un suceso en una aldea del norte,\n"
               "parece que muchos aldeanos se han quejado de sucesos anormales y personas\n"
               "merodeando\n";
  std::cout << "============================================================================" <<'\n';
  std::cout << std::endl;
  std::cin.get();
  system("cls");
  std::cout << "Mas adelante encuentras un tablero de noticias\n"
            << "1. revisar el tablero" << '\n' 
            << "2. seguir adelante" <<'\n'
            <<"Opcion: ";
  std::cin >> opcion;
  system("cls");
  if (opcion == 1) {
    std::cin.ignore();
    std::cout << "============================================================================" <<'\n';
    std::cout << "Son noticias sin importancia excepto por una donde se habla de un aumento"<<'\n'
              <<"anormal en el nivel del agua del lago de cristales\n";
    std::cout << "============================================================================" <<'\n';
    tablero=true;
    std::cin.get();
    std::cout << std::endl;
  } else {
    std::cin.ignore();
    std::cout << "Continuas en tu camino hacia la taberna\n";
    std::cin.get();
    std::cout << std::endl;
  }
  system("cls");
  std::cout << "Al fin llegas a la taberna y te acercas al mostrador\n";
  if(p.clase=="Ladron"){
    std::cout<< "Mientras te acercabas notas algunas miradas como si te reconocieran de algun lado"<<'\n';
  }
  std::cout << "============================================================================" <<'\n';
  std::cout << "Una persona te atiende  pero parece que no tienes mucho dinero, es una pena," <<'\n'
            << "el cantinero te recomienda realizar encargos para que puedas pagar la " << '\n'
            << "habitacion. **el apunta hacia un tablero de encargos dentro de la taberna**"<<'\n';
  std::cout << "============================================================================" <<'\n';
  std::cin.get();
  
  do{
    std::cout << "1. Encargo: Caza de monstruos en las afueras\n"
                "Parece que unos monstruos han hecho estragos al norte de Nerva, "
                "necesitan exterminarlos.\n"
              << "2. Encargo: Una senora esta buscando su gato\n"
                "Un gato blanco con negro ha desaparecido y parece que la propietaria "
                "lo esta buscando\n"
              << "3. Encargo: Ayuda para realizar una pocion\n"
                "Una persona esta interesada en crear una pocion que ayude a la "
                "enfermedad de su hermana.\n";
    std::cout << "Decides escoger: ";
    std::cin >> encargos;
    switch (encargos) {
      case 1: {
        do{
          system("cls");
          std::cout << "============================================================================" <<'\n';
          std::cout << "Te diriges a la direccion y tal como te dijeron, hay una manada de monstruos" << '\n'
                    << "destruyendo algunos cargamentos abandonados, parece que acabaron con algunos" << '\n' 
                    << "mercaderes, Que decides hacer?"
                    << "\n  A. Atacar ("<<p.Fuerza<<"%)"
                    << "\n  B. poner una trampa ("<<p.sigilo<<"%)" 
                    << "\n  C. Lanzar un hechizo para ahuyentarlos ("<<p.mana<<"%)"
                    << "\n Decision: ";  
          std::cin >> encargo1;
          switch (encargo1) {
            case 'A':
              sucede = AleatorioAccion(p.Fuerza);
              break;

            case 'B':
              sucede = AleatorioAccion(p.sigilo);
              break;

            case 'C':
              sucede = AleatorioAccion(p.mana);
              break;

            default:
              std::cout<<"La desicion que ingresaste no se encuentra entre las opciones"<<'\n';
              break;
          }
        }while(encargo1!='A' && encargo1!='B' && encargo1!='C');
        Sleep(100);
        system("cls");
        if (sucede){
          std::cout << "============================================================================" <<'\n';
          std::cout << "Logras evitar mas destruccion y el reino puede recuperar un poco de la"<<'\n'
                    << "mercancia que fue atacada y algunos mercaderes lograron sobrevivir, te"<< '\n'
                    << "dieron el dinero y en agradecimiento de dara un item aleatorio." << '\n'
                    << "(reputacion aumenta 10%)\n";
          std::cout << "============================================================================" <<'\n';
          p.reputacion+=10;
          Objetos(p);
          Penalizacion(p,penalizacion);
        }
        else{
          std::cout << "============================================================================" <<'\n';
          std::cout << "Los mounstros terminaron destruyendo mucho mas pero parece que al fin se" << '\n'
                    << "retiraron, no lograste salvar a ningun mercader, aun te dan el dinero del" << '\n'
                    << "encargo pero es un poco menos de lo pactado anteriormente, supongo que tendra" << '\n'
                    << "que ver con tu fracaso.\n";
          std::cout << "============================================================================" <<'\n';
        }
        std::cin.ignore();
        std::cin.get();
        system("cls");

        break;
      }

      case 2: {
        do{
          system("cls");
          std::cout
              << "La ultima vez que vieron al gato fue cerca de la plaza, \n"
                "parece que es muy escurridizo que eliges?"
              << "\nA. Perseguirlo (" << p.agilidad << "%)" << '\n'  // depende de la agilidad del personaje
              << "B. Intentar llamar su atención con comida (50%)" << '\n'
              << "Decision: ";  
          std::cin >> encargo2;
          
          switch (encargo2) {
            case 'A':
              sucede = AleatorioAccion(p.agilidad);
              break;

            case 'B':
              sucede = AleatorioAccion(50);
              break;

            default:
              std::cout<<"La desicion que ingresaste no se encuentra entre las opciones"<<'\n';
              Sleep(1000);
              break;
          }
        }while(encargo2!='A' && encargo2!='B');
        std::cin.ignore();
        system("cls");
        if(sucede){
          std::cout << "============================================================================" <<'\n';
          std::cout << "la senora te agradece mucho, parece que el gato es lo unico que le queda," << '\n'
                    << "te da el dinero del encargo y como agradecimiento obtienes un item aleatorio" << '\n'
                    << "esfuerzo y te dio un poco de dinero para pagar la estancia en la taberna." << '\n'
                    << "(reputacion aumenta 10%)\n";
          std::cout << "============================================================================" <<'\n';
          p.reputacion+=10;
          Objetos(p);
          Penalizacion(p,penalizacion);
        }else{
          std::cout << "============================================================================" <<'\n';
          std::cout << "Parece que el gato no se ha dejado atrapar es una pena, vas con la senora\n" << '\n'
                    << "y parece que alguien mas completo el encargo, la señora toma en cuenta tu\n" << '\n'
                    << "esfuerzo y te dio un poco de dinero para pagar la estancia en la taberna.\n";
          std::cout << "============================================================================" <<'\n';
        }
        std::cin.get();
        system("cls");
        break;
      }

      case 3: {
        do{
          system("cls");
          std::cout << "============================================================================" <<'\n';
          std::cout << "Te encontraste con el joven y te dice que tienen que crear una pocima que \n" << '\n'
                    << "ayude a la enfermedad de su hermana";

          if(p.clase != "Mago"){
            std::cout << ", el chico te pregunta si estas seguro\n"" en que puedes hacerlo, no te ves" << '\n'
                      << "como alguien que sepa de estas cosas."<<'\n';
          }
          std::cout << "============================================================================" <<'\n';
          std::cin.get();
          system("cls"); 
          std::cout << "Te envio primero a buscar las hierbas medicinales, a donde decides ir?"                  
                    << "\nA. Bosque norte";
          if(p.clase=="Mago"){
            std::cout << "(como mago sabes que este sitio posee mejores hierbas)";
          }
          std::cout << "\nB. Bosque sur";
          std::cin >> encargo3;
          switch (encargo3) {
            case 'A':
              std::cin.ignore();
              std::cout << "Conseguiste hierbas medicinales de buena calidad tu prob aumenta un 15% momentaneamente"<<'\n';
              p.mana+=15;
              break;
            case 'B':
              std::cin.ignore();
              std::cout << "Conseguiste hierbas medicinales normales" << '\n';
              break;

            default:
              std::cin.ignore();
              std::cout<<"La desicion que ingresaste no se encuentra entre las opciones"<<'\n';
              break;
          }
        }while(encargo3!='A' && encargo3!='B' && encargo3!='C');
        std::cin.ignore();
        std::cin.get();
        system("cls");
        std::cout << "Vuelves con el chico quien esta un poco preocupado, deseas iniciar?" << '\n';
        std::cout << "->Realizar pocion ("<<p.mana<<"%)"<<'\n';
        
        std::cin.get();
        system("cls");
        sucede = AleatorioAccion(p.mana);
        if (encargo3 == 'A'){
          p.mana-=15;
        }
        std::cout << "============================================================================" <<'\n';
        if(sucede){
          std::cout << "La posion fue exitosa, logras obtener una botella extra y el dinero del" << '\n'
                    << "encargo, parece que a la chica le espera un largo futuro por delante" <<'\n'
                    << "aunque por las condiciones en las que el reino se encuentra, quien sabe " << '\n'
                    << "que pasara en el futuro (reputacion aumenta 10%)"<<'\n';
          p.mana+=15;
          p.reputacion+=10;
          Penalizacion(p,penalizacion);
        }else{
          std::cout << "La posion fue un fracaso, el chico parece decepcionado, te da un poco de" << '\n'
                    << "encargo, parece que a la chica le espera un largo futuro por delante" <<'\n'
                    << "aunque por las condiciones en las que el reino se encuentra, quien sabe " << '\n'
                    << "que pasara en el futuro"<<'\n';
        }
        std::cout << "============================================================================" <<'\n';
      }
      default:
        std::cout<<"El encargo no es correcto intente otra vez"<<'\n';
        std::cin.ignore();
        std::cin.get();
        system("cls");
        break;
    }
  }while(encargos!=1&&encargos!=2&&encargos!=3);
  system("cls");
  std::cout << "============================================================================" <<'\n';
  std::cout << "Vuelves a la taberna a descansar, notas una cantidad de guardias mayor que\n"
            << "antes, que estaran buscando?"<<'\n';
  if(p.clase=="Ladron"){
    std::cout << "Decides no confiarte y te escabullers hasta la taberna"<<'\n';
  }
  std::cout << "============================================================================" <<'\n';
  std::cout << std::endl;
  std::cin.get();
  system("cls");
  // Si es el ladron, no te confias y decides escabullirte hasta la taberna
}
void Caballero(struct Personaje& p) {
  bool tablero=false;
  system("cls");
  std::cout << "================================================================" <<'\n';
  std::cout
      << "Llegas al reino de Nerva tras un largo viaje desde un reino vecino, \n"
         "decides ingresar a la ciudad para quedarte un tiempo.\n";

  std::cout << std::endl;
  Fase1(p, tablero);
  std::cout << std::endl;
  std::cout << "===================================================================" <<'\n';
  std::cout << "Dias despues, te notifican que el rey te ha encomendado una \n"
               "mision: encontrar el tesoro. Para ello te envian a un pueblo \n"
               "del norte donde necesitas ganarte la confianza de los \n"
               "pueblerinos de manera que te revelen algunos datos que podrian \n"
               "servirte. Y a su vez, conseguir informacion sobre el grupo de \n"
               "insurgentes que ha causado revuelo en la zona.\n";
  std::cout << "===================================================================" <<'\n';
  std::cin.get();
  system("cls");
  std::cout << std::endl;
  bool fin_partida=false;
  Fase2(p, fin_partida, tablero);
  if(fin_partida){
    return;
  }
  std::cout << std::endl;
}

void Ladron(struct Personaje& p) {
  bool tablero=false;
  system("cls");
  std::cout << "=====================================================================" <<'\n';
  std::cout << "Llegas al reino de Nerva tras un largo viaje desde un reino vecino, \n"
               "decides ingresar a la ciudad para quedarte un tiempo.\nParece que \n"
               "encuentras ciertos carteles que vienen de tu reino donde tu foto \n"
               "aparece como buscado por el Rey Sarmin de Persia, Recompensa $100000 \n"
               "Laures\n";
  std::cout << "=====================================================================" <<'\n';
  std::cin.get();
  system("cls");
  std::cout << std::endl;
  Fase1(p, tablero);
  std::cout << std::endl;
  std::cout << "======================================================================" <<'\n';
  std::cout << "Durante tu estancia por la taberna alguien te reconoce y llama a los \n"
               "caballeros, luego te regresan a tu reino de origen y te encarcelan. \n"
               "Dias despues te enteras que tu reino decidio indultar a criminales \n"
               "que cometieron delitos menores, su proposito no es otro que escoger \n"
               "al azar a uno de los criminales indultados para una mision por \n"
               "pedido del reino de Nerva. Por increible que parezca te han escogido \n"
               "para una importante mision: conseguir un tesoro legendario. El rey \n"
               "de Nerva asegura que no quiere gastar mas recursos de su pueblo y \n"
               "caballeros, y que tambien te ofrecera una parte del tesoro como \n"
               "incentivo. La oferta es tentadora por lo que aceptas, y como primera \n"
               "mision te mandan a un pueblo. El rey Samir, pidio que te lanzaran un \n"
               "hechizo <<rastreador>>, asi podran controlar tus movimientos y si no \n"
               "cumples tu palabra, Nerva te deportara de nuevo.\n";
  std::cout << "======================================================================" <<'\n';
  std::cin.get();
  system("cls");
  std::cout << std::endl;
  bool fin_partida=false;
  Fase2(p, fin_partida, tablero);
  if(fin_partida){
    return;
  }
  std::cout << std::endl;
}

void Mago(struct Personaje& p) {
  bool tablero=false;
  system("cls");
  std::cout << "=================================================================" <<'\n';
  std::cout << "Tras haber viajado por muchos sitios llegas al reino de Nerva, \n"
               "decides que este sera el sitio donde pasaras un tiempo antes \n"
               "de continuar viajando\n";
  std::cout << "=================================================================" <<'\n';

  std::cout << std::endl;
  Fase1(p,tablero);
  std::cout << std::endl;

  std::cout << "=====================================================================" <<'\n';
  std::cout << "En tu estancia por la taberna te has percatado que un grupo de \n"
               "personas te estan observando. Uno de ellos te entrega una carta, \n"
               "luego de leerla te das cuenta que el rey de Nerva te esta pidiendo \n"
               "ayuda para encontrar un tesoro a cambio de una parte del botin, \n"
               "parece que no has pasado desapercibido. Dudas al inicio pero luego \n"
               "piensas en que la recompensa te financiara tus proximas travesias  \n"
               "por lo que terminas aceptando. Para comenzar la mision te envian a \n"
               "un pueblo\n";
  std::cout << "=====================================================================" <<'\n';
  std::cin.get();
  system("cls");
  std::cout << std::endl;
  bool fin_partida=false;
  Fase2(p, fin_partida,tablero);
  if(fin_partida){
    return;
  }
  std::cout << std::endl;
}

void Fase2(struct Personaje& p, bool &fin, bool &tablero) {
  int penalizacion=10;
  int decision;
  std::cout << "=============================================================" <<'\n';
  std::cout << "Al llegar al pueblo observas a una anciana que camina con \n"
               "dificultad porque lleva sus comprados, no parece que tenga \n"
               "informacion importante para revelarte por lo que decides:\n";
  std::cout << "=============================================================" <<'\n'
            << "1. Ayudar\n2. No ayudar\nDecides: ";
  std::cin >> decision;
  if (decision == 1) {
    p.reputacion+=10;
    std::cout << "La anciana te agradece por la ayuda y te entrega un objeto "
                 "como muestra de agradecimiento\n";
    Objetos(p);
    Penalizacion(p, penalizacion);
    std::cin.ignore();
    std::cin.get();
    // aumenta la habilidad segun el objeto obtenido
    std::cout << "=====================================================================" <<'\n';
    std::cout
        << "Llegas a la plaza en busca de pistas, decides preguntarles a los \n"
           "mercaderes ya que como es bien sabido, el gremio de mercaderes del \n"
           "reino de Nerva conoce de todo por sus conexiones con las distintas \n"
           "regiones. Lo unico novedoso que te informan es que hay un grupo de \n"
           "arqueologos que estan trabajando en la zona y que hay mucho movimiento \n"
           "de personas por los caminos\n";   
    std::cout << "=====================================================================" <<'\n';
  } else {
    std::cin.ignore();
    std::cout << "=====================================================================" <<'\n';
    std::cout << "Ahora te diriges a la plaza del pueblo, lugar donde abundan las "
                 "habladurias y quien sabe, tal vez encuentres informacion "
                 "valiosa.\n";
    std::cout << "=====================================================================" <<'\n';
  }
  std::cin.get();
  system("cls");

  Mito1(p, penalizacion, fin);
  Mito2(p, penalizacion);
  Mito3(p, penalizacion, fin,tablero);
}
bool AleatorioAccion(int Probabilidad){
    int t = time(NULL);
    srand(t);
    int prob=rand()%100;
    std::cout<<prob<<" ";
    if (prob<=Probabilidad){
        return true;
    }
    else if(Probabilidad<prob){
        return false;
    }
}
void Penalizacion(struct Personaje &p, int penalizacion){
  //aunque la probabilidad puede llegar a 1 o 100 para el juego queremos evitar que siempre gane el usuario, como minimo 99
  if(p.agilidad>=100){
    std::cout << "Tu agilidad ha sobrepasado el maximo, sufriras una reduccion de -"<<penalizacion<<"%"<<'\n';
    p.agilidad-=penalizacion;
  }
  else if(p.mana>=100){
    std::cout << "Tu mana ha sobrepasado el maximo, sufriras una reduccion de -"<<penalizacion<<"%"<<'\n';
    p.mana-=penalizacion;
  }
  else if(p.Fuerza>=100){
    std::cout << "Tu fuerza ha sobrepasado el maximo, sufriras una reduccion de -"<<penalizacion<<"%"<<'\n';
    p.Fuerza-=penalizacion;
  }
  else if(p.sigilo>=100){
    std::cout << "Tu sigilo ha sobrepasado el maximo, sufriras una reduccion de -"<<penalizacion<<"%"<<'\n';
    p.sigilo-=penalizacion;
  }  
  else if(p.reputacion>=100){
    std::cout << "Tu reputacion ha sobrepasado el maximo, sufriras una reduccion de -"<<penalizacion<<"%"<<'\n';
    p.reputacion-=penalizacion;
  }  
}
void Objetos(struct Personaje &p) {
  int t =
      time(NULL);  // se inicializa t en "nulo" para que funcione en tiempo real
  srand(t);

  // El vector guardara los objetos
  std::vector<std::string> objetos = {"Amuleto protector (mana+)",
                                      "Vestimenta (sigilo+)", "Daga (fuerza+)",
                                      "Botas (agilidad+)"};

  // la probabilidad se consigue con un numero aleatorio que depende de la
  // cantidad de objetos presentes en el vector
  int probabilidad = rand() % objetos.size();

  std::cout << "Has conseguido---> " << objetos[probabilidad] << std::endl;
  std::cout << '\n';
  if(probabilidad==0){
    p.mana +=15;
  }else if(probabilidad==1){
    p.sigilo += 15;
  }else if(probabilidad==2){
    p.Fuerza += 15;
  }else if(probabilidad==3){
    p.agilidad +=15;
  }
}

void Mito1(struct Personaje &p, int penalizacion, bool &fin) {
  bool sucede;
  std::cout << "=====================================================================" <<'\n';
  std::cout
      << "Saliendo de la plaza escuchas a personas murmurar de un rumor en el \n"
         "pueblo de Valdoria, este es sobre el espiritu de un antiguo \n"
         "caballero que aparece cerca de un arbol marchito y que ultimamente \n"
         "aparece con mas frecuencia, especialmente en las noches.\n";
  std::cout << "=====================================================================" <<'\n';
  std::cin.get();
  system("cls");
  std::cout << "=====================================================================" <<'\n';
  std::cout
      << "Dado que: \n"
         "Valdoria es un pueblo con menos poblacion y que esta cerca del \n"
         "poblado en el que te encuentras, decides ir ese mismo dia.\n"
         "Llegas al pueblo y te diriges hacia un jardin con un arbol\n"
         "marchito en el centro, esperas a la noche y te encuentras con \n"
         "el espiritu del caballero Valian, quien le cuenta su tragica \n"
         "historia de como apoyo a la diosa, el surgimiento del amor \n"
         "silencioso hacia ella y su mision final de regresarle la rueda\n"
         "del Equilibrio para que no cayera en manos de los codiciosos,\n"
         "pero esta accion fue vista como traicion a su propio reino\n"
         "y lo mandaron a ejecutar.\n";
  std::cout << "=====================================================================" <<'\n';
  std::cin.get();
  system("cls");
  std::cout << "=====================================================================" <<'\n';
  std::cout
      << "Decides preguntarle si sabe algo sobre esa rueda y la diosa,\n"
         "Valian se niega a revelar  mas sobre ellos y decide juzgar\n"
         "si eres digno de saber mas. ("<<p.reputacion<<"% de posibilidad)\n";
  std::cout << "=====================================================================" <<'\n';
  std::cin.get();
  system("cls");
  sucede=AleatorioAccion(p.reputacion);
  if(sucede){
    std::cout << "==============================================================================" <<'\n';
    std::cout<< "Valian siente tu aura positiva y confía en ti por lo que revela la ubicación de"
                "un “lugar sagrado” donde encontrara información importante, este se encuentra en"
                "las ruinas recónditas en lo profundo del bosque, un lugar olvidado donde hace"
                "siglos se le rendía culto a la diosa, a pesar de que te revelo el lugar no te"
                "revela el nombre de la diosa.";    
    std::cout << "==============================================================================" <<'\n';
  }else{
    std::cout << "===========================================================================" <<'\n';
    std::cout << "El espíritu de Valian no te considera digno y desaparece, haciendo que el\n"
              << "jugador debe encontrar otra manera de localizar las ruinas. En tu camino\n"
              << "de regreso ves un grupo sospechoso de personas, decides seguirlos y ves\n"
              << "que se han apoderado de unas casas abandonadas. No te diste cuenta que\n"
              << "uno de ellos te estaba vigilando desde que te saliste del camino y ahora\n"
              << "te toca enfrentarte a un grupo de ellos.\n"
              << "->Pelear ("<<(p.Fuerza*p.agilidad)/100<<"%)";
    std::cout << "===========================================================================" <<'\n';
    std::cin.get();
    sucede=AleatorioAccion((p.Fuerza*p.agilidad)/100);
    if(sucede){
      std::cout << "===========================================================================" <<'\n';
      std::cout << "Parte del grupo escapó y dejaron sus pertenencias, entre las cosas que\n";
      std::cout << "dejaron uno te llama la atención, parece ser un diario de viaje donde\n";
      std::cout << "revelan que son un grupo de insurgentes que buscan el tesoro legendario\n";
      std::cout << "y que su gran hallazgo son unas ruinas en lo profundo del bosque donde\n";
      std::cout << "parece que hay indicios del tesoro.\n";
      std::cout << "===========================================================================" <<'\n';
      Objetos(p);
      Penalizacion(p, penalizacion);
    }
    else{
      std::cout<<"No lograste derrotarlos. Fin de la partida"<<'\n';
      fin=true;
      return;
    }
  }
  std::cin.get();
  system("cls");
}

void Mito2(struct Personaje &p, int penalizacion) {
  int decision, respuesta;

  // introduccion al nivel
  std::cout << "===========================================================================" <<'\n';
  std::cout << "Con la informacion que obtuviste, llegaste a las ruinas reconditas.\n";
  std::cout << "A las afueras de estas se encuentra un campamento de arqueologos, decides \n"
               "hablar con los que estan ahi para que te cuenten lo que saben, dices que\n";
  std::cout << "vienes de parte del rey.";
  std::cout << "===========================================================================" <<'\n';               
  std::cin.get();
  std::cout << "===========================================================================" <<'\n';
  std::cout << "Te cuentan de la existencia de dos caminos: uno que al final contiene unas \n"
               "palancas que no se sabe su uso y el otro camino que esta bloqueado por\n"
               "escombros, aunque posiblemente se puede acceder por una abertura minuscula.\n"
               "Te contarian mas informacion pero las investigaciones se han atrasado por\n"
               "la intervencion de unos sujetos.\n";
  std::cout << "===========================================================================" <<'\n';
  std::cin.get();
  system("cls");

  std::cout << "===========================================================================" <<'\n';
  std::cout << "Entras a las ruinas y te encuentras con una lapida que dice: \n"
            << "\n->Para los peregrinos que se adentran a este recinto, usen este \n";
  std::cout << "manuscrito si quieren leer los textos\n";
  std::cout << "===========================================================================" <<'\n';
  std::cout << std::endl << "**Has conseguido el manuscrito antiguo**\n";
  std::cin.get();
  system("cls");

  // toma de decision
  std::cout << "===========================================================================" <<'\n';
  std::cout << "Prosigues con tu camino y te encuentras los dos caminos, ";
  std::cout << "teniendo en cuenta lo que te dijeron los arqueologos, \n"
            <<"decides:\n";
  do {
    std::cout
        << "1. Ir por el camino despejado\n"
        << "2. Ir por el camino bloqueado\n";
    std::cin >> decision;
    std::cout << std::endl;

    if (decision == 1) {
      system("cls");
      std::cin.ignore();
      std::cout << std::endl
                << "Tal y como te lo comentaron, al final del camino se encuentran ";
      std::cout << "las palancas.\n";
      std::cin.get();

    } else if (decision == 2) {
      system("cls");
      std::cin.ignore();
      std::cout << "==========================================================================" <<'\n';
      std::cout << "Logras atravesar con dificultad la minuscula abertura, encuentras \n"
                   "unos murales con dibujos y textos." << std::endl;
      std::cin.get();
      std::cout << "En uno de los murales se ve una mujer que parece descender desde el cielo,\n";
      std::cout << "posiblemente una diosa. En el siguiente se ve a la misma mujer rodeada de \n"
                   "muchas personas, el proximo tiene el dibujo de un artefacto, supones\n";
      std::cout << "que es la Rueda del Equilibrio que te comento el espiritu del caballero.\n";
      std::cout << "==========================================================================" <<'\n';
      std::cin.get();
      system("cls");
      std::cout << "==============================================================" <<'\n';
      std::cout << "Sigues observando todo con atencion pero para tu desgracia \n"
                   "los ultimos murales estan destruidos parcialmente \n";
      std::cout << "solo eres capaz de ver personas siendo capturadas por \n"
                   "otras, un mapa fragmentado y unos cristales.\n";
      std::cout << "==============================================================" <<'\n';
      std::cin.get();
      system("cls");
      std::cout << "==========================================================================" <<'\n';
      std::cout << "Finalmente llegas al final del pasillo que tiene una inscripcion que con \n"
                   "el paso del tiempo se ha ido deteriorando pero aun es entendible:\n"<<std::endl;
      std::cout << "\n-->Tu, persona temeraria que te adentras al Templo Recondito, "
                   "estas listo para proseguir tu aventura sabiendo todo nuestro pasado. \n"
                   "¿Seras capaz de terminar con este ciclo al que los humanos estan \n"
                   "condenados a repetir en estas tierras antes bendecidas por la diosa?<--\n";
      std::cout << "==========================================================================" <<'\n'; 
      std::cin.get();
      system("cls");
      std::cout << "Esta inscripcion te dejo mas dudas que respuestas. Sales del pasillo y llegaste ";
      std::cout << " al lugar donde estan las palancas.\n";
      std::cout << std::endl;
      std::cin.get();
    } else {
      system("cls");
      std::cout << "Vuelve a intentarlo\n";
      std::cin.get();    
      system("cls");  
    }
  } while (decision != 1 && decision != 2);
  system("cls");
  std::cout << "===========================================================================" <<'\n';
  std::cout << "En uno de los muros de la sala de las palancas encuentras un texto en un \n"
               "lenguaje muy antiguo que para tu suerte dispones del manuscrito\n";
  std::cout << "por lo que puedes traducirlo:";
  std::cin.get();
  std::cout << std::endl
            << "\n==Tierra que unida fue, ahora se encuentra fragmentada. Su "
               "separacion, causada por:"
            << std::endl;
  std::cout << "Palanca 1: un rey malvado\nPalanca 2: un amor "
               "prohibido\nPalanca 3: un defecto de las personas\n";
  std::cout << "Palanca 4: una diosa==\n" << std::endl;
  do {
    std::cout << "Es un acertijo, teniendo en cuenta lo que has aprendido "
                 "decides activar la palanca:\n";
    std::cin >> respuesta;
    std::cout << std::endl;
    if (respuesta != 3) {
      std::cout << "No sucedio nada por lo que debes activar otra palanca\n";
      std::cin.ignore();
      std::cin.get();
      system("cls");
    }
  } while (respuesta != 3);
  std::cin.get();
  system("cls");
  std::cout << "===============================================================" <<'\n';
  std::cout << "Al resolver el acertijo y jalar la palanca se abrio ante ti "
               "otro pasillo que te llevo a una recamara con dos cofres.\n";
  std::cout << "===============================================================" <<'\n';
  std::cout << std::endl << "Decides abrirlos\n";
  std::cin.get();
  Cofre1(p);
  Cofre2(p);
  Penalizacion(p,penalizacion);
  std::cin.get();

  std::cout << "Observas el lugar una ultima vez para asegurarte que no te \n"
               "pierdas de algun detalle. \n";
  std::cout << "La sala esta repleta de textos pero uno te llama la atencion:\n"
            << std::endl;
  std::cin.get();
  std::cout << "==El lago al norte donde la diosa llora por su amado, es la "
               "solucion al rompecabezas.Se precavido en tu aventura y ";
  std::cout << " Recuerda, viajero, tu codicia te acechara en el final. ==\n"
            << std::endl;
  std::cin.get();
  system("cls");
  std::cout << "===============================================================" <<'\n';
  std::cout << "Sales del lugar, unos arqueologos te interrogan y les comentas \n"
            << "que en las ruinas hay solamente textos antiguos, decides no \n"
            << "contar todo a detalle porque temes que uno de esos sujetos \n"
            << "se haya infiltrado entre los arqueologos. Ahora partes hacia \n"
            << "el norte donde buscaras el lago.\n";
  std::cout << "===============================================================" <<'\n';
  std::cin.get();
  system("cls");
}

void Cofre1(struct Personaje &p) {
  int t = time(NULL);
  srand(t);
  std::vector<std::string> tesoro1 = {"Zapatos magicos (agilidad++)",
                                      "Vestimenta de lino(sigilo++)"};

  int probabilidad1 = rand() % tesoro1.size();

  std::cout << "Has conseguido---> " << tesoro1[probabilidad1] << std::endl;
  std::cout << '\n';
  if (probabilidad1==0){
    p.agilidad += 20;
  }else{
    p.sigilo += 20;
  }
}

void Cofre2(struct Personaje &p) {
  int t = time(NULL);
  srand(t);
  std::vector<std::string> tesoro2 = {
      "Espada de un valiente caballero (fuerza++)",
      "Pergamino de un antiguo "
      "mago(mana++)"};

  int probabilidad2 = rand() % tesoro2.size();

  std::cout << "Has conseguido---> " << tesoro2[probabilidad2] << std::endl;
  std::cout << '\n';
  if (probabilidad2==0){
    p.Fuerza += 20;
  }else{
    p.mana += 20;
  }
}

void Mito3(struct Personaje &p, int penalizacion, bool &fin, bool &tablero) {
  bool sucede;
  int lago;
  char accion1,accion2;

  std::cout << "Al llegar no sabes a que lago podrias dirigirte pues la pista "
               "no fue muy clara "
            << "llegas a una senalización donde te muestran algunas ubicaciones\n ";
  /*(Si el usuario observo el tablero de la fase 1 recordara que el 
  lago cristal estaba presentando un crecimiento extraño) */
  if (tablero){
    std::cout<< "Un recuerdo llego a tu cabeza, nada menos que el encabezado"
             << "encontrado en nerva sobre el lago cristal<<'\n";

    std::cout << "\nComo no perdias nada por ir a investigar te adentras a las ";
                 "profundidades del bosque donde el lago se encuentra.\n";
    std::cin.ignore();
    std::cin.get();
    system("cls");
  }else{
    do {
    std::cout << "Un rotulo te indica la ubicacion de 3 lagos:\n"
              << "por lo que decides ir a investigar el: \n1. Lago Cristal\n2. "
              << "Lago Alaphoe\n3. Lago de las Nubes\n";
    std::cin >> lago;
      if (lago != 1) {
        std::cout
            << "Investigas el lago pero no encuentras nada relevante por lo "
              "que decides regresar al lugar del rotulo";
        std::cin.ignore();
        std::cin.get();
        system("cls");
      }

    } while (lago != 1);
  }
  /*Si no viste el tablero deberás elegir entre 3 lagos , cada uno al que vayas
  y no sea, será una pérdida de tiempo hasta que vas al lago correcto)*/
  std::cout << "===============================================================" <<'\n';
  std::cout << "Te adentras al bosque, la oscuridad emerge en un solo "
               "instante, pero algo llama en lo profundo, un brillo lejano "
               "que parece susurrar tu nombre, decides seguirlo porque en "
               "realidad no tienes opcion. "
               "Estas muy cerca pero algo no se siente bien, algo te esta "
               "observando, pero el lago te llama, o es solo un anhelo "
               "ahogado que perduro por siglos ";
  std::cout << "===============================================================" <<'\n';
  std::cin.ignore();
  std::cin.get();
  system("cls");
  std::cout << "===============================================================" <<'\n';
  std::cout << "De pronto un sonido se escucha en el bosque, las ramas "
               "truenan pero que es ? Parecen pisadas, volteas y una "
               "criatura te mira desde lo lejos, sus ojos parecen penetrar "
               "tu alma, sus largas extremidades sobresalen como si fueran "
               "ramas, parece que busca algo pero eso es para otro momento "
               "porque parece que se acaba de fijar en ti.";
  std::cout << "===============================================================" <<'\n';
  std::cin.ignore();
  std::cin.get();
  do{
    system("cls");
    std::cout << "Se esta acercando muy rapido, has algo antes que te mate\n"
                "A. esquivar ("<<p.agilidad<<"%)\n"
                "B. Contraatacar ("<<p.Fuerza<<"%)\n"
                "C. lanzar hechizo("<<p.mana<<"%)\n";
    std::cin >> accion1;
    switch(accion1){
      case 'A':
        sucede=AleatorioAccion(p.agilidad);
        break;
      case 'B':
        sucede=AleatorioAccion(p.Fuerza);
        break;
      case 'C':
        sucede=AleatorioAccion(p.mana);
        break;
      default:
        std::cout << "ups, parece que te equivocaste\n"
                  << "intentemoslo de nuevo\n";
        std::cin.get();
      break;
    }
  }while(accion1!='A'&&accion1!='B'&&accion1!='C');
  if(sucede){
    system("cls");
    do{
      std::cout << "Eso es, lo hiciste bien, ahora termina con el...\n"
                << "A.Buscar y atacar su punto debil ("<<(p.agilidad*p.sigilo)/100<<"%)\n"
                << "B. Apelar a un ataque con fuerza ("<<p.Fuerza<<"%)\n"
                << "C.Lanzar Hechizo Final ("<<p.mana<<"%)";
      std::cin >> accion2;
        switch(accion2){
          case 'A':
            sucede=AleatorioAccion((p.agilidad*p.sigilo)/100);
            break;
          case 'B':
            sucede=AleatorioAccion(p.Fuerza);
            break;
          case 'C':
            sucede=AleatorioAccion(p.mana);
            break;
          default:
            std::cout << "ups, parece que te equivocaste\n"
                      << "intentemoslo de nuevo\n";
          break; 
    }
    }while(accion2!='A'&&accion2!='B'&&accion2!='C');
    if(sucede){
      std::cout<<"Lograste derrotarlo\n";
      Objetos(p);
      Penalizacion(p,penalizacion);
      std::cout<<"Escuchas un ruido en el lago y vez como de el sale una mujer con vestido blando\n";
    }
  }
  if(!sucede){
    std::cout << "El  wendigo se acerca para acabar de matarte solo te queda una cosa por hacer \n"
              << "("<<p.reputacion<<"% probabilidad de exito)";
    std::cin.ignore();
    std::cin.get();
    sucede=AleatorioAccion(p.reputacion);
    if(sucede){
      std::cout << "=======================================================================" <<'\n';
      std::cout << "DE de pronto se genera un remolino en el agua y de ella sale \n";
      std::cout << "una mujer con un aura brillante, el wendigo se centra en ella\n";
      std::cout << "como si fuera lo que estuvo buscando toda su vida.\n";
      std::cout << "\nLa diosa con todo su esfuerzo lanza un ataque que elimina al wendigo.\n";
      std::cout << "=======================================================================" <<'\n';
    }
    else{
      std::cout << "=======================================================================" <<'\n';
      std::cout << "Nada puede detener al wendigo que se avalanza y te ataca gravemente, sus ojos, \n"
                << "muestran mas codicia, lo ultimo que pudiste ver es a ese mounstro crecer"
                << "mientras tu te desvanecias en el aire";
      std::cout << "=======================================================================" <<'\n';
      std::cin.ignore();
      std::cin.get();
      system("cls");
      std::cout<<"Fin del juego. Moriste por el wendigo";
      fin=true;
      return;
    }
  }
  std::cin.get();
  system("cls");
  std::cout << "=================================================================" <<'\n';
  std::cout << "La mujer parece una diosa, se ve cansada, te acercas al lago \n"
               "y preguntas su nombre\n-"
               "-Yo soy la diosa Ika, humano,\n"
               " No se que buscas aqui pero no te dare nada, sigue tu rumbo y \n"
               " has como si esto nunca paso ";
  std::cout << "=================================================================" <<'\n';
  std::cout << std::endl;
  std::cin.get();
  system("cls");
  std::cout << "=================================================================" <<'\n'; 
  std::cout << "Le explicas que no puedes hacer eso, estas en una mision del reino "
               "para que vuelva a ser prospero como hace mucho tiempo atras\n "
               "La diosa te mira incredula de tu palabra";
  std::cout << "=================================================================" <<'\n'; 
  std::cout << std::endl;
  std::cin.get();
  system("cls");
  std::cout << "=================================================================" <<'\n';
  std::cout << "--He visto a tu raza arruinar su propia paz durante mucho tiempo \n"
               "como un ciclo interminable y crees que tener el tesoro les ayudara \n"
               " en algo, el problema con ellos es creer que un tesoro siempre sera \n"
               " un torrente de dinero y fortuna\n";
  std::cout << "=================================================================" <<'\n';
  std::cout << std::endl;
  std::cin.get();
  system("cls");
  std::cout << "============================================================" <<'\n';
  std::cout<< "No logras comprender al inicio que te dice pero sabes que \n"
              "no tienes alternativa";
  std::cout << "============================================================" <<'\n';
  std::cout << std::endl;
  std::cin.get();
  system("cls");
   std::cout << "============================================================" <<'\n';
  std::cout
      << "--Diosa Ika se lo que hicieron hace muchos años, y se que la "
         "codicia acabo con la vida del caballero\n"
         " ==la diosa parece sorprendida que lo conoces== "
         "\n--Pero aun asi la gente necesita un futuro al que aspirar \n"
         " y para eso necesito el tesoro y la rueda que aqui resguardas\n";
   std::cout << "============================================================" <<'\n';
  std::cout << std::endl;
  std::cin.get();
  system("cls");
   std::cout << "============================================================" <<'\n';
  std::cout << "*La diosa suspiro*--Esta bien ten la rueda pero recuerda \n"
               "que no todo es lo que parece, que el destino y la suerte te \n"
               "protejan aventurero, espero y que tomes una decisión acertada.\n";
   std::cout << "============================================================" <<'\n';
  std::cout << std::endl;
  std::cin.get();
  system("cls");
}