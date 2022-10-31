package main

import "fmt"

func main() {
	var num1, num2 float64
	var op string

	fmt.Println("Enter the first number:")
	fmt.Scanln(&num1)

	fmt.Println("Enter the second number:")
	fmt.Scanln(&num2)

	fmt.Print("Enter the operator")
	fmt.Scanln(&op)
