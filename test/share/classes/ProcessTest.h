#ifndef _ProcessTest_h_
#define _ProcessTest_h_
//$ class ProcessTest
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace lang {
		class Process;
		class ProcessBuilder;
	}
}

class ProcessTest : public ::java::lang::Runnable {
	$class(ProcessTest, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	ProcessTest();
	void init$();
	virtual void run() override;
	virtual void runTest();
	::java::lang::ProcessBuilder* bldr = nullptr;
	::java::lang::Process* p = nullptr;
};

#endif // _ProcessTest_h_