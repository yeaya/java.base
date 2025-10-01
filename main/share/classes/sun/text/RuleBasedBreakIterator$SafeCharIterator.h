#ifndef _sun_text_RuleBasedBreakIterator$SafeCharIterator_h_
#define _sun_text_RuleBasedBreakIterator$SafeCharIterator_h_
//$ class sun.text.RuleBasedBreakIterator$SafeCharIterator
//$ extends java.text.CharacterIterator

#include <java/text/CharacterIterator.h>

namespace sun {
	namespace text {

class $export RuleBasedBreakIterator$SafeCharIterator : public ::java::text::CharacterIterator {
	$class(RuleBasedBreakIterator$SafeCharIterator, $NO_CLASS_INIT, ::java::text::CharacterIterator)
public:
	RuleBasedBreakIterator$SafeCharIterator();
	void init$(::java::text::CharacterIterator* base);
	virtual $Object* clone() override;
	virtual char16_t current() override;
	virtual char16_t first() override;
	virtual int32_t getBeginIndex() override;
	virtual int32_t getEndIndex() override;
	virtual int32_t getIndex() override;
	virtual char16_t last() override;
	virtual char16_t next() override;
	virtual char16_t previous() override;
	virtual char16_t setIndex(int32_t i) override;
	::java::text::CharacterIterator* base = nullptr;
	int32_t rangeStart = 0;
	int32_t rangeLimit = 0;
	int32_t currentIndex = 0;
};

	} // text
} // sun

#endif // _sun_text_RuleBasedBreakIterator$SafeCharIterator_h_