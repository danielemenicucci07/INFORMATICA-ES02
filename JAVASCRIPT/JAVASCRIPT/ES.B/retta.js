m = parseInt(prompt("inserisci coefficiente m della retta y=mx+c"));
c = parseInt(prompt("inserisci coefficiente c della retta y=mx+c"));

console.log("Coordinata Y per ascissa -1 = " + ((m * -1) + c));
console.log("Coordinata Y per ascissa 10 = " + ((m * 10) + c));
console.log("Punto di intersezione con l'asse Y = " + ((m * 0) + c));
console.log("Punto di intersezione con l'asse X = " + ((0 - c) / m));