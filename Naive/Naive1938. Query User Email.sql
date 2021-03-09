/*
1938. Query User Email
The users table records the user name (username), password (password) and email (email) of the user. Now the user "zhangsan" logs in, and logs in according to the user name and password
Please write a SQL statement to query the email of user "zhangsan" based on the user name (zhangsan) and password (zs789852).

Table definition: users

columns_name	type	explaination
username	varchar	user name (primary key)
password	varchar	user's password
email	varchar	user's email
Example
Example 1:

Table content: users

username	password	email
zhangsan	zs789852	zhangsan@gmail.com
lisi	ls654852	lisi@126.com
wanger	we951753	wanger@163.com
mazouri	mzr753951	mazouri@outlook.com
xiangfeitian	xft159357	xiangfeitian@qq.com
After running your SQL statement, the table should return:

username	email
zhangsan	zhangsan@gmail.com
Example 2:

Table content: users

username	password	email
zhangsan	zs789852	zhangsan@qq.com
lisi	ls654852	lisi@126.com
wanger	we951753	wanger@163.com
After running your SQL statement, the table should return:

username	email
zhangsan	zhangsan@qq.com
Notice
Tip:
What to return is username and email
*/

/*
1938. 查询用户邮箱
users 表记录着用户的用户名 (username)、密码 (password)以及邮箱 (email)，现在用户 "zhangsan" 通过输入用户名和密码进行登录
请编写 SQL 语句，根据用户名 (zhangsan) 和密码 (zs789852)，查询用户 "zhangsan" 的邮箱。

表定义: users (用户表)

列名	类型	注释
username	varchar	用户名 (主键)
password	varchar	用户密码
email	varchar	用户邮箱
Example
样例 1：

表内容: users

username	password	email
zhangsan	zs789852	zhangsan@gmail.com
lisi	ls654852	lisi@126.com
wanger	we951753	wanger@163.com
mazouri	mzr753951	mazouri@outlook.com
xiangfeitian	xft159357	xiangfeitian@qq.com
在运行你的 SQL 语句之后，表应返回：

username	email
zhangsan	zhangsan@gmail.com
样例 2：

表内容: users

username	password	email
zhangsan	zs789852	zhangsan@qq.com
lisi	ls654852	lisi@126.com
wanger	we951753	wanger@163.com
在运行你的 SQL 语句之后，表应返回：

username	email
zhangsan	zhangsan@qq.com
Notice
提示：
要返回的是 username 和 email
*/

-- Write your SQL Query here --
-- example: SELECT * FROM XX_TABLE WHERE XXX --
SELECT username, email FROM users WHERE username = 'zhangsan' AND password = 'zs789852'