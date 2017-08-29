// Learn more about F# at http://fsharp.net
// See the 'F# Tutorial' project for more help.

let add x y = 
    x + y
let ad32 x = add 32
[<EntryPoint>]
let main argv = 
    printfn "%d" (ad32 4)
        
    0 // return an integer exit code
