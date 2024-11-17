
// pattern 1
console.log("pattern 1")

for (let i = 0; i < 5; i++) {
    let stars = ""
    for (let j = 0; j < 5; j++) {
        stars += "* "
    }
    console.log(stars)
}
console.log()

for (let i = 0; i < 5; i++) {
    console.log("* ".repeat(5))
}

console.log()
console.log()

// pattern 2
console.log("pattern 2")

console.log()
for (let i = 1; i < 6; i++) {
    console.log("* ".repeat(i))
}

console.log()
console.log()

// pattern 3
console.log("pattern 3")

console.log()
for (let i = 1; i <= 5; i++) {
    let numbers = ""
    for (let j = 1; j <= i; j++) {
        numbers += `${j}`
    }
    console.log(numbers)
}

console.log()
console.log()


console.log()

// pattern 4
console.log("pattern 4")

console.log()
for (let i = 1; i <= 5; i++) {
    console.log(`${i}`.repeat(i))
}

console.log()
console.log()

// pattern 4
console.log("pattern 4")

console.log()
for (let i = 1; i <= 5; i++) {
    console.log(`${i}`.repeat(i))
}

console.log()
console.log()

// pattern 5
console.log("pattern 5")

console.log()
for (let i = 5; i > 0; i--) {
    console.log(`*`.repeat(i))
}


console.log()
console.log()


// pattern 6
console.log("pattern 6")

console.log()
for (let i = 5; i > 0; i--) {
    let numbers = ""
    for (let j = 1; j <= i; j++) {
        numbers += `${j}`
    }
    console.log(numbers)
}


console.log()
console.log()


// pattern 7
console.log("pattern 7")

console.log()
for (let i = 4; i >= 0; i--) {
    let spaces = " "
    let stars = "*"
    let starsCount = 9 - i * 2
    // spaces=spaces.repeat(i)
    for (let j = 1; j <= i; j++) {
        spaces += " "
    }
    // stars = stars.repeat(starsCount)
    for (let k = 1; k <= starsCount; k++) {
        stars += "*"
    }
    console.log(`${spaces}${stars}${spaces}`)
}

console.log()
console.log()


// pattern 8
console.log("pattern 8")

console.log()
for (let i = 0; i <= 4; i++) {
    let spaces = " "
    let stars = "*"
    let starsCount = 9 - i * 2
    spaces=spaces.repeat(i)
    stars = stars.repeat(starsCount)
 
    console.log(`${spaces}${stars}${spaces}`)
}

console.log()
console.log()


// pattern 8
console.log("pattern 8")

console.log()
for (let i = 0; i <= 4; i++) {
    let spaces = " "
    let stars = "*"
    let starsCount = 9 - i * 2
    spaces=spaces.repeat(i)
    stars = stars.repeat(starsCount)
 
    console.log(`${spaces}${stars}${spaces}`)
}

console.log()
console.log()