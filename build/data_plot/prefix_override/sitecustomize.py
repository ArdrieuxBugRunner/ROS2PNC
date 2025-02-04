import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/panjincheng/Desktop/ws_ROS2PNC/install/data_plot'
