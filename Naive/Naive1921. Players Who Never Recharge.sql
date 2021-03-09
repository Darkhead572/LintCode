/*
1921. Players Who Never Recharge
A game database contains two tables, users table and recharges table.
Write a SQL query to find all players who never recharge.

Table definition 1: users

columns_name	type	explaination
id	int unsigned	primary key
name	varchar	username
Table definition 2: recharges

columns_name	type	explaination
id	int unsigned	primary key
user_id	int	user id
Example
Example 1:

Table content 1: users

id	name
1	XiaoXuesheng
2	Mike
3	John
4	Maria
Table content 2: recharges

id	user_id
1	3
2	1
For example, given the above table, your query should return:

player
Mike
Maria
Example 2:

Table content 1: users

id	name
1	XiaoXuesheng
2	Mike
3	John
Table content 2: recharges

id	user_id
1	3
2	1
For example, given the above table, your query should return:

player
Mike
Notice
Tip:

You can solve this problem by learning SQL joint query related knowledge
Returned column name: player
*/

/*
1921. 从不充值的玩家
某游戏数据库包含两个表，用户 (users) 表和充值 (recharges) 表，编写一个 SQL 语句，找出所有从未充值的玩家。

表定义 1: users (用户表)

列名	类型	注释
id	int unsigned	主键
name	varchar	用户姓名
表定义 2: recharges (充值表)

列名	类型	注释
id	int unsigned	主键
user_id	int	用户 id
Example
样例一：

表内容 1: users

id	name
1	XiaoXuesheng
2	Mike
3	John
4	Maria
表内容 2: recharges

id	user_id
1	3
2	1
按照上述要求，你的查询应该返回：

player
Mike
Maria
样例二：

表内容 1: users

id	name
1	XiaoXuesheng
2	Mike
3	John
表内容 2: recharges

id	user_id
1	3
2	1
按照上述要求，你的查询应该返回：

player
Mike
Notice
提示：

你可以通过学习 SQL 联合查询相关知识来解决这个问题
返回的列名：player
*/
-- Write your SQL Query here --
-- example: SELECT * FROM XX_TABLE WHERE XXX --

SELECT name FROM users WHERE name NOT IN(
    SELECT name FROM users, recharges WHERE users.id = recharges.user_id
)