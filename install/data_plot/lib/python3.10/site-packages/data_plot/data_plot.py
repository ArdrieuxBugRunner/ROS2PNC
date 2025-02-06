import rclpy
from rclpy.node import Node
import numpy as np
import matplotlib.pyplot as plt



class PlotData(Node):
    """绘制图像的数据类

    Args:
        
    """
    def __init__(self):
        super().__init__('data_plot_node')
        print("data_plot_node created")     # python自带打印
        self.get_logger().info("**** data_plot_node created ****")




def main():
    '''初始化'''
    rclpy.init()
    plot_node = PlotData()
    
    '''按下ctrl+c关闭plot_node节点'''
    try:
        rclpy.spin(plot_node)   # 将节点循环（spin）放置在try中
    except KeyboardInterrupt:
        print("Interrupted by user")
    finally:
        rclpy.shutdown()             # 防止按下ctrl+c时无法关闭
    


if __name__ == '__main__':
    main()
