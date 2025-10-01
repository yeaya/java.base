#ifndef _java_lang_LiveStackFrame$PrimitiveSlot_h_
#define _java_lang_LiveStackFrame$PrimitiveSlot_h_
//$ class java.lang.LiveStackFrame$PrimitiveSlot
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {

class LiveStackFrame$PrimitiveSlot : public ::java::lang::Object {
	$class(LiveStackFrame$PrimitiveSlot, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LiveStackFrame$PrimitiveSlot();
	void init$();
	virtual int32_t intValue();
	virtual int64_t longValue();
	virtual int32_t size() {return 0;}
};

	} // lang
} // java

#endif // _java_lang_LiveStackFrame$PrimitiveSlot_h_