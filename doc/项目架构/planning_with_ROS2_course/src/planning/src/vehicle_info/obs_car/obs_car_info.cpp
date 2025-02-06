/*
文件名: 障碍物信息
作者: C哥智驾说
完成时间: 2024.12

编译类型: 动态库
依赖: ROS2内部库:
        rclcpp
        nav_msgs
        geometry_msgs
        tf2
    外部库:
        base_msgs
        config_reader
        mathlibs

Copyright © 2024 C哥智驾说 All rights reserved.
版权所有 侵权必究
*/

#include "obs_car_info.h"

namespace Planning
{
    ObsCar::ObsCar() // 障碍物信息
    {
        RCLCPP_INFO(rclcpp::get_logger("vehicle"), "obs_car created");
    }

} // namespace Planning