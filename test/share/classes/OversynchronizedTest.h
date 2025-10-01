#ifndef _OversynchronizedTest_h_
#define _OversynchronizedTest_h_
//$ class OversynchronizedTest
//$ extends java.lang.Thread

#include <java/lang/Array.h>
#include <java/lang/Thread.h>

class TestObj;
namespace java {
	namespace io {
		class PrintWriter;
	}
}

class $export OversynchronizedTest : public ::java::lang::Thread {
	$class(OversynchronizedTest, 0, ::java::lang::Thread)
public:
	OversynchronizedTest();
	void init$();
	static void main($StringArray* args);
	virtual void run() override;
	static ::java::io::PrintWriter* writer;
	static ::TestObj* testObj;
	static int32_t loopNum;
};

#endif // _OversynchronizedTest_h_