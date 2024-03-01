//my first ja script
let isApproved = true;
let select = null;
let person = {
    name: 'Peace',
    age: 20
};
person.name = 'posh'
let selectedColors = ['red', 'blue'];
selectedColors[2] = 'black';
console.log(person.name);
console.log(selectedColors);
console.log(selectedColors.length);

function addition(num1, num2, ...)
{
    let sum = (num1 + num2 + ...);
    return(sum);
}
console.log(addition(4+3+5));

function hello(name){
    console.log('hello ' + name);
    console.log(`hello ${name}');
}hello('Peace');