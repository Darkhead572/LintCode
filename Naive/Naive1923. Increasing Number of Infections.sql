/*
1923. Increasing Number of Infections
Write an SQL query to find the IDs of all dates with a higher number of new cases in the United States than the previous day's date.

Table definition: new_cases

columns_name	type	explaination
id	int unsigned	primary key
date	date	date
increased_count	int	The number of new infections
Example
Example 1:

Table content: new_cases

id	date	increased_count
1	2020-12-25	100994
2	2020-12-26	216858
3	2020-12-27	152102
4	2020-12-28	189044
After running your SQL statement, it should return:

id
2
4
Explanation：
2020-12-26 The number of new cases in the United States is higher than the previous day (100994 -> 216858)
2020-12-28 The number of new cases in the United States is higher than the previous day (152102 -> 189044)
Example 2:

Table content: new_cases

id	date	increased_count
1	2011-12-25	100994
2	2011-12-26	296858
3	2011-12-27	152102
4	2011-12-28	149044
After running your SQL statement, it should return:

id
2
Explanation：
2011-12-26 The number of new cases in the United States is higher than the previous day (100994 -> 296858)
Notice
Return result No Order Required
*/

/*
1923. 增长的疫情感染人数
编写一个 SQL 语句，来查找与前一天的日期相比美国的新增病例数更高的所有日期的 id。

表定义: new_cases (新增疫情)

列名	类型	注释
id	int unsigned	主键
date	date	日期
increased_count	int	新增感染人数
Example
样例一：

表内容: new_cases

id	date	increased_count
1	2020-12-25	100994
2	2020-12-26	216858
3	2020-12-27	152102
4	2020-12-28	189044
在运行你的 SQL 语句之后，应返回：

id
2
4
说明：
2020-12-26 美国的新增病例数比前一天高（100994 -> 216858）
2020-12-28 美国的新增病例数比前一天高（152102 -> 189044）
样例二：

表内容: new_cases

id	date	increased_count
1	2011-12-25	100994
2	2011-12-26	296858
3	2011-12-27	152102
4	2011-12-28	149044
在运行你的 SQL 语句之后，应返回：

id
2
说明：
2011-12-26 美国的新增病例数比前一天高（100994 -> 296858）
Notice
返回结果不要求顺序
*/
-- Write your SQL Query here --
-- example: SELECT * FROM XX_TABLE WHERE XXX --

SELECT y.id FROM new_cases AS x, new_cases AS y WHERE x.id + 1 = y.id AND y.increased_count > x.increased_count