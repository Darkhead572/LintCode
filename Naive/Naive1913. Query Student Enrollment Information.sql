/*
1913. Query Student Enrollment Information
Write a SQL query, the condition: no matter whether the student has a student enrollment information, student needs to provide the following information based on the above two tables:

student_name,
phone,
hometown,
address
Table definition 1: students

columns_name	type	explanation
id	int unsigned	primary key
student_name	varchar	student's name
phone	varchar	student's phone
Table definition 2: enrollments

columns_name	type	explanation
id	int unsigned	primary key
student_id	int unsigned	student's id
hometown	varchar	student's hometown
address	varchar	student's address
Example
Example 1:

Table content 1: students

id	student_name	phone
1	Li Lei	13888888888
2	Han Meimei	13999999999
3	Amy	13788889999
Table content 2: enrollments

id	student_id	hometown	address
1	1	Shi Jiazhuang	Hang Zhou
2	2	Heng Shui	Tang Shan
3	3	Cang Zhou	Shi Jiazhuang
Result：

student_name	phone	hometown	address
Li Lei	13888888888	Shi Jiazhuang	Hang Zhou
Han Meimei	13999999999	Heng Shui	Tang Shan
Amy	13788889999	Cang Zhou	Shi Jiazhuang
Example 2:

Table content 1: students

id	student_name	phone
1	Li Lei	13888888888
2	Han Meimei	13999999999
3	Amy	13788889999
4	Jason	13788789999
Table content 2: enrollments

id	student_id	hometown	address
1	1	Shi Jiazhuang	Hang Zhou
2	2	Heng Shui	Tang Shan
3	3	Cang Zhou	Shi Jiazhuang
4	1	Guang Zhou	Shi Hezi
Should return:

student_name	phone	hometown	address
Li Lei	13888888888	Shi Jiazhuang	Hang Zhou
Han Meimei	13999999999	Heng Shui	Tang Shan
Amy	13788889999	Cang Zhou	Shi Jiazhuang
Li Lei	13888888888	Guang Zhou	Shi Hezi
Jason	13788789999	null	null
*/

/*
1913. 查询学生学籍信息
编写一个 SQL 语句，满足条件：无论 students 是否有学籍 (enrollments) 信息，学生都需要根据如下两个表提供以下信息：

student_name,
phone,
hometown,
address
表定义 1: students (学生表)

列名	类型	注释
id	int unsigned	主键
student_name	varchar	学生姓名
phone	varchar	学生电话
表定义 2: enrollments (学籍表)

列名	类型	注释
id	int unsigned	主键
student_id	int unsigned	学生 id
hometown	varchar	家乡
address	varchar	地址
Example
样例一：

表内容 1: students

id	student_name	phone
1	Li Lei	13888888888
2	Han Meimei	13999999999
3	Amy	13788889999
表内容 2: enrollments

id	student_id	hometown	address
1	1	Shi Jiazhuang	Hang Zhou
2	2	Heng Shui	Tang Shan
3	3	Cang Zhou	Shi Jiazhuang
返回：

student_name	phone	hometown	address
Li Lei	13888888888	Shi Jiazhuang	Hang Zhou
Han Meimei	13999999999	Heng Shui	Tang Shan
Amy	13788889999	Cang Zhou	Shi Jiazhuang
样例二：

表内容 1: students

id	student_name	phone
1	Li Lei	13888888888
2	Han Meimei	13999999999
3	Amy	13788889999
4	Jason	13788789999
表内容 2: enrollments

id	student_id	hometown	address
1	1	Shi Jiazhuang	Hang Zhou
2	2	Heng Shui	Tang Shan
3	3	Cang Zhou	Shi Jiazhuang
4	1	Guang Zhou	Shi Hezi
应该返回:

student_name	phone	hometown	address
Li Lei	13888888888	Shi Jiazhuang	Hang Zhou
Han Meimei	13999999999	Heng Shui	Tang Shan
Amy	13788889999	Cang Zhou	Shi Jiazhuang
Li Lei	13888888888	Guang Zhou	Shi Hezi
Jason	13788789999	null	null
*/

-- Write your SQL Query here --
-- example: SELECT * FROM XX_TABLE WHERE XXX --

SELECT students.student_name, students.phone, enrollments.hometown, enrollments.address FROM 
    students LEFT JOIN enrollments ON students.id = enrollments.student_id
