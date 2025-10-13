#ifndef _java_text_MessageFormat_h_
#define _java_text_MessageFormat_h_
//$ class java.text.MessageFormat
//$ extends java.text.Format

#include <java/lang/Array.h>
#include <java/text/Format.h>

#pragma push_macro("DATE_TIME_MODIFIERS")
#undef DATE_TIME_MODIFIERS
#pragma push_macro("DATE_TIME_MODIFIER_KEYWORDS")
#undef DATE_TIME_MODIFIER_KEYWORDS
#pragma push_macro("INITIAL_FORMATS")
#undef INITIAL_FORMATS
#pragma push_macro("MODIFIER_CURRENCY")
#undef MODIFIER_CURRENCY
#pragma push_macro("MODIFIER_DEFAULT")
#undef MODIFIER_DEFAULT
#pragma push_macro("MODIFIER_FULL")
#undef MODIFIER_FULL
#pragma push_macro("MODIFIER_INTEGER")
#undef MODIFIER_INTEGER
#pragma push_macro("MODIFIER_LONG")
#undef MODIFIER_LONG
#pragma push_macro("MODIFIER_MEDIUM")
#undef MODIFIER_MEDIUM
#pragma push_macro("MODIFIER_PERCENT")
#undef MODIFIER_PERCENT
#pragma push_macro("MODIFIER_SHORT")
#undef MODIFIER_SHORT
#pragma push_macro("NUMBER_MODIFIER_KEYWORDS")
#undef NUMBER_MODIFIER_KEYWORDS
#pragma push_macro("SEG_INDEX")
#undef SEG_INDEX
#pragma push_macro("SEG_MODIFIER")
#undef SEG_MODIFIER
#pragma push_macro("SEG_RAW")
#undef SEG_RAW
#pragma push_macro("SEG_TYPE")
#undef SEG_TYPE
#pragma push_macro("TYPE_CHOICE")
#undef TYPE_CHOICE
#pragma push_macro("TYPE_DATE")
#undef TYPE_DATE
#pragma push_macro("TYPE_KEYWORDS")
#undef TYPE_KEYWORDS
#pragma push_macro("TYPE_NULL")
#undef TYPE_NULL
#pragma push_macro("TYPE_NUMBER")
#undef TYPE_NUMBER
#pragma push_macro("TYPE_TIME")
#undef TYPE_TIME

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace lang {
		class StringBuffer;
		class StringBuilder;
	}
}
namespace java {
	namespace text {
		class AttributedCharacterIterator;
		class CharacterIterator;
		class FieldPosition;
		class ParsePosition;
	}
}
namespace java {
	namespace util {
		class List;
		class Locale;
	}
}

namespace java {
	namespace text {

class $import MessageFormat : public ::java::text::Format {
	$class(MessageFormat, 0, ::java::text::Format)
public:
	MessageFormat();
	using ::java::text::Format::format;
	void init$($String* pattern);
	void init$($String* pattern, ::java::util::Locale* locale);
	void append(::java::lang::StringBuffer* result, ::java::text::CharacterIterator* iterator);
	virtual void applyPattern($String* pattern);
	virtual $Object* clone() override;
	static void copyAndFixQuotes($String* source, int32_t start, int32_t end, ::java::lang::StringBuilder* target);
	virtual bool equals(Object$* obj) override;
	static int32_t findKeyword($String* s, $StringArray* list);
	::java::lang::StringBuffer* format($ObjectArray* arguments, ::java::lang::StringBuffer* result, ::java::text::FieldPosition* pos);
	static $String* format($String* pattern, $ObjectArray* arguments);
	virtual ::java::lang::StringBuffer* format(Object$* arguments, ::java::lang::StringBuffer* result, ::java::text::FieldPosition* pos) override;
	virtual ::java::text::AttributedCharacterIterator* formatToCharacterIterator(Object$* arguments) override;
	virtual $Array<::java::text::Format>* getFormats();
	virtual $Array<::java::text::Format>* getFormatsByArgumentIndex();
	virtual ::java::util::Locale* getLocale();
	virtual int32_t hashCode() override;
	void makeFormat(int32_t position, int32_t offsetNumber, $Array<::java::lang::StringBuilder>* textSegments);
	virtual $ObjectArray* parse($String* source, ::java::text::ParsePosition* pos);
	virtual $ObjectArray* parse($String* source);
	using ::java::text::Format::parseObject;
	virtual $Object* parseObject($String* source, ::java::text::ParsePosition* pos) override;
	void readObject(::java::io::ObjectInputStream* in);
	virtual void setFormat(int32_t formatElementIndex, ::java::text::Format* newFormat);
	virtual void setFormatByArgumentIndex(int32_t argumentIndex, ::java::text::Format* newFormat);
	virtual void setFormats($Array<::java::text::Format>* newFormats);
	virtual void setFormatsByArgumentIndex($Array<::java::text::Format>* newFormats);
	virtual void setLocale(::java::util::Locale* locale);
	::java::lang::StringBuffer* subformat($ObjectArray* arguments, ::java::lang::StringBuffer* result, ::java::text::FieldPosition* fp, ::java::util::List* characterIterators);
	virtual $String* toPattern();
	static const int64_t serialVersionUID = (int64_t)0x59EA973E12BD01A8;
	::java::util::Locale* locale = nullptr;
	$String* pattern = nullptr;
	static const int32_t INITIAL_FORMATS = 10;
	$Array<::java::text::Format>* formats = nullptr;
	$ints* offsets = nullptr;
	$ints* argumentNumbers = nullptr;
	int32_t maxOffset = 0;
	static const int32_t SEG_RAW = 0;
	static const int32_t SEG_INDEX = 1;
	static const int32_t SEG_TYPE = 2;
	static const int32_t SEG_MODIFIER = 3;
	static const int32_t TYPE_NULL = 0;
	static const int32_t TYPE_NUMBER = 1;
	static const int32_t TYPE_DATE = 2;
	static const int32_t TYPE_TIME = 3;
	static const int32_t TYPE_CHOICE = 4;
	static $StringArray* TYPE_KEYWORDS;
	static const int32_t MODIFIER_DEFAULT = 0;
	static const int32_t MODIFIER_CURRENCY = 1;
	static const int32_t MODIFIER_PERCENT = 2;
	static const int32_t MODIFIER_INTEGER = 3;
	static $StringArray* NUMBER_MODIFIER_KEYWORDS;
	static const int32_t MODIFIER_SHORT = 1;
	static const int32_t MODIFIER_MEDIUM = 2;
	static const int32_t MODIFIER_LONG = 3;
	static const int32_t MODIFIER_FULL = 4;
	static $StringArray* DATE_TIME_MODIFIER_KEYWORDS;
	static $ints* DATE_TIME_MODIFIERS;
};

	} // text
} // java

#pragma pop_macro("DATE_TIME_MODIFIERS")
#pragma pop_macro("DATE_TIME_MODIFIER_KEYWORDS")
#pragma pop_macro("INITIAL_FORMATS")
#pragma pop_macro("MODIFIER_CURRENCY")
#pragma pop_macro("MODIFIER_DEFAULT")
#pragma pop_macro("MODIFIER_FULL")
#pragma pop_macro("MODIFIER_INTEGER")
#pragma pop_macro("MODIFIER_LONG")
#pragma pop_macro("MODIFIER_MEDIUM")
#pragma pop_macro("MODIFIER_PERCENT")
#pragma pop_macro("MODIFIER_SHORT")
#pragma pop_macro("NUMBER_MODIFIER_KEYWORDS")
#pragma pop_macro("SEG_INDEX")
#pragma pop_macro("SEG_MODIFIER")
#pragma pop_macro("SEG_RAW")
#pragma pop_macro("SEG_TYPE")
#pragma pop_macro("TYPE_CHOICE")
#pragma pop_macro("TYPE_DATE")
#pragma pop_macro("TYPE_KEYWORDS")
#pragma pop_macro("TYPE_NULL")
#pragma pop_macro("TYPE_NUMBER")
#pragma pop_macro("TYPE_TIME")

#endif // _java_text_MessageFormat_h_