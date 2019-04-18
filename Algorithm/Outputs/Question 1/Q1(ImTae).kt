import java.util.*

// 첫 번째 문제
val scanner = Scanner(System.`in`)
var n = Getnum()
var cnt = -2

fun main() {
    while (n != 1) {
        PrintNum(n)
        when(n % 3) {
            0 -> { n = If_N_Is_Zero(); cnt++ }
            1 -> { n = If_N_Is_One(); cnt++ }
            2 -> { n = If_N_Is_Two(); cnt++ }
        }
    }
    println()
    PrintNum(cnt)
}

fun PrintNum(n: Int) = print("$n ")

fun If_N_Is_Zero(): Int = n / 3

fun If_N_Is_One(): Int = 5*n - 2

fun If_N_Is_Two(): Int = 5*n - 1

fun Getnum(): Int { print("숫자를 입력해주세요. >> "); return scanner.nextInt() }