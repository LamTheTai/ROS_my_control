// Generated by gencpp from file my_test/AddTwoInts.msg
// DO NOT EDIT!


#ifndef MY_TEST_MESSAGE_ADDTWOINTS_H
#define MY_TEST_MESSAGE_ADDTWOINTS_H

#include <ros/service_traits.h>


#include <my_test/AddTwoIntsRequest.h>
#include <my_test/AddTwoIntsResponse.h>


namespace my_test
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
} // namespace my_test


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::my_test::AddTwoInts > {
  static const char* value()
  {
    return "6a2e34150c00229791cc89ff309fff21";
  }

  static const char* value(const ::my_test::AddTwoInts&) { return value(); }
};

template<>
struct DataType< ::my_test::AddTwoInts > {
  static const char* value()
  {
    return "my_test/AddTwoInts";
  }

  static const char* value(const ::my_test::AddTwoInts&) { return value(); }
};


// service_traits::MD5Sum< ::my_test::AddTwoIntsRequest> should match
// service_traits::MD5Sum< ::my_test::AddTwoInts >
template<>
struct MD5Sum< ::my_test::AddTwoIntsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::my_test::AddTwoInts >::value();
  }
  static const char* value(const ::my_test::AddTwoIntsRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::my_test::AddTwoIntsRequest> should match
// service_traits::DataType< ::my_test::AddTwoInts >
template<>
struct DataType< ::my_test::AddTwoIntsRequest>
{
  static const char* value()
  {
    return DataType< ::my_test::AddTwoInts >::value();
  }
  static const char* value(const ::my_test::AddTwoIntsRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::my_test::AddTwoIntsResponse> should match
// service_traits::MD5Sum< ::my_test::AddTwoInts >
template<>
struct MD5Sum< ::my_test::AddTwoIntsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::my_test::AddTwoInts >::value();
  }
  static const char* value(const ::my_test::AddTwoIntsResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::my_test::AddTwoIntsResponse> should match
// service_traits::DataType< ::my_test::AddTwoInts >
template<>
struct DataType< ::my_test::AddTwoIntsResponse>
{
  static const char* value()
  {
    return DataType< ::my_test::AddTwoInts >::value();
  }
  static const char* value(const ::my_test::AddTwoIntsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MY_TEST_MESSAGE_ADDTWOINTS_H