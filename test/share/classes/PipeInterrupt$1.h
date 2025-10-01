#ifndef _PipeInterrupt$1_h_
#define _PipeInterrupt$1_h_
//$ class PipeInterrupt$1
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

class PipeInterrupt;
namespace java {
	namespace nio {
		namespace channels {
			class Pipe;
		}
	}
}

class PipeInterrupt$1 : public ::java::lang::Thread {
	$class(PipeInterrupt$1, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	PipeInterrupt$1();
	void init$(::PipeInterrupt* this$0, $String* arg0);
	void close();
	virtual void run() override;
	::PipeInterrupt* this$0 = nullptr;
	::java::nio::channels::Pipe* testPipe = nullptr;
};

#endif // _PipeInterrupt$1_h_