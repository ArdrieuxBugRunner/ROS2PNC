/*
文件名: pnc地图服务器
作者: C哥智驾说
完成时间: 2024.12

编译类型: 节点（pnc_map_server_node）
依赖: ROS2内部库:
        rclcpp
    外部库:
        base_msgs
        config_reader
        pnc_map_creator

Copyright © 2024 C哥智驾说 All rights reserved.
版权所有 侵权必究
*/

#include "pnc_map_server.h"

namespace Planning
{
    PNCMapServer::PNCMapServer() : Node("pnc_map_server_node") // 全局路径服务器
    {
        RCLCPP_INFO(this->get_logger(), "pnc_map_server_node created");
    }

} // namespace Planning

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<Planning::PNCMapServer>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}