#ifndef _MirroredBreakIterator_h_
#define _MirroredBreakIterator_h_
//$ class MirroredBreakIterator
//$ extends java.text.BreakIterator

#include <java/text/BreakIterator.h>

namespace java {
	namespace text {
		class CharacterIterator;
	}
}
namespace java {
	namespace util {
		class List;
	}
}

class $export MirroredBreakIterator : public ::java::text::BreakIterator {
	$class(MirroredBreakIterator, $NO_CLASS_INIT, ::java::text::BreakIterator)
public:
	MirroredBreakIterator();
	void init$(::java::text::BreakIterator* bi);
	int32_t changeIndices(int32_t newCharIndex, int32_t newBoundary);
	int32_t changeIndices(int32_t newBoundary);
	virtual $Object* clone() override;
	virtual int32_t current() override;
	virtual int32_t first() override;
	virtual int32_t following(int32_t offset) override;
	virtual ::java::text::CharacterIterator* getText() override;
	virtual bool isBoundary(int32_t offset) override;
	virtual int32_t last() override;
	int32_t lastBoundary();
	virtual int32_t next(int32_t n) override;
	virtual int32_t next() override;
	virtual int32_t preceding(int32_t offset) override;
	virtual int32_t previous() override;
	using ::java::text::BreakIterator::setText;
	virtual void setText(::java::text::CharacterIterator* newText) override;
	void validateOffset(int32_t offset);
	::java::util::List* boundaries = nullptr;
	int32_t charIndex = 0;
	int32_t boundaryIndex = 0;
};

#endif // _MirroredBreakIterator_h_