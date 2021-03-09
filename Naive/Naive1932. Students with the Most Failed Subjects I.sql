/*
1932. Students with the Most Failed Subjects I
The exams records of students are stored in the exam table
Please use SQL statement to find the student_id corresponding to the student with the largest number of failed subjects.

Table definition: exams

columns_name	type	explaination
id	int unsigned	primary key
student_id	int	student's id
date	date	date of exam
is_pass	int	grade status (0 means fail, others means pass)
Example
Example 1:

Table content: exams

id	student_id	date	is_pass
1	1	2020-11-15	0
2	2	2020-11-17	1
3	3	2020-11-24	0
4	3	2020-11-28	0
After running your SQL statement, the table should return:

student_id
3
Example 2:

Table content: exams

id	student_id	date	is_pass
1	1	2020-11-15	0
2	3	2020-11-17	1
3	3	2020-11-24	0
4	3	2020-11-28	0
After running your SQL statement, the table should return:

student_id
3
Notice
Data guarantee that there is only one student with the largest number of failed subjects
*/

/*
1932. 挂科最多的同学 I
exams 表中存放着同学们的考试记录
请用 SQL 语句，找到挂科数最多的同学所对应的 student_id

表定义: exams (考试表)

列名	类型	注释
id	int unsigned	主键
student_id	int	学生 id
date	date	考试日期
is_pass	int	成绩状态 (0 表示挂科，其他表示通过)
Example
样例一：

表内容: exams

id	student_id	date	is_pass
1	1	2020-11-15	0
2	2	2020-11-17	1
3	3	2020-11-24	0
4	3	2020-11-28	0
在运行你的 SQL 语句之后，表应返回：

student_id
3
样例二：

表内容: exams

id	student_id	date	is_pass
1	1	2020-11-15	0
2	3	2020-11-17	1
3	3	2020-11-24	0
4	3	2020-11-28	0
在运行你的 SQL 语句之后，表应返回：

student_id
3
Notice
数据保证，挂科数量最多的同学有且只有一位
*/

-- Write your SQL Query here --
-- example: SELECT * FROM XX_TABLE WHERE XXX --
SELECT student_id FROM(
    SELECT count(exams.student_id ) AS count, student_id FROM exams WHERE exams.is_pass = 0 GROUP BY exams.student_id ORDER BY COUNT DESC LIMIT 1
) AS tmp