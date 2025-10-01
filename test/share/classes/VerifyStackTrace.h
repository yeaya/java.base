#ifndef _VerifyStackTrace_h_
#define _VerifyStackTrace_h_
//$ class VerifyStackTrace
//$ extends java.lang.Object

#include <java/lang/Array.h>

class VerifyStackTrace$Recorder;
class VerifyStackTrace$TestCase;
namespace java {
	namespace lang {
		class Runnable;
		class StackWalker$StackFrame;
		class StringBuilder;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicLong;
			}
		}
	}
}

class $export VerifyStackTrace : public ::java::lang::Object {
	$class(VerifyStackTrace, $NO_CLASS_INIT, ::java::lang::Object)
public:
	VerifyStackTrace();
	void init$();
	static void invoke(::java::lang::Runnable* run);
	static void lambda$test$0(::VerifyStackTrace$Recorder* recorder, ::java::util::concurrent::atomic::AtomicLong* counter, ::java::lang::StringBuilder* builder, ::java::lang::StackWalker$StackFrame* f);
	static void lambda$test$1(::VerifyStackTrace$TestCase* test, ::VerifyStackTrace$Recorder* recorder, ::java::util::concurrent::atomic::AtomicLong* counter, ::java::lang::StringBuilder* builder);
	static void main($StringArray* args);
	static $String* prepare($String* produced, bool eraseSensitiveInfo);
	static void test(::VerifyStackTrace$TestCase* test);
};

#endif // _VerifyStackTrace_h_