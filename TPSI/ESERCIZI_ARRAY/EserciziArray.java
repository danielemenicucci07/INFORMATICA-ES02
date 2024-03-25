import java.io.*;

public class EserciziArray
{

    public static void main(String args[]) throws NumberFormatException, IOException {

        
        somma1();
        somma2();
        contaMinoriDiZero();
        maggiore();
    }

    public static void somma1() throws NumberFormatException, IOException {
        int i = 0;
        int v[] = new int[10];
        
        InputStreamReader In = new InputStreamReader(System.in);
        BufferedReader Tastiera = new BufferedReader(In);

        for (i = 0; i < 10; i++) {
            System.out.print("Valore: v[" + i + "]= ");// "printf di valore: "
            v[i] = Integer.parseInt(Tastiera.readLine());
        }
        for (i = 0; i < 10; i++) {
            System.out.println("v[" + i + "]=" + v[i]);//ti fa inserire un numero fino a quando non riempi l'array
        }
        int S = 0;
        for (i = 0; i < 10; i++) { // ciclo for per scorrere tutti i valori dell'array per poi svolgere la somma 
            S = S + v[i]; // svolgo la somma 
        }
        System.out.println("somma=" + S);// stampo a schermo la somma 
    }
    
    public static void somma2() throws NumberFormatException, IOException {
        int x;
        InputStreamReader In = new InputStreamReader(System.in);
        BufferedReader Tastiera = new BufferedReader(In);
        do {
            System.out.print("Immettere un numero: ");
            x = Integer.parseInt(Tastiera.readLine());
        } while (x <= 0);// fino a quando non inserisci un numero minore uguale a 0 va avanti
        System.out.println("numero inserito: " + x);// inserisci quanti numeri vuoi sommare
        int i = 0;
        int v[] = new int[x]; // dichiaro una nuovo array dinamico tramite new
        for (i = 0; i < x; i++) { //inserisci x valori dove x è = a NUMERO INSERITO
            System.out.print("Valore: "); // "printf di valore: "
            v[i] = Integer.parseInt(Tastiera.readLine());
        }

        for (i = 0; i < x; i++) {
            System.out.println("v[" + i + "]=" + v[i]); //ti fa inserire un numero fino a quando non riempi l'array
        }
        int S = 0;
        for (i = 0; i < x; i++) {  // ciclo for per scorrere tutti i valori dell'array per poi svolgere la somma 
            S = S + v[i]; // svolgo la somma
        }
        System.out.println("somma=" + S); // stampo la somma
    }

    public static void contaMinoriDiZero() throws NumberFormatException, IOException {
        int x;
        InputStreamReader In = new InputStreamReader(System.in);
        BufferedReader Tastiera = new BufferedReader(In);
        do {
            System.out.print("Immettere un numero: ");// 
            x = Integer.parseInt(Tastiera.readLine());
        } while (x <= 0);

        double[] A = new double[x];
        int c = 0;

        for (int i = 0; i < x; i++) { //inserisci x valori dove x è = a NUMERO INSERITO

            System.out.print("Valore: ");
            A[i] = Double.parseDouble(Tastiera.readLine());

            if(A[i] < 0) c++;
        }


        System.out.println("Numeri minori di 0 = " + c);
    }

    public static void maggiore() throws NumberFormatException, IOException {
        int x;
        InputStreamReader In = new InputStreamReader(System.in);
        BufferedReader Tastiera = new BufferedReader(In);
        do {
            System.out.print("Immettere un numero: ");
            x = Integer.parseInt(Tastiera.readLine());
        } while (x <= 0);

        double[] A = new double[x];

        

        
        for (int i = 0; i < x; i++) {
            System.out.print("Valore: ");
            A[i] = Double.parseDouble(Tastiera.readLine());
        }

        double max = A[0];

        for(int i = 1; i<x; i++)
            if(A[i] > max) max = A[i];

        System.out.println("Numero maggiore = " + max);
    }

}


