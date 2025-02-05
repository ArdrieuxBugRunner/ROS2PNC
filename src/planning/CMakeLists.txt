# 兼容性设置 --------
cmake_minimum_required(VERSION 3.18.4)    # 与系统cmake版本一致
project(planning)
# 设置C/C++标准
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
endif()

# CMAKE_COMPILER_IS_GUNCXX 在新版本cmake中被启用，改为CMAKE_CXX_COMPILER_ID
if(CMAKE_CXX_COMPILER_ID MATCHES "GUN" OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# 兼容旧版本cmake，ROS2自动生成的cmake为3.8
if(POLICY CMP0148)
  cmake_policy(SET CMP0148 OLD)
endif()

# 设置cmake预编译指令：
#   生成compile_commands.json -> c_cpp_properties.json读取这个文件，防止预编译找不到cmake中的宏
#   c_cpp_properties.json中加上"compileCommands": "${workspaceFolder}/build/compile_commands.json"
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# 设置包名，此处包名=工程项目名称，让子目录节点安装时使用
set(PLANNING_PACKAGE_NAME ${PROJECT_NAME})

# 包含头文件和目录
include_directories(
  /usr/local/include/eigen-3.4.0
  src/common/config_reader
  src/common/math
  src/decision_center

  src/global_planner
  src/global_planner/global_planner_normal
  src/local_planner/local_path
  src/local_planner/local_speeds

  src/pnc_map_creator
  src/pnc_map_creator/pnc_map_straight
  src/pnc_map_creator/pnc_map_s_turn

  src/local_planner
  src/local_planner/local_path
  src/local_planner/local_speeds

  src/reference_line
  src/move_cmd
  src/planning_process

  src/vehicle_info
  src/vehicle_info/main_car
  src/vehicle_info/obs_car
)

# 查找依赖，与planning的xml内容对应
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(visualization_msgs REQUIRED)
find_package(base_msgs REQUIRED)
find_package(yaml-cpp REQUIRED)
find_package(ament_index_cpp REQUIRED)
find_package(Eigen3 REQUIRED)
find_package(OsqpEigen REQUIRED)

# 添加子目录
add_subdirectory(src/common)
add_subdirectory(src/decision_center)
add_subdirectory(src/pnc_map_creator)
add_subdirectory(src/global_planner)
add_subdirectory(src/local_planner)
add_subdirectory(src/reference_line)
add_subdirectory(src/vehicle_info)
add_subdirectory(src/planning_process)
add_subdirectory(src/move_cmd)

# 在每一个子目录中单独实现
# add_executable(planning_node src/planning_node.cpp)
# target_include_directories(planning_node PUBLIC
#   $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
#   $<INSTALL_INTERFACE:include>)
# target_compile_features(planning_node PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17
# ament_target_dependencies(
#   planning_node
#   "rclcpp"
# )

# 安装辅助目录
# install(TARGETS planning_node
#   DESTINATION lib/${PROJECT_NAME})
install(DIRECTORY
  config launch urdf rviz
  DESTINATION share/${PROJECT_NAME}
)

# 测试
# if(BUILD_TESTING)
#   find_package(ament_lint_auto REQUIRED)
#   # the following line skips the linter which checks for copyrights
#   # uncomment the line when a copyright and license is not present in all source files
#   #set(ament_cmake_copyright_FOUND TRUE)
#   # the following line skips cpplint (only works in a git repo)
#   # uncomment the line when this package is not in a git repo
#   #set(ament_cmake_cpplint_FOUND TRUE)
#   ament_lint_auto_find_test_dependencies()
# endif()

ament_package()
