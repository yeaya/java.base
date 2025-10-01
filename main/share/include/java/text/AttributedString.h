#ifndef _java_text_AttributedString_h_
#define _java_text_AttributedString_h_
//$ class java.text.AttributedString
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("INITIAL_CAPACITY")
#undef INITIAL_CAPACITY

namespace java {
	namespace lang {
		class StringBuffer;
	}
}
namespace java {
	namespace text {
		class AttributedCharacterIterator;
		class AttributedCharacterIterator$Attribute;
		class CharacterIterator;
	}
}
namespace java {
	namespace util {
		class Map;
		class Set;
		class Vector;
	}
}

namespace java {
	namespace text {

class $import AttributedString : public ::java::lang::Object {
	$class(AttributedString, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AttributedString();
	void init$($Array<::java::text::AttributedCharacterIterator>* iterators);
	void init$($String* text);
	void init$($String* text, ::java::util::Map* attributes);
	void init$(::java::text::AttributedCharacterIterator* text);
	void init$(::java::text::AttributedCharacterIterator* text, int32_t beginIndex, int32_t endIndex);
	void init$(::java::text::AttributedCharacterIterator* text, int32_t beginIndex, int32_t endIndex, $Array<::java::text::AttributedCharacterIterator$Attribute>* attributes);
	virtual void addAttribute(::java::text::AttributedCharacterIterator$Attribute* attribute, Object$* value);
	virtual void addAttribute(::java::text::AttributedCharacterIterator$Attribute* attribute, Object$* value, int32_t beginIndex, int32_t endIndex);
	void addAttributeImpl(::java::text::AttributedCharacterIterator$Attribute* attribute, Object$* value, int32_t beginIndex, int32_t endIndex);
	void addAttributeRunData(::java::text::AttributedCharacterIterator$Attribute* attribute, Object$* value, int32_t beginRunIndex, int32_t endRunIndex);
	virtual void addAttributes(::java::util::Map* attributes, int32_t beginIndex, int32_t endIndex);
	void appendContents(::java::lang::StringBuffer* buf, ::java::text::CharacterIterator* iterator);
	bool attributeValuesMatch(::java::util::Set* attributes, int32_t runIndex1, int32_t runIndex2);
	char16_t charAt(int32_t index);
	void createRunAttributeDataVectors();
	int32_t ensureRunBreak(int32_t offset);
	int32_t ensureRunBreak(int32_t offset, bool copyAttrs);
	$Object* getAttribute(::java::text::AttributedCharacterIterator$Attribute* attribute, int32_t runIndex);
	$Object* getAttributeCheckRange(::java::text::AttributedCharacterIterator$Attribute* attribute, int32_t runIndex, int32_t beginIndex, int32_t endIndex);
	virtual ::java::text::AttributedCharacterIterator* getIterator();
	virtual ::java::text::AttributedCharacterIterator* getIterator($Array<::java::text::AttributedCharacterIterator$Attribute>* attributes);
	virtual ::java::text::AttributedCharacterIterator* getIterator($Array<::java::text::AttributedCharacterIterator$Attribute>* attributes, int32_t beginIndex, int32_t endIndex);
	virtual int32_t length();
	static bool mapsDiffer(::java::util::Map* last, ::java::util::Map* attrs);
	void setAttributes(::java::util::Map* attrs, int32_t offset);
	static bool valuesMatch(Object$* value1, Object$* value2);
	$String* text = nullptr;
	static const int32_t INITIAL_CAPACITY = 10;
	int32_t runCount = 0;
	$ints* runStarts = nullptr;
	$Array<::java::util::Vector>* runAttributes = nullptr;
	$Array<::java::util::Vector>* runAttributeValues = nullptr;
};

	} // text
} // java

#pragma pop_macro("INITIAL_CAPACITY")

#endif // _java_text_AttributedString_h_