document.addEventListener('DOMContentLoaded', function () {
    const name = document.querySelector('#name')
    const gender = document.querySelector('#gender')
    const num = document.querySelector('#num')

    const print = document.querySelector('#print')
    const reset = document.querySelector('#reset')
    const printOrderBy = document.querySelector('#printOrderBy')
    const information = document.querySelector('#information')

    function resetInfo() {
        information.innerHTML = ''
    }

    reset.addEventListener('click', function () {
        resetInfo()
        students = []
    })

    print.addEventListener('click', function () {
        let student = new Student(name.value, gender.value, Number(num.value))
        let newStudentInfo = document.createElement('h1')
        newStudentInfo.textContent = student.toString()
        if (student.성별 == '남') {
            newStudentInfo.style.backgroundColor = 'springgreen'
            newStudentInfo.style.color = 'blue'
        } else {
            newStudentInfo.style.backgroundColor = 'black'
            newStudentInfo.style.color = 'pink'
        }
        information.appendChild(newStudentInfo)
    })

    printOrderBy.addEventListener('click', function () {
        const idx = students.findIndex(function (item) {
            return item.번호 === Number(num.value)
        })
        if (idx != -1) {
            alert('번호 중복')
            return
        }
        resetInfo()
        students.push(new Student(name.value, gender.value, Number(num.value)))
        students.sort(function (a, b) {
            return a.번호 - b.번호
        })
        for (const item of students) {
            let newStudentInfo = document.createElement('h1')
            newStudentInfo.textContent = students[i].toString()
            if (students[i].성별 == '남') {
                newStudentInfo.style.backgroundColor = 'springgreen'
                newStudentInfo.style.color = 'blue'
            } else {
                newStudentInfo.style.backgroundColor = 'black'
                newStudentInfo.style.color = 'pink'
            }
            information.appendChild(newStudentInfo)
        }
    })
})