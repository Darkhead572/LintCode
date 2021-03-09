/*
1944. Bike Sharing
The shared_bicycles table stores the usage information of shared bicycles, including bicycle id (bike_id) and user id (user_id)
Write a SQL statement to find the shared bicycle id and user id used by the same person at least three times

Table definition: shared_bicycles

columns_name	type	explaination
id	int unsigned	primary key
bike_id	int	bike id
user_id	int	user id
Example
Example 1:

Table content: shared_bicycles

id	bike_id	user_id
1	1	1
2	1	1
3	1	1
4	1	2
5	1	2
6	2	1
7	2	1
After running your SQL statement, the table should return:

bike_id	user_id
1	1
Example 2:

Table content: shared_bicycles

id	bike_id	user_id
1	1	1
2	1	1
3	1	1
4	2	1
5	1	2
6	2	1
7	2	1
After running your SQL statement, the table should return:

bike_id	user_id
1	1
2	1

*/

/*
1944. 被同一个人至少使用过三次的共享单车
shared_bicycles 表中存储着共享单车的使用信息，包括单车 id (bike_id) 和使用者 id (user_id)
编写一条 SQL 语句，找到被同一个人至少使用过三次的共享单车 id 和使用者 id

表定义: shared_bicycles (共享单车表)

列名	类型	注释
id	int unsigned	主键
bike_id	int	单车 id
user_id	int	使用者 id
Example
样例一：

表内容: shared_bicycles

id	bike_id	user_id
1	1	1
2	1	1
3	1	1
4	1	2
5	1	2
6	2	1
7	2	1
在运行你的 SQL 语句之后，表应返回：

bike_id	user_id
1	1
样例二：

表内容: shared_bicycles

id	bike_id	user_id
1	1	1
2	1	1
3	1	1
4	2	1
5	1	2
6	2	1
7	2	1
在运行你的 SQL 语句之后，表应返回：

bike_id	user_id
1	1
2	1

*/

-- Write your SQL Query here --
-- example: SELECT * FROM XX_TABLE WHERE XXX --

SELECT bike_id, user_id FROM shared_bicycles GROUP BY bike_id, user_id HAVING COUNT(user_id) > 2