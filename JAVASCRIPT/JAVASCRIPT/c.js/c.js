n1 = parseInt(prompt("Inserisci il primo numero: "))// stampa la frase
n2 = parseInt(prompt("inserisci il secondo numero: "))// stampa la frase
segno = prompt("iserisci uno di questi segni per definire che operazione fare + - / * ** ")// stampa la frase

if(Number.isNaN(n1) || Number.isNaN(n2)){//  permette di verificare se una variabile contiene un numero o una stringa convertibile in un numero
    alert("uno dei due numeri non e' un numero")// se l'if è vero quindi se trova una stringa e non un numero stampa l'alert
}
else{
    switch(segno){
        case "+": risultato = n1 + n2// se è stato inserito il + si fa una somma quindi n1 + n2
                  break

        case "-": risultato = n1 - n2// se è stato inserito il - si fa una sottrazione quindi n1 - n2
                  break

        case "/": risultato = n1 / n2// se è stato inserito lo / si fa una divisione quindi n1 / n2
                  break
        
        case "*": risultato = n1 * n2// se è stato inserito l'* si fa una moltiplicazione quindi n1 * n2
                  break

        case "**": risultato = n1 ** n2// se è stato inserito il ** si fa una potenza quindi n1 ** n2
                  break

        default: alert("segno inserito inesistente")// se il simbolo che hai inserito non c'è tra quelli possibili ti stampa l'alert
        
    }
    
    alert("il risultato e': " + risultato)// stampa il risultato 
    // uso alert cosi viene piu comodo e ti da la parola ok e non devo aprire la console per veder eil risultato

}