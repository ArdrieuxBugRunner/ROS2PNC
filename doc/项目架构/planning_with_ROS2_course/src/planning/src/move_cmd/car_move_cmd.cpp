/*
文件名: 主车运动指令
作者: C哥智驾说
完成时间: 2024.12

编译类型: 节点(move_cmd_node)
依赖: ROS2内部库:
      rclcpp
      tf2_ros
      geometry_msgs
    外部库:
      base_msgs
      config_reader
      vehicle_info

Copyright © 2024 C哥智驾说 All rights reserved.
版权所有 侵权必究
*/

#include "car_move_cmd.h"

namespace Planning
{
    CarMoveCmd::CarMoveCmd() : Node("car_move_cmd_node") // 主车运动指令
    {
        RCLCPP_INFO(this->get_logger(), "car_move_cmd_node created");
    }

} // namespace Planning

int main(int argc, char *argv[])
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<Planning::CarMoveCmd>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}