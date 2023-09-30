package main
import "fmt"

func main(){
	var N, a, b, c, d, e int
	fmt.Scan(&N)
	a = N/5000
	N%=5000
	b = N/1000
	N%=1000
	c = N/500
	N%=500
	d = N/200
	N%=200
	e = N/100
	fmt.Println(a,b,c,d,e)
}
