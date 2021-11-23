let numbers = []
let mycount = -1
let drwnumbers = []
let lotto_color = ['yellow', 'blue', 'red', 'green', 'gray']

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

    let temp = new lotto(drwnum, numbers[0], numbers[1], numbers[2], numbers[3], numbers[4], numbers[5], numbers[6])
    lottos.push(temp)
    numbers = []
    drwnumbers.push[drwnum]
    mycount++
}

function setBackgroundColor(num) {

}

function setFontColor(num) {

}

window.onload = () => {
    let start_lotto = document.querySelector('#create_lotto')
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

    let drwNum = document.querySelector('#drwNum')
    let all_random = document.querySelector('#all_random')
    let case_by_case_random = document.querySelector('#case_by_case_random')
    let same_color = document.querySelector('#same_color')
    let number_by_number = document.querySelector('#number_by_number')
    let black_and_white = document.querySelector('#black_and_white')
}