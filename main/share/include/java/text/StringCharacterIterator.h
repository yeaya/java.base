#ifndef _java_text_StringCharacterIterator_h_
#define _java_text_StringCharacterIterator_h_
//$ class java.text.StringCharacterIterator
//$ extends java.text.CharacterIterator

#include <java/text/CharacterIterator.h>

namespace java {
	namespace text {

class $import StringCharacterIterator : public ::java::text::CharacterIterator {
	$class(StringCharacterIterator, $NO_CLASS_INIT, ::java::text::CharacterIterator)
public:
	StringCharacterIterator();
	void init$($String* text);
	void init$($String* text, int32_t pos);
	void init$($String* text, int32_t begin, int32_t end, int32_t pos);
	virtual $Object* clone() override;
	virtual char16_t current() override;
	virtual bool equals(Object$* obj) override;
	virtual char16_t first() override;
	virtual int32_t getBeginIndex() override;
	virtual int32_t getEndIndex() override;
	virtual int32_t getIndex() override;
	virtual int32_t hashCode() override;
	virtual char16_t last() override;
	virtual char16_t next() override;
	virtual char16_t previous() override;
	virtual char16_t setIndex(int32_t p) override;
	void setText($String* text);
	$String* text = nullptr;
	int32_t begin = 0;
	int32_t end = 0;
	int32_t pos = 0;
};

	} // text
} // java

#endif // _java_text_StringCharacterIterator_h_