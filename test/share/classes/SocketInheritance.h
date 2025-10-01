#ifndef _SocketInheritance_h_
#define _SocketInheritance_h_
//$ class SocketInheritance
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace nio {
		namespace channels {
			class SocketChannel;
		}
	}
}

class $export SocketInheritance : public ::java::lang::Object {
	$class(SocketInheritance, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SocketInheritance();
	void init$();
	static void child(int32_t port);
	static ::java::nio::channels::SocketChannel* connect(int32_t port);
	static void main($StringArray* args);
	static void start();
};

#endif // _SocketInheritance_h_