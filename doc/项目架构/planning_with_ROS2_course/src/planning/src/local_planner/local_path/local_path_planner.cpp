/*
文件名: 局部路径规划器
作者: C哥智驾说
完成时间: 2024.12

编译类型: 动态库
依赖: ROS2内部库:
      rclcpp
      geometry_msgs
      nav_msgs
      tf2
    外部库:
      base_msgs
      config_reader
      mathlibs
      vehicle_info
      decision_center

Copyright © 2024 C哥智驾说 All rights reserved.
版权所有 侵权必究
*/

#include "local_path_planner.h"

namespace Planning
{
    LocalPathPlanner::LocalPathPlanner() // 局部路径规划器
    {
        RCLCPP_INFO(rclcpp::get_logger("local_path"), "local_path_planner created");
    }

} // namespace Planning