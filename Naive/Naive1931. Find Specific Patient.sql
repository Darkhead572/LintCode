/*
1931. Find Specific Patient
The patients table saves all patient information and the person who infected them (infected_by_id)
Write an SQL statement to return a list. The names appearing in the list need to meet the condition: the id of the person who infected them is not 2.

Table definition: patients

columns_name	type	explaination
id	int unsigned	primary key
name	varchar	patient name
infected_by_id	int	infected id
Example
Example 1:

Table content: patients

id	name	infected_by_id
1	Amy	null
2	Bob	null
3	Catalina	2
4	Deng	null
5	Eason	1
6	Frank	2
After running your SQL statement, the table should return:

name
Amy
Bob
Deng
Eason
Example 2:

Table content: patients

id	name	infected_by_id
1	Amy	null
2	Bob	null
3	Catalina	2
After running your SQL statement, the table should return:

name
Amy
Bob
*/

/*
1931. 寻找特定的患者
patients 表中保存了所有患者信息和感染他们的人 (infected_by_id)
编写一个 SQL 语句，返回一个列表，列表中出现的名字需要满足条件：感染他们的人的 id 不是2

表定义: patients (患者表)

列名	字段	注释
id	int unsigned	主键
name	varchar	患者姓名
infected_by_id	int	感染者 id
Example
样例一：

表内容: patients

id	name	infected_by_id
1	Amy	null
2	Bob	null
3	Catalina	2
4	Deng	null
5	Eason	1
6	Frank	2
在运行你的 SQL 语句之后，表应返回：

name
Amy
Bob
Deng
Eason
样例二：

表内容: patients

id	name	infected_by_id
1	Amy	null
2	Bob	null
3	Catalina	2
在运行你的 SQL 语句之后，表应返回：

name
Amy
Bob
*/

-- Write your SQL Query here --
-- example: SELECT * FROM XX_TABLE WHERE XXX --

SELECT DISTINCT name FROM patients WHERE infected_by_id != 2 OR ISNULL(infected_by_id)