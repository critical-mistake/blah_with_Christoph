object CliTool {

    private val sortFunction = ::quickSort // ::bubbleSort

    @JvmStatic
    fun main(args: Array<String>) {
//        readln().split(",").map(String::toInt).sorted().also(::println)

        val unsortedInput = readInput()
        println("Unsorted input: $unsortedInput")
        val sortedInput = sortFunction(unsortedInput)
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

    private fun quickSort(unsorted: List<Int>): List<Int> {
        val working = unsorted.toMutableList()
        quickSortRecursive(working, 0, working.size - 1)
        return working
    }


    private fun quickSortRecursive(working: MutableList<Int>, low: Int, high: Int) {
        if(low >= high) {
            return
        }
        val partitionIndex = calculatePartitionIndex(working, low, high)
        quickSortRecursive(working, low, partitionIndex - 1) // left side of pivot
        quickSortRecursive(working, partitionIndex + 1, high) // right side of pivot
    }

    private fun calculatePartitionIndex(working: MutableList<Int>, low: Int, high: Int): Int {
        val pivotValue = working[high] // last element is pivot
        var i = low - 1 // temporary pivot index
        for (j in low..(high - 1)) {
            if (working[j] < pivotValue) {
                i++;
                working.swapp(i, j) // traverse and move smaller to left side
            }
        }
        working.swapp(i + 1, high) // move pivot after smaller elements
        return i + 1
    }

    private fun MutableList<Int>.swapp(i: Int, j: Int) {
        val tmp = this[i]
        this[i] = this[j]
        this[j] = tmp
    }
}
