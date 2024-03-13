import java.io.*;
import java.util.Scanner;

public class Stringhe {

    public static void main(String [] args) {
        
        Scanner scanner = new Scanner(System.in);

        System.out.print("Inserisci una stringa: ");
        String stringa = scanner.nextLine();

        stringa.trim();

        System.out.println("Stringa inserita: " + stringa);

        int lunghezza = stringa.length();
        System.out.println("lunghezza = " + lunghezza);

        char carattereCentrale = stringa.charAt(lunghezza / 2);
        System.out.println("carattereCentrale = " + carattereCentrale);

        stringa = stringa.substring(0,1).toUpperCase() + stringa.substring(1);
        System.out.println("Stringa modificata con prima lettera maiuscola = " + stringa);

        int nOccorenzeA = 0;
        for (int i = 0; i < stringa.length(); i++) {
            if (stringa.charAt(i) == 'a') {
                nOccorenzeA++;
            }
        }
        System.out.println("Numero di occorrenze di 'a' = " + nOccorenzeA);

        String sottoStringa = stringa.substring(0, 4);
        System.out.println("Stringa dal primo al quarto carattere = " + sottoStringa);

        stringa = stringa.toUpperCase();
        System.out.println(stringa);

        stringa = stringa.toLowerCase();
        System.out.println(stringa);
        
        if(isPalindromo(stringa)) System.out.println("La stringa è palindroma");
        else System.out.println("La stringa non è palindroma");


        scanner.close();

    }

    /*
     * Questa funzione restituisce true se la stringa è palindroma, false altrimenti
     */
    public static boolean isPalindromo(String stringa) {
        for(int i = 0; i < stringa.length() / 2; i++) {
            if (stringa.charAt(i)!= stringa.charAt(stringa.length() - 1 - i)) {
                return false;
            }
        }
        return true;
    }

}