fun main() {
    val t = readLine()!!.toInt()
    
    repeat(t) {
        val n = readLine()!!.toInt()
        val arr = readLine()!!.split(" ").map { it.toInt() }
        
        val freq = IntArray(n + 1)
        
        for (num in arr) {
            freq[num]++
        }
        
        var score = 0
        
        for (f in freq) {
            score += f / 2
        }
        
        println(score)
    }
}