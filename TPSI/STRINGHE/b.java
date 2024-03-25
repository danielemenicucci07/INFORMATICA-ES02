import java.util.Scanner;
import java.util.ArrayList;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Legge in input due stringhe e verifica se sono uguali, ignorando maiuscole/minuscole
        System.out.print("Inserisci la prima stringa: ");
        String str1 = scanner.nextLine();
        System.out.print("Inserisci la seconda stringa: ");
        String str2 = scanner.nextLine();
        System.out.println("Le stringhe sono uguali (ignorando maiuscole/minuscole)? " + areEqualIgnoreCase(str1, str2));

        // Legge in input una stringa e la converte in un numero intero
        System.out.print("Inserisci una stringa: ");
        String str3 = scanner.nextLine();
        try {
            int num = Integer.parseInt(str3);
            System.out.println("Il numero intero è: " + num);
        } catch (NumberFormatException e) {
            System.out.println("La stringa inserita non può essere convertita in un numero intero.");
        }

        // Legge in input una stringa e la converte in un numero decimale
        System.out.print("Inserisci una stringa: ");
        String str4 = scanner.nextLine();
        try {
            double num = Double.parseDouble(str4);
            System.out.println("Il numero decimale è: " + num);
        } catch (NumberFormatException e) {
            System.out.println("La stringa inserita non può essere convertita in un numero decimale.");
        }

        // Legge in input una stringa e la divide in parole, stampando ciascuna parola su una riga separata
        System.out.print("Inserisci una stringa: ");
        String str5 = scanner.nextLine();
        String[] words = str5.split(" ");
        System.out.println("Le parole della stringa sono:");
        for (String word : words) {
            System.out.println(word);
        }

        // Legge in input una stringa e ne stampa i primi 5 caratteri
        System.out.print("Inserisci una stringa: ");
        String str6 = scanner.nextLine();
        System.out.println("I primi 5 caratteri della stringa sono: " + str6.substring(0, Math.min(5, str6.length())));

        // Legge in input una stringa e ne stampa gli ultimi 5 caratteri
        System.out.print("Inserisci una stringa: ");
        String str7 = scanner.nextLine();
        System.out.println("Gli ultimi 5 caratteri della stringa sono: " + str7.substring(Math.max(0, str7.length() - 5)));

        // Legge in input una stringa e la divide in parole, stampando la parola più lunga
        System.out.print("Inserisci una stringa: ");
        String str8 = scanner.nextLine();
        String[] words2 = str8.split(" ");
        String longestWord = "";
        for (String word : words2) {
            if (word.length() > longestWord.length()) {
                longestWord = word;
            }
        }
        System.out.println("La parola più lunga della stringa è: " + longestWord);

        // Legge in input una stringa e verifica se è un acronimo
        System.out.print("Inserisci una stringa: ");
        String str9 = scanner.nextLine();
        System.out.println("La stringa inserita è un acronimo? " + isAcronym(str9));

        // Legge in input due stringhe e verifica se sono anagrammi
        System.out.print("Inserisci la prima stringa: ");
        String str10 = scanner.nextLine();
        System.out.print("Inserisci la seconda stringa: ");
        String str11 = sc