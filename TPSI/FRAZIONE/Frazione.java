public class Frazione {
    // Campi
    private int numeratore;
    private int denominatore;
    // Costruttore

    public Frazione(int numeratore, int denominatore) {
        this.numeratore = numeratore;
        this.denominatore = denominatore;
    }
    public Frazione()
    {
        numeratore=0;
        denominatore=1;
    }
       
    
    // Metodo per ottenere il numeratore
    public int getNumeratore() {
        return numeratore;
    }
     // Metodo per ottenere il denominatore
    public int getDenominatore() {
        return denominatore;
    }
    // Metodo per ottenere la rappresentazione testuale della frazione
    @Override
    public String toString() {
        return numeratore + "/" + denominatore;
    }
    // Metodo per sommare due frazioni
    public Frazione somma(Frazione altraFrazione) {
        int nuovoNumeratore = this.numeratore * altraFrazione.denominatore
                + altraFrazione.numeratore * this.denominatore;
        int nuovoDenominatore = this.denominatore * altraFrazione.denominatore;

        return new Frazione(nuovoNumeratore, nuovoDenominatore);
    }
 
    public Frazione moltiplica(Frazione altraFrazione) {
        int nuovoNumeratore = this.numeratore * altraFrazione.numeratore;
        int nuovoDenominatore = this.denominatore * altraFrazione.denominatore;

        return new Frazione(nuovoNumeratore, nuovoDenominatore);
    }
    public Frazione sottrai(Frazione altraFrazione) {
        int nuovoNumeratore = this.numeratore * altraFrazione.denominatore
                - altraFrazione.numeratore * this.denominatore;
        int nuovoDenominatore = this.denominatore * altraFrazione.denominatore;

        return new Frazione(nuovoNumeratore, nuovoDenominatore);
    }

    public Frazione dividi(Frazione altraFrazione) {
        int nuovoNumeratore = this.numeratore * altraFrazione.denominatore;
        int nuovoDenominatore = this.denominatore * altraFrazione.numeratore;

        return new Frazione(nuovoNumeratore, nuovoDenominatore);
    }
  
}