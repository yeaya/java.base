#ifndef _CloseTimeoutChannel$AcceptorThread_h_
#define _CloseTimeoutChannel$AcceptorThread_h_
//$ class CloseTimeoutChannel$AcceptorThread
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

#pragma push_macro("INDENT")
#undef INDENT

namespace java {
	namespace nio {
		namespace channels {
			class ServerSocketChannel;
		}
	}
}

class $export CloseTimeoutChannel$AcceptorThread : public ::java::lang::Thread {
	$class(CloseTimeoutChannel$AcceptorThread, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	CloseTimeoutChannel$AcceptorThread();
	void init$(::java::nio::channels::ServerSocketChannel* listener);
	virtual void run() override;
	$String* INDENT = nullptr;
	::java::nio::channels::ServerSocketChannel* _listener = nullptr;
};

#pragma pop_macro("INDENT")

#endif // _CloseTimeoutChannel$AcceptorThread_h_