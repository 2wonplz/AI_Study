$(function () {
    // 모든 코드 한번에 변경 : ctrl + F2
    const name = $('#name')
    const gender = $('#gender')
    const num = $('#num')

    const print = $('#print')
    const reset = $('#reset')
    const printOrderBy = $('#printOrderBy')
    const information = $('#information')

    function resetInfo() {
        information.html('')
    }

    reset.on('click', function () {
        resetInfo()
        students = []
    })

    print.on('click', function () {
        let student = new Student(name.val(), gender.val(), Number(num.val()))
        let newStudentInfo = $('<h1></h1>')
        newStudentInfo.text(student.toString())
        if (student.성별 == '남')
            newStudentInfo.css('background-color', 'springgreen').css('color', 'blue')
        else
            newStudentInfo.css('background-color', 'black').css('color', 'pink')
        information.append(newStudentInfo)
    })

    printOrderBy.on('click', function () {
        const idx = students.findIndex(function (item) {
            return item.번호 === Number(num.val())
        })
        if (idx != -1) {
            alert('번호 중복')
            return
        }
        resetInfo()
        students.push(new Student(name.val(), gender.val(), Number(num.val())))
        students.sort(function (a, b) {
            return a.번호 - b.번호
        })
        for (const item of students) {
            let newStudentInfo = $('<h1></h1>')
            newStudentInfo.text(students[i].toString())
            if (students[i].성별 == '남')
                newStudentInfo.css('background-color', 'springgreen').css('color', 'blue')
            else
                newStudentInfo.css('background-color', 'black').css('color', 'pink')
            information.appendChild(newStudentInfo)
        }
    })
})