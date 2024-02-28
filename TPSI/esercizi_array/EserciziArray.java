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
            System.out.print("Valore: v[" + i + "]= ");
            v[i] = Integer.parseInt(Tastiera.readLine());
        }
        for (i = 0; i < 10; i++) {
            System.out.println("v[" + i + "]=" + v[i]);
        }
        int S = 0;
        for (i = 0; i < 10; i++) {
            S = S + v[i];
        }
        System.out.println("somma=" + S);
    }
    
    public static void somma2() throws NumberFormatException, IOException {
        int x;
        InputStreamReader In = new InputStreamReader(System.in);
        BufferedReader Tastiera = new BufferedReader(In);
        do {
            System.out.print("Immettere un numero: ");
            x = Integer.parseInt(Tastiera.readLine());
        } while (x <= 0);
        System.out.println("numero inserito: " + x);
        int i = 0;
        int v[] = new int[x];
        for (i = 0; i < x; i++) {
            System.out.print("Valore: ");
            v[i] = Integer.parseInt(Tastiera.readLine());
        }

        for (i = 0; i < x; i++) {
            System.out.println("v[" + i + "]=" + v[i]);
        }
        int S = 0;
        for (i = 0; i < x; i++) {
            S = S + v[i];
        }
        System.out.println("somma=" + S);
    }

    public static void contaMinoriDiZero() throws NumberFormatException, IOException {
        int x;
        InputStreamReader In = new InputStreamReader(System.in);
        BufferedReader Tastiera = new BufferedReader(In);
        do {
            System.out.print("Immettere un numero: ");
            x = Integer.parseInt(Tastiera.readLine());
        } while (x <= 0);

        double[] A = new double[x];
        int c = 0;

        for (int i = 0; i < x; i++) {

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


