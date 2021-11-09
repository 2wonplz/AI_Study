let aa = [1, 2, '삼', 4]
aa.push('오5')
for (let item of aa)
    console.log(item)

aa[aa.length] = 6

for (let item of aa)
    console.log(item)

aa[10] = 10
console.log(aa)
console.log(aa.length)

aa.splice(0, 1)
console.log("----- 0번째꺼 지움 -----");
for (let item of aa)
    console.log(item)

aa.splice(1, 3)
console.log("----- 3개 지운 뒤 -----");
for (let item of aa)
    console.log(item)

const myIndex = aa.indexOf(6)
console.log("6의 위치 : " + myIndex)
aa.splice(myIndex, 1)
console.log("----- 6 지운 뒤 -----");
for (let item of aa)
    console.log(item)

aa.splice(2, 0, 1000)
console.log("----- index[2]에 1000 추가 -----");
for (let item of aa)
    console.log(item)