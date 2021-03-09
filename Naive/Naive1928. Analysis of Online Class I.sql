/*
1928. Analysis of Online Class I
The online_class_situations table shows the behavioral activities of some students in online classes.
Each row of data records the number of courses (may be 0) that a student has listened to after logging in to the course with the same device on the same day before quitting the online course.
Write a SQL statement to query the date each student first logged into the platform to attend a class.

Table definition: online_class_situations

columns_name	type	explaination
student_id	int	student's id
device_id	int	device's id
date	date	Class date of the course
course_number	int	course number
The primary key of the table is (student_id, date) combined primary key
Example
Example 1:

Table content: online_class_situations

student_id	device_id	date	course_number
1	2	2020-03-01	5
1	2	2020-04-02	6
2	3	2020-05-25	1
3	1	2020-03-02	0
3	4	2020-12-03	5
After running your SQL statement, the table should return:

student_id	earliest_course_date
1	2020-03-01
2	2020-05-25
3	2020-12-03
Example 2:

Table content: online_class_situations

student_id	device_id	date	course_number
1	2	2020-03-01	5
1	2	2020-04-02	6
3	1	2020-03-02	3
2	4	2020-12-19	2
After running your SQL statement, the table should return:

student_id	earliest_course_date
1	2020-03-01
2	2020-12-19
3	2020-03-02
Notice
Please note that the returned result column name is: student_id, earliest_course_date
*/

/*
1928. 网课上课情况分析 I
online_class_situations 表展示了一些同学上网课的行为活动。
每行数据记录了一名同学在退出网课之前，当天使用同一台设备登录课程后听过的课程数目（可能是0个）。
写一条 SQL 语句，查询每位同学第一次登录平台听课的日期。

表定义: online_class_situations (网课上课情况表)

列名	类型	注释
student_id	int	学生 id
device_id	int	设备 id
date	date	课程的上课日期
course_number	int	课程数量
表的主键是 (student_id, date) 联合主键
Example
样例一：

表内容: online_class_situations

student_id	device_id	date	course_number
1	2	2020-03-01	5
1	2	2020-04-02	6
2	3	2020-05-25	1
3	1	2020-03-02	0
3	4	2020-12-03	5
在运行你的 SQL 语句之后，表应返回：

student_id	earliest_course_date
1	2020-03-01
2	2020-05-25
3	2020-12-03
样例二：

表内容: online_class_situations

student_id	device_id	date	course_number
1	2	2020-03-01	5
1	2	2020-04-02	6
3	1	2020-03-02	3
2	4	2020-12-19	2
在运行你的 SQL 语句之后，表应返回：

student_id	earliest_course_date
1	2020-03-01
2	2020-12-19
3	2020-03-02
Notice
请注意，返回的结果列名为: student_id, earliest_course_date
*/

-- Write your SQL Query here --
-- example: SELECT * FROM XX_TABLE WHERE XXX --

SELECT student_id, MIN(date) AS earliest_course_date FROM online_class_situations WHERE course_number > 0 GROUP BY student_id