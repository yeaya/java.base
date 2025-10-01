#include <java/text/CollationElementIterator.h>

#include <java/lang/Array.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/CharacterIterator.h>
#include <java/text/Collator.h>
#include <java/text/EntryPair.h>
#include <java/text/RBCollationTables.h>
#include <java/text/RuleBasedCollator.h>
#include <java/util/Vector.h>
#include <jdk/internal/icu/text/NormalizerBase$Mode.h>
#include <jdk/internal/icu/text/NormalizerBase.h>
#include <sun/text/CollatorUtilities.h>
#include <jcpp.h>

#undef NULLORDER
#undef PRIMARYORDERSHIFT
#undef TERTIARYORDERMASK
#undef SECONDARYDIFFERENCEONLY
#undef DONE
#undef CONTRACTCHARINDEX
#undef UNMAPPED
#undef EXPANDCHARINDEX
#undef SECONDARYORDERSHIFT
#undef SECONDARY
#undef PRIMARY
#undef SECONDARYORDERMASK
#undef PRIMARYORDERMASK
#undef UNMAPPEDCHARVALUE
#undef PRIMARYDIFFERENCEONLY

using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $CharacterIterator = ::java::text::CharacterIterator;
using $Collator = ::java::text::Collator;
using $EntryPair = ::java::text::EntryPair;
using $RBCollationTables = ::java::text::RBCollationTables;
using $RuleBasedCollator = ::java::text::RuleBasedCollator;
using $Vector = ::java::util::Vector;
using $NormalizerBase = ::jdk::internal::icu::text::NormalizerBase;
using $NormalizerBase$Mode = ::jdk::internal::icu::text::NormalizerBase$Mode;
using $CollatorUtilities = ::sun::text::CollatorUtilities;

namespace java {
	namespace text {

$FieldInfo _CollationElementIterator_FieldInfo_[] = {
	{"NULLORDER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CollationElementIterator, NULLORDER)},
	{"UNMAPPEDCHARVALUE", "I", nullptr, $STATIC | $FINAL, $constField(CollationElementIterator, UNMAPPEDCHARVALUE)},
	{"text", "Ljdk/internal/icu/text/NormalizerBase;", nullptr, $PRIVATE, $field(CollationElementIterator, text)},
	{"buffer", "[I", nullptr, $PRIVATE, $field(CollationElementIterator, buffer)},
	{"expIndex", "I", nullptr, $PRIVATE, $field(CollationElementIterator, expIndex)},
	{"key", "Ljava/lang/StringBuffer;", nullptr, $PRIVATE, $field(CollationElementIterator, key)},
	{"swapOrder", "I", nullptr, $PRIVATE, $field(CollationElementIterator, swapOrder)},
	{"ordering", "Ljava/text/RBCollationTables;", nullptr, $PRIVATE, $field(CollationElementIterator, ordering)},
	{"owner", "Ljava/text/RuleBasedCollator;", nullptr, $PRIVATE, $field(CollationElementIterator, owner)},
	{}
};

$MethodInfo _CollationElementIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/text/RuleBasedCollator;)V", nullptr, 0, $method(static_cast<void(CollationElementIterator::*)($String*,$RuleBasedCollator*)>(&CollationElementIterator::init$))},
	{"<init>", "(Ljava/text/CharacterIterator;Ljava/text/RuleBasedCollator;)V", nullptr, 0, $method(static_cast<void(CollationElementIterator::*)($CharacterIterator*,$RuleBasedCollator*)>(&CollationElementIterator::init$))},
	{"getMaxExpansion", "(I)I", nullptr, $PUBLIC, $method(static_cast<int32_t(CollationElementIterator::*)(int32_t)>(&CollationElementIterator::getMaxExpansion))},
	{"getOffset", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(CollationElementIterator::*)()>(&CollationElementIterator::getOffset))},
	{"isIgnorable", "(I)Z", nullptr, $STATIC | $FINAL, $method(static_cast<bool(*)(int32_t)>(&CollationElementIterator::isIgnorable))},
	{"isLaoBaseConsonant", "(I)Z", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<bool(*)(int32_t)>(&CollationElementIterator::isLaoBaseConsonant))},
	{"isLaoPreVowel", "(I)Z", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<bool(*)(int32_t)>(&CollationElementIterator::isLaoPreVowel))},
	{"isThaiBaseConsonant", "(I)Z", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<bool(*)(int32_t)>(&CollationElementIterator::isThaiBaseConsonant))},
	{"isThaiPreVowel", "(I)Z", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<bool(*)(int32_t)>(&CollationElementIterator::isThaiPreVowel))},
	{"makeReorderedBuffer", "(II[IZ)[I", nullptr, $PRIVATE, $method(static_cast<$ints*(CollationElementIterator::*)(int32_t,int32_t,$ints*,bool)>(&CollationElementIterator::makeReorderedBuffer))},
	{"next", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(CollationElementIterator::*)()>(&CollationElementIterator::next))},
	{"nextContractChar", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(CollationElementIterator::*)(int32_t)>(&CollationElementIterator::nextContractChar))},
	{"prevContractChar", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(CollationElementIterator::*)(int32_t)>(&CollationElementIterator::prevContractChar))},
	{"previous", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(CollationElementIterator::*)()>(&CollationElementIterator::previous))},
	{"primaryOrder", "(I)I", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<int32_t(*)(int32_t)>(&CollationElementIterator::primaryOrder))},
	{"reset", "()V", nullptr, $PUBLIC, $method(static_cast<void(CollationElementIterator::*)()>(&CollationElementIterator::reset))},
	{"secondaryOrder", "(I)S", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<int16_t(*)(int32_t)>(&CollationElementIterator::secondaryOrder))},
	{"setOffset", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(CollationElementIterator::*)(int32_t)>(&CollationElementIterator::setOffset))},
	{"setText", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(CollationElementIterator::*)($String*)>(&CollationElementIterator::setText))},
	{"setText", "(Ljava/text/CharacterIterator;)V", nullptr, $PUBLIC, $method(static_cast<void(CollationElementIterator::*)($CharacterIterator*)>(&CollationElementIterator::setText))},
	{"strengthOrder", "(I)I", nullptr, $FINAL, $method(static_cast<int32_t(CollationElementIterator::*)(int32_t)>(&CollationElementIterator::strengthOrder))},
	{"tertiaryOrder", "(I)S", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<int16_t(*)(int32_t)>(&CollationElementIterator::tertiaryOrder))},
	{}
};

$ClassInfo _CollationElementIterator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.text.CollationElementIterator",
	"java.lang.Object",
	nullptr,
	_CollationElementIterator_FieldInfo_,
	_CollationElementIterator_MethodInfo_
};

$Object* allocate$CollationElementIterator($Class* clazz) {
	return $of($alloc(CollationElementIterator));
}

void CollationElementIterator::init$($String* sourceText, $RuleBasedCollator* owner) {
	$set(this, text, nullptr);
	$set(this, buffer, nullptr);
	this->expIndex = 0;
	$set(this, key, $new($StringBuffer, 5));
	this->swapOrder = 0;
	$set(this, owner, owner);
	$set(this, ordering, $nc(owner)->getTables());
	if (!$nc(sourceText)->isEmpty()) {
		$var($NormalizerBase$Mode, mode, $CollatorUtilities::toNormalizerMode(owner->getDecomposition()));
		$set(this, text, $new($NormalizerBase, sourceText, mode));
	}
}

void CollationElementIterator::init$($CharacterIterator* sourceText, $RuleBasedCollator* owner) {
	$set(this, text, nullptr);
	$set(this, buffer, nullptr);
	this->expIndex = 0;
	$set(this, key, $new($StringBuffer, 5));
	this->swapOrder = 0;
	$set(this, owner, owner);
	$set(this, ordering, $nc(owner)->getTables());
	$var($NormalizerBase$Mode, mode, $CollatorUtilities::toNormalizerMode(owner->getDecomposition()));
	$set(this, text, $new($NormalizerBase, sourceText, mode));
}

void CollationElementIterator::reset() {
	if (this->text != nullptr) {
		$nc(this->text)->reset();
		$var($NormalizerBase$Mode, mode, $CollatorUtilities::toNormalizerMode($nc(this->owner)->getDecomposition()));
		$nc(this->text)->setMode(mode);
	}
	$set(this, buffer, nullptr);
	this->expIndex = 0;
	this->swapOrder = 0;
}

int32_t CollationElementIterator::next() {
	if (this->text == nullptr) {
		return CollationElementIterator::NULLORDER;
	}
	$var($NormalizerBase$Mode, textMode, $nc(this->text)->getMode());
	$var($NormalizerBase$Mode, ownerMode, $CollatorUtilities::toNormalizerMode($nc(this->owner)->getDecomposition()));
	if (textMode != ownerMode) {
		$nc(this->text)->setMode(ownerMode);
	}
	if (this->buffer != nullptr) {
		if (this->expIndex < $nc(this->buffer)->length) {
			return strengthOrder($nc(this->buffer)->get(this->expIndex++));
		} else {
			$set(this, buffer, nullptr);
			this->expIndex = 0;
		}
	} else if (this->swapOrder != 0) {
		if ($Character::isSupplementaryCodePoint(this->swapOrder)) {
			$var($chars, chars, $Character::toChars(this->swapOrder));
			this->swapOrder = $nc(chars)->get(1);
			return chars->get(0) << 16;
		}
		int32_t order = this->swapOrder << 16;
		this->swapOrder = 0;
		return order;
	}
	int32_t ch = $nc(this->text)->next();
	if (ch == $NormalizerBase::DONE) {
		return CollationElementIterator::NULLORDER;
	}
	int32_t value = $nc(this->ordering)->getUnicodeOrder(ch);
	if (value == $RuleBasedCollator::UNMAPPED) {
		this->swapOrder = ch;
		return CollationElementIterator::UNMAPPEDCHARVALUE;
	} else if (value >= $RuleBasedCollator::CONTRACTCHARINDEX) {
		value = nextContractChar(ch);
	}
	if (value >= $RuleBasedCollator::EXPANDCHARINDEX) {
		$set(this, buffer, $nc(this->ordering)->getExpandValueList(value));
		this->expIndex = 0;
		value = $nc(this->buffer)->get(this->expIndex++);
	}
	if ($nc(this->ordering)->isSEAsianSwapping()) {
		int32_t consonant = 0;
		if (isThaiPreVowel(ch)) {
			consonant = $nc(this->text)->next();
			if (isThaiBaseConsonant(consonant)) {
				$set(this, buffer, makeReorderedBuffer(consonant, value, this->buffer, true));
				value = $nc(this->buffer)->get(0);
				this->expIndex = 1;
			} else if (consonant != $NormalizerBase::DONE) {
				$nc(this->text)->previous();
			}
		}
		if (isLaoPreVowel(ch)) {
			consonant = $nc(this->text)->next();
			if (isLaoBaseConsonant(consonant)) {
				$set(this, buffer, makeReorderedBuffer(consonant, value, this->buffer, true));
				value = $nc(this->buffer)->get(0);
				this->expIndex = 1;
			} else if (consonant != $NormalizerBase::DONE) {
				$nc(this->text)->previous();
			}
		}
	}
	return strengthOrder(value);
}

int32_t CollationElementIterator::previous() {
	if (this->text == nullptr) {
		return CollationElementIterator::NULLORDER;
	}
	$var($NormalizerBase$Mode, textMode, $nc(this->text)->getMode());
	$var($NormalizerBase$Mode, ownerMode, $CollatorUtilities::toNormalizerMode($nc(this->owner)->getDecomposition()));
	if (textMode != ownerMode) {
		$nc(this->text)->setMode(ownerMode);
	}
	if (this->buffer != nullptr) {
		if (this->expIndex > 0) {
			return strengthOrder($nc(this->buffer)->get(--this->expIndex));
		} else {
			$set(this, buffer, nullptr);
			this->expIndex = 0;
		}
	} else if (this->swapOrder != 0) {
		if ($Character::isSupplementaryCodePoint(this->swapOrder)) {
			$var($chars, chars, $Character::toChars(this->swapOrder));
			this->swapOrder = $nc(chars)->get(1);
			return chars->get(0) << 16;
		}
		int32_t order = this->swapOrder << 16;
		this->swapOrder = 0;
		return order;
	}
	int32_t ch = $nc(this->text)->previous();
	if (ch == $NormalizerBase::DONE) {
		return CollationElementIterator::NULLORDER;
	}
	int32_t value = $nc(this->ordering)->getUnicodeOrder(ch);
	if (value == $RuleBasedCollator::UNMAPPED) {
		this->swapOrder = CollationElementIterator::UNMAPPEDCHARVALUE;
		return ch;
	} else if (value >= $RuleBasedCollator::CONTRACTCHARINDEX) {
		value = prevContractChar(ch);
	}
	if (value >= $RuleBasedCollator::EXPANDCHARINDEX) {
		$set(this, buffer, $nc(this->ordering)->getExpandValueList(value));
		this->expIndex = $nc(this->buffer)->length;
		value = $nc(this->buffer)->get(--this->expIndex);
	}
	if ($nc(this->ordering)->isSEAsianSwapping()) {
		int32_t vowel = 0;
		if (isThaiBaseConsonant(ch)) {
			vowel = $nc(this->text)->previous();
			if (isThaiPreVowel(vowel)) {
				$set(this, buffer, makeReorderedBuffer(vowel, value, this->buffer, false));
				this->expIndex = $nc(this->buffer)->length - 1;
				value = $nc(this->buffer)->get(this->expIndex);
			} else {
				$nc(this->text)->next();
			}
		}
		if (isLaoBaseConsonant(ch)) {
			vowel = $nc(this->text)->previous();
			if (isLaoPreVowel(vowel)) {
				$set(this, buffer, makeReorderedBuffer(vowel, value, this->buffer, false));
				this->expIndex = $nc(this->buffer)->length - 1;
				value = $nc(this->buffer)->get(this->expIndex);
			} else {
				$nc(this->text)->next();
			}
		}
	}
	return strengthOrder(value);
}

int32_t CollationElementIterator::primaryOrder(int32_t order) {
	order &= (uint32_t)$RBCollationTables::PRIMARYORDERMASK;
	return ($usr(order, $RBCollationTables::PRIMARYORDERSHIFT));
}

int16_t CollationElementIterator::secondaryOrder(int32_t order) {
	order = (int32_t)(order & (uint32_t)$RBCollationTables::SECONDARYORDERMASK);
	return ((int16_t)($sr(order, $RBCollationTables::SECONDARYORDERSHIFT)));
}

int16_t CollationElementIterator::tertiaryOrder(int32_t order) {
	return ((int16_t)(order &= (uint32_t)$RBCollationTables::TERTIARYORDERMASK));
}

int32_t CollationElementIterator::strengthOrder(int32_t order) {
	int32_t s = $nc(this->owner)->getStrength();
	if (s == $Collator::PRIMARY) {
		order &= (uint32_t)$RBCollationTables::PRIMARYDIFFERENCEONLY;
	} else if (s == $Collator::SECONDARY) {
		order &= (uint32_t)$RBCollationTables::SECONDARYDIFFERENCEONLY;
	}
	return order;
}

void CollationElementIterator::setOffset(int32_t newOffset) {
	if (this->text != nullptr) {
		bool var$0 = newOffset < $nc(this->text)->getBeginIndex();
		if (var$0 || newOffset >= $nc(this->text)->getEndIndex()) {
			$nc(this->text)->setIndexOnly(newOffset);
		} else {
			int32_t c = $nc(this->text)->setIndex(newOffset);
			if ($nc(this->ordering)->usedInContractSeq(c)) {
				while ($nc(this->ordering)->usedInContractSeq(c)) {
					c = $nc(this->text)->previous();
				}
				int32_t last = $nc(this->text)->getIndex();
				while ($nc(this->text)->getIndex() <= newOffset) {
					last = $nc(this->text)->getIndex();
					next();
				}
				$nc(this->text)->setIndexOnly(last);
			}
		}
	}
	$set(this, buffer, nullptr);
	this->expIndex = 0;
	this->swapOrder = 0;
}

int32_t CollationElementIterator::getOffset() {
	return (this->text != nullptr) ? $nc(this->text)->getIndex() : 0;
}

int32_t CollationElementIterator::getMaxExpansion(int32_t order) {
	return $nc(this->ordering)->getMaxExpansion(order);
}

void CollationElementIterator::setText($String* source) {
	$set(this, buffer, nullptr);
	this->swapOrder = 0;
	this->expIndex = 0;
	$var($NormalizerBase$Mode, mode, $CollatorUtilities::toNormalizerMode($nc(this->owner)->getDecomposition()));
	if (this->text == nullptr) {
		$set(this, text, $new($NormalizerBase, source, mode));
	} else {
		$nc(this->text)->setMode(mode);
		$nc(this->text)->setText(source);
	}
}

void CollationElementIterator::setText($CharacterIterator* source) {
	$set(this, buffer, nullptr);
	this->swapOrder = 0;
	this->expIndex = 0;
	$var($NormalizerBase$Mode, mode, $CollatorUtilities::toNormalizerMode($nc(this->owner)->getDecomposition()));
	if (this->text == nullptr) {
		$set(this, text, $new($NormalizerBase, source, mode));
	} else {
		$nc(this->text)->setMode(mode);
		$nc(this->text)->setText(source);
	}
}

bool CollationElementIterator::isThaiPreVowel(int32_t ch) {
	return (ch >= 3648) && (ch <= 3652);
}

bool CollationElementIterator::isThaiBaseConsonant(int32_t ch) {
	return (ch >= 3585) && (ch <= 3630);
}

bool CollationElementIterator::isLaoPreVowel(int32_t ch) {
	return (ch >= 3776) && (ch <= 3780);
}

bool CollationElementIterator::isLaoBaseConsonant(int32_t ch) {
	return (ch >= 3713) && (ch <= 3758);
}

$ints* CollationElementIterator::makeReorderedBuffer(int32_t colFirst, int32_t lastValue, $ints* lastExpansion$renamed, bool forward) {
	$var($ints, lastExpansion, lastExpansion$renamed);
	$var($ints, result, nullptr);
	int32_t firstValue = $nc(this->ordering)->getUnicodeOrder(colFirst);
	if (firstValue >= $RuleBasedCollator::CONTRACTCHARINDEX) {
		firstValue = forward ? nextContractChar(colFirst) : prevContractChar(colFirst);
	}
	$var($ints, firstExpansion, nullptr);
	if (firstValue >= $RuleBasedCollator::EXPANDCHARINDEX) {
		$assign(firstExpansion, $nc(this->ordering)->getExpandValueList(firstValue));
	}
	if (!forward) {
		int32_t temp1 = firstValue;
		firstValue = lastValue;
		lastValue = temp1;
		$var($ints, temp2, firstExpansion);
		$assign(firstExpansion, lastExpansion);
		$assign(lastExpansion, temp2);
	}
	if (firstExpansion == nullptr && lastExpansion == nullptr) {
		$assign(result, $new($ints, 2));
		result->set(0, firstValue);
		result->set(1, lastValue);
	} else {
		int32_t firstLength = firstExpansion == nullptr ? 1 : $nc(firstExpansion)->length;
		int32_t lastLength = lastExpansion == nullptr ? 1 : $nc(lastExpansion)->length;
		$assign(result, $new($ints, firstLength + lastLength));
		if (firstExpansion == nullptr) {
			result->set(0, firstValue);
		} else {
			$System::arraycopy(firstExpansion, 0, result, 0, firstLength);
		}
		if (lastExpansion == nullptr) {
			result->set(firstLength, lastValue);
		} else {
			$System::arraycopy(lastExpansion, 0, result, firstLength, lastLength);
		}
	}
	return result;
}

bool CollationElementIterator::isIgnorable(int32_t order) {
	return ((primaryOrder(order) == 0) ? true : false);
}

int32_t CollationElementIterator::nextContractChar(int32_t ch) {
	$var($Vector, list, $nc(this->ordering)->getContractValues(ch));
	$var($EntryPair, pair, $cast($EntryPair, $nc(list)->firstElement()));
	int32_t order = $nc(pair)->value;
	$assign(pair, $cast($EntryPair, list->lastElement()));
	int32_t maxLength = $nc(pair->entryName)->length();
	$var($NormalizerBase, tempText, $cast($NormalizerBase, $nc(this->text)->clone()));
	$nc(tempText)->previous();
	$nc(this->key)->setLength(0);
	int32_t c = tempText->next();
	while (maxLength > 0 && c != $NormalizerBase::DONE) {
		if ($Character::isSupplementaryCodePoint(c)) {
			$nc(this->key)->append($($Character::toChars(c)));
			maxLength -= 2;
		} else {
			$nc(this->key)->append((char16_t)c);
			--maxLength;
		}
		c = tempText->next();
	}
	$var($String, fragment, $nc(this->key)->toString());
	maxLength = 1;
	for (int32_t i = list->size() - 1; i > 0; --i) {
		$assign(pair, $cast($EntryPair, list->elementAt(i)));
		if (!$nc(pair)->fwd) {
			continue;
		}
		bool var$0 = $nc(fragment)->startsWith($nc(pair)->entryName);
		if (var$0 && $nc($nc(pair)->entryName)->length() > maxLength) {
			maxLength = $nc(pair->entryName)->length();
			order = pair->value;
		}
	}
	while (maxLength > 1) {
		c = $nc(this->text)->next();
		maxLength -= $Character::charCount(c);
	}
	return order;
}

int32_t CollationElementIterator::prevContractChar(int32_t ch) {
	$var($Vector, list, $nc(this->ordering)->getContractValues(ch));
	$var($EntryPair, pair, $cast($EntryPair, $nc(list)->firstElement()));
	int32_t order = $nc(pair)->value;
	$assign(pair, $cast($EntryPair, list->lastElement()));
	int32_t maxLength = $nc(pair->entryName)->length();
	$var($NormalizerBase, tempText, $cast($NormalizerBase, $nc(this->text)->clone()));
	$nc(tempText)->next();
	$nc(this->key)->setLength(0);
	int32_t c = tempText->previous();
	while (maxLength > 0 && c != $NormalizerBase::DONE) {
		if ($Character::isSupplementaryCodePoint(c)) {
			$nc(this->key)->append($($Character::toChars(c)));
			maxLength -= 2;
		} else {
			$nc(this->key)->append((char16_t)c);
			--maxLength;
		}
		c = tempText->previous();
	}
	$var($String, fragment, $nc(this->key)->toString());
	maxLength = 1;
	for (int32_t i = list->size() - 1; i > 0; --i) {
		$assign(pair, $cast($EntryPair, list->elementAt(i)));
		if ($nc(pair)->fwd) {
			continue;
		}
		bool var$0 = $nc(fragment)->startsWith($nc(pair)->entryName);
		if (var$0 && $nc($nc(pair)->entryName)->length() > maxLength) {
			maxLength = $nc(pair->entryName)->length();
			order = pair->value;
		}
	}
	while (maxLength > 1) {
		c = $nc(this->text)->previous();
		maxLength -= $Character::charCount(c);
	}
	return order;
}

CollationElementIterator::CollationElementIterator() {
}

$Class* CollationElementIterator::load$($String* name, bool initialize) {
	$loadClass(CollationElementIterator, name, initialize, &_CollationElementIterator_ClassInfo_, allocate$CollationElementIterator);
	return class$;
}

$Class* CollationElementIterator::class$ = nullptr;

	} // text
} // java