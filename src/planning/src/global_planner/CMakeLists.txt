# 兼容性设置 --------
cmake_minimum_required(VERSION 3.18.4)    # 与系统cmake版本一致
project(global_planner)

# 设置子目录config_reader和math需要的依赖
set(DEPENDS
  "rclcpp"
  "geometry_msgs"
  "nav_msgs"
  "visualization_msgs"
  "base_msgs"
  "ament_index_cpp"
)

# 添加动态库

# 添加依赖

# 安装动态库、节点和相关目录


