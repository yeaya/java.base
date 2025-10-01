#ifndef _com_app_Utils_h_
#define _com_app_Utils_h_
//$ class com.app.Utils
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class StackTraceElement;
		class StackWalker$StackFrame;
	}
}

namespace com {
	namespace app {

class $export Utils : public ::java::lang::Object {
	$class(Utils, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Utils();
	void init$();
	static void assertEquals($String* actual, $String* expected, $String* msg);
	static void checkFrame($String* loaderName, ::java::lang::StackWalker$StackFrame* frame, ::java::lang::StackTraceElement* ste);
	static ::java::lang::StackWalker$StackFrame* makeStackFrame($Class* c, $String* methodname, $String* filename);
	static void verify($Class* caller, $String* loaderName, $String* methodname, $String* filename);
};

	} // app
} // com

#endif // _com_app_Utils_h_