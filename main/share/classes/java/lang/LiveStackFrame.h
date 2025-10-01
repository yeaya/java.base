#ifndef _java_lang_LiveStackFrame_h_
#define _java_lang_LiveStackFrame_h_
//$ interface java.lang.LiveStackFrame
//$ extends java.lang.StackWalker$StackFrame

#include <java/lang/Array.h>
#include <java/lang/StackWalker$StackFrame.h>

namespace java {
	namespace lang {
		class StackWalker;
	}
}
namespace java {
	namespace util {
		class Set;
	}
}

namespace java {
	namespace lang {

class LiveStackFrame : public ::java::lang::StackWalker$StackFrame {
	$interface(LiveStackFrame, $NO_CLASS_INIT, ::java::lang::StackWalker$StackFrame)
public:
	virtual $ObjectArray* getLocals() {return nullptr;}
	virtual $ObjectArray* getMonitors() {return nullptr;}
	virtual $ObjectArray* getStack() {return nullptr;}
	static ::java::lang::StackWalker* getStackWalker();
	static ::java::lang::StackWalker* getStackWalker(::java::util::Set* options);
};

	} // lang
} // java

#endif // _java_lang_LiveStackFrame_h_