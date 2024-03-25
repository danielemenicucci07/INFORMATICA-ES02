/*Le funzioni isValidItalianPhoneNumber, isValidEmail, isValidURL, isValidIP, 
isValidItalianFiscalCode, isValidItalianIBAN, e isValidISBN13 
verificano se le stringhe in input sono rispettivamente un numero di telefono italiano valido,
 un indirizzo email valido, un URL valido, un indirizzo IP valido,
  un codice fiscale italiano valido, un codice IBAN italiano valido, e un codice ISBN-13 valido.*/

import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Inserisci una stringa: ");
        String input = scanner.nextLine();

        // Verifica se è un numero di telefono italiano valido
        if (isValidItalianPhoneNumber(input)) {
            System.out.println("Il numero inserito è un numero di telefono italiano valido.");
        } else {
            System.out.println("Il numero inserito non è un numero di telefono italiano valido.");
        }

        // Verifica se è un indirizzo email valido
        System.out.print("Inserisci una stringa: ");
        input = scanner.nextLine();

        if (isValidEmail(input)) {
            System.out.println("L'indirizzo inserito è un indirizzo email valido.");
        } else {
            System.out.println("L'indirizzo inserito non è un indirizzo email valido.");
        }

        // Verifica se è un URL valido
        System.out.print("Inserisci una stringa: ");
        input = scanner.nextLine();

        if (isValidURL(input)) {
            System.out.println("L'URL inserito è un URL valido.");
        } else {
            System.out.println("L'URL inserito non è un URL valido.");
        }

        // Verifica se è un indirizzo IP valido
        System.out.print("Inserisci una stringa: ");
        input = scanner.nextLine();

        if (isValidIP(input)) {
            System.out.println("L'indirizzo inserito è un indirizzo IP valido.");
        } else {
            System.out.println("L'indirizzo inserito non è un indirizzo IP valido.");
        }

        // Verifica se è un codice fiscale italiano valido
        System.out.print("Inserisci una stringa: ");
        input = scanner.nextLine();

        if (isValidItalianFiscalCode(input)) {
            System.out.println("Il codice inserito è un codice fiscale italiano valido.");
        } else {
            System.out.println("Il codice inserito non è un codice fiscale italiano valido.");
        }

        // Verifica se è un codice IBAN italiano valido
        System.out.print("Inserisci una stringa: ");
        input = scanner.nextLine();

        if (isValidItalianIBAN(input)) {
            System.out.println("Il codice inserito è un codice IBAN italiano valido.");
        } else {
            System.out.println("Il codice inserito non è un codice IBAN italiano valido.");
        }

        // Verifica se è un codice ISBN-13 valido
        System.out.print("Inserisci una stringa: ");
        input = scanner.nextLine();

        if (isValidISBN13(input)) {
            System.out.println("Il codice inserito è un codice ISBN-13 valido.");
        } else {
            System.out.println("Il codice inserito non è un codice ISBN-13 valido.");
        }
    }

    private static boolean isValidItalianPhoneNumber(String input) {
        return input.matches("^\\+39\\d{9}$");
    }

    private static boolean isValidEmail(String input) {
        String emailRegex = "^[A-Za-z0-9+_.-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,}$";
        return Pattern.compile(emailRegex).matcher(input).matches();
    }

    private static boolean isValidURL(String input) {
        try {
            new java.net.URL(input);
           return true;
        } catch (Exception e) {
            return false;
        }
    }

    private static boolean isValidIP(String input) {
        String ipRegex = "^(([0-9]|[1-9][0-9]|1[0-9]{2}|2[0-4][0-9]|25[0-5])\\.){3}([0-9]|[1-9][0-9]|1[0-9]{2}|2[0-4][0-9]|25[0-5])$";
        return Pattern.compile(ipRegex).matcher(input).matches();
    }

    private static boolean isValidItalianFiscalCode(String input) {
        if (input.length() != 16) {
            return false;
        }
        String[] letters = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};
        String[] weights = {1, 0, 5, 7, 9, 13, 15, 17, 19, 21, 2, 4, 18, 20, 11, 3, 6, 8, 12, 14, 16, 1, 0, 5, 7, 9};
        int sum = 0;
        for (int i = 0; i < 16; i++) {
            if (i < 15 && Character.isLetter(input.charAt(i))) {
                sum += weights[i] * letters.indexOf(input.substring(i, i + 1).toUpperCase());
            } else if (Character.isDigit(input.charAt(i))) {
                sum += weights[i] * Integer.parseInt(input.substring(i, i + 1));
            } else {
                return false;
            }
        }
        return sum % 26 == 0;
    }

    private static boolean isValidItalianIBAN(String input) {
        if (input.length() != 27) {
            return false;
        }
        int sum = 0;
        for (int i = 0; i < 27; i++) {
            if (!Character.isDigit(input.charAt(i))) {
                return false;
            }
            int digit = Character.getNumericValue(input.charAt(i));
            if (i % 2 == 0) {
                digit *= 2;
                sum += digit > 9 ? digit - 9 : digit;
            } else {
                sum += digit;
            }
        }
        return sum % 97 == 1;
    }

    private static boolean isValidISBN13(String input) {
        if (input.length() != 13) {
            return false;
        }
        int sum = 0;
        for (int i = 0; i < 13; i++) {
            if (!Character.isDigit(input.charAt(i))) {
                return false;
            }
            int digit = Character.getNumericValue(input.charAt(i));
            if (i % 2 == 0) {
                digit *= 3;
            }
            sum += digit;
        }
        return sum % 10 == 0;
    }
}