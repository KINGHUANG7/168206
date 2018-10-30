def  sum（alist）：
	如果 len（alist）==  0：＃列表中没有元素时
		返回 0
	elif  len（alist）==  1：＃列表中只有一个元素时
		返回 alist [ 0 ]
	否则：
		return alist [ 0 ] +  sum（alist [ 1：]）
 ALIST = [ 2，5，7，1，6，10，8 ]
SUM  =  sum（alist）
print（“ sum = ”，SUM）