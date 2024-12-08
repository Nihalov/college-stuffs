class time:
    def __init__(self,__h,__m,__s):
        self.__h=__h
        self.__m=__m
        self.__s=__s
        self.normalize_time()
        
    def normalize_time(self):
        if self.__m>=60:
            self.__h+=self.__m//60
            self.__m=self.__m % 60
        if self.__s>=60:
            self.__m+=self.__s//60
            self.__s=self.__s % 60
    
    def __add__(self, other):
        __new_h=self.__h+other.__h
        __new_m=self.__m+other.__m
        __new_s=self.__s+other.__s
        return time(__new_h,__new_m,__new_s)
    
    def __str__(self):
        return f"{self.__h:02}:{self.__m:02}:{self.__s:02}"
    
time1=time(1, 50, 30)
time2=time(2,20,45)
print("time1 =",time1)
print("time2 =",time2)
print("time1+time2 =",time1+time2)