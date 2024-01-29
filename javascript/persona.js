// Prompt the user for their name, surname, and age
const name = prompt("inserisci nome:");
const surname = prompt("Enter your surname:");
const age = prompt("Enter your age:");

// Create a new person object
const person = {
  name: name,
  surname: surname,
  age: age
};

// Log the person object and its contents to the console
console.log("Person object:");
console.log(person);
console.log("Name: " + person.name);
console.log("Surname: " + person.surname);
console.log("Age: " + person.age);