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
            std::cout << "Usted eligio al ladron"<<'\n';
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
    int opcion;
  char encargos, encargo1, encargo2, encargo3;

  std::cout << "Decides buscar una taberna para pasar la noche, mientras te "
               "diriges a la taberna escuchas gente hablando sobre un suceso "
               "en una aldea del norte, parece que muchos aldeanos se han "
               "quejado de sucesos anormales y personas merodeando";
  std::cout << std::endl;
  std::cin.get();
  std::cout
      << "Mas adelante encuentras un tablero de noticias\n1. deseas revisarlo "
      << "o\n2. seguir adelante?\n";
  std::cin >> opcion;
  if (opcion == 1) {
    std::cout
        << "Son noticias sin importancia excepto por una donde se habla de un "
           "aumento anormal en el nivel del agua del lago de cristales\n";
    std::cin.get();
    std::cout << std::endl;
  } else {
    std::cout << "Continuas en tu camino hacia la taberna\n";
    std::cin.get();
    std::cout << std::endl;
  }
  std::cin.get();
  system("cls");
  std::cout << "Al fin llegas a la taberna y te acercas al mostrador\n";
  //(Si eres un ladrón recibes algunas miradas como si te hubieran visto en
  // algún lado)

  std::cout
      << "Una persona te atiende  pero parece que no tienes mucho "
         "dinero, es una pena, el cantinero te recomienda realizar "
         "encargos para que puedas pagar la habitacion,\n **el apunta hacia "
         "un tablero de encargos dentro de la taberna**\n";
  std::cin.get();
  std::cout
      << "1. Encargo: Caza de monstruos en las afueras\n"
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
      std::cout
          << "Te diriges a la direccion y tal como te dijeron, hay una manada "
             "de monstruos destruyendo algunos cargamentos abandonados, parece "
             "que acabaron con algunos mercaderes, ¿Que decides hacer?"
          << "\n  A. Atacar"  // mostraremos la probabilidad donde el caballero
                              // tendrá más probabilidad de lograrlo
          << "\n  B. poner una trampa "  // la habilidad del ladrón le dará más
                                         // probabilidad de tener éxito
          << "\n  C. Lanzar un hechizo para ahuyentarlos";  // el mago tiene mas
                                                            // probabilidad de
                                                            // lograrlo
      std::cin >> encargo1;
      switch (encargo1) {
        case 'A':
          // insertar probabilidad
          break;

        case 'B':
          // probabilidad
          break;

        case 'C':
          // probabilidad
          break;

        default:
          break;
      }
      /* RESULTADO DE LA PROBABILIDAD
      ->Si pierdes, los monstruos terminaron destruyendo mucho más pero parece
que al fin se retiraron, no lograste salvar a ningún mercader, aun te dan el
dinero del encargo pero es un poco menos de lo pactado antes, supongo que tendrá
que ver con tu fracaso.
->Si ganas, logras evitar más destrucción y el reino puede
recuperar un poco la mercancía atacada y algunos mercaderes lograron sobrevivir,
te dieron el dinero y en agradecimiento te dará un item aleatorio, tu reputación
aumentó.*/

      break;
    }

    case 2: {
      std::cout
          << "La ultima vez que vieron al gato fue cerca de la plaza, "
             "parece que es muy escurridizo que eliges?"
          << "\n  A. Perseguirlo\n"  // depende de la agilidad del personaje
          << "\n  B. Intentar llamar su atención con comida\n";  // 50/50 de
                                                                 // exito
      std::cin >> encargo2;
      switch (encargo2) {
        case 'A':
          // probabilidad
          break;

        case 'B':
          // probabilidad
          break;

        default:
          break;
      }
      /* RESULTADO PROBABILIDAD
      ->Si pierdes y lo perseguis: Parece que el gato fue más rápido que tú y lo
perdiste
->Si pierdes y le quisiste llamar la atención con comida: Parece que no
lograste que se acercara que pena vuelve donde la señora y parece que alguien
más completo el encargo, parece que la señora tuvo en cuenta tu esfuerzo y te
dio un poco de dinero, lo justo para pagar la estancia en la taberna.
->Si ganas,
la señora te agradece mucho, parece que el gato es lo único que le queda, te da
el dinero del encargo y como agradecimiento te da un item aleatorio.*/

      break;
    }

    case 3: {
      std::cout << "Te encontraste con el joven y te dice que tienen que crear "
                   "una pocima que ayude a la enfermedad de su hermana,";
      /*si no eres un mago aparecerá este mensaje)
          El chico te pregunta si estas seguro en que puedes hacerlo,
      no te ves como alguien que sepa de estas cosas.*/
      std::cout << "Te envio primero a buscar las hierbas medicinales, a donde "
                   "decides ir?\nA. Bosque norte"  //(mago tiene mas exito)
                << "\nB. Bosque sur";
      std::cin >> encargo3;
      switch (encargo3) {
        case 'A':
          // probabilidad
          break;

        case 'B':
          // probabilidad
          break;

        default:
          break;

          /*->Si lo logras, consigues una poción extra, el dinero del encargo y
  tu reputación aumenta, parece que la joven le espera un gran futuro, claro que
  por las condiciones en que se encuentra el reino, estar sano no es lo que te
  garantiza un buen futuro
  ->Si no, el chico parece decepcionado, te da un poco de
  dinero por tu ayuda en la recolección, que futuro tan incierto para la joven
  que no podrá mejorar por el momento
  */
      }
    }

    default:
      break;
  }
  std::cin.get();
  system("cls");

  std::cout << "Vuelves a la taberna a descansar, notas una cantidad de "
               "guardias mayor que antes, que estaran buscando?";
  std::cout << std::endl;
  std::cin.get();
  system("cls");
  // Si es el ladron, no te confias y decides escabullirte hasta la taberna
}

void Caballero(struct Personaje& p);
void Ladron(struct Personaje& p);
void Mago(struct Personaje& p);
void Fase2(struct Personaje& p);
void Objetos();
void Mito1();
void Mito2();
void Cofre1();
void Cofre2();
void Mito3();

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

void Caballero(struct Personaje& p) {
  std::cout
      << "Llegas al reino de Nerva tras un largo viaje desde un reino vecino, "
         "decides ingresar a la ciudad para quedarte un tiempo.\n";

  std::cout << std::endl;
  Fase1(p);
  std::cout << std::endl;

  std::cout << "Dias despues, te notifican que el rey te ha encomendado una "
               "mision: encontrar el tesoro. Para ello te envian a un pueblo "
               "del norte donde necesitas ganarte la confianza de los "
               "pueblerinos de manera que te revelen algunos datos que podrian "
               "servirte. Y a su vez, conseguir informacion sobre el grupo de "
               "insurgentes que ha causado revuelo en la zona.\n";
  std::cin.get();
  std::cout << std::endl;
  Fase2(p);
  std::cout << std::endl;
}

void Ladron(struct Personaje& p) {
  std::cout
      << "Llegas al reino de Nerva tras un largo viaje desde un reino vecino, "
         "decides ingresar a la ciudad para quedarte un tiempo.\nParece que "
         "encuentras ciertos carteles que vienen de tu reino donde tu foto "
         "aparece como buscado por el Rey Sarmin de Persia, Recompensa $100000 "
         "Laures\n";

  std::cout << std::endl;
  Fase1(p);
  std::cout << std::endl;

  std::cout
      << "Durante tu estancia por la taberna alguien te reconoce y llama a los "
         "caballeros, luego te regresan a tu reino de origen y te encarcelan. "
         "Dias despues te enteras que tu reino decidio indultar a criminales "
         "que cometieron delitos menores, su proposito no es otro que escoger "
         "al azar a uno de los criminales indultados para una mision por "
         "pedido del reino de Nerva. Por increible que parezca te han escogido "
         "para una importante mision: conseguir un tesoro legendario. El rey "
         "de Nerva asegura que no quiere gastar mas recursos de su pueblo y "
         "caballeros, y que tambien te ofrecera una parte del tesoro como "
         "incentivo. La oferta es tentadora por lo que aceptas, y como primera "
         "mision te mandan a un pueblo. El rey Samir, pidio que te lanzaran un "
         "hechizo <<rastreador>>, asi podran controlar tus movimientos y si no "
         "cumples tu palabra, Nerva te deportara de nuevo.\n";
  std::cout << std::endl;
  Fase2(p);
  std::cout << std::endl;
}

void Mago(struct Personaje& p) {
  std::cout << "Tras haber viajado por muchos sitios llegas al reino de Nerva, "
               "decides que este será el sitio donde pasaras un tiempo antes "
               "de continuar viajando\n";

  std::cout << std::endl;
  Fase1(p);
  std::cout << std::endl;

  std::cout
      << "En tu estancia por la taberna te has percatado que un grupo de "
         "personas te estan observando. Uno de ellos te entrega una carta, "
         "luego de leerla te das cuenta que el rey de Nerva te esta pidiendo "
         "ayuda para encontrar un tesoro a cambio de una parte del botin, "
         "parece que no has pasado desapercibido. Dudas al inicio pero luego "
         "piensas en que la recompensa te financiara tus proximas travesias  "
         "por lo que terminas aceptando. Para comenzar la mision te envian a "
         "un pueblo\n";
  std::cout << std::endl;
  Fase2(p);
  std::cout << std::endl;
}

void Fase2(struct Personaje& p) {
  int decision;
  std::cout << "Al llegar al pueblo observas a una anciana que camina con "
               "dificultad porque lleva sus comprados, no parece que tenga "
               "informacion importante para revelarte por lo que decides:\n"
            << "1. Ayudar\n2. No ayudar\nDecides: ";
  std::cin >> decision;
  if (decision == 1) {
    // aumenta la reputacion
    std::cout << "La anciana te agradece por la ayuda y te entrega un objeto "
                 "como muestra de agradecimiento\n";
    Objetos();
    std::cin.get();
    // aumenta la habilidad segun el objeto obtenido
    std::cout
        << "Llegas a la plaza en busca de pistas, decides preguntarles a los "
           "mercaderes ya que como es bien sabido, el gremio de mercaderes del "
           "reino de Nerva conoce de todo por sus conexiones con las distintas "
           "regiones. Lo unico novedoso que te informan es que hay un grupo de "
           "arqueologos que "
           "estan trabajando en la zona y que hay mucho movimiento de personas "
           "por los caminos\n ";
  } else {
    std::cout
        << "Ahora te diriges a la plaza del pueblo, lugar donde abundan las "
           "habladurias y quien sabe, tal vez encuentres informacion "
           "valiosa.\n";
  }
  std::cin.get();
  system("cls");

  Mito1();
  Mito2();
  Mito3();
}

void Objetos() {
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
}

void Mito1() {
  std::cout
      << "Saliendo de la plaza escuchas a personas murmurar de un rumor en el "
         "pueblo de Valdoria, este es sobre el espiritu de un antiguo "
         "caballero que aparece cerca de un arbol marchito y que ultimamente "
         "aparece con mas frecuencia, especialmente en las noches.\n";
  std::cin.get();
  system("cls");
  std::cout
      << "Dado que "
         "Valdoria es un pueblo con menos poblacion y que esta cerca del "
         "poblado en el "
         "que te encuentras, decides ir ese mismo dia. Llegas al pueblo y te "
         "diriges hacia un jardin con un arbol marchito en el centro, esperas "
         "a la noche y te encuentras con el espiritu del caballero Valian, "
         " quien le cuenta su tragica historia de como apoyo a la diosa, "
         " el surgimiento del amor silencioso hacia ella y su mision final de"
         " regresarle la rueda del Equilibrio para que no cayera en manos de "
         "los codiciosos, pero esta accion fue vista como "
         "traicion "
         " a su propio reino y lo mandaron a ejecutar.\n";
  std::cin.get();
  system("cls");
  std::cout
      << "Decides preguntarle "
         " si sabe algo sobre esa rueda y la diosa, Valian se niega a revelar "
         " mas sobre ellos y decide juzgar si eres digno de saber mas.\n";
  /*Requisito REPUTACION
  ->Logras convencerlo: (Requisito Reputación)
Valian siente tu aura positiva y confía en ti por lo que revela la ubicación de
un “lugar sagrado” donde encontrara información importante, este se encuentra en
las ruinas recónditas en lo profundo del bosque, un lugar olvidado donde hace
siglos se le rendía culto a la diosa, a pesar de que te revelo el lugar no te
revela el nombre de la diosa.

->No logras convencerlo
El espíritu de Valian no te considera digno y desaparece, haciendo que el
jugador debe encontrar otra manera de localizar las ruinas. En tu camino de
regreso ves un grupo sospechoso de personas, decides seguirlos y ves que se han
apoderado de unas casas abandonadas. No te diste cuenta que uno de ellos te
estaba vigilando desde que te saliste del camino y ahora te toca enfrentarte a
un grupo de ellos.
      **Éxito (depende de la probabilidad de tener fuerza y agilidad)
        Parte del grupo escapo y dejaron sus pertenencias, entre las cosas que
dejaron uno te llama la atención, parece ser un diario de viaje donde revelan
que son un grupo de insurgentes que buscan el tesoro legendario y que su gran
hallazgo son unas ruinas en lo profundo del bosque donde parecen que hay
indicios del tesoro.
        **No logras derrotarlos: fin de la partida
*/
  std::cin.get();
  system("cls");
}

void Mito2() {
  int decision, respuesta;

  // introduccion al nivel
  std::cout << "Con la informacion que obtuviste, llegaste a las ruinas "
               "reconditas. A las afueras";
  std::cout << " de estas se encuentra un campamento de arqueologos, decides "
               "hablar con los que";
  std::cout << " estan ahi para que te cuenten lo que saben, dices que vienes "
               "de parte del rey.";
  std::cin.get();
  std::cout << " Te cuentan de la existencia de dos caminos: uno que al final "
               "contiene unas palancas";
  std::cout << " que no se sabe su uso y el otro camino que esta bloqueado por "
               "escombros, aunque";
  std::cout << " posiblemente se puede acceder por una abertura minuscula. Te "
               "contarian mas";
  std::cout << " informacion pero las investigaciones se han atrasado por la "
               "intervencion de unos";
  std::cout << " sujetos.\n" << std::endl;
  std::cin.get();
  system("cls");

  std::cout << "Entras a las ruinas y te encuentras con una lapida que dice: ";
  std::cout
      << std::endl
      << "\n->Para los peregrinos que se adentran a este recinto, usen este ";
  std::cout << "manuscrito si quieren leer los textos:<-\n";
  std::cout << std::endl << "**Has conseguido el manuscrito antiguo**\n";
  std::cin.get();
  system("cls");

  // toma de decision
  std::cout << "Prosigues con tu camino y te encuentras los dos caminos, ";
  std::cout
      << "teniendo en cuenta lo que te dijeron los arqueologos, decides:\n";
  do {
    std::cout
        << "1. Ir por el camino despejado\n2. Ir por el camino bloqueado\n";
    std::cin >> decision;
    std::cout << std::endl;

    if (decision == 1) {
      std::cout
          << std::endl
          << "Tal y como te lo comentaron, al final del camino se encuentran ";
      std::cout << "las palancas.\n";
      std::cin.get();

    } else if (decision == 2) {
      std::cout << "Logras atravesar con dificultad la minuscula abertura, "
                   "encuentras unos murales con dibujos ";
      std::cout << "y textos." << std::endl;
      std::cin.get();
      std::cout << "En uno de los murales se ve una mujer que parece "
                   "descender desde el cielo, ";
      std::cout << "posiblemente una diosa. En el siguiente se ve a la misma "
                   "mujer rodeada de muchas personas, ";
      std::cout
          << "el proximo tiene el dibujo de un artefacto, supones que es la "
             "Rueda del Equilibrio que te comento el espiritu del caballero.\n"
          << std::endl;
      std::cin.get();
      std::cout << "Sigues observando todo con atencion pero para tu desgracia "
                   "los ultimos murales estan destruidos parcialmente ";
      std::cout << "solo eres capaz de ver personas siendo capturadas por "
                   "otras, un mapa fragmentado y unos cristales.\n";
      std::cin.get();
      std::cout << std::endl;
      std::cout
          << "Finalmente llegas al final del pasillo que tiene una inscripcion "
             "que con el paso del tiempo se ha ido deteriorando "
             "pero aun es entendible:"
          << std::endl;
      std::cout
          << "\n-->Tu, persona temeraria que te adentras al Templo Recondito, "
             "estas listo para proseguir tu aventura sabiendo todo lo "
             "que acabas de ver en los murales. \n"
             "¿Seras capaz de terminar con este ciclo al que los humanos "
             "estan condenados a repetir en estas "
             "tierras antes bendecidas por la diosa?<--\n";
      std::cout << std::endl
                << "Esta inscripcion te dejo mas dudas que respuestas. ";
      std::cout << "Sales del pasillo y llegaste al lugar donde estan las "
                   "palancas.\n";
      std::cout << std::endl;
      std::cin.get();

    } else {
      std::cout << "Vuelve a intentarlo\n";
    }
  } while (decision != 1 && decision != 2);

  std::cout << "En uno de los muros de la sala de las palancas encuentras un "
               "texto en un lenguaje muy antiguo ";
  std::cout << "que para tu suerte dispones del manuscrito por lo que puedes "
               "traducirlo:";
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
    }
  } while (respuesta != 3);
  std::cin.get();
  system("cls");

  std::cout << "Al resolver el acertijo y jalar la palanca se abrio ante ti "
               "otro pasillo que te llevo a una recamara con dos cofres.\n";
  std::cout << std::endl << "Decides abrirlos\n";
  std::cin.get();
  Cofre1();
  Cofre2();
  std::cin.get();

  std::cout << "Observas el lugar una ultima vez para asegurarte que no te "
               "pierdas de algun detalle. ";
  std::cout << "La sala esta repleta de textos pero uno te llama la atencion:\n"
            << std::endl;
  std::cin.get();
  std::cout << "==El lago al norte donde la diosa llora por su amado, es la "
               "solucion al rompecabezas. ";
  std::cout << "Se precavido en tu aventura. Recuerda, viajero, tu codicia "
               "puede ser tu perdicion.==\n"
            << std::endl;
  std::cin.get();
  std::cout << "Sales del lugar, unos arqueologos te interrogan y les comentas "
               "que en las ruinas hay solamente "
               "textos antiguos, decides no contar todo a detalle porque temes "
               "que uno de esos sujetos ";
  "se haya infiltrado entre los arqueologos. Ahora partes hacia "
  "el norte donde buscaras el lago.";
  std::cout << std::endl;
  std::cin.get();
  system("cls");
}

void Cofre1() {
  int t = time(NULL);
  srand(t);
  std::vector<std::string> tesoro1 = {"Zapatos magicos (agilidad+)",
                                      "Vestimenta de lino(sigilo++)"};

  int probabilidad1 = rand() % tesoro1.size();

  std::cout << "Has conseguido---> " << tesoro1[probabilidad1] << std::endl;
  std::cout << '\n';
}

void Cofre2() {
  int t = time(NULL);
  srand(t);
  std::vector<std::string> tesoro2 = {
      "Espada de un valiente caballero (fuerza++)",
      "Pergamino de un antiguo "
      "mago(mana++)"};

  int probabilidad2 = rand() % tesoro2.size();

  std::cout << "Has conseguido---> " << tesoro2[probabilidad2] << std::endl;
  std::cout << '\n';
}

void Mito3() {
  int lago;
  char accion;

  std::cout << "Al llegar no sabes a que lago podrias dirigirte pues la pista "
               "no fue muy clara "
            << "llegas a una senalización donde te muestran la ubicacion\n ";
  /*(Si viste el tablero recordarás que el lago cristal estaba presentando un
crecimiento extraño) */
  std::cout << "Como no perdias nada por ir a investigar te adentras a las ";
  "profundidades del bosque donde el lago se encuentra.\n";
  /*Si no viste el tablero deberás elegir entre 3 lagos , cada uno al que vayas
  y no sea, será una pérdida de tiempo hasta que vas al lago correcto)*/
  do {
    std::cout << "Llegas al lugar y encuentras un rotulo donde indica el lugar "
                 "de 3 lagos "
              << "por lo que decides ir a investigar el: \n1. Lago Cristal\n2. "
                 "Lago Alaphoe\n3. Lago de las Nubes\n";
    std::cin >> lago;
    if (lago != 1) {
      std::cout
          << "Investigas el lago pero no encuentras nada relevante por lo "
             "que decides regresar al lugar del rotulo";
      std::cout << std::endl;
    }

  } while (lago != 1);

  std::cout << "Te adentras al bosque, la oscuridad emerge en un solo "
               "instante, pero algo llama en lo profundo, un brillo lejano "
               "que parece susurrar tu nombre, decides seguirlo porque en "
               "realidad no tienes opcion. "
               "Estas muy cerca pero algo no se siente bien, algo te esta "
               "observando, pero el lago te llama, o es solo un anhelo "
               "ahogado que perduro por siglos ";
  std::cin.get();
  std::cout << "De pronto un sonido se escucha en el bosque, las ramas "
               "truenan pero que es ? Parecen pisadas, volteas y una "
               "criatura te mira desde lo lejos, sus ojos parecen penetrar "
               "tu alma, sus largas extremidades sobresalen como si fueran "
               "ramas, parece que busca algo pero eso es para otro momento "
               "porque parece que se acaba de fijar en ti.";
  std::cin.get();
  std::cout << "Se esta acercando muy rapido, has algo antes que te mate\n"
               "A. esquivar\nB. Contraatacar\nC. lanzar hechizo\n";
  std::cin >> accion;
  /*
  ***Si es exitoso
A. lo lograste vamos bien ahora hay que terminar con el
B buscar y atacar en punto débil
C. lanzar hechizo final
Si todo sale bien un remolino aparece del lago y de él aparece una mujer con su
traje blanco que flota en el agua será esta la diosa?

***Si pierdes
el wendigo se acerca y dará su ataque final, de pronto se genera un remolino en
el agua y de ella sale una mujer con un aura brillante, el wendigo se centra en
ella como si fuera lo que estuvo buscando toda su vida

La diosa con todo su esfuerzo lanza un ataque que elimina al wendigo
*/
  std::cin.get();
  system("cls");
  std::cout
      << "La mujer parece una diosa, se ve cansada, te acercas al lago "
         "y preguntas su nombre\n--Yo soy la diosa Ika, humano,\nNo se que "
         "buscas aqui pero no te dare nada, sigue tu rumbo y has como "
         "si esto nunca paso ";
  std::cout << std::endl;
  std::cin.get();
  std::cout
      << "Le explicas que no puedes hacer eso, estas en una mision del reino "
         "para que vuelva a ser prospero como hace mucho tiempo atras\nLa "
         "diosa te "
         "mira incredula de tu palabra";
  std::cout << std::endl;
  std::cin.get();
  std::cout << "--He visto a tu raza arruinar su "
               "propia paz durante mucho tiempo como un ciclo interminable y "
               "crees que "
               "tener el tesoro les ayudara en algo, el problema con ellos es "
               "creer que un tesoro siempre sera un torrente de dinero y "
               "fortuna\n";
  std::cout << std::endl;
  std::cin.get();
  std::cout
      << "No logras comprender al inicio que te dice pero sabes que "
         "no tienes alternativa, ya sea porque tienes la maldicion que le "
         "pusieron a un ladron o porque deseas la recompensa que sera dada a "
         "un "
         "mago o el honor de querer un futuro mejor para el reino por parte "
         "de un caballero\n";
  std::cout << std::endl;
  std::cin.get();
  std::cout
      << "--Diosa Ika se lo que hicieron hace muchos años, y "
         "se que la codicia acabo con la vida del caballero\n ==la diosa "
         "parece "
         "sorprendida que lo conoces==\n--Pero aun asi la gente necesita un "
         "futuro que aspirar a obtener y para eso necesito el tesoro y la "
         "rueda que aqui resguardas\n";
  std::cout << std::endl;
  std::cin.get();
  std::cout << "--Esta bien ten la rueda pero recuerda "
               "que no todo es lo que parece, que el destino y la suerte te "
               "protejan aventurero, espero y que tomes una decisión acertada.";
  std::cout << std::endl;
  std::cin.get();
  system("cls");
}
