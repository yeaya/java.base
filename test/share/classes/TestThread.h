#ifndef _TestThread_h_
#define _TestThread_h_
//$ class TestThread
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

namespace java {
	namespace io {
		class PrintStream;
	}
}
namespace java {
	namespace lang {
		class Exception;
	}
}

class $export TestThread : public ::java::lang::Thread {
	$class(TestThread, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	TestThread();
	void init$($String* name, ::java::io::PrintStream* log);
	void init$($String* name);
	virtual int32_t finish(int64_t timeout);
	virtual void finishAndThrow(int64_t timeout);
	virtual void go() {}
	virtual void run() override;
	virtual $String* toString() override;
	::java::lang::Exception* failure = nullptr;
	$String* name = nullptr;
	::java::io::PrintStream* log = nullptr;
	$Thread* main = nullptr;
};

#endif // _TestThread_h_