#ifndef _EmptyBuffer$Server_h_
#define _EmptyBuffer$Server_h_
//$ class EmptyBuffer$Server
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace lang {
		class Exception;
	}
}
namespace java {
	namespace net {
		class SocketAddress;
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class DatagramChannel;
		}
	}
}

class EmptyBuffer$Server : public ::java::lang::Runnable {
	$class(EmptyBuffer$Server, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	EmptyBuffer$Server();
	void init$(::java::net::SocketAddress* clientAddress);
	virtual int32_t port();
	virtual void run() override;
	virtual void showBuffer($String* s, ::java::nio::ByteBuffer* bb);
	virtual void throwException();
	::java::nio::channels::DatagramChannel* dc = nullptr;
	::java::net::SocketAddress* clientAddress = nullptr;
	::java::lang::Exception* e = nullptr;
};

#endif // _EmptyBuffer$Server_h_