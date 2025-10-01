#ifndef _java_text_FieldPosition_h_
#define _java_text_FieldPosition_h_
//$ class java.text.FieldPosition
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace text {
		class Format$Field;
		class Format$FieldDelegate;
	}
}

namespace java {
	namespace text {

class $import FieldPosition : public ::java::lang::Object {
	$class(FieldPosition, $NO_CLASS_INIT, ::java::lang::Object)
public:
	FieldPosition();
	void init$(int32_t field);
	void init$(::java::text::Format$Field* attribute);
	void init$(::java::text::Format$Field* attribute, int32_t fieldID);
	virtual bool equals(Object$* obj) override;
	virtual int32_t getBeginIndex();
	virtual int32_t getEndIndex();
	virtual int32_t getField();
	virtual ::java::text::Format$Field* getFieldAttribute();
	virtual ::java::text::Format$FieldDelegate* getFieldDelegate();
	virtual int32_t hashCode() override;
	bool matchesField(::java::text::Format$Field* attribute);
	bool matchesField(::java::text::Format$Field* attribute, int32_t field);
	virtual void setBeginIndex(int32_t bi);
	virtual void setEndIndex(int32_t ei);
	virtual $String* toString() override;
	int32_t field = 0;
	int32_t endIndex = 0;
	int32_t beginIndex = 0;
	::java::text::Format$Field* attribute = nullptr;
};

	} // text
} // java

#endif // _java_text_FieldPosition_h_