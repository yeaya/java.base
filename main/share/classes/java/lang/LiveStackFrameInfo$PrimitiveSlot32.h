#ifndef _java_lang_LiveStackFrameInfo$PrimitiveSlot32_h_
#define _java_lang_LiveStackFrameInfo$PrimitiveSlot32_h_
//$ class java.lang.LiveStackFrameInfo$PrimitiveSlot32
//$ extends java.lang.LiveStackFrame$PrimitiveSlot

#include <java/lang/LiveStackFrame$PrimitiveSlot.h>

namespace java {
	namespace lang {

class LiveStackFrameInfo$PrimitiveSlot32 : public ::java::lang::LiveStackFrame$PrimitiveSlot {
	$class(LiveStackFrameInfo$PrimitiveSlot32, $NO_CLASS_INIT, ::java::lang::LiveStackFrame$PrimitiveSlot)
public:
	LiveStackFrameInfo$PrimitiveSlot32();
	void init$(int32_t value);
	virtual int32_t intValue() override;
	virtual int32_t size() override;
	virtual $String* toString() override;
	int32_t value = 0;
};

	} // lang
} // java

#endif // _java_lang_LiveStackFrameInfo$PrimitiveSlot32_h_