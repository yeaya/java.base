#ifndef _java_text_ParsePosition_h_
#define _java_text_ParsePosition_h_
//$ class java.text.ParsePosition
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace text {

class $export ParsePosition : public ::java::lang::Object {
	$class(ParsePosition, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ParsePosition();
	void init$(int32_t index);
	virtual bool equals(Object$* obj) override;
	virtual int32_t getErrorIndex();
	virtual int32_t getIndex();
	virtual int32_t hashCode() override;
	virtual void setErrorIndex(int32_t ei);
	virtual void setIndex(int32_t index);
	virtual $String* toString() override;
	int32_t index = 0;
	int32_t errorIndex = 0;
};

	} // text
} // java

#endif // _java_text_ParsePosition_h_