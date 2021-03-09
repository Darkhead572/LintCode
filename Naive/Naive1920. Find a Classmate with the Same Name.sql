/*
1920. Find a Classmate with the Same Name
Write a SQL query to find all students with the same name in the students table.

Table definition: students

columns_name	type	explaination
id	int unsigned	primary key
name	varchar	student's name
Example
Example 1:

Table content: students

id	name
1	DaMing
2	Amy
3	HanMeimei
4	Amy
Your SQL query should return the following results:

name
Amy
Example 2:

Table content: students

id	name
1	DaMing
2	Amy
3	DaMing
4	Amy
Your SQL query should return the following results:

name
Amy
DaMing
*/

/*
1920. 查找重名的同学
编写一个 SQL 语句，查找 students 表中所有重名同学的名字。

表定义: students (学生表)

列名	类型	注释
id	int unsigned	主键
name	varchar	学生姓名
Example
样例一：

表内容: students

id	name
1	DaMing
2	Amy
3	HanMeimei
4	Amy
你的 SQL 查询应该返回以下结果：

name
Amy
样例二：

表内容: students

id	name
1	DaMing
2	Amy
3	DaMing
4	Amy
你的 SQL 查询应该返回以下结果：

name
Amy
DaMing
*/

-- Write your SQL Query here --
-- example: SELECT * FROM XX_TABLE WHERE XXX --

SELECT name FROM students GROUP BY name HAVING COUNT(name) > 1