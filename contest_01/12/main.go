package main
import "fmt"

func main(){
    var x,c int
    fmt.Scan(&x)
    for a:= 1; x!=1;a++{
        if x%2==0{x=x/2} else{x=3*x+1}
        c++
    }
    fmt.Println(c)
}
