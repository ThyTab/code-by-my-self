import numpy as np
import pandas as pd
# 一、文件读取与写入

#文件读取
#csv文件
df_csv = pd.read_csv('数据分析/Pandas/joyful-pandas-master/data/table.csv')   #相对路径
print(df_csv)
print(df_csv.head())   #不传入参数时，默认返回前五行数据
#txt文件
df_txt = pd.read_table('数据分析/Pandas/joyful-pandas-master/data/table.txt')
print(df_txt.head()) 
#xls或xlsx文件
df_excel = pd.read_excel('数据分析/Pandas/joyful-pandas-master/data/table.xlsx')   #需要安装xlrd
print(df_excel.head()) 

#文件写入
#写入csv文件
df_csv.to_csv('数据分析/Pandas/joyful-pandas-master/data/new_table.csv')
#写入xls或xlsx文件
df_excel.to_excel('数据分析/Pandas/joyful-pandas-master/data/new_table2.xlsx',sheet_name='Sheet1')


# 二、基本数据结构

#1.series
# 对于一个Series，其中最常用的属性为值（values），索引（index），名字（name），类型（dtype）
s = pd.Series(np.random.randn(5),index=['a','b','c','d','e'],name='This is a series',dtype='float64')   #创建一个Series
print(s)
print(s.values)
print(s.index)
print(s.name)
print(s.dtype)   #访问属性
print(s['a'])   #利用索引

#2.dataframe