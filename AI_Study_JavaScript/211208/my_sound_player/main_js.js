window.onload = function () {
    const sounds = document.querySelectorAll('audio')
    const pads = document.querySelectorAll('.pads')
    const visual = document.querySelector('.visual')
    const title = document.querySelector('.title')
    const colors = ['red', 'orange', 'yellow', 'green', 'blue', 'purple']

    sounds.forEach(function (soundFile) {
        soundFile.onended = function () {
            visual.innerHTML = ''
            title.innerHTML = ''
        }
    })

    pads.forEach(function (index, pad) {
        pad.onclick = function () {
            sounds.forEach(function (soundFile) {
                soundFile.pause()
            })

            if (sounds[index]) {
                sounds[index].currentTime = 0
                sounds[index].play()
                const strArray =
                    sounds[index].src.split("sound/")
                title.innerHTML = strArray[1]
            }

            createBubbles(index)
        }

    })

    const createBubbles = function (index) {
        visual.innerHTML = ''
        const bubble = document.createElement('div')
        visual.append(bubble)
        bubble.style.background = colors[index]
        bubble.style.top = '300px'
        bubble.style.animation = 'animation 2000ms linear infinite both'
    }
}