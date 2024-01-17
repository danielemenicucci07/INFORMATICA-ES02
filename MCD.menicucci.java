import java.util.Scanner;
public class MCD {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input di due numeri interi dall'utente
        System.out.print("Inserisci il primo numero: ");
        int numero1 = scanner.nextInt();
        System.out.print("Inserisci il secondo numero: ");
        int numero2 = scanner.nextInt();

       
        int mcd = calcolaMCD(numero1, numero2);//Calcolo il massimo comune divisore

        
        System.out.println("Il Massimo Comune Divisore di " + numero1 + " e " + numero2 + " è: " + mcd);// Stampo il risultato
    
        scanner.close();// Chiudo lo scanner
    }
    // calcolo il l' MCD con l'algoritmo di Euclide
    private static int calcolaMCD(int a, int b) {
        int t,r;
        if (a<b)
        {
            t = a;
            a = b;
            b = t;
        }

        do {
            r = a % b;
            if (r == 0) return b;
            a = b;
            b = r;
        }while(r!=0);

        return 0;
    }
}