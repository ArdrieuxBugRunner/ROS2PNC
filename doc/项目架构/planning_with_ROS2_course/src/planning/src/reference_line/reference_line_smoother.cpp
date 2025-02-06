/*
文件名: 参考线平滑器
作者: C哥智驾说
完成时间: 2024.12

编译类型: 动态库
依赖: ROS2内部库:
        rclcpp
        geometry_msgs
    外部库:
        base_msgs
        config_reader
        Eigen
        OsqpEigen

Copyright © 2024 C哥智驾说 All rights reserved.
版权所有 侵权必究
*/

#include "reference_line_smoother.h"

namespace Planning
{
    ReferenceLineSmoother::ReferenceLineSmoother() // 参考线平滑
    {
        RCLCPP_INFO(rclcpp::get_logger("reference_line"), "reference_line_smoother created");
    }

}// namespace Planning