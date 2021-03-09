/*
1924. Recommend Student to Study Science
If a student has a score of 90 or more in mathematics or 95 in science, then the student is recommended to study science.
Please write a SQL query to output the names, mathematics scores and science comprehensive scores of all suitable science students in the table.

cst (comprehensive science test)
Table definition: student_scores

columns_name	type	explaination
name	varchar	student's name
chinese	int	student's Chinese score
math	int	student's math score
english	int	student's English score
cst	int	student's cst score
Example
Example 1:

Table content: students

name	chinese	math	english	cst
KangKang	95	91	89	97
Jane	90	93	98	98
Micheal	85	76	93	92
Maria	88	89	95	94
LiHua	30	13	19	23
According to the above table, we should output:

name	math	cst
KangKang	91	97
Jane	93	98
Example 2:

Table content: students

name	chinese	math	english	cst
KangKang	95	90	89	97
Jane	90	90	98	95
According to the above table, we should output:

name	math	cst
KangKang	90	97
*/

/*
1924. 推荐学理科的同学
如果一个学生的数学超过 90 分，或者理综超过 95 分，那么就推荐这个学生去学理科。
请编写一个 SQL 语句，输出表中所有适合学理科学生的姓名、数学成绩及理综成绩。

cst (comprehensive science test 理综)
表定义: student_scores (学生成绩表)

列名	类型	注释
name	varchar	学生姓名
chinese	int	学生语文分数
math	int	学生数学分数
english	int	学生英语分数
cst	int	学生理综分数
Example
样例一：

表内容: student_scores

name	chinese	math	english	cst
KangKang	95	91	89	97
Jane	90	93	98	98
Micheal	85	76	93	92
Maria	88	89	95	94
LiHua	30	13	19	23
根据上表，我们应该输出：

name	math	cst
KangKang	91	97
Jane	93	98
样例二：

表内容: student_scores

name	chinese	math	english	cst
KangKang	95	90	89	97
Jane	90	90	98	95
根据上表，我们应该输出：

name	math	cst
KangKang	90	97
*/
-- Write your SQL Query here --
-- example: SELECT * FROM XX_TABLE WHERE XXX --

SELECT name, math, cst FROM student_scores WHERE math > 90 OR cst > 95