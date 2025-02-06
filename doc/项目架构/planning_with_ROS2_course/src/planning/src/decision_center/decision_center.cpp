/*
文件名: 决策中心
作者: C哥智驾说
完成时间: 2024.12

编译类型: 动态库
依赖: ROS2内部库:
        rclcpp
    外部库:
        config_reader
        vehicle_info

Copyright © 2024 C哥智驾说 All rights reserved.
版权所有 侵权必究
*/

#include "decision_center.h"

namespace Planning
{
    DecisionCenter::DecisionCenter()
    {
        RCLCPP_INFO(rclcpp::get_logger("decision_center"), "decision_center created");
    }

}// namespace Planning