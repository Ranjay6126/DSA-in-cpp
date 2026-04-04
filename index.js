// Import the 'fs' module
const fs = require('fs');

// Create a new file inside the current directory
// Synchronously write "Hello world" to the file named 'test.txt'
fs.writeFile('./test1.txt', 'Hello world Async', (err) => {})

console.log('File created successfully!');
