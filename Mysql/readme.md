### 简介
1. 数据库是数据存储的仓库，数据库管理系统是操作和管理数据库的大型软件，SQL是操作关系型数据库的编程语言，是一种规范标准。

2. mysql是关系型数据库RDBMS，关系型数据库是建立在关系模型基础上的，由多张相互连接的二维表组成。
  - 2.1使用表存储数据，格式统一，便于维护
  - 2.2使用sql语言进行操作，标准统一而且使用方便

### SQL
#### SQL通用语法

#### SQL分类

#### DDl(数据定义语言，库、表、字段)

- 查询所有数据库
```SQL
SHOW DATABASES;
```

- 查询当前数据库
```SQL
SHOW DATABASE();
```

- 创建数据库
```SQL
CREATE DATABASE IF NOT EXISTS database DEFAULT CHARSET UTF8 COLLATE 排序;
```

- 删除数据库
```SQL
DROP DATABASE IF EXISTS database;
```

- USE数据库
```SQL
USE databse;
```


#### DMl（数据操作语言，仅限增删改）

#### DQl（数据查询语言）

#### DCl（数据控制语言，用户、权限）
