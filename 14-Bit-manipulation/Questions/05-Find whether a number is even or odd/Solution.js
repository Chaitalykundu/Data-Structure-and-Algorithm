// let n = 5

// if(n&1)
//     return "Odd";
// return "Even";


// Alternate

function main(){
    let t = parseInt(prompt("Enter number of test Cases : "))
    while(t--){
        let n = parseInt(prompt("Enter the number : "))

        document.write(evenOrOdd(n));
    }
}

function evenOrOdd(n){
    if(n&1)
        return "Odd";
    return "Even";
}

main();
