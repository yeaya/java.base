#ifndef _java_text_AttributedCharacterIterator_h_
#define _java_text_AttributedCharacterIterator_h_
//$ interface java.text.AttributedCharacterIterator
//$ extends java.text.CharacterIterator

#include <java/text/CharacterIterator.h>

namespace java {
	namespace text {
		class AttributedCharacterIterator$Attribute;
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

class $export AttributedCharacterIterator : public ::java::text::CharacterIterator {
	$interface(AttributedCharacterIterator, $NO_CLASS_INIT, ::java::text::CharacterIterator)
public:
	virtual ::java::util::Set* getAllAttributeKeys() {return nullptr;}
	virtual $Object* getAttribute(::java::text::AttributedCharacterIterator$Attribute* attribute) {return nullptr;}
	virtual ::java::util::Map* getAttributes() {return nullptr;}
	virtual int32_t getRunLimit() {return 0;}
	virtual int32_t getRunLimit(::java::text::AttributedCharacterIterator$Attribute* attribute) {return 0;}
	virtual int32_t getRunLimit(::java::util::Set* attributes) {return 0;}
	virtual int32_t getRunStart() {return 0;}
	virtual int32_t getRunStart(::java::text::AttributedCharacterIterator$Attribute* attribute) {return 0;}
	virtual int32_t getRunStart(::java::util::Set* attributes) {return 0;}
};

	} // text
} // java

#endif // _java_text_AttributedCharacterIterator_h_