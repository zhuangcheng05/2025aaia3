# week01-2.py
# LeeCode 28. Find the Index of the First Occurrence in a String
# 在haystack 在乾稻草堆裡 找到needle針(大海撈針)
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        H = len(haystack)#字串長度
        N = len(needle)
        for i in range(H-N+1):#要記得加一
            #切片 slicing
            if haystack[i:i+N] == needle:
                return i#把位置當答案
        return -1;#沒有找到
