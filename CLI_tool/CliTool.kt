object CliTool {
    @JvmStatic
    fun main(args: Array<String>) {
        val unsortedInput = readInput()
        println("Unsorted input: $unsortedInput")
        val sortedInput = bubbleSort(unsortedInput)
        println("Sorted input: $sortedInput")
    }

    private fun readInput() = readln().split(",").map { it.toInt() }

    private fun bubbleSort(unsorted: List<Int>): List<Int> {
        val sorted = ArrayList<Int>(unsorted)
        for(i in 0..<sorted.size) {
            val elem1 = sorted[i]
            for (j in i+1..<sorted.size) {
                val elem2 = sorted[j]
                if (elem1 > elem2) {
                    sorted[j] = elem1
                    sorted[i] = elem2
                }
            }
        }
        return sorted
    }
}

