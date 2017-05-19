// Generated by gencpp from file rover_manual/location_point.msg
// DO NOT EDIT!


#ifndef ROVER_MANUAL_MESSAGE_LOCATION_POINT_H
#define ROVER_MANUAL_MESSAGE_LOCATION_POINT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rover_manual
{
template <class ContainerAllocator>
struct location_point_
{
  typedef location_point_<ContainerAllocator> Type;

  location_point_()
    : x(0.0)
    , y(0.0)
    , distance(0.0)
    , heading(0.0)
    , correctedX(0.0)
    , correctedY(0.0)
    , id(0)  {
    }
  location_point_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)
    , distance(0.0)
    , heading(0.0)
    , correctedX(0.0)
    , correctedY(0.0)
    , id(0)  {
  (void)_alloc;
    }



   typedef double _x_type;
  _x_type x;

   typedef double _y_type;
  _y_type y;

   typedef double _distance_type;
  _distance_type distance;

   typedef double _heading_type;
  _heading_type heading;

   typedef double _correctedX_type;
  _correctedX_type correctedX;

   typedef double _correctedY_type;
  _correctedY_type correctedY;

   typedef int32_t _id_type;
  _id_type id;




  typedef boost::shared_ptr< ::rover_manual::location_point_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rover_manual::location_point_<ContainerAllocator> const> ConstPtr;

}; // struct location_point_

typedef ::rover_manual::location_point_<std::allocator<void> > location_point;

typedef boost::shared_ptr< ::rover_manual::location_point > location_pointPtr;
typedef boost::shared_ptr< ::rover_manual::location_point const> location_pointConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rover_manual::location_point_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rover_manual::location_point_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rover_manual

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'rover_manual': ['/home/ben/Catkin/catkin_ws_argon/src/rover_manual/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rover_manual::location_point_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rover_manual::location_point_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rover_manual::location_point_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rover_manual::location_point_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rover_manual::location_point_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rover_manual::location_point_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rover_manual::location_point_<ContainerAllocator> >
{
  static const char* value()
  {
    return "06cbcc71d2b6df75dbf930c8371e4b8c";
  }

  static const char* value(const ::rover_manual::location_point_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x06cbcc71d2b6df75ULL;
  static const uint64_t static_value2 = 0xdbf930c8371e4b8cULL;
};

template<class ContainerAllocator>
struct DataType< ::rover_manual::location_point_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rover_manual/location_point";
  }

  static const char* value(const ::rover_manual::location_point_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rover_manual::location_point_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 x\n\
float64 y\n\
float64 distance\n\
float64 heading\n\
float64 correctedX\n\
float64 correctedY\n\
int32 id\n\
";
  }

  static const char* value(const ::rover_manual::location_point_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rover_manual::location_point_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.distance);
      stream.next(m.heading);
      stream.next(m.correctedX);
      stream.next(m.correctedY);
      stream.next(m.id);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct location_point_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rover_manual::location_point_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rover_manual::location_point_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
    s << indent << "distance: ";
    Printer<double>::stream(s, indent + "  ", v.distance);
    s << indent << "heading: ";
    Printer<double>::stream(s, indent + "  ", v.heading);
    s << indent << "correctedX: ";
    Printer<double>::stream(s, indent + "  ", v.correctedX);
    s << indent << "correctedY: ";
    Printer<double>::stream(s, indent + "  ", v.correctedY);
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROVER_MANUAL_MESSAGE_LOCATION_POINT_H