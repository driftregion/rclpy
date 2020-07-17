import rclpy.node
from rclpy.impl.implementation_singleton import rclpy_lifecycle_implementation as _rclpy_lifecycle

class LifecycleNode(rclpy.node.Node):
    def __init__(self, *args, **kwargs):
        super().__init__(*args, **kwargs)
        with self.handle as node_capsule:
            self._lifecycle_handle = _rclpy_lifecycle.rclpy_lifecycle_create(

            )

