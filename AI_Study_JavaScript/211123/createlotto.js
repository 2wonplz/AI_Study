let numbers = []
let mycount = -1
let drwnumbers = []
let lotto_colors = ['yellow', 'blue', 'red', 'green', 'gray']

function createLottoNum(drwnum) {
    if (isNaN(drwnum)) {
        alert('숫자만 입력할 수 있습니다.')
        return
    }

    if (drwnum.value == '') {
        alert('공백은 입력할 수 없습니다.')
        return
    }

    for (let item of drwnumbers) {
        if (item == drwnum) {
            alert('중복된 회차입니다.')
            return
        }
    }

    for (let i = 0; i < 7; i++) {
        let mynum = Math.floor(Math.random() * 45) + 1
        if (i > 0) {
            if (numbers.indexOf(mynum) != -1) {
                i--
                continue
            }
        }
        numbers.push(mynum)
    }

    numbers.sort(function (a, b) {
        return a - b
    })
    let temp = new lotto(drwnum, numbers[0], numbers[1], numbers[2], numbers[3], numbers[4], numbers[5], numbers[6])
    lottos.push(temp)
    numbers = []
    drwnumbers.push[drwnum]
    mycount++
}

function setBackgroundColor(num) {
    let mynum = Number(num)
    if (mynum <= 10)
        return 'yellow'
    else if (mynum <= 20)
        return 'blue'
    else if (mynum <= 30)
        return 'red'
    else if (mynum <= 40)
        return 'gray'
    else
        return 'green'
}

function setFontColor(num) {
    let mynum = Number(num)
    if (mynum >= 11 && mynum <= 30)
        return 'white'
    return 'black'
}

window.onload = () => {
    let start_lotto = document.querySelector('#create_lotto')
    let drwNum = document.querySelector('#drwNum')
    start_lotto.onclick = () => {
        createLottoNum(drwNum.value)
        let mylottos
        switch (mycount % 3) {
            case 0:
                mylottos = document.querySelectorAll('#one>.one')
                break
            case 1:
                mylottos = document.querySelectorAll('#two>.two')
                break
            case 2:
                mylottos = document.querySelectorAll('#three>.three')
                break
        }
        mylottos[0].innerHTML = lottos[mycount].drwNo + '회차'
        mylottos[1].innerHTML = lottos[mycount].one
        mylottos[2].innerHTML = lottos[mycount].two
        mylottos[3].innerHTML = lottos[mycount].three
        mylottos[4].innerHTML = lottos[mycount].four
        mylottos[5].innerHTML = lottos[mycount].five
        mylottos[6].innerHTML = lottos[mycount].six
        mylottos[7].innerHTML = lottos[mycount].bns
    }

    let all_random = document.querySelector('#all_random')
    all_random.onclick = () => {
        for (let i = 1; i < 8; i++) {
            document.querySelectorAll('#one>.one')[i].style.backgroundColor = lotto_colors[Math.floor(Math.random() * 5)]
            document.querySelectorAll('#two>.two')[i].style.backgroundColor = lotto_colors[Math.floor(Math.random() * 5)]
            document.querySelectorAll('#three>.three')[i].style.backgroundColor = lotto_colors[Math.floor(Math.random() * 5)]
        }
    }

    let case_by_case_random = document.querySelector('#case_by_case_random')
    case_by_case_random.onclick = () => {
        let tempcolor = lotto_colors[Math.floor(Math.random() * 5)]
        for (let i = 1; i < 8; i++)
            document.querySelectorAll('#one>.one')[i].style.backgroundColor = tempcolor
        tempcolor = lotto_colors[Math.floor(Math.random() * 5)]
        for (let i = 1; i < 8; i++)
            document.querySelectorAll('#two>.two')[i].style.backgroundColor = tempcolor
        tempcolor = lotto_colors[Math.floor(Math.random() * 5)]
        for (let i = 1; i < 8; i++)
            document.querySelectorAll('#three>.three')[i].style.backgroundColor = tempcolor
    }

    let same_color = document.querySelector('#same_color')
    same_color.onclick = () => {
        let r = Math.floor(Math.random() * 256)
        let g = Math.floor(Math.random() * 256)
        let b = Math.floor(Math.random() * 256)
        let tempcolor = `rgb(${r}, ${g}, ${b})`
        for (let i = 1; i < 8; i++) {
            document.querySelectorAll('#one>.one')[i].style.backgroundColor = tempcolor
            document.querySelectorAll('#two>.two')[i].style.backgroundColor = tempcolor
            document.querySelectorAll('#three>.three')[i].style.backgroundColor = tempcolor
        }
    }

    let number_by_number = document.querySelector('#number_by_number')
    number_by_number.onclick = () => {
        for (let i = 1; i < 8; i++) {
            document.querySelectorAll('#one>.one')[i].style.backgroundColor = setBackgroundColor(document.querySelectorAll('#one>.one')[i].innerText)
            document.querySelectorAll('#two>.two')[i].style.backgroundColor = setBackgroundColor(document.querySelectorAll('#two>.two')[i].innerText)
            document.querySelectorAll('#three>.three')[i].style.backgroundColor = setBackgroundColor(document.querySelectorAll('#three>.three')[i].innerText)
        }
    }

    let black_and_white = document.querySelector('#black_and_white')
    black_and_white.onclick = () => {
        for (let i = 1; i < 8; i++) {
            document.querySelectorAll('#one>.one')[i].style.color = setFontColor(document.querySelectorAll('#one>.one')[i].innerText)
            document.querySelectorAll('#two>.two')[i].style.color = setFontColor(document.querySelectorAll('#two>.two')[i].innerText)
            document.querySelectorAll('#three>.three')[i].style.color = setFontColor(document.querySelectorAll('#three>.three')[i].innerText)
        }
    }
}