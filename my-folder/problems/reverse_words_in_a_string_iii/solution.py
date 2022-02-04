class Solution:
    def reverseWords(self, s: str) -> str:
        x=[]
        for i in s.split(" "):
            x.append(i[::-1])
        
        return " ".join(x)
        