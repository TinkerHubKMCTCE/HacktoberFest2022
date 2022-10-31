package main

import (
	"fmt"
)
var n, m int

func main() {
	food()
	showData(4, 2)
}
func dog(leg int) int {
	leg = n
	return leg
}
func characteristics(eye int) int {
	eye = m
	return eye
}
func showData(leg int, eye int) {
	fmt.Println(leg)
	fmt.Println(eye)
}
func food() {
	fmt.Println("Food is precious!!")
}
