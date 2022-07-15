# generated from rosidl_generator_py/resource/_idl.py.em
# with input from msg_srv_action_interface_py_test:srv/Conversion.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Conversion_Request(type):
    """Metaclass of message 'Conversion_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('msg_srv_action_interface_py_test')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'msg_srv_action_interface_py_test.srv.Conversion_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__conversion__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__conversion__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__conversion__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__conversion__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__conversion__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Conversion_Request(metaclass=Metaclass_Conversion_Request):
    """Message class 'Conversion_Request'."""

    __slots__ = [
        '_cm',
    ]

    _fields_and_field_types = {
        'cm': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.cm = kwargs.get('cm', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.cm != other.cm:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def cm(self):
        """Message field 'cm'."""
        return self._cm

    @cm.setter
    def cm(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cm' field must be of type 'float'"
        self._cm = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Conversion_Response(type):
    """Metaclass of message 'Conversion_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('msg_srv_action_interface_py_test')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'msg_srv_action_interface_py_test.srv.Conversion_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__conversion__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__conversion__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__conversion__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__conversion__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__conversion__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Conversion_Response(metaclass=Metaclass_Conversion_Response):
    """Message class 'Conversion_Response'."""

    __slots__ = [
        '_inch',
    ]

    _fields_and_field_types = {
        'inch': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.inch = kwargs.get('inch', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.inch != other.inch:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def inch(self):
        """Message field 'inch'."""
        return self._inch

    @inch.setter
    def inch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'inch' field must be of type 'float'"
        self._inch = value


class Metaclass_Conversion(type):
    """Metaclass of service 'Conversion'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('msg_srv_action_interface_py_test')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'msg_srv_action_interface_py_test.srv.Conversion')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__conversion

            from msg_srv_action_interface_py_test.srv import _conversion
            if _conversion.Metaclass_Conversion_Request._TYPE_SUPPORT is None:
                _conversion.Metaclass_Conversion_Request.__import_type_support__()
            if _conversion.Metaclass_Conversion_Response._TYPE_SUPPORT is None:
                _conversion.Metaclass_Conversion_Response.__import_type_support__()


class Conversion(metaclass=Metaclass_Conversion):
    from msg_srv_action_interface_py_test.srv._conversion import Conversion_Request as Request
    from msg_srv_action_interface_py_test.srv._conversion import Conversion_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
