// Generated by gencpp from file gym_gazebo/Step.msg
// DO NOT EDIT!


#ifndef GYM_GAZEBO_MESSAGE_STEP_H
#define GYM_GAZEBO_MESSAGE_STEP_H

#include <ros/service_traits.h>


#include <gym_gazebo/StepRequest.h>
#include <gym_gazebo/StepResponse.h>


namespace gym_gazebo
{

struct Step
{

typedef StepRequest Request;
typedef StepResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Step
} // namespace gym_gazebo


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::gym_gazebo::Step > {
  static const char* value()
  {
    return "6aeb2d84ae696b706a75700e2f66e1e5";
  }

  static const char* value(const ::gym_gazebo::Step&) { return value(); }
};

template<>
struct DataType< ::gym_gazebo::Step > {
  static const char* value()
  {
    return "gym_gazebo/Step";
  }

  static const char* value(const ::gym_gazebo::Step&) { return value(); }
};


// service_traits::MD5Sum< ::gym_gazebo::StepRequest> should match
// service_traits::MD5Sum< ::gym_gazebo::Step >
template<>
struct MD5Sum< ::gym_gazebo::StepRequest>
{
  static const char* value()
  {
    return MD5Sum< ::gym_gazebo::Step >::value();
  }
  static const char* value(const ::gym_gazebo::StepRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::gym_gazebo::StepRequest> should match
// service_traits::DataType< ::gym_gazebo::Step >
template<>
struct DataType< ::gym_gazebo::StepRequest>
{
  static const char* value()
  {
    return DataType< ::gym_gazebo::Step >::value();
  }
  static const char* value(const ::gym_gazebo::StepRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::gym_gazebo::StepResponse> should match
// service_traits::MD5Sum< ::gym_gazebo::Step >
template<>
struct MD5Sum< ::gym_gazebo::StepResponse>
{
  static const char* value()
  {
    return MD5Sum< ::gym_gazebo::Step >::value();
  }
  static const char* value(const ::gym_gazebo::StepResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::gym_gazebo::StepResponse> should match
// service_traits::DataType< ::gym_gazebo::Step >
template<>
struct DataType< ::gym_gazebo::StepResponse>
{
  static const char* value()
  {
    return DataType< ::gym_gazebo::Step >::value();
  }
  static const char* value(const ::gym_gazebo::StepResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // GYM_GAZEBO_MESSAGE_STEP_H