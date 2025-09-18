# week01-2b.py 使用PY的版本2  使用.find()函式
# LeeCode 28. Find the Index of the First Occurrence in a String
# 在haystack 在乾稻草堆裡 找到needle針(大海撈針)
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
       return haystack.find(needle)
