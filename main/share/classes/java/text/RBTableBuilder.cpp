#include <java/text/RBTableBuilder.h>

#include <java/lang/Array.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/Collator.h>
#include <java/text/EntryPair.h>
#include <java/text/MergeCollation.h>
#include <java/text/ParseException.h>
#include <java/text/PatternEntry.h>
#include <java/text/RBCollationTables$BuildAPI.h>
#include <java/text/RBCollationTables.h>
#include <java/util/Vector.h>
#include <jdk/internal/icu/impl/NormalizerImpl.h>
#include <sun/text/ComposedCharIter.h>
#include <sun/text/IntHashtable.h>
#include <sun/text/UCompactIntArray.h>
#include <jcpp.h>

#undef CHARINDEX
#undef CONTRACTCHARINDEX
#undef DONE
#undef EXPANDCHARINDEX
#undef IGNORABLEMASK
#undef INITIALTABLESIZE
#undef MAXKEYSIZE
#undef PRIMARY
#undef PRIMARYORDERINCREMENT
#undef PRIMARYORDERMASK
#undef SECONDARY
#undef SECONDARYDIFFERENCEONLY
#undef SECONDARYORDERINCREMENT
#undef TERTIARY
#undef TERTIARYORDERINCREMENT
#undef UNMAPPED

using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $Collator = ::java::text::Collator;
using $EntryPair = ::java::text::EntryPair;
using $MergeCollation = ::java::text::MergeCollation;
using $ParseException = ::java::text::ParseException;
using $PatternEntry = ::java::text::PatternEntry;
using $RBCollationTables = ::java::text::RBCollationTables;
using $RBCollationTables$BuildAPI = ::java::text::RBCollationTables$BuildAPI;
using $Vector = ::java::util::Vector;
using $NormalizerImpl = ::jdk::internal::icu::impl::NormalizerImpl;
using $ComposedCharIter = ::sun::text::ComposedCharIter;
using $IntHashtable = ::sun::text::IntHashtable;
using $UCompactIntArray = ::sun::text::UCompactIntArray;

namespace java {
	namespace text {

$FieldInfo _RBTableBuilder_FieldInfo_[] = {
	{"CHARINDEX", "I", nullptr, $STATIC | $FINAL, $constField(RBTableBuilder, CHARINDEX)},
	{"IGNORABLEMASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RBTableBuilder, IGNORABLEMASK)},
	{"PRIMARYORDERINCREMENT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RBTableBuilder, PRIMARYORDERINCREMENT)},
	{"SECONDARYORDERINCREMENT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RBTableBuilder, SECONDARYORDERINCREMENT)},
	{"TERTIARYORDERINCREMENT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RBTableBuilder, TERTIARYORDERINCREMENT)},
	{"INITIALTABLESIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RBTableBuilder, INITIALTABLESIZE)},
	{"MAXKEYSIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RBTableBuilder, MAXKEYSIZE)},
	{"tables", "Ljava/text/RBCollationTables$BuildAPI;", nullptr, $PRIVATE, $field(RBTableBuilder, tables)},
	{"mPattern", "Ljava/text/MergeCollation;", nullptr, $PRIVATE, $field(RBTableBuilder, mPattern)},
	{"isOverIgnore", "Z", nullptr, $PRIVATE, $field(RBTableBuilder, isOverIgnore)},
	{"keyBuf", "[C", nullptr, $PRIVATE, $field(RBTableBuilder, keyBuf)},
	{"contractFlags", "Lsun/text/IntHashtable;", nullptr, $PRIVATE, $field(RBTableBuilder, contractFlags)},
	{"frenchSec", "Z", nullptr, $PRIVATE, $field(RBTableBuilder, frenchSec)},
	{"seAsianSwapping", "Z", nullptr, $PRIVATE, $field(RBTableBuilder, seAsianSwapping)},
	{"mapping", "Lsun/text/UCompactIntArray;", nullptr, $PRIVATE, $field(RBTableBuilder, mapping)},
	{"contractTable", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/util/Vector<Ljava/text/EntryPair;>;>;", $PRIVATE, $field(RBTableBuilder, contractTable)},
	{"expandTable", "Ljava/util/Vector;", "Ljava/util/Vector<[I>;", $PRIVATE, $field(RBTableBuilder, expandTable)},
	{"maxSecOrder", "S", nullptr, $PRIVATE, $field(RBTableBuilder, maxSecOrder)},
	{"maxTerOrder", "S", nullptr, $PRIVATE, $field(RBTableBuilder, maxTerOrder)},
	{}
};

$MethodInfo _RBTableBuilder_MethodInfo_[] = {
	{"<init>", "(Ljava/text/RBCollationTables$BuildAPI;)V", nullptr, $PUBLIC, $method(static_cast<void(RBTableBuilder::*)($RBCollationTables$BuildAPI*)>(&RBTableBuilder::init$))},
	{"addComposedChars", "()V", nullptr, $PRIVATE, $method(static_cast<void(RBTableBuilder::*)()>(&RBTableBuilder::addComposedChars)), "java.text.ParseException"},
	{"addContractFlags", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(RBTableBuilder::*)($String*)>(&RBTableBuilder::addContractFlags))},
	{"addContractOrder", "(Ljava/lang/String;I)V", nullptr, $PRIVATE | $FINAL, $method(static_cast<void(RBTableBuilder::*)($String*,int32_t)>(&RBTableBuilder::addContractOrder))},
	{"addContractOrder", "(Ljava/lang/String;IZ)V", nullptr, $PRIVATE | $FINAL, $method(static_cast<void(RBTableBuilder::*)($String*,int32_t,bool)>(&RBTableBuilder::addContractOrder))},
	{"addExpandOrder", "(Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PRIVATE | $FINAL, $method(static_cast<void(RBTableBuilder::*)($String*,$String*,int32_t)>(&RBTableBuilder::addExpandOrder)), "java.text.ParseException"},
	{"addExpandOrder", "(ILjava/lang/String;I)V", nullptr, $PRIVATE | $FINAL, $method(static_cast<void(RBTableBuilder::*)(int32_t,$String*,int32_t)>(&RBTableBuilder::addExpandOrder)), "java.text.ParseException"},
	{"addExpansion", "(ILjava/lang/String;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(RBTableBuilder::*)(int32_t,$String*)>(&RBTableBuilder::addExpansion))},
	{"addOrder", "(II)V", nullptr, $PRIVATE | $FINAL, $method(static_cast<void(RBTableBuilder::*)(int32_t,int32_t)>(&RBTableBuilder::addOrder))},
	{"build", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(RBTableBuilder::*)($String*,int32_t)>(&RBTableBuilder::build)), "java.text.ParseException"},
	{"commit", "()V", nullptr, $PRIVATE | $FINAL, $method(static_cast<void(RBTableBuilder::*)()>(&RBTableBuilder::commit))},
	{"getCharOrder", "(I)I", nullptr, $PRIVATE | $FINAL, $method(static_cast<int32_t(RBTableBuilder::*)(int32_t)>(&RBTableBuilder::getCharOrder))},
	{"getContractOrder", "(Ljava/lang/String;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(RBTableBuilder::*)($String*)>(&RBTableBuilder::getContractOrder))},
	{"getContractValues", "(I)Ljava/util/Vector;", "(I)Ljava/util/Vector<Ljava/text/EntryPair;>;", $PRIVATE, $method(static_cast<$Vector*(RBTableBuilder::*)(int32_t)>(&RBTableBuilder::getContractValues))},
	{"getContractValuesImpl", "(I)Ljava/util/Vector;", "(I)Ljava/util/Vector<Ljava/text/EntryPair;>;", $PRIVATE, $method(static_cast<$Vector*(RBTableBuilder::*)(int32_t)>(&RBTableBuilder::getContractValuesImpl))},
	{"increment", "(II)I", nullptr, $PRIVATE | $FINAL, $method(static_cast<int32_t(RBTableBuilder::*)(int32_t,int32_t)>(&RBTableBuilder::increment))},
	{}
};

$ClassInfo _RBTableBuilder_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.text.RBTableBuilder",
	"java.lang.Object",
	nullptr,
	_RBTableBuilder_FieldInfo_,
	_RBTableBuilder_MethodInfo_
};

$Object* allocate$RBTableBuilder($Class* clazz) {
	return $of($alloc(RBTableBuilder));
}

void RBTableBuilder::init$($RBCollationTables$BuildAPI* tables) {
	$set(this, tables, nullptr);
	$set(this, mPattern, nullptr);
	this->isOverIgnore = false;
	$set(this, keyBuf, $new($chars, RBTableBuilder::MAXKEYSIZE));
	$set(this, contractFlags, $new($IntHashtable, 100));
	this->frenchSec = false;
	this->seAsianSwapping = false;
	$set(this, mapping, nullptr);
	$set(this, contractTable, nullptr);
	$set(this, expandTable, nullptr);
	this->maxSecOrder = (int16_t)0;
	this->maxTerOrder = (int16_t)0;
	$set(this, tables, tables);
}

void RBTableBuilder::build($String* pattern$renamed, int32_t decmp) {
	$var($String, pattern, pattern$renamed);
	$var($String, expChars, nullptr);
	$var($String, groupChars, nullptr);
	if ($nc(pattern)->isEmpty()) {
		$throwNew($ParseException, "Build rules empty."_s, 0);
	}
	$set(this, mapping, $new($UCompactIntArray, $RBCollationTables::UNMAPPED));
	$assign(pattern, $NormalizerImpl::canonicalDecomposeWithSingleQuotation(pattern));
	$set(this, mPattern, $new($MergeCollation, pattern));
	int32_t order = 0;
	for (int32_t i = 0; i < $nc(this->mPattern)->getCount(); ++i) {
		$var($PatternEntry, entry, $nc(this->mPattern)->getItemAt(i));
		if (entry != nullptr) {
			$assign(groupChars, entry->getChars());
			if ($nc(groupChars)->length() > 1) {
				switch (groupChars->charAt(groupChars->length() - 1)) {
				case u'@':
					{
						this->frenchSec = true;
						$assign(groupChars, groupChars->substring(0, groupChars->length() - 1));
						break;
					}
				case u'!':
					{
						this->seAsianSwapping = true;
						$assign(groupChars, groupChars->substring(0, groupChars->length() - 1));
						break;
					}
				}
			}
			order = increment(entry->getStrength(), order);
			$assign(expChars, entry->getExtension());
			if (!$nc(expChars)->isEmpty()) {
				addExpandOrder(groupChars, expChars, order);
			} else if ($nc(groupChars)->length() > 1) {
				char16_t ch = groupChars->charAt(0);
				bool var$0 = $Character::isHighSurrogate(ch);
				if (var$0 && groupChars->length() == 2) {
					addOrder($Character::toCodePoint(ch, groupChars->charAt(1)), order);
				} else {
					addContractOrder(groupChars, order);
				}
			} else {
				char16_t ch = groupChars->charAt(0);
				addOrder(ch, order);
			}
		}
	}
	addComposedChars();
	commit();
	$nc(this->mapping)->compact();
	$nc(this->tables)->fillInTables(this->frenchSec, this->seAsianSwapping, this->mapping, this->contractTable, this->expandTable, this->contractFlags, this->maxSecOrder, this->maxTerOrder);
}

void RBTableBuilder::addComposedChars() {
	$var($ComposedCharIter, iter, $new($ComposedCharIter));
	int32_t c = 0;
	while ((c = iter->next()) != $ComposedCharIter::DONE) {
		if (getCharOrder(c) == $RBCollationTables::UNMAPPED) {
			$var($String, s, iter->decomposition());
			if ($nc(s)->length() == 1) {
				int32_t order = getCharOrder(s->charAt(0));
				if (order != $RBCollationTables::UNMAPPED) {
					addOrder(c, order);
				}
				continue;
			} else if (s->length() == 2) {
				char16_t ch0 = s->charAt(0);
				if ($Character::isHighSurrogate(ch0)) {
					int32_t order = getCharOrder(s->codePointAt(0));
					if (order != $RBCollationTables::UNMAPPED) {
						addOrder(c, order);
					}
					continue;
				}
			}
			int32_t contractOrder = getContractOrder(s);
			if (contractOrder != $RBCollationTables::UNMAPPED) {
				addOrder(c, contractOrder);
			} else {
				bool allThere = true;
				for (int32_t i = 0; i < $nc(s)->length(); ++i) {
					if (getCharOrder(s->charAt(i)) == $RBCollationTables::UNMAPPED) {
						allThere = false;
						break;
					}
				}
				if (allThere) {
					addExpandOrder(c, s, $RBCollationTables::UNMAPPED);
				}
			}
		}
	}
}

void RBTableBuilder::commit() {
	if (this->expandTable != nullptr) {
		for (int32_t i = 0; i < $nc(this->expandTable)->size(); ++i) {
			$var($ints, valueList, $cast($ints, $nc(this->expandTable)->elementAt(i)));
			for (int32_t j = 0; j < $nc(valueList)->length; ++j) {
				int32_t order = valueList->get(j);
				if (order < $RBCollationTables::EXPANDCHARINDEX && order > RBTableBuilder::CHARINDEX) {
					int32_t ch = order - RBTableBuilder::CHARINDEX;
					int32_t realValue = getCharOrder(ch);
					if (realValue == $RBCollationTables::UNMAPPED) {
						valueList->set(j, (int32_t)(RBTableBuilder::IGNORABLEMASK & (uint32_t)ch));
					} else {
						valueList->set(j, realValue);
					}
				}
			}
		}
	}
}

int32_t RBTableBuilder::increment(int32_t aStrength, int32_t lastValue) {
	switch (aStrength) {
	case $Collator::PRIMARY:
		{
			lastValue += RBTableBuilder::PRIMARYORDERINCREMENT;
			lastValue &= (uint32_t)$RBCollationTables::PRIMARYORDERMASK;
			this->isOverIgnore = true;
			break;
		}
	case $Collator::SECONDARY:
		{
			lastValue += RBTableBuilder::SECONDARYORDERINCREMENT;
			lastValue &= (uint32_t)$RBCollationTables::SECONDARYDIFFERENCEONLY;
			if (!this->isOverIgnore) {
				++this->maxSecOrder;
			}
			break;
		}
	case $Collator::TERTIARY:
		{
			lastValue += RBTableBuilder::TERTIARYORDERINCREMENT;
			if (!this->isOverIgnore) {
				++this->maxTerOrder;
			}
			break;
		}
	}
	return lastValue;
}

void RBTableBuilder::addOrder(int32_t ch, int32_t anOrder) {
	int32_t order = $nc(this->mapping)->elementAt(ch);
	if (order >= $RBCollationTables::CONTRACTCHARINDEX) {
		int32_t length = 1;
		if ($Character::isSupplementaryCodePoint(ch)) {
			length = $Character::toChars(ch, this->keyBuf, 0);
		} else {
			$nc(this->keyBuf)->set(0, (char16_t)ch);
		}
		addContractOrder($$new($String, this->keyBuf, 0, length), anOrder);
	} else {
		$nc(this->mapping)->setElementAt(ch, anOrder);
	}
}

void RBTableBuilder::addContractOrder($String* groupChars, int32_t anOrder) {
	addContractOrder(groupChars, anOrder, true);
}

void RBTableBuilder::addContractOrder($String* groupChars, int32_t anOrder, bool fwd) {
	if (this->contractTable == nullptr) {
		$set(this, contractTable, $new($Vector, RBTableBuilder::INITIALTABLESIZE));
	}
	int32_t ch = $nc(groupChars)->codePointAt(0);
	int32_t entry = $nc(this->mapping)->elementAt(ch);
	$var($Vector, entryTable, getContractValuesImpl(entry - $RBCollationTables::CONTRACTCHARINDEX));
	if (entryTable == nullptr) {
		int32_t tableIndex = $RBCollationTables::CONTRACTCHARINDEX + $nc(this->contractTable)->size();
		$assign(entryTable, $new($Vector, RBTableBuilder::INITIALTABLESIZE));
		$nc(this->contractTable)->addElement(entryTable);
		entryTable->addElement($$new($EntryPair, $(groupChars->substring(0, $Character::charCount(ch))), entry));
		$nc(this->mapping)->setElementAt(ch, tableIndex);
	}
	int32_t index = $RBCollationTables::getEntry(entryTable, groupChars, fwd);
	if (index != $RBCollationTables::UNMAPPED) {
		$var($EntryPair, pair, $cast($EntryPair, $nc(entryTable)->elementAt(index)));
		$nc(pair)->value = anOrder;
	} else {
		$var($EntryPair, pair, $cast($EntryPair, $nc(entryTable)->lastElement()));
		int32_t var$0 = groupChars->length();
		if (var$0 > $nc($nc(pair)->entryName)->length()) {
			entryTable->addElement($$new($EntryPair, groupChars, anOrder, fwd));
		} else {
			$var($Object, var$1, $of($new($EntryPair, groupChars, anOrder, fwd)));
			entryTable->insertElementAt(var$1, entryTable->size() - 1);
		}
	}
	if (fwd && groupChars->length() > 1) {
		addContractFlags(groupChars);
		addContractOrder($($nc($($$new($StringBuffer, groupChars)->reverse()))->toString()), anOrder, false);
	}
}

int32_t RBTableBuilder::getContractOrder($String* groupChars) {
	int32_t result = $RBCollationTables::UNMAPPED;
	if (this->contractTable != nullptr) {
		int32_t ch = $nc(groupChars)->codePointAt(0);
		$var($Vector, entryTable, getContractValues(ch));
		if (entryTable != nullptr) {
			int32_t index = $RBCollationTables::getEntry(entryTable, groupChars, true);
			if (index != $RBCollationTables::UNMAPPED) {
				$var($EntryPair, pair, $cast($EntryPair, entryTable->elementAt(index)));
				result = $nc(pair)->value;
			}
		}
	}
	return result;
}

int32_t RBTableBuilder::getCharOrder(int32_t ch) {
	int32_t order = $nc(this->mapping)->elementAt(ch);
	if (order >= $RBCollationTables::CONTRACTCHARINDEX) {
		$var($Vector, groupList, getContractValuesImpl(order - $RBCollationTables::CONTRACTCHARINDEX));
		$var($EntryPair, pair, $cast($EntryPair, $nc(groupList)->firstElement()));
		order = $nc(pair)->value;
	}
	return order;
}

$Vector* RBTableBuilder::getContractValues(int32_t ch) {
	int32_t index = $nc(this->mapping)->elementAt(ch);
	return getContractValuesImpl(index - $RBCollationTables::CONTRACTCHARINDEX);
}

$Vector* RBTableBuilder::getContractValuesImpl(int32_t index) {
	if (index >= 0) {
		return $cast($Vector, $nc(this->contractTable)->elementAt(index));
	} else {
		return nullptr;
	}
}

void RBTableBuilder::addExpandOrder($String* contractChars, $String* expandChars, int32_t anOrder) {
	int32_t tableIndex = addExpansion(anOrder, expandChars);
	if ($nc(contractChars)->length() > 1) {
		char16_t ch = contractChars->charAt(0);
		bool var$0 = $Character::isHighSurrogate(ch);
		if (var$0 && contractChars->length() == 2) {
			char16_t ch2 = contractChars->charAt(1);
			if ($Character::isLowSurrogate(ch2)) {
				addOrder($Character::toCodePoint(ch, ch2), tableIndex);
			}
		} else {
			addContractOrder(contractChars, tableIndex);
		}
	} else {
		addOrder(contractChars->charAt(0), tableIndex);
	}
}

void RBTableBuilder::addExpandOrder(int32_t ch, $String* expandChars, int32_t anOrder) {
	int32_t tableIndex = addExpansion(anOrder, expandChars);
	addOrder(ch, tableIndex);
}

int32_t RBTableBuilder::addExpansion(int32_t anOrder, $String* expandChars) {
	if (this->expandTable == nullptr) {
		$set(this, expandTable, $new($Vector, RBTableBuilder::INITIALTABLESIZE));
	}
	int32_t offset = (anOrder == $RBCollationTables::UNMAPPED) ? 0 : 1;
	$var($ints, valueList, $new($ints, $nc(expandChars)->length() + offset));
	if (offset == 1) {
		valueList->set(0, anOrder);
	}
	int32_t j = offset;
	for (int32_t i = 0; i < expandChars->length(); ++i) {
		char16_t ch0 = expandChars->charAt(i);
		char16_t ch1 = 0;
		int32_t ch = 0;
		if ($Character::isHighSurrogate(ch0)) {
			bool var$0 = ++i == expandChars->length();
			if (var$0 || !$Character::isLowSurrogate(ch1 = expandChars->charAt(i))) {
				break;
			}
			ch = $Character::toCodePoint(ch0, ch1);
		} else {
			ch = ch0;
		}
		int32_t mapValue = getCharOrder(ch);
		if (mapValue != $RBCollationTables::UNMAPPED) {
			valueList->set(j++, mapValue);
		} else {
			valueList->set(j++, RBTableBuilder::CHARINDEX + ch);
		}
	}
	if (j < valueList->length) {
		$var($ints, tmpBuf, $new($ints, j));
		while (--j >= 0) {
			tmpBuf->set(j, valueList->get(j));
		}
		$assign(valueList, tmpBuf);
	}
	int32_t tableIndex = $RBCollationTables::EXPANDCHARINDEX + $nc(this->expandTable)->size();
	$nc(this->expandTable)->addElement(valueList);
	return tableIndex;
}

void RBTableBuilder::addContractFlags($String* chars) {
	char16_t c0 = 0;
	int32_t c = 0;
	int32_t len = $nc(chars)->length();
	for (int32_t i = 0; i < len; ++i) {
		c0 = chars->charAt(i);
		c = $Character::isHighSurrogate(c0) ? $Character::toCodePoint(c0, chars->charAt(++i)) : (int32_t)c0;
		$nc(this->contractFlags)->put(c, 1);
	}
}

RBTableBuilder::RBTableBuilder() {
}

$Class* RBTableBuilder::load$($String* name, bool initialize) {
	$loadClass(RBTableBuilder, name, initialize, &_RBTableBuilder_ClassInfo_, allocate$RBTableBuilder);
	return class$;
}

$Class* RBTableBuilder::class$ = nullptr;

	} // text
} // java