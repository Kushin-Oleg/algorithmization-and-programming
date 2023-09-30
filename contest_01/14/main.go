package main
import "fmt"

func main(){
    var row, col int
    fmt.Scan(&row,&col)
    fmt.Print("    |")
    for a:=1; a<=col; a++{
        if a<=9 {fmt.Print("   ", a)} else{fmt.Print("  ", a)}
    }
    fmt.Print("\n")
    fmt.Print("   ")
    for b:=-2; b<col*4; b++{
        fmt.Print("-")
    }
    fmt.Print("\n")
    for c:=1; c<=row; c++{
        if c<=9{fmt.Print("   ", c, "|")} else{fmt.Print("  ", c, "|")}
        for d:=1; d<=col; d++{
            if c*d<=9{fmt.Print("   ")} else{if c*d<=99{fmt.Print("  ")} else{fmt.Print(" ")}}
            fmt.Print(c*d)
        }
    fmt.Print("\n")
    }
    
}
