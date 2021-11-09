let myArray1 = []
let myArray2 = [1, 2, 'a', 'aaa', myArray1]
myArray1[0] = 111
myArray1[1] = 222

for (let i in myArray1)
    console.log(myArray1[i])

for (let i in myArray2)
    console.log(myArray2[i])

let str = 'Hello'
console.log(str[1])

console.log(str.length)
console.log(myArray1.length)
console.log(myArray2.length)