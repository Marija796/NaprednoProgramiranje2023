#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CARDS 52
#define FACES 13

// card structure definition
struct card {
   const char *face; // define pointer face
   const char *suit; // define pointer suit
}; // end struct card

typedef struct card Card; // new type name for struct card

// prototypes
void fillDeck( Card * const wDeck, const char * wFace[],
   const char * wSuit[] );
void shuffle( Card * const wDeck );
void deal( const Card * const wDeck );

int main( void )
{
   Card deck[ CARDS ]; // define array of Cards

  
   //Sto se pravi vo ovoj red?
   //   "Six", "Seven", "Eight", "Nine", "Ten",
   "Jack", "Queen", "King"};```
 // Vo nizata face e inicijalizirana so site broevi na spilot karti, ovaa niza se koristi za popolnuvanje na poleto "face" kaj sekoja posebna karta.

   const char *face[] = { "Ace", "Deuce", "Three", "Four", "Five",
      "Six", "Seven", "Eight", "Nine", "Ten",
      "Jack", "Queen", "King"};

   //Sto se pravi vo ovoj red?
   //Ovoj red kreira niza na pokažuvaci kon niza od stringovi koja gi opišuva znacite na kartite vo igrata. Toa znaci deka sekoj element od nizata e pokažuvac kon eden string koj ja opišuva bojata na kartata.
   const char *suit[] = { "Hearts", "Diamonds", "Clubs", "Spades"};

   srand( time( NULL ) ); //Sto e ovaa naredba ?
   //Ovaa naredba ja koristi srand() funkcijata za da go inicijalizira generatorot na slucajni broevi so vrednosta na vremeto vo sekundi koja e dobiena preku time() funkcijata. So toa što ja koristi ovaa vrednost, srand() generira razlicni posledovatelnosti 
   //na slucajni broevi vo sekoja nova sesija na programata.
   fillDeck( deck, face, suit ); 
   shuffle( deck ); 
   deal( deck ); 
} // end main

// place strings into Card structures
void fillDeck( Card * const wDeck, const char * wFace[],
   const char * wSuit[] )
{
   size_t i; 

   // loop through wDeck
   for ( i = 0; i < CARDS; ++i ) {
      wDeck[ i ].face = wFace[ i % FACES ];
      wDeck[ i ].suit = wSuit[ i / FACES ];
   } // end for
} // end function fillDeck

// shuffle cards
void shuffle( Card * const wDeck )
{
   size_t i; //Sto e ovaa promenliva?
   //Ovaa promenliva 'i' e celobrojna promenliva koja se koristi za broenje na elementite vo ciklusite. size_t e tip na podatoci koj garantira deka vrednostite ke bidat celobrojni i pozitivni.
   size_t j; //Sto e ovaa promenliva i vo koi vrednosti se dviži? 
//se koristi kako brojac vo for jamkata za zamena na karti.j se dviži od 0 do 51, toa e poradi toa što sekoja karta ?? ?????? može da bide zameneta so bilo koja druga karta vo ?????? (vklu?uvaj?i ja nejzinata sopstvena pozicija)

Card temp; // define temporary structure for swapping Cards

   // loop thr
   for ( i = 0; i < CARDS; ++i ) {
      j = rand() % CARDS; // 
      temp = wDeck[ i ];
      wDeck[ i ] = wDeck[ j ];
      wDeck[ j ] = temp;
   } // end for
} // end function shuffle

// deal cards
void deal( const Card * const wDeck )
{
   size_t i; // counter

   // loop through wDeck
   for ( i = 0; i < CARDS; ++i ) {
      printf( "%5s of %-8s%s", wDeck[ i ].face, wDeck[ i ].suit,
         ( i + 1 ) % 4 ? "  " : "\n" );
   } // end for
} // end function deal
//Ovoj kod e implementacija na ednostavna igra so karti.
//Vo kodot se definira struktura Card koja gi sodrži informaciite za edna karta (lice i boja). Se koristi typedef za da se kreira nov tip ime Card od strukturata Card.
//Prvo se definira niza od nizi od znaci so iminjata na licata i niza od nizi od znaci so iminjata na boite. Se koristi fillDeck funkcija za da se napolni array od Card strukturi so site možni kombinacii od lice i boja.
//shuffle funkcijata se koristi slucajno za da se izmešaat karti vo array-ot so karti.
//deal funkcijata se koristi za da se pokažat site karti vo array-ot.
//Od print-ot vo funkcijata deal može da se zabeleži deka igrata ne se igra so standarden paket karti. Namesto toa, sekoja karta e reprezentirana so niza od znaci za liceto i bojata. 
//Kodot na deal funkcijata e takov što sekoja karta se prikažuva so nivo od 5 prazni mesta za liceto na kartata, niza od znaci za bojata od 8 mesta, i prazen prostor ili nov red na sekoi 4 karti.