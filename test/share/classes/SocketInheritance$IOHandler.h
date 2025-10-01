#ifndef _SocketInheritance$IOHandler_h_
#define _SocketInheritance$IOHandler_h_
//$ class SocketInheritance$IOHandler
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace io {
		class InputStream;
	}
}

class $export SocketInheritance$IOHandler : public ::java::lang::Runnable {
	$class(SocketInheritance$IOHandler, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	SocketInheritance$IOHandler();
	void init$(::java::io::InputStream* in);
	static void handle(::java::io::InputStream* in);
	virtual void run() override;
	::java::io::InputStream* in = nullptr;
};

#endif // _SocketInheritance$IOHandler_h_