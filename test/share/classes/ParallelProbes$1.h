#ifndef _ParallelProbes$1_h_
#define _ParallelProbes$1_h_
//$ class ParallelProbes$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class ParallelProbes;
namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}

class ParallelProbes$1 : public ::java::lang::Runnable {
	$class(ParallelProbes$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	ParallelProbes$1();
	void init$(::ParallelProbes* this$0, ::java::nio::file::Path* val$p);
	virtual void run() override;
	::ParallelProbes* this$0 = nullptr;
	::java::nio::file::Path* val$p = nullptr;
};

#endif // _ParallelProbes$1_h_