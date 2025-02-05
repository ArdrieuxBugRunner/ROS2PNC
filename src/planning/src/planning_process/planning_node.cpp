#include "planning_process.h"

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    RCLCPP_INFO(rclcpp::get_logger("planning_node"), "planning started/created by main func");
    
    auto node = std::make_shared<Planning::PlanningProcess>();
	if(!node->process()){
		RCLCPP_ERROR(rclcpp::get_logger("planning_node"), "planning failed");
		rclcpp::shutdown();
		return 1;
	}
	
	rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}

