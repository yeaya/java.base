#ifndef _GroupOfOne_h_
#define _GroupOfOne_h_
//$ class GroupOfOne
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace net {
		class SocketAddress;
	}
}

class $export GroupOfOne : public ::java::lang::Object {
	$class(GroupOfOne, $NO_CLASS_INIT, ::java::lang::Object)
public:
	GroupOfOne();
	void init$();
	static void main($StringArray* args);
	static void test(::java::net::SocketAddress* sa, bool closeChannel, bool shutdownGroup);
};

#endif // _GroupOfOne_h_