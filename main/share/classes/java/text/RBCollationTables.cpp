#include <java/text/RBCollationTables.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/EntryPair.h>
#include <java/text/RBCollationTables$BuildAPI.h>
#include <java/text/RBTableBuilder.h>
#include <java/util/Vector.h>
#include <sun/text/IntHashtable.h>
#include <sun/text/UCompactIntArray.h>
#include <jcpp.h>

#undef CONTRACTCHARINDEX
#undef EXPANDCHARINDEX
#undef PRIMARYDIFFERENCEONLY
#undef PRIMARYORDERMASK
#undef PRIMARYORDERSHIFT
#undef SECONDARYDIFFERENCEONLY
#undef SECONDARYORDERMASK
#undef SECONDARYORDERSHIFT
#undef TERTIARYORDERMASK
#undef UNMAPPED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $EntryPair = ::java::text::EntryPair;
using $RBCollationTables$BuildAPI = ::java::text::RBCollationTables$BuildAPI;
using $RBTableBuilder = ::java::text::RBTableBuilder;
using $Vector = ::java::util::Vector;
using $IntHashtable = ::sun::text::IntHashtable;
using $UCompactIntArray = ::sun::text::UCompactIntArray;

namespace java {
	namespace text {

$FieldInfo _RBCollationTables_FieldInfo_[] = {
	{"EXPANDCHARINDEX", "I", nullptr, $STATIC | $FINAL, $constField(RBCollationTables, EXPANDCHARINDEX)},
	{"CONTRACTCHARINDEX", "I", nullptr, $STATIC | $FINAL, $constField(RBCollationTables, CONTRACTCHARINDEX)},
	{"UNMAPPED", "I", nullptr, $STATIC | $FINAL, $constField(RBCollationTables, UNMAPPED)},
	{"PRIMARYORDERMASK", "I", nullptr, $STATIC | $FINAL, $constField(RBCollationTables, PRIMARYORDERMASK)},
	{"SECONDARYORDERMASK", "I", nullptr, $STATIC | $FINAL, $constField(RBCollationTables, SECONDARYORDERMASK)},
	{"TERTIARYORDERMASK", "I", nullptr, $STATIC | $FINAL, $constField(RBCollationTables, TERTIARYORDERMASK)},
	{"PRIMARYDIFFERENCEONLY", "I", nullptr, $STATIC | $FINAL, $constField(RBCollationTables, PRIMARYDIFFERENCEONLY)},
	{"SECONDARYDIFFERENCEONLY", "I", nullptr, $STATIC | $FINAL, $constField(RBCollationTables, SECONDARYDIFFERENCEONLY)},
	{"PRIMARYORDERSHIFT", "I", nullptr, $STATIC | $FINAL, $constField(RBCollationTables, PRIMARYORDERSHIFT)},
	{"SECONDARYORDERSHIFT", "I", nullptr, $STATIC | $FINAL, $constField(RBCollationTables, SECONDARYORDERSHIFT)},
	{"rules", "Ljava/lang/String;", nullptr, $PRIVATE, $field(RBCollationTables, rules)},
	{"frenchSec", "Z", nullptr, $PRIVATE, $field(RBCollationTables, frenchSec)},
	{"seAsianSwapping", "Z", nullptr, $PRIVATE, $field(RBCollationTables, seAsianSwapping)},
	{"mapping", "Lsun/text/UCompactIntArray;", nullptr, $PRIVATE, $field(RBCollationTables, mapping)},
	{"contractTable", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/util/Vector<Ljava/text/EntryPair;>;>;", $PRIVATE, $field(RBCollationTables, contractTable)},
	{"expandTable", "Ljava/util/Vector;", "Ljava/util/Vector<[I>;", $PRIVATE, $field(RBCollationTables, expandTable)},
	{"contractFlags", "Lsun/text/IntHashtable;", nullptr, $PRIVATE, $field(RBCollationTables, contractFlags)},
	{"maxSecOrder", "S", nullptr, $PRIVATE, $field(RBCollationTables, maxSecOrder)},
	{"maxTerOrder", "S", nullptr, $PRIVATE, $field(RBCollationTables, maxTerOrder)},
	{}
};

$MethodInfo _RBCollationTables_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(RBCollationTables::*)($String*,int32_t)>(&RBCollationTables::init$)), "java.text.ParseException"},
	{"getContractValues", "(I)Ljava/util/Vector;", "(I)Ljava/util/Vector<Ljava/text/EntryPair;>;", 0, $method(static_cast<$Vector*(RBCollationTables::*)(int32_t)>(&RBCollationTables::getContractValues))},
	{"getContractValuesImpl", "(I)Ljava/util/Vector;", "(I)Ljava/util/Vector<Ljava/text/EntryPair;>;", $PRIVATE, $method(static_cast<$Vector*(RBCollationTables::*)(int32_t)>(&RBCollationTables::getContractValuesImpl))},
	{"getEntry", "(Ljava/util/Vector;Ljava/lang/String;Z)I", "(Ljava/util/Vector<Ljava/text/EntryPair;>;Ljava/lang/String;Z)I", $STATIC | $FINAL, $method(static_cast<int32_t(*)($Vector*,$String*,bool)>(&RBCollationTables::getEntry))},
	{"getExpandValueList", "(I)[I", nullptr, $FINAL, $method(static_cast<$ints*(RBCollationTables::*)(int32_t)>(&RBCollationTables::getExpandValueList))},
	{"getMaxExpansion", "(I)I", nullptr, 0, $method(static_cast<int32_t(RBCollationTables::*)(int32_t)>(&RBCollationTables::getMaxExpansion))},
	{"getMaxSecOrder", "()S", nullptr, 0, $method(static_cast<int16_t(RBCollationTables::*)()>(&RBCollationTables::getMaxSecOrder))},
	{"getMaxTerOrder", "()S", nullptr, 0, $method(static_cast<int16_t(RBCollationTables::*)()>(&RBCollationTables::getMaxTerOrder))},
	{"getRules", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(RBCollationTables::*)()>(&RBCollationTables::getRules))},
	{"getUnicodeOrder", "(I)I", nullptr, 0, $method(static_cast<int32_t(RBCollationTables::*)(int32_t)>(&RBCollationTables::getUnicodeOrder))},
	{"isFrenchSec", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(RBCollationTables::*)()>(&RBCollationTables::isFrenchSec))},
	{"isSEAsianSwapping", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(RBCollationTables::*)()>(&RBCollationTables::isSEAsianSwapping))},
	{"reverse", "(Ljava/lang/StringBuffer;II)V", nullptr, $STATIC, $method(static_cast<void(*)($StringBuffer*,int32_t,int32_t)>(&RBCollationTables::reverse))},
	{"usedInContractSeq", "(I)Z", nullptr, 0, $method(static_cast<bool(RBCollationTables::*)(int32_t)>(&RBCollationTables::usedInContractSeq))},
	{}
};

$InnerClassInfo _RBCollationTables_InnerClassesInfo_[] = {
	{"java.text.RBCollationTables$BuildAPI", "java.text.RBCollationTables", "BuildAPI", $FINAL},
	{}
};

$ClassInfo _RBCollationTables_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.text.RBCollationTables",
	"java.lang.Object",
	nullptr,
	_RBCollationTables_FieldInfo_,
	_RBCollationTables_MethodInfo_,
	nullptr,
	nullptr,
	_RBCollationTables_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.text.RBCollationTables$BuildAPI"
};

$Object* allocate$RBCollationTables($Class* clazz) {
	return $of($alloc(RBCollationTables));
}

void RBCollationTables::init$($String* rules, int32_t decmp) {
	$set(this, rules, nullptr);
	this->frenchSec = false;
	this->seAsianSwapping = false;
	$set(this, mapping, nullptr);
	$set(this, contractTable, nullptr);
	$set(this, expandTable, nullptr);
	$set(this, contractFlags, nullptr);
	this->maxSecOrder = (int16_t)0;
	this->maxTerOrder = (int16_t)0;
	$set(this, rules, rules);
	$var($RBTableBuilder, builder, $new($RBTableBuilder, $$new($RBCollationTables$BuildAPI, this)));
	builder->build(rules, decmp);
}

$String* RBCollationTables::getRules() {
	return this->rules;
}

bool RBCollationTables::isFrenchSec() {
	return this->frenchSec;
}

bool RBCollationTables::isSEAsianSwapping() {
	return this->seAsianSwapping;
}

$Vector* RBCollationTables::getContractValues(int32_t ch) {
	int32_t index = $nc(this->mapping)->elementAt(ch);
	return getContractValuesImpl(index - RBCollationTables::CONTRACTCHARINDEX);
}

$Vector* RBCollationTables::getContractValuesImpl(int32_t index) {
	if (index >= 0) {
		return $cast($Vector, $nc(this->contractTable)->elementAt(index));
	} else {
		return nullptr;
	}
}

bool RBCollationTables::usedInContractSeq(int32_t c) {
	return $nc(this->contractFlags)->get(c) == 1;
}

int32_t RBCollationTables::getMaxExpansion(int32_t order) {
	int32_t result = 1;
	if (this->expandTable != nullptr) {
		for (int32_t i = 0; i < $nc(this->expandTable)->size(); ++i) {
			$var($ints, valueList, $cast($ints, $nc(this->expandTable)->elementAt(i)));
			int32_t length = $nc(valueList)->length;
			if (length > result && valueList->get(length - 1) == order) {
				result = length;
			}
		}
	}
	return result;
}

$ints* RBCollationTables::getExpandValueList(int32_t idx) {
	return $cast($ints, $nc(this->expandTable)->elementAt(idx - RBCollationTables::EXPANDCHARINDEX));
}

int32_t RBCollationTables::getUnicodeOrder(int32_t ch) {
	return $nc(this->mapping)->elementAt(ch);
}

int16_t RBCollationTables::getMaxSecOrder() {
	return this->maxSecOrder;
}

int16_t RBCollationTables::getMaxTerOrder() {
	return this->maxTerOrder;
}

void RBCollationTables::reverse($StringBuffer* result, int32_t from, int32_t to) {
	int32_t i = from;
	char16_t swap = 0;
	int32_t j = to - 1;
	while (i < j) {
		swap = $nc(result)->charAt(i);
		result->setCharAt(i, result->charAt(j));
		result->setCharAt(j, swap);
		++i;
		--j;
	}
}

int32_t RBCollationTables::getEntry($Vector* list, $String* name, bool fwd) {
	for (int32_t i = 0; i < $nc(list)->size(); ++i) {
		$var($EntryPair, pair, $cast($EntryPair, list->elementAt(i)));
		if ($nc(pair)->fwd == fwd && $nc(pair->entryName)->equals(name)) {
			return i;
		}
	}
	return RBCollationTables::UNMAPPED;
}

RBCollationTables::RBCollationTables() {
}

$Class* RBCollationTables::load$($String* name, bool initialize) {
	$loadClass(RBCollationTables, name, initialize, &_RBCollationTables_ClassInfo_, allocate$RBCollationTables);
	return class$;
}

$Class* RBCollationTables::class$ = nullptr;

	} // text
} // java