

class Contatore
{


  private:

    int valore;   
    int passo;

  public:  

   Contatore();    /*costruttore con zero parametri - Pone valore a zero e passo ad 1 */
   Contatore(int valore=5);    /*costruttore con 1 parametro - Pone valore uguale a parametro e passo ad 1 */
   Contatore(int valore=5, int passo=10);    /*costruttore con 2 parametri, Pone valore uguale a parametro e passo ad 1 /*
   ~Contatore();  /*distruttore*/

   int getValore();
   void setValore(int);
   int getPasso();
   void setPasso(int);
   void reset();    //pone valore a zero
   void inc();       //incrementa l'attributo valore di tante unità quanto indicato nell'attributo passo
   void dec();      //decrementa l'attributo valore di tante unità quanto indicato nell'attributo passo
   void stampa();  //stampa il valore dei due attributi privati
};