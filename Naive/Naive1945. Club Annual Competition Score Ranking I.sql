/*
1945. Club Annual Competition Score Ranking I
The rankings table records the ranking and score information of a club’s annual competition, including item id (category_id), year (year), ranking (rank) and score (score)
The categories table records the name of the project (name). For some reasons, there may be data loss in the categories table, as in sample two.
Please write a SQL statement to query the name of the item (name), the year of the competition (year) and the score (score) of all items in the rankings table and categories table

Table definition 1: rankings

columns_name	type	explaination
id	int unsigned	primary key
category_id	int	category id
year	int	year
rank	int	rank
score	int	score
Table definition 2: categories

columns_name	type	explaination
id	int unsigned	primary key
name	varchar	subject name
Example
Example 1:

Table content 1: rankings

id	category_id	year	rank	score
1	1	2008	15	90
2	1	2012	11	98
3	2	2016	10	99
Table content 2: categories

id	name
1	volleyball
2	basketball
3	soccer
After running your SQL statement, the table should return:

name	year	score
volleyball	2008	90
volleyball	2012	98
basketball	2016	99
Example 2:

Table content 1: rankings

id	category_id	year	rank	score
1	1	2008	15	90
2	3	2012	11	98
3	2	2016	10	99
4	4	2017	40	72
Table content 2: categories

id	name
1	volleyball
2	basketball
3	soccer
After running your SQL statement, the table should return:

name	year	score
volleyball	2008	90
soccer	2012	98
basketball	2016	99
*/

/*
1945. 俱乐部年度比赛得分排名 I
rankings 表记录了某俱乐部年度比赛的排名及得分信息，包括项目 id (category_id)，年份 (year)，排名 (rank) 以及分数 (score)
categories 表记录了项目的名称 (name)，因为某些原因，categories 表中可能存在数据丢失情况，如样例二
请编写 SQL 语句，查询 rankings 表和 categories 表中所有项目对应的项目名称 (name)、该项目的比赛年份 (year) 和分数 (score)

表定义 1: rankings (排名表)

列名	类型	注释
id	int unsigned	主键
category_id	int	项目 id
year	int	年份
rank	int	排名
score	int	得分
表定义 2: categories (项目类别表)

列名	类型	注释
id	int unsigned	主键
name	varchar	项目名称
Example
样例一：

表内容 1: rankings

id	category_id	year	rank	score
1	1	2008	15	90
2	1	2012	11	98
3	2	2016	10	99
表内容 2: categories

id	name
1	volleyball
2	basketball
3	soccer
在运行你的 SQL 语句之后，表应返回：

name	year	score
volleyball	2008	90
volleyball	2012	98
basketball	2016	99
样例二：

表内容 1: rankings

id	category_id	year	rank	score
1	1	2008	15	90
2	3	2012	11	98
3	2	2016	10	99
4	4	2017	40	72
表内容 2: categories

id	name
1	volleyball
2	basketball
3	soccer
在运行你的 SQL 语句之后，表应返回：

name	year	score
volleyball	2008	90
soccer	2012	98
basketball	2016	99
*/

-- Write your SQL Query here --
-- example: SELECT * FROM XX_TABLE WHERE XXX --
SELECT name, year, score FROM rankings, categories WHERE rankings.category_id = categories.id