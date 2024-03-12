/*Le funzioni toKebabCase, toSnakeCase, toCamelCase, e toPascalCase convertono la stringa in input nei formati richiesti.
La funzione toKebabCase converte la stringa in input in kebab-case, convertendo tutte le lettere in minuscolo, 
sostituendo gli spazi con trattini, e rimuovendo tutti i caratteri non alfanumerici tranne i trattini.
La funzione toSnakeCase converte la stringa in input in snake-case,
 convertendo tutte le lettere in minuscolo, sostituendo gli spazi con trattini bassi, e rimuovendo tutti i caratteri non alfanumerici tranne i trattini bassi.
La funzione toCamelCase converte la stringa in input in camelCase, 
convertendo tutte le lettere in minuscolo, sostituendo gli spazi con lettere maiuscole, e rimuovendo tutti i caratteri non alfanumerici.
La funzione toPascalCase converte la stringa in input in PascalCase, 
convertendo la prima lettera in maiuscolo e applicando la stessa logica di toCamelCase alle restanti lettere.*/

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Inserisci una stringa: ");
        String input = scanner.nextLine();

        System.out.println("Kebab-case: " + toKebabCase(input));
        System.out.println("Snake_case: " + toSnakeCase(input));
        System.out.println("CamelCase: " + toCamelCase(input));
        System.out.println("PascalCase: " + toPascalCase(input));
    }

    private static String toKebabCase(String input) {
        return input.toLowerCase()
                .replaceAll(" ", "-")
                .replaceAll("[^a-z0-9-]", "");
    }

    private static String toSnakeCase(String input) {
        return input.toLowerCase()
                .replaceAll(" ", "_")
                .replaceAll("[^a-z0-9_]", "");
    }

    private static String toCamelCase(String input) {
        StringBuilder sb = new StringBuilder();
        boolean nextIsUpper = false;
        for (char c : input.toLowerCase().toCharArray()) {
            if (c == ' ') {
                nextIsUpper = true;
                continue;
            }
            if (nextIsUpper) {
                sb.append(Character.toUpperCase(c));
                nextIsUpper = false;
            } else {
                sb.append(c);
            }
        }
        return sb.toString();
    }

    private static String toPascalCase(String input) {
        return toCamelCase(input.substring(0, 1).toUpperCase() + input.substring(1));
    }
}