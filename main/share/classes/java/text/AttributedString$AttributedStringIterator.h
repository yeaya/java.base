#ifndef _java_text_AttributedString$AttributedStringIterator_h_
#define _java_text_AttributedString$AttributedStringIterator_h_
//$ class java.text.AttributedString$AttributedStringIterator
//$ extends java.text.AttributedCharacterIterator

#include <java/lang/Array.h>
#include <java/text/AttributedCharacterIterator.h>

namespace java {
	namespace text {
		class AttributedCharacterIterator$Attribute;
		class AttributedString;
	}
}
namespace java {
	namespace util {
		class Map;
		class Set;
	}
}

namespace java {
	namespace text {

class AttributedString$AttributedStringIterator : public ::java::text::AttributedCharacterIterator {
	$class(AttributedString$AttributedStringIterator, $NO_CLASS_INIT, ::java::text::AttributedCharacterIterator)
public:
	AttributedString$AttributedStringIterator();
	void init$(::java::text::AttributedString* this$0, $Array<::java::text::AttributedCharacterIterator$Attribute>* attributes, int32_t beginIndex, int32_t endIndex);
	virtual $Object* clone() override;
	virtual char16_t current() override;
	virtual bool equals(Object$* obj) override;
	virtual char16_t first() override;
	virtual ::java::util::Set* getAllAttributeKeys() override;
	virtual $Object* getAttribute(::java::text::AttributedCharacterIterator$Attribute* attribute) override;
	virtual ::java::util::Map* getAttributes() override;
	virtual int32_t getBeginIndex() override;
	virtual int32_t getEndIndex() override;
	virtual int32_t getIndex() override;
	virtual int32_t getRunLimit() override;
	virtual int32_t getRunLimit(::java::text::AttributedCharacterIterator$Attribute* attribute) override;
	virtual int32_t getRunLimit(::java::util::Set* attributes) override;
	virtual int32_t getRunStart() override;
	virtual int32_t getRunStart(::java::text::AttributedCharacterIterator$Attribute* attribute) override;
	virtual int32_t getRunStart(::java::util::Set* attributes) override;
	::java::text::AttributedString* getString();
	virtual int32_t hashCode() override;
	char16_t internalSetIndex(int32_t position);
	virtual char16_t last() override;
	virtual char16_t next() override;
	virtual char16_t previous() override;
	virtual char16_t setIndex(int32_t position) override;
	void updateRunInfo();
	::java::text::AttributedString* this$0 = nullptr;
	int32_t beginIndex = 0;
	int32_t endIndex = 0;
	$Array<::java::text::AttributedCharacterIterator$Attribute>* relevantAttributes = nullptr;
	int32_t currentIndex = 0;
	int32_t currentRunIndex = 0;
	int32_t currentRunStart = 0;
	int32_t currentRunLimit = 0;
};

	} // text
} // java

#endif // _java_text_AttributedString$AttributedStringIterator_h_