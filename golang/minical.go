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
switch op {
	case "+":
		fmt.Printf("%f %s %f = %f", num1, op, num2, num1+num2)
	case "-":
		fmt.Printf("%f %s %f = %f", num1, op, num2, num1-num2)
	case "*":
		fmt.Printf("%f %s %f = %f", num1, op, num2, num1*num2)
	case "/":
		if num2 == 0.0 {
			fmt.Println("Divide by zero")
		} else {
			fmt.Printf("%f %s %f = %f", num1, op, num2, num1+num2)
		}
	default:
		fmt.Println("Invalid operators")

	}
}
