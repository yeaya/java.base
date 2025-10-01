#ifndef _ChangingAddress_h_
#define _ChangingAddress_h_
//$ class ChangingAddress
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace net {
		class DatagramSocket;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class DatagramChannel;
		}
	}
}

class $export ChangingAddress : public ::java::lang::Object {
	$class(ChangingAddress, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ChangingAddress();
	void init$();
	static void check(::java::net::DatagramSocket* ds, ::java::nio::channels::DatagramChannel* dc);
	static void main($StringArray* args);
};

#endif // _ChangingAddress_h_