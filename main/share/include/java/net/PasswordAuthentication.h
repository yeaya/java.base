#ifndef _java_net_PasswordAuthentication_h_
#define _java_net_PasswordAuthentication_h_
//$ class java.net.PasswordAuthentication
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace net {

class $import PasswordAuthentication : public ::java::lang::Object {
	$class(PasswordAuthentication, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PasswordAuthentication();
	void init$($String* userName, $chars* password);
	$chars* getPassword();
	$String* getUserName();
	$String* userName = nullptr;
	$chars* password = nullptr;
};

	} // net
} // java

#endif // _java_net_PasswordAuthentication_h_