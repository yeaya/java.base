#ifndef _VerifyStackTrace$Recorder_h_
#define _VerifyStackTrace$Recorder_h_
//$ class VerifyStackTrace$Recorder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class StackWalker$StackFrame;
		class StringBuilder;
	}
}

class $export VerifyStackTrace$Recorder : public ::java::lang::Object {
	$class(VerifyStackTrace$Recorder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	VerifyStackTrace$Recorder();
	void init$();
	void recordSTE(int64_t counter, ::java::lang::StringBuilder* s, ::java::lang::StackWalker$StackFrame* f);
	bool found = false;
};

#endif // _VerifyStackTrace$Recorder_h_