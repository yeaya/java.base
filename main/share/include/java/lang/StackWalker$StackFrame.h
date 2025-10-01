#ifndef _java_lang_StackWalker$StackFrame_h_
#define _java_lang_StackWalker$StackFrame_h_
//$ interface java.lang.StackWalker$StackFrame
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class StackTraceElement;
	}
}
namespace java {
	namespace lang {
		namespace invoke {
			class MethodType;
		}
	}
}

namespace java {
	namespace lang {

class $import StackWalker$StackFrame : public ::java::lang::Object {
	$interface(StackWalker$StackFrame, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t getByteCodeIndex() {return 0;}
	virtual $String* getClassName() {return nullptr;}
	virtual $Class* getDeclaringClass() {return nullptr;}
	virtual $String* getDescriptor();
	virtual $String* getFileName() {return nullptr;}
	virtual int32_t getLineNumber() {return 0;}
	virtual $String* getMethodName() {return nullptr;}
	virtual ::java::lang::invoke::MethodType* getMethodType();
	virtual bool isNativeMethod() {return false;}
	virtual ::java::lang::StackTraceElement* toStackTraceElement() {return nullptr;}
};

	} // lang
} // java

#endif // _java_lang_StackWalker$StackFrame_h_