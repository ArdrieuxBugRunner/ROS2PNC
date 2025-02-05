#include "planning_process.h"


namespace Planning{
	PlanningProcess::PlanningProcess() : Node("planning_node")
    {
        RCLCPP_INFO(this->get_logger(), "planning_node created");
    }

	bool PlanningProcess::process()      // 总流程函数
    {
        RCLCPP_INFO(this->get_logger(), "Processing ...");
        return true;
    }		
} // namespace Planning