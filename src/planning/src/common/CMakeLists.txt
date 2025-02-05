# 兼容性设置 --------
cmake_minimum_required(VERSION 3.18.4)    # 与系统cmake版本一致
project(common)

# 设置子目录config_reader和math需要的依赖
set(CONFIG_DEPENDS
  "rclcpp"
  "yaml-cpp"
  "ament_index_cpp"
)
set(MATH_DEPENDS
  "rclcpp"
  "base_msgs"
  "geometry_msgs"
  "nav_msgs"
)

# 添加动态库

# 安装动态库、节点和相关目录


