n1 = parseInt(prompt("Inserisci un numero di almeno 2 cifre: "))// stampa la frase
if(Number.isNaN(n1)){//  permette di verificare se una variabile contiene un numero o una stringa convertibile in un numero
alert("il numero non e' un numero")// se l'if è vero quindi se trova una stringa e non un numero stampa l'alert
}

inverti(n1)

function inverti(n1){
while(resto == 0)
{

    resto =parseInt(n1 % 10)

    risultato = parseInt (n1 / 10)

    console.log(risultato)
}
}

console.log()
