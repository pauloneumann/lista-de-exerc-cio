fun main() {
    print("Produto:")
    val produto = readln()
    print("Preço unitário (ex.: 12.50):")
    val preço = readln(). toDouble()
    print("Quantidade:")
    val quantidade = readln().toInt()

    if (preco < 0 || quantidade <= 0){
        println("Preço ou quantidade inválidos.")
        retorn
    }

    val total = preco * quantidade
    println("Produto: $produto")
    println("Quantidade: $quantidade")
    println("Total: R$ %.2f".format(total))
}