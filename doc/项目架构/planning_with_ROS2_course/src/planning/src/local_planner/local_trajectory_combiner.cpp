/*
文件名: 轨迹合成器
作者: C哥智驾说
完成时间: 2024.12

编译类型: 动态库
依赖: ROS2内部库:
        rclcpp
    外部库:
        base_msgs

Copyright © 2024 C哥智驾说 All rights reserved.
版权所有 侵权必究
*/

#include "local_trajectory_combiner.h"

namespace Planning
{
    LocalTrajectoryCombiner::LocalTrajectoryCombiner() // 轨迹合成器
    {
        RCLCPP_INFO(rclcpp::get_logger("local_trajectory"), "local_trajectory_combiner created");
    }

} // namespace Planning