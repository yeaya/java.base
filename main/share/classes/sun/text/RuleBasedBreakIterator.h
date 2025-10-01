#ifndef _sun_text_RuleBasedBreakIterator_h_
#define _sun_text_RuleBasedBreakIterator_h_
//$ class sun.text.RuleBasedBreakIterator
//$ extends java.text.BreakIterator

#include <java/lang/Array.h>
#include <java/text/BreakIterator.h>

#pragma push_macro("START_STATE")
#undef START_STATE
#pragma push_macro("LABEL")
#undef LABEL
#pragma push_macro("LABEL_LENGTH")
#undef LABEL_LENGTH
#pragma push_macro("IGNORE")
#undef IGNORE
#pragma push_macro("STOP_STATE")
#undef STOP_STATE
#pragma push_macro("BMP_INDICES_LENGTH")
#undef BMP_INDICES_LENGTH

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace text {
		class CharacterIterator;
	}
}
namespace sun {
	namespace text {
		class CompactByteArray;
		class SupplementaryCharacterData;
	}
}

namespace sun {
	namespace text {

class $export RuleBasedBreakIterator : public ::java::text::BreakIterator {
	$class(RuleBasedBreakIterator, 0, ::java::text::BreakIterator)
public:
	RuleBasedBreakIterator();
	void init$($String* ruleFile, $bytes* ruleData);
	static void checkOffset(int32_t offset, ::java::text::CharacterIterator* text);
	virtual $Object* clone() override;
	virtual int32_t current() override;
	virtual bool equals(Object$* that) override;
	virtual int32_t first() override;
	virtual int32_t following(int32_t offset) override;
	virtual $bytes* getAdditionalData();
	virtual int32_t getCurrent();
	int32_t getCurrentCodePointCount();
	virtual int32_t getNext();
	int32_t getNextIndex();
	int32_t getPrevious();
	virtual ::java::text::CharacterIterator* getText() override;
	virtual int32_t handleNext();
	virtual int32_t handlePrevious();
	virtual int32_t hashCode() override;
	virtual bool isBoundary(int32_t offset) override;
	virtual int32_t last() override;
	virtual int32_t lookupBackwardState(int32_t state, int32_t category);
	virtual int32_t lookupCategory(int32_t c);
	virtual int32_t lookupState(int32_t state, int32_t category);
	virtual int32_t next(int32_t n) override;
	virtual int32_t next() override;
	virtual int32_t preceding(int32_t offset) override;
	virtual int32_t previous() override;
	virtual void setAdditionalData($bytes* b);
	using ::java::text::BreakIterator::setText;
	virtual void setText(::java::text::CharacterIterator* newText) override;
	void setupTables($String* ruleFile, ::java::nio::ByteBuffer* bb);
	virtual $String* toString() override;
	virtual void validateRuleData($String* ruleFile, ::java::nio::ByteBuffer* bb);
	static bool $assertionsDisabled;
	static const int8_t IGNORE = (-1);
	static const int16_t START_STATE = 1;
	static const int16_t STOP_STATE = 0;
	static $bytes* LABEL;
	static int32_t LABEL_LENGTH;
	static const int8_t supportedVersion = 1;
	static const int32_t BMP_INDICES_LENGTH = 512;
	::sun::text::CompactByteArray* charCategoryTable = nullptr;
	::sun::text::SupplementaryCharacterData* supplementaryCharCategoryTable = nullptr;
	$shorts* stateTable = nullptr;
	$shorts* backwardsStateTable = nullptr;
	$booleans* endStates = nullptr;
	$booleans* lookaheadStates = nullptr;
	$bytes* additionalData = nullptr;
	int32_t numCategories = 0;
	::java::text::CharacterIterator* text = nullptr;
	int64_t checksum = 0;
	int32_t cachedLastKnownBreak = 0;
};

	} // text
} // sun

#pragma pop_macro("START_STATE")
#pragma pop_macro("LABEL")
#pragma pop_macro("LABEL_LENGTH")
#pragma pop_macro("IGNORE")
#pragma pop_macro("STOP_STATE")
#pragma pop_macro("BMP_INDICES_LENGTH")

#endif // _sun_text_RuleBasedBreakIterator_h_