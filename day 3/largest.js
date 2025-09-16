let n = parseInt(prompt("Enter the number of elements in the array:"));
let arr = [];

for (let i = 0; i < n; i++) {
    arr[i] = parseInt(prompt(`Enter element ${i + 1}:`));
}
console.log("Array elements:", arr);

let largest = arr[0];
arr.forEach(num => {
    if (num > largest) {
        largest = num;
    }
});

console.log("Largest number is:", largest);
