n1 = parseInt(prompt("Inserisci il primo numero: "))// stampa la frase
n2 = parseInt(prompt("inserisci il secondo numero: "))// stampa la frase
simbolo = prompt("iserisci uno di questi simboli matematici per definire che operazione fare + - / * ** ")// stampa la frase

if(Number.isNaN(n1) || Number.isNaN(n2)){//  permette di verificare se una variabile contiene un numero o una stringa convertibile in un numero
    alert("uno dei due numeri non e' un numero")// se l'if è vero quindi se trova una stringa e non un numero stampa l'alert
}
else{
    switch(simbolo){

        case "+": 
            const somma = function(a,b) {return a + b};
            alert("il risultato è: " + somma(n1,n2));
            break

        case "-": 
            const sottrazione = function(a,b) {return a - b}
            alert("il risultato è: " + sottrazione(n1,n2))
            break

        case "/": 
            const divisione = function(a,b) {return a / b}
            alert("il risultato é: " + divisione(n1,n2))
            break
        
        case "*": 
            const moltiplicazione = function(a,b) {return a * b}
            alert("il risultato é: " + moltiplicazione(n1,n2))
            break

        case "**":
                const potenza = function(a,b) {return a ** b}
                alert("il risultato è: " + potenza(n1,n2))
                break

        default: alert("simbolo inserito inesistente")// se il simbolo che hai inserito non c'è tra quelli possibili ti stampa l'alert
        
    }
    
    alert("il risultato e': " + risultato)// stampa il risultato 
    // uso alert cosi viene piu comodo e ti da la parola ok e non devo aprire la console per veder eil risultato

}
