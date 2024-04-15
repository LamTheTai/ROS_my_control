// Generated by gencpp from file my_service/AddTwoInts.msg
// DO NOT EDIT!


#ifndef MY_SERVICE_MESSAGE_ADDTWOINTS_H
#define MY_SERVICE_MESSAGE_ADDTWOINTS_H

#include <ros/service_traits.h>


#include <my_service/AddTwoIntsRequest.h>
#include <my_service/AddTwoIntsResponse.h>


namespace my_service
{

struct AddTwoInts
{

typedef AddTwoIntsRequest Request;
typedef AddTwoIntsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct AddTwoInts
} // namespace my_service


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::my_service::AddTwoInts > {
  static const char* value()
  {
    return "6a2e34150c00229791cc89ff309fff21";
  }

  static const char* value(const ::my_service::AddTwoInts&) { return value(); }
};

template<>
struct DataType< ::my_service::AddTwoInts > {
  static const char* value()
  {
    return "my_service/AddTwoInts";
  }

  static const char* value(const ::my_service::AddTwoInts&) { return value(); }
};


// service_traits::MD5Sum< ::my_service::AddTwoIntsRequest> should match
// service_traits::MD5Sum< ::my_service::AddTwoInts >
template<>
struct MD5Sum< ::my_service::AddTwoIntsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::my_service::AddTwoInts >::value();
  }
  static const char* value(const ::my_service::AddTwoIntsRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::my_service::AddTwoIntsRequest> should match
// service_traits::DataType< ::my_service::AddTwoInts >
template<>
struct DataType< ::my_service::AddTwoIntsRequest>
{
  static const char* value()
  {
    return DataType< ::my_service::AddTwoInts >::value();
  }
  static const char* value(const ::my_service::AddTwoIntsRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::my_service::AddTwoIntsResponse> should match
// service_traits::MD5Sum< ::my_service::AddTwoInts >
template<>
struct MD5Sum< ::my_service::AddTwoIntsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::my_service::AddTwoInts >::value();
  }
  static const char* value(const ::my_service::AddTwoIntsResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::my_service::AddTwoIntsResponse> should match
// service_traits::DataType< ::my_service::AddTwoInts >
template<>
struct DataType< ::my_service::AddTwoIntsResponse>
{
  static const char* value()
  {
    return DataType< ::my_service::AddTwoInts >::value();
  }
  static const char* value(const ::my_service::AddTwoIntsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MY_SERVICE_MESSAGE_ADDTWOINTS_H
