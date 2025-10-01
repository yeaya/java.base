#ifndef _java_net_Authenticator$RequestorType_h_
#define _java_net_Authenticator$RequestorType_h_
//$ class java.net.Authenticator$RequestorType
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("PROXY")
#undef PROXY
#pragma push_macro("SERVER")
#undef SERVER

namespace java {
	namespace net {

class $import Authenticator$RequestorType : public ::java::lang::Enum {
	$class(Authenticator$RequestorType, 0, ::java::lang::Enum)
public:
	Authenticator$RequestorType();
	static $Array<::java::net::Authenticator$RequestorType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::net::Authenticator$RequestorType* valueOf($String* name);
	static $Array<::java::net::Authenticator$RequestorType>* values();
	static ::java::net::Authenticator$RequestorType* PROXY;
	static ::java::net::Authenticator$RequestorType* SERVER;
	static $Array<::java::net::Authenticator$RequestorType>* $VALUES;
};

	} // net
} // java

#pragma pop_macro("PROXY")
#pragma pop_macro("SERVER")

#endif // _java_net_Authenticator$RequestorType_h_