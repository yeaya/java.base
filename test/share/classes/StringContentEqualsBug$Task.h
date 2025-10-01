#ifndef _StringContentEqualsBug$Task_h_
#define _StringContentEqualsBug$Task_h_
//$ class StringContentEqualsBug$Task
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

namespace java {
	namespace lang {
		class Exception;
		class StringBuffer;
	}
}

class $export StringContentEqualsBug$Task : public ::java::lang::Thread {
	$class(StringContentEqualsBug$Task, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	StringContentEqualsBug$Task();
	void init$(::java::lang::StringBuffer* sb);
	virtual void doWith(::java::lang::StringBuffer* sb) {}
	virtual void run() override;
	$volatile(::java::lang::StringBuffer*) sb = nullptr;
	$volatile(::java::lang::Exception*) exception = nullptr;
};

#endif // _StringContentEqualsBug$Task_h_