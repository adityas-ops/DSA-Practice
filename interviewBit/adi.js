const person = { name: "Dave", age: 40, hairColor: "blue" };
const result = Object.keys (person) .map (x => x.toUpperCase ( )) ;
console.log(result);