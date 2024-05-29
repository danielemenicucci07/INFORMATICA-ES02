const pass = document.getElementById("password");// prende elemento password tramite id 

pass.addEventListener("change", () => {// c'è un evento 
    if(pass.value.length < 8){// se ha meno di 8 caratteri
        pass.style.backgroundColor = "red";// diventa rossa perchè sbagliata
    }    
    else{
        pass.style.backgroundColor = "green";// diventa verde perchè corretta
    }
});