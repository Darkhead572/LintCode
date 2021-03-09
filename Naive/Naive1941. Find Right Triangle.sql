/*
1941. Find Right Triangle
Li Hua’s job is to determine whether three line segments can form a right triangle
Assuming that the table line_segments saves all groups consisting of three line segments with lengths a, b, c, please help Li Hua write a SQL statement to determine whether each group of line segments can form a right triangle

Table definition: line_segments

columns_name	type	explaination
id	int unsigned	primary key
a	int	The length of a line segment
b	int	The length of b line segment
c	int	The length of c line segment
Example
Example 1:

Table content: line_segments

id	a	b	c
1	3	4	5
2	10	20	15
3	1	2	10
After running your SQL statement, the table should return:

id	a	b	c	right_triangle
1	3	4	5	Yes
2	10	20	15	No
3	1	2	10	No
Example 2:

Table content: line_segments

id	a	b	c
1	6	6	6
2	5	12	13
After running your SQL statement, the table should return:

id	a	b	c	right_triangle
1	6	6	6	No
2	5	12	13	Yes
*/

/*
1941. 寻找直角三角形
李华的作业是判断三条线段是否可以构成直角三角形
假设表 line_segments 保存了所有由三条长度为 a, b, c 的线段构成的组，请你帮李华写一个 SQL 语句，来判断每组线段是否可以组成一个直角三角形

表定义: line_segments (线段表)

列名	类型	注释
id	int unsigned	主键
a	int	a 线段长度
b	int	b 线段长度
c	int	c 线段长度
Example
样例一：

表内容: line_segments

id	a	b	c
1	3	4	5
2	10	20	15
3	1	2	10
在运行你的 SQL 语句之后，表应返回：

id	a	b	c	right_triangle
1	3	4	5	Yes
2	10	20	15	No
3	1	2	10	No
样例二：

表内容: line_segments

id	a	b	c
1	6	6	6
2	5	12	13
在运行你的 SQL 语句之后，表应返回：

id	a	b	c	right_triangle
1	6	6	6	No
2	5	12	13	Yes
*/

-- Write your SQL Query here --
-- example: SELECT * FROM XX_TABLE WHERE XXX --
SELECT id, a, b, c, IF(POWER(a, 2) + POWER(b, 2) = POWER(c, 2), 'Yes', 'No') AS right_triangle FROM line_segments