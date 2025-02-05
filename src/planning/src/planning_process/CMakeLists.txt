# 兼容性设置 --------
cmake_minimum_required(VERSION 3.18.4)    # 与系统cmake版本一致
project(planning_process)

# 设置子目录config_reader和math需要的依赖
set(DEPENDS
	"rclcpp"
	"nav_msgs"
	"base_msgs"
	"tf2"
	"tf2_ros"
)

# 添加节点
add_executable(
    planning_node   # 节点名称  
    ${CMAKE_CURRENT_SOURCE_DIR}/planning_node.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/planning_process.cpp
)
set(target planning_node)

# 添加依赖
ament_target_dependencies(${target}
    ${DEPENDS}
)
# target_link_libraries(${target}

# )

# 安装动态库、节点和相关目录
install(TARGETS
    ${target}
    DESTINATION lib/${PLANNING_PACKAGE_NAME}    
)

