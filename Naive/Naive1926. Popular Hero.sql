/*
1926. Popular Hero
Write a SQL query to find all heroes whose popularity is not T3 (not popular) and whose id is odd. Please sort the results in descending order of ban rate.
Tx (x = 0, 1 ,2, ...) represents the popularity of heroes, among which T0 is a popular hero, T1 is a sub-popular hero, T2 is a normal popular hero, T3 is a non-popular hero, and T4 and beyond are unpopular heroes .

Table definition: heroes

columns_name	type	explaination
id	int unsigned	primary key
name	varchar	hero name
popularity	varchar	hero popularity
ban	float	hero banned probability
Example
Example 1:

Table content: heroes

id	name	popularity	ban
1	Lv Bu	T0	0.90
2	Ju Youjing	T1	0.24
3	Ma Chao	T1	10.26
4	Guan Yu	T2	1.56
5	Meng Tian	T3	2.10
For the above example, the correct output is:

id	name	popularity	probability
1	Ma Chao	T1	10.26%
2	Lv Bu	T0	0.90%
Example 2:

Table content: heroes

id	name	popularity	ban
1	Lv Bu	T3	0.90
2	Ju Youjing	T1	0.24
3	Ma Chao	T1	10.26
4	Guan Yu	T2	1.56
For the above example, the correct output is:

id	name	popularity	probability
1	Ma Chao	T1	10.26%
Notice
Note, the rate returned probability need to bring the percent sign (%)
*/

/*
1926. 热门的英雄
编写一个 SQL 语句，找出所有英雄热度为非 T3 (不热门)的并且 id 为奇数的英雄，结果请按 ban 率由大到小排列。
Tx (x = 0, 1 ,2, ...) 表示英雄的热度，其中，T0 表示热门英雄，T1 表示次热门英雄，T2 表示正常热度英雄，T3 表示不热门英雄，T4 及以后表示冷门英雄。

表定义: heroes (英雄表)

列名	类型	注释
id	int unsigned	主键
name	varchar	英雄名字
popularity	varchar	英雄热门等级
ban	float	英雄被禁概率
Example
样例一：

表内容: heroes

id	name	popularity	ban
1	Lv Bu	T0	0.90
2	Ju Youjing	T1	0.24
3	Ma Chao	T1	10.26
4	Guan Yu	T2	1.56
5	Meng Tian	T3	2.10
对于上面的例子，正确的输出为：

id	name	popularity	probability
1	Ma Chao	T1	10.26%
2	Lv Bu	T0	0.90%
样例二：

表内容: heroes

id	name	popularity	ban
1	Lv Bu	T3	0.90
2	Ju Youjing	T1	0.24
3	Ma Chao	T1	10.26
4	Guan Yu	T2	1.56
对于上面的例子，正确的输出为：

id	name	popularity	probability
1	Ma Chao	T1	10.26%
Notice
请注意，所返回的 probability 需要带上百分号 (%)
*/

-- Write your SQL Query here --
-- example: SELECT * FROM XX_TABLE WHERE XXX --

SELECT id, name, popularity, concat(ban, '%') as probability FROM heroes WHERE id % 2 = 1 AND popularity != 'T3' ORDER BY ban DESC