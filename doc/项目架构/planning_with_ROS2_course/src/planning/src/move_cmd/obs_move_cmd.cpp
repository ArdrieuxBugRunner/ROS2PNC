/*
文件名: 障碍物运动指令
作者: C哥智驾说
完成时间: 2024.12

编译类型: 节点(move_cmd_node)
依赖: ROS2内部库:
      rclcpp
      tf2
      tf2_ros
      geometry_msgs
    外部库:
      config_reader
      vehical_info

Copyright © 2024 C哥智驾说 All rights reserved.
版权所有 侵权必究
*/

#include "obs_move_cmd.h"

namespace Planning
{
    ObsMoveCmd::ObsMoveCmd() : Node("obs_move_cmd_node") // 主车运动指令
    {
        RCLCPP_INFO(this->get_logger(), "obs_move_cmd_node created");
    }

} // namespace Planning

int main(int argc, char *argv[])
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<Planning::ObsMoveCmd>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}