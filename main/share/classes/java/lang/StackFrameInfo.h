#ifndef _java_lang_StackFrameInfo_h_
#define _java_lang_StackFrameInfo_h_
//$ class java.lang.StackFrameInfo
//$ extends java.lang.StackWalker$StackFrame

#include <java/lang/StackWalker$StackFrame.h>

#pragma push_macro("JLIA")
#undef JLIA

namespace java {
	namespace lang {
		class StackTraceElement;
		class StackWalker;
	}
}
namespace java {
	namespace lang {
		namespace invoke {
			class MethodType;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace access {
			class JavaLangInvokeAccess;
		}
	}
}

namespace java {
	namespace lang {

class StackFrameInfo : public ::java::lang::StackWalker$StackFrame {
	$class(StackFrameInfo, 0, ::java::lang::StackWalker$StackFrame)
public:
	StackFrameInfo();
	void init$(::java::lang::StackWalker* walker);
	virtual $Class* declaringClass();
	void ensureRetainClassRefEnabled();
	virtual int32_t getByteCodeIndex() override;
	virtual $String* getClassName() override;
	virtual $Class* getDeclaringClass() override;
	virtual $String* getDescriptor() override;
	virtual $String* getFileName() override;
	virtual int32_t getLineNumber() override;
	virtual $String* getMethodName() override;
	virtual ::java::lang::invoke::MethodType* getMethodType() override;
	virtual bool isNativeMethod() override;
	virtual ::java::lang::StackTraceElement* toStackTraceElement() override;
	virtual $String* toString() override;
	static ::jdk::internal::access::JavaLangInvokeAccess* JLIA;
	bool retainClassRef = false;
	$Object* memberName = nullptr;
	int32_t bci = 0;
	$volatile(::java::lang::StackTraceElement*) ste = nullptr;
};

	} // lang
} // java

#pragma pop_macro("JLIA")

#endif // _java_lang_StackFrameInfo_h_