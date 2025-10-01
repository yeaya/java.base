#ifndef _CloseAfterConnect$1_h_
#define _CloseAfterConnect$1_h_
//$ class CloseAfterConnect$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace net {
		class InetSocketAddress;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class SocketChannel;
		}
	}
}

class CloseAfterConnect$1 : public ::java::lang::Runnable {
	$class(CloseAfterConnect$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	CloseAfterConnect$1();
	void init$(::java::nio::channels::SocketChannel* val$sc, ::java::net::InetSocketAddress* val$isa);
	virtual void run() override;
	::java::net::InetSocketAddress* val$isa = nullptr;
	::java::nio::channels::SocketChannel* val$sc = nullptr;
};

#endif // _CloseAfterConnect$1_h_