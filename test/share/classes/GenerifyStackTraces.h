#ifndef _GenerifyStackTraces_h_
#define _GenerifyStackTraces_h_
//$ class GenerifyStackTraces
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DONE_DEPTH")
#undef DONE_DEPTH

namespace java {
	namespace lang {
		class StackTraceElement;
		class Thread;
	}
}

class $export GenerifyStackTraces : public ::java::lang::Object {
	$class(GenerifyStackTraces, 0, ::java::lang::Object)
public:
	GenerifyStackTraces();
	void init$();
	static void checkStack($Thread* t, $Array<::java::lang::StackTraceElement>* stack, int32_t depth);
	static void dumpStacks(int32_t depth);
	static void finishDump();
	static void main($StringArray* args);
	static void printStack($Thread* t, $Array<::java::lang::StackTraceElement>* stack);
	static void waitForDump();
	static $Object* go;
	static $StringArray* methodNames;
	static int32_t DONE_DEPTH;
	static bool testFailed;
	static $Thread* one;
	static bool trace;
};

#pragma pop_macro("DONE_DEPTH")

#endif // _GenerifyStackTraces_h_