#ifndef _sun_text_DictionaryBasedBreakIterator_h_
#define _sun_text_DictionaryBasedBreakIterator_h_
//$ class sun.text.DictionaryBasedBreakIterator
//$ extends sun.text.RuleBasedBreakIterator

#include <java/lang/Array.h>
#include <sun/text/RuleBasedBreakIterator.h>

namespace java {
	namespace text {
		class CharacterIterator;
	}
}
namespace sun {
	namespace text {
		class BreakDictionary;
	}
}

namespace sun {
	namespace text {

class $export DictionaryBasedBreakIterator : public ::sun::text::RuleBasedBreakIterator {
	$class(DictionaryBasedBreakIterator, $NO_CLASS_INIT, ::sun::text::RuleBasedBreakIterator)
public:
	DictionaryBasedBreakIterator();
	void init$($String* ruleFile, $bytes* ruleData, $String* dictionaryFile, $bytes* dictionaryData);
	void divideUpDictionaryRange(int32_t startPos, int32_t endPos);
	virtual int32_t first() override;
	virtual int32_t following(int32_t offset) override;
	virtual int32_t handleNext() override;
	virtual int32_t last() override;
	virtual int32_t lookupCategory(int32_t c) override;
	virtual int32_t preceding(int32_t offset) override;
	void prepareCategoryFlags($bytes* data);
	virtual int32_t previous() override;
	using ::sun::text::RuleBasedBreakIterator::setText;
	virtual void setText(::java::text::CharacterIterator* newText) override;
	::sun::text::BreakDictionary* dictionary = nullptr;
	$booleans* categoryFlags = nullptr;
	int32_t dictionaryCharCount = 0;
	$ints* cachedBreakPositions = nullptr;
	int32_t positionInCache = 0;
};

	} // text
} // sun

#endif // _sun_text_DictionaryBasedBreakIterator_h_