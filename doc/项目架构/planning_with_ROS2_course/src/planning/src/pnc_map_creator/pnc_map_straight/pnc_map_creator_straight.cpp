/*
文件名: 直道地图创建器
作者: C哥智驾说
完成时间: 2024.12

编译类型: 动态库
依赖: ROS2内部库:
        rclcpp
        geometry_msgs
        visualization_msgs
    外部库:
        base_msgs
        config_reader

Copyright © 2024 C哥智驾说 All rights reserved.
版权所有 侵权必究
*/

#include "pnc_map_creator_straight.h"

namespace Planning
{
    PNCMapCreatorStraight::PNCMapCreatorStraight() // 直道地图
    {
        RCLCPP_INFO(rclcpp::get_logger("pnc_map"), "pnc_map_creator created");
    }

} // namespace Planning