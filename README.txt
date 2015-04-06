F74016255 謝孟成 資訊系 甲班 105級

LAB3 B 測試結果如下:
size:
1,000 : 	sort() = 0 sec		insertion_sort() = 0.01 sec

10,000 : 	sort() = 0 sec		insertion_sort() = 1.31 sec

100,000 : 	sort() = 0.05		insertion_sort() = 127.81 sec

1,000,000 : 	sort() = 0.54		insertion_sort() = 太久了!

一般而言，好的排序演算法表現是O(n log n)，且壞的表現是O(n^2)。
對於一個排序理想的表現是O(n)。
僅使用一個抽象關鍵比較運算的排序演算法總平均上總是至少需要O(n log n)。
由這次的LAB可以看出來sort()的時間複雜度應為O(n log n)，
而insertion_sort() 的時間複雜度應為O(n^2)。
