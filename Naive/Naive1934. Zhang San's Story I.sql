/*
1934. Zhang San's Story I
Zhang San was admitted to a well-known university, and reporters came to Zhang San's school for an interview.
The students table records the student's name and class (class_id). Please write a SQL statement to find out the names of all students with the surname "zhang" from the students table (students).
The habit of Chinese names is the first name and the last name, this question requires to find the string beginning with "zhang"

Table definition: students

columns_name	type	explaination
id	int unsigned	primary key
name	varchar	student name
class_id	int	student's class
Example
Example 1:

Table content: students

id	name	class_id
1	zhangsan	2
2	lisi	1
3	wanger	4
4	zhaoliu	1
5	niuniu	2
6	zhangfei	3
7	guanyu	4
8	liubei	3
9	linqi	2
After running your SQL statement, the table should return:

name
zhangsan
zhangfei
Example 2:

Table content: students

id	name	class_id
1	zhangsan	2
2	lisi	1
3	wanger	4
4	zhaoliu	1
5	niuniu	2
After running your SQL statement, the table should return:

name
zhangsan
*/

/*
1934. 张三的故事 I
张三考上了某知名学府，记者前来张三的学校进行采访。
students 表中记录了学生的姓名以及班级 (class_id)，请编写 SQL 语句，从学生表 (students) 中找出所有姓 "zhang" 的学生的姓名。
中国的姓名习惯是先姓后名，本题要求查找 "zhang" 开头的字符串

表定义: students (学生表)

列名	类型	注释
id	int unsigned	主键
name	varchar	学生姓名
class_id	int	学生班级
Example
样例一：

表内容: students

id	name	class_id
1	zhangsan	2
2	lisi	1
3	wanger	4
4	zhaoliu	1
5	niuniu	2
6	zhangfei	3
7	guanyu	4
8	liubei	3
9	linqi	2
在运行你的 SQL 语句之后，表应返回：

name
zhangsan
zhangfei
样例二：

表内容: students

id	name	class_id
1	zhangsan	2
2	lisi	1
3	wanger	4
4	zhaoliu	1
5	niuniu	2
在运行你的 SQL 语句之后，表应返回：

name
zhangsan
*/
-- Write your SQL Query here --
-- example: SELECT * FROM XX_TABLE WHERE XXX --
SELECT name FROM students WHERE name LIKE 'zhang%'