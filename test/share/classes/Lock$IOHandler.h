#ifndef _Lock$IOHandler_h_
#define _Lock$IOHandler_h_
//$ class Lock$IOHandler
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace io {
		class InputStream;
	}
}

class $export Lock$IOHandler : public ::java::lang::Runnable {
	$class(Lock$IOHandler, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	Lock$IOHandler();
	void init$(::java::io::InputStream* in);
	static void handle(::java::io::InputStream* in);
	virtual void run() override;
	::java::io::InputStream* in = nullptr;
};

#endif // _Lock$IOHandler_h_