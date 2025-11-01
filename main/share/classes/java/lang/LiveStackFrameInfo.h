#ifndef _java_lang_LiveStackFrameInfo_h_
#define _java_lang_LiveStackFrameInfo_h_
//$ class java.lang.LiveStackFrameInfo
//$ extends java.lang.StackFrameInfo
//$ implements java.lang.LiveStackFrame

#include <java/lang/Array.h>
#include <java/lang/LiveStackFrame.h>
#include <java/lang/StackFrameInfo.h>

#pragma push_macro("EMPTY_ARRAY")
#undef EMPTY_ARRAY
#pragma push_macro("MODE_COMPILED")
#undef MODE_COMPILED
#pragma push_macro("MODE_INTERPRETED")
#undef MODE_INTERPRETED

namespace java {
	namespace lang {
		class LiveStackFrame$PrimitiveSlot;
		class StackWalker;
	}
}

namespace java {
	namespace lang {

class LiveStackFrameInfo : public ::java::lang::StackFrameInfo, public ::java::lang::LiveStackFrame {
	$class(LiveStackFrameInfo, 0, ::java::lang::StackFrameInfo, ::java::lang::LiveStackFrame)
public:
	LiveStackFrameInfo();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t getByteCodeIndex() override;
	virtual $String* getClassName() override;
	virtual $Class* getDeclaringClass() override;
	virtual $String* getDescriptor() override;
	virtual $String* getFileName() override;
	virtual int32_t getLineNumber() override;
	virtual $String* getMethodName() override;
	virtual ::java::lang::invoke::MethodType* getMethodType() override;
	virtual int32_t hashCode() override;
	virtual bool isNativeMethod() override;
	void init$(::java::lang::StackWalker* walker);
	static ::java::lang::LiveStackFrame$PrimitiveSlot* asPrimitive(int32_t value);
	static ::java::lang::LiveStackFrame$PrimitiveSlot* asPrimitive(int64_t value);
	virtual $ObjectArray* getLocals() override;
	virtual $ObjectArray* getMonitors() override;
	virtual $ObjectArray* getStack() override;
	virtual ::java::lang::StackTraceElement* toStackTraceElement() override;
	virtual $String* toString() override;
	static $ObjectArray* EMPTY_ARRAY;
	static const int32_t MODE_INTERPRETED = 1;
	static const int32_t MODE_COMPILED = 2;
	$ObjectArray* monitors = nullptr;
	$ObjectArray* locals = nullptr;
	$ObjectArray* operands = nullptr;
	int32_t mode = 0;
};

	} // lang
} // java

#pragma pop_macro("EMPTY_ARRAY")
#pragma pop_macro("MODE_COMPILED")
#pragma pop_macro("MODE_INTERPRETED")

#endif // _java_lang_LiveStackFrameInfo_h_