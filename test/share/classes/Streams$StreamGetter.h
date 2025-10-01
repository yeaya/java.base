#ifndef _Streams$StreamGetter_h_
#define _Streams$StreamGetter_h_
//$ class Streams$StreamGetter
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

namespace java {
	namespace net {
		class Socket;
	}
}

class $export Streams$StreamGetter : public ::java::lang::Thread {
	$class(Streams$StreamGetter, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	Streams$StreamGetter();
	void init$(::java::net::Socket* s);
	virtual void getStream() {}
	virtual void run() override;
	::java::net::Socket* socket = nullptr;
};

#endif // _Streams$StreamGetter_h_