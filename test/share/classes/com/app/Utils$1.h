#ifndef _com_app_Utils$1_h_
#define _com_app_Utils$1_h_
//$ class com.app.Utils$1
//$ extends java.lang.StackWalker$StackFrame

#include <java/lang/StackWalker$StackFrame.h>

namespace java {
	namespace lang {
		class StackTraceElement;
	}
}

namespace com {
	namespace app {

class Utils$1 : public ::java::lang::StackWalker$StackFrame {
	$class(Utils$1, $NO_CLASS_INIT, ::java::lang::StackWalker$StackFrame)
public:
	Utils$1();
	void init$($Class* val$c, $String* val$methodname, $String* val$filename);
	virtual int32_t getByteCodeIndex() override;
	$String* getClassLoaderName($Class* c);
	virtual $String* getClassName() override;
	virtual $Class* getDeclaringClass() override;
	virtual $String* getFileName() override;
	virtual int32_t getLineNumber() override;
	virtual $String* getMethodName() override;
	virtual bool isNativeMethod() override;
	virtual ::java::lang::StackTraceElement* toStackTraceElement() override;
	virtual $String* toString() override;
	$String* val$filename = nullptr;
	$String* val$methodname = nullptr;
	$Class* val$c = nullptr;
};

	} // app
} // com

#endif // _com_app_Utils$1_h_