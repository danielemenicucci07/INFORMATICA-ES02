m = parseInt(prompt("inserisci coefficiente m della retta y=mx+c"));//parseint trasforma da stringa a intero
c = parseInt(prompt("inserisci coefficiente c della retta y=mx+c"));//parseint trasforma da stringa a intero

console.log("Coordinata Y per ascissa -1 = " + ((m * -1) + c));//-1 è la x
console.log("Coordinata Y per ascissa 10 = " + ((m * 10) + c));//10 è la x
console.log("Punto di intersezione con l'asse Y = " + ((m * 0) + c));
console.log("Punto di intersezione con l'asse X = " + ((0 - c) / m));//formula inversa per calcolare la X = y-c /m