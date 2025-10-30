#include <sun/text/RuleBasedBreakIterator$SafeCharIterator.h>

#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Error.h>
#include <java/text/CharacterIterator.h>
#include <sun/text/RuleBasedBreakIterator.h>
#include <jcpp.h>

#undef DONE

using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CharacterIterator = ::java::text::CharacterIterator;
using $RuleBasedBreakIterator = ::sun::text::RuleBasedBreakIterator;

namespace sun {
	namespace text {

$FieldInfo _RuleBasedBreakIterator$SafeCharIterator_FieldInfo_[] = {
	{"base", "Ljava/text/CharacterIterator;", nullptr, $PRIVATE, $field(RuleBasedBreakIterator$SafeCharIterator, base)},
	{"rangeStart", "I", nullptr, $PRIVATE, $field(RuleBasedBreakIterator$SafeCharIterator, rangeStart)},
	{"rangeLimit", "I", nullptr, $PRIVATE, $field(RuleBasedBreakIterator$SafeCharIterator, rangeLimit)},
	{"currentIndex", "I", nullptr, $PRIVATE, $field(RuleBasedBreakIterator$SafeCharIterator, currentIndex)},
	{}
};

$MethodInfo _RuleBasedBreakIterator$SafeCharIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/text/CharacterIterator;)V", nullptr, 0, $method(static_cast<void(RuleBasedBreakIterator$SafeCharIterator::*)($CharacterIterator*)>(&RuleBasedBreakIterator$SafeCharIterator::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"current", "()C", nullptr, $PUBLIC},
	{"first", "()C", nullptr, $PUBLIC},
	{"getBeginIndex", "()I", nullptr, $PUBLIC},
	{"getEndIndex", "()I", nullptr, $PUBLIC},
	{"getIndex", "()I", nullptr, $PUBLIC},
	{"last", "()C", nullptr, $PUBLIC},
	{"next", "()C", nullptr, $PUBLIC},
	{"previous", "()C", nullptr, $PUBLIC},
	{"setIndex", "(I)C", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _RuleBasedBreakIterator$SafeCharIterator_InnerClassesInfo_[] = {
	{"sun.text.RuleBasedBreakIterator$SafeCharIterator", "sun.text.RuleBasedBreakIterator", "SafeCharIterator", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _RuleBasedBreakIterator$SafeCharIterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.text.RuleBasedBreakIterator$SafeCharIterator",
	"java.lang.Object",
	"java.text.CharacterIterator",
	_RuleBasedBreakIterator$SafeCharIterator_FieldInfo_,
	_RuleBasedBreakIterator$SafeCharIterator_MethodInfo_,
	nullptr,
	nullptr,
	_RuleBasedBreakIterator$SafeCharIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.text.RuleBasedBreakIterator"
};

$Object* allocate$RuleBasedBreakIterator$SafeCharIterator($Class* clazz) {
	return $of($alloc(RuleBasedBreakIterator$SafeCharIterator));
}

void RuleBasedBreakIterator$SafeCharIterator::init$($CharacterIterator* base) {
	$set(this, base, base);
	this->rangeStart = $nc(base)->getBeginIndex();
	this->rangeLimit = base->getEndIndex();
	this->currentIndex = base->getIndex();
}

char16_t RuleBasedBreakIterator$SafeCharIterator::first() {
	return setIndex(this->rangeStart);
}

char16_t RuleBasedBreakIterator$SafeCharIterator::last() {
	return setIndex(this->rangeLimit - 1);
}

char16_t RuleBasedBreakIterator$SafeCharIterator::current() {
	if (this->currentIndex < this->rangeStart || this->currentIndex >= this->rangeLimit) {
		return $CharacterIterator::DONE;
	} else {
		return $nc(this->base)->setIndex(this->currentIndex);
	}
}

char16_t RuleBasedBreakIterator$SafeCharIterator::next() {
	++this->currentIndex;
	if (this->currentIndex >= this->rangeLimit) {
		this->currentIndex = this->rangeLimit;
		return $CharacterIterator::DONE;
	} else {
		return $nc(this->base)->setIndex(this->currentIndex);
	}
}

char16_t RuleBasedBreakIterator$SafeCharIterator::previous() {
	--this->currentIndex;
	if (this->currentIndex < this->rangeStart) {
		this->currentIndex = this->rangeStart;
		return $CharacterIterator::DONE;
	} else {
		return $nc(this->base)->setIndex(this->currentIndex);
	}
}

char16_t RuleBasedBreakIterator$SafeCharIterator::setIndex(int32_t i) {
	if (i < this->rangeStart || i > this->rangeLimit) {
		$throwNew($IllegalArgumentException, "Invalid position"_s);
	}
	this->currentIndex = i;
	return current();
}

int32_t RuleBasedBreakIterator$SafeCharIterator::getBeginIndex() {
	return this->rangeStart;
}

int32_t RuleBasedBreakIterator$SafeCharIterator::getEndIndex() {
	return this->rangeLimit;
}

int32_t RuleBasedBreakIterator$SafeCharIterator::getIndex() {
	return this->currentIndex;
}

$Object* RuleBasedBreakIterator$SafeCharIterator::clone() {
	$useLocalCurrentObjectStackCache();
	$var(RuleBasedBreakIterator$SafeCharIterator, copy, nullptr);
	try {
		$assign(copy, $cast(RuleBasedBreakIterator$SafeCharIterator, $CharacterIterator::clone()));
	} catch ($CloneNotSupportedException& e) {
		$throwNew($Error, $$str({"Clone not supported: "_s, e}));
	}
	$var($CharacterIterator, copyOfBase, $cast($CharacterIterator, $nc(this->base)->clone()));
	$set($nc(copy), base, copyOfBase);
	return $of(copy);
}

RuleBasedBreakIterator$SafeCharIterator::RuleBasedBreakIterator$SafeCharIterator() {
}

$Class* RuleBasedBreakIterator$SafeCharIterator::load$($String* name, bool initialize) {
	$loadClass(RuleBasedBreakIterator$SafeCharIterator, name, initialize, &_RuleBasedBreakIterator$SafeCharIterator_ClassInfo_, allocate$RuleBasedBreakIterator$SafeCharIterator);
	return class$;
}

$Class* RuleBasedBreakIterator$SafeCharIterator::class$ = nullptr;

	} // text
} // sun