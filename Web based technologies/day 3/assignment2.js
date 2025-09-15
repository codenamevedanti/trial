let a = ["Wagnor", "BMW", "Volkswagen", "Thar"];
let key = parseInt(prompt("enter case no:"));

switch (key) {
    case 1:
        a.unshift("Celerio");
        console.log(a);
        break;
    case 2:
        a.pop();
        console.log(a);
        break;
    case 3:
        a.push("Skoda");
        console.log(a);
        break;
    case 4:
        a.shift();
        console.log(a);
        break;
    case 5:
        a.splice(2, 3);
        console.log(a);
        break;
    default:
        console.log("Invalid case no.");
        break;
}