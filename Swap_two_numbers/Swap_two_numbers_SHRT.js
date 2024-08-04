/* INITIALIZATION */
let a = 1;
let b = 0;

console.log(`a: ${a}, b: ${b}`);

/* SWAP TWO VARIABLES */
// For detailed explanations, see 'Swap_two_numbers.js' in same folder
a^=b^=a^=b; // a ^= (b ^= (a ^= b));

console.log(`a: ${a}, b: ${b}`);