#ifndef _java_lang_LiveStackFrameInfo$PrimitiveSlot64_h_
#define _java_lang_LiveStackFrameInfo$PrimitiveSlot64_h_
//$ class java.lang.LiveStackFrameInfo$PrimitiveSlot64
//$ extends java.lang.LiveStackFrame$PrimitiveSlot

#include <java/lang/LiveStackFrame$PrimitiveSlot.h>

namespace java {
	namespace lang {

class LiveStackFrameInfo$PrimitiveSlot64 : public ::java::lang::LiveStackFrame$PrimitiveSlot {
	$class(LiveStackFrameInfo$PrimitiveSlot64, $NO_CLASS_INIT, ::java::lang::LiveStackFrame$PrimitiveSlot)
public:
	LiveStackFrameInfo$PrimitiveSlot64();
	void init$(int64_t value);
	virtual int64_t longValue() override;
	virtual int32_t size() override;
	virtual $String* toString() override;
	int64_t value = 0;
};

	} // lang
} // java

#endif // _java_lang_LiveStackFrameInfo$PrimitiveSlot64_h_