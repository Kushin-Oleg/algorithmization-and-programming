package main
import "fmt"

func main(){
    var a,b,c, max int 
    fmt.Scan(&a,&b,&c)
    if a>b {max=a} else {max=b}
    if max>c{fmt.Println(max)} else {fmt.Println(c)}
}
