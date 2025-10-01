#ifndef _java_text_CharacterIterator_h_
#define _java_text_CharacterIterator_h_
//$ interface java.text.CharacterIterator
//$ extends java.lang.Cloneable

#include <java/lang/Cloneable.h>

#pragma push_macro("DONE")
#undef DONE

namespace java {
	namespace text {

class $export CharacterIterator : public ::java::lang::Cloneable {
	$interface(CharacterIterator, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	virtual $Object* clone() override;
	virtual char16_t current() {return 0;}
	virtual char16_t first() {return 0;}
	virtual int32_t getBeginIndex() {return 0;}
	virtual int32_t getEndIndex() {return 0;}
	virtual int32_t getIndex() {return 0;}
	virtual char16_t last() {return 0;}
	virtual char16_t next() {return 0;}
	virtual char16_t previous() {return 0;}
	virtual char16_t setIndex(int32_t position) {return 0;}
	static const char16_t DONE = ((char16_t)65535);
};

	} // text
} // java

#pragma pop_macro("DONE")

#endif // _java_text_CharacterIterator_h_