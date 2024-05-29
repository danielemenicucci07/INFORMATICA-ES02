window.onload = function () {
    main()
}


function main() {
    password = document.getElementById("password")
    password2 = document.getElementById("ripetiPassword")

    password2.addEventListener("change", () => {
        if (password.value !== password2.value) {
            alert("Password diverse tra di loro")
        }
    })
    
}