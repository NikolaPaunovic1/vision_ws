; Auto-generated. Do not edit!


(cl:in-package actionlib_tutorials2-msg)


;//! \htmlinclude FibonacciGoal.msg.html

(cl:defclass <FibonacciGoal> (roslisp-msg-protocol:ros-message)
  ((order
    :reader order
    :initarg :order
    :type cl:integer
    :initform 0))
)

(cl:defclass FibonacciGoal (<FibonacciGoal>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <FibonacciGoal>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'FibonacciGoal)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name actionlib_tutorials2-msg:<FibonacciGoal> is deprecated: use actionlib_tutorials2-msg:FibonacciGoal instead.")))

(cl:ensure-generic-function 'order-val :lambda-list '(m))
(cl:defmethod order-val ((m <FibonacciGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader actionlib_tutorials2-msg:order-val is deprecated.  Use actionlib_tutorials2-msg:order instead.")
  (order m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <FibonacciGoal>) ostream)
  "Serializes a message object of type '<FibonacciGoal>"
  (cl:let* ((signed (cl:slot-value msg 'order)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <FibonacciGoal>) istream)
  "Deserializes a message object of type '<FibonacciGoal>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'order) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<FibonacciGoal>)))
  "Returns string type for a message object of type '<FibonacciGoal>"
  "actionlib_tutorials2/FibonacciGoal")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'FibonacciGoal)))
  "Returns string type for a message object of type 'FibonacciGoal"
  "actionlib_tutorials2/FibonacciGoal")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<FibonacciGoal>)))
  "Returns md5sum for a message object of type '<FibonacciGoal>"
  "6889063349a00b249bd1661df429d822")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'FibonacciGoal)))
  "Returns md5sum for a message object of type 'FibonacciGoal"
  "6889063349a00b249bd1661df429d822")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<FibonacciGoal>)))
  "Returns full string definition for message of type '<FibonacciGoal>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#goal definition~%int32 order~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'FibonacciGoal)))
  "Returns full string definition for message of type 'FibonacciGoal"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#goal definition~%int32 order~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <FibonacciGoal>))
  (cl:+ 0
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <FibonacciGoal>))
  "Converts a ROS message object to a list"
  (cl:list 'FibonacciGoal
    (cl:cons ':order (order msg))
))
