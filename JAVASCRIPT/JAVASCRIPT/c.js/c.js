num1 = parseInt(prompt("Inserisci il primo numero: "))// stampa la frase
num2 = parseInt(prompt("inserisci il secondo numero: "))// stampa la frase
simbolo = prompt("iserisci uno di questi simboli matematici per definire che operazione fare + - / * ** ")// stampa la frase

if(Number.isNaN(num1) || Number.isNaN(num2)){//  permette di verificare se una variabile contiene un numero o una stringa convertibile in un numero
    alert("uno dei due numeri non e' un numero")// se l'if è vero quindi se trova una stringa e non un numero stampa l'alert
}
else{
    switch(simbolo){
        case "+": risultato = num1 + num2// se è stato inserito il + si fa una somma quindi n1 + n2
                  break

        case "-": risultato = num1 - num2// se è stato inserito il - si fa una sottrazione quindi n1 - n2
                  break

        case "/": risultato = num1 / num2// se è stato inserito lo / si fa una divisione quindi n1 / n2
                  break
        
        case "*": risultato = num1 * num2// se è stato inserito l'* si fa una moltiplicazione quindi n1 * n2
                  break

        case "**": risultato = num1 ** num2// se è stato inserito il ** si fa una potenza quindi n1 ** n2
                  break

        default: alert("simbolo inserito inesistente")// se il simbolo che hai inserito non c'è tra quelli possibili ti stampa l'alert
        
    }
    
    alert("il risultato e': " + risultato)// stampa il risultato 
    // uso alert cosi viene piu comodo e ti da la parola ok e non devo aprire la console per veder eil risultato

}