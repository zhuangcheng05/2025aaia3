# week01-2.py
# LeeCode 28. Find the Index of the First Occurrence in a String
# �bhaystack �b���_���� ���needle�w(�j�����w)
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        H = len(haystack)#�r�����
        N = len(needle)
        for i in range(H-N+1):#�n�O�o�[�@
            #���� slicing
            if haystack[i:i+N] == needle:
                return i#���m����
        return -1;#�S�����
