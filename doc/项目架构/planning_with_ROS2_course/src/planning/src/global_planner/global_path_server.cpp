/*
文件名: 全局路径服务器
作者: C哥智驾说
完成时间: 2024.12

编译类型: 节点（global_path_server_node）
依赖: ROS2内部库:
        rclcpp
        geometry_msgs
        nav_msgs
        visualization_msgs
    外部库:
        base_msgs
        config_reader
        global_planner

接收请求: base_msgs::msg::PNCMap pnc_map
响应: nav_msgs::msg::Path global_path
发布: nav_msgs::msg::Path global_path
    visualization_msgs::msg::Marker global_path_rviz

Copyright © 2024 C哥智驾说 All rights reserved.
版权所有 侵权必究
*/

#include "global_path_server.h"

namespace Planning
{
    GlobalPathServer::GlobalPathServer() : Node("global_path_server_node") // 全局路径服务器
    {
        RCLCPP_INFO(this->get_logger(), "global_path_server_node created");
    }

} // namespace Planning

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<Planning::GlobalPathServer>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}