#ifndef _java_text_ChoiceFormat_h_
#define _java_text_ChoiceFormat_h_
//$ class java.text.ChoiceFormat
//$ extends java.text.NumberFormat

#include <java/lang/Array.h>
#include <java/text/NumberFormat.h>

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace lang {
		class Number;
		class StringBuffer;
	}
}
namespace java {
	namespace text {
		class FieldPosition;
		class ParsePosition;
	}
}

namespace java {
	namespace text {

class $import ChoiceFormat : public ::java::text::NumberFormat {
	$class(ChoiceFormat, $NO_CLASS_INIT, ::java::text::NumberFormat)
public:
	ChoiceFormat();
	using ::java::text::NumberFormat::format;
	void init$($String* newPattern);
	void init$($doubles* limits, $StringArray* formats);
	virtual void applyPattern($String* newPattern);
	virtual $Object* clone() override;
	static $doubles* doubleArraySize($doubles* array);
	$StringArray* doubleArraySize($StringArray* array);
	virtual bool equals(Object$* obj) override;
	virtual ::java::lang::StringBuffer* format(int64_t number, ::java::lang::StringBuffer* toAppendTo, ::java::text::FieldPosition* status) override;
	virtual ::java::lang::StringBuffer* format(double number, ::java::lang::StringBuffer* toAppendTo, ::java::text::FieldPosition* status) override;
	virtual $ObjectArray* getFormats();
	virtual $doubles* getLimits();
	virtual int32_t hashCode() override;
	static double nextDouble(double d);
	static double nextDouble(double d, bool positive);
	using ::java::text::NumberFormat::parse;
	virtual ::java::lang::Number* parse($String* text, ::java::text::ParsePosition* status) override;
	using ::java::text::NumberFormat::parseObject;
	static double previousDouble(double d);
	void readObject(::java::io::ObjectInputStream* in);
	virtual void setChoices($doubles* limits, $StringArray* formats);
	virtual $String* toPattern();
	static const int64_t serialVersionUID = (int64_t)0x18E9C6BEE365B604;
	$doubles* choiceLimits = nullptr;
	$StringArray* choiceFormats = nullptr;
};

	} // text
} // java

#endif // _java_text_ChoiceFormat_h_