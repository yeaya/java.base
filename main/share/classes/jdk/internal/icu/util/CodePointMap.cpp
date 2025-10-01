#include <jdk/internal/icu/util/CodePointMap.h>

#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Iterator.h>
#include <jdk/internal/icu/util/CodePointMap$Range.h>
#include <jdk/internal/icu/util/CodePointMap$RangeIterator.h>
#include <jdk/internal/icu/util/CodePointMap$RangeOption.h>
#include <jdk/internal/icu/util/CodePointMap$StringIterator.h>
#include <jdk/internal/icu/util/CodePointMap$ValueFilter.h>
#include <jcpp.h>

#undef FIXED_ALL_SURROGATES
#undef NORMAL

using $AssertionError = ::java::lang::AssertionError;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $CodePointMap$Range = ::jdk::internal::icu::util::CodePointMap$Range;
using $CodePointMap$RangeIterator = ::jdk::internal::icu::util::CodePointMap$RangeIterator;
using $CodePointMap$RangeOption = ::jdk::internal::icu::util::CodePointMap$RangeOption;
using $CodePointMap$StringIterator = ::jdk::internal::icu::util::CodePointMap$StringIterator;
using $CodePointMap$ValueFilter = ::jdk::internal::icu::util::CodePointMap$ValueFilter;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace util {

$FieldInfo _CodePointMap_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(CodePointMap, $assertionsDisabled)},
	{}
};

$MethodInfo _CodePointMap_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(CodePointMap::*)()>(&CodePointMap::init$))},
	{"get", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getRange", "(ILjdk/internal/icu/util/CodePointMap$ValueFilter;Ljdk/internal/icu/util/CodePointMap$Range;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getRange", "(ILjdk/internal/icu/util/CodePointMap$RangeOption;ILjdk/internal/icu/util/CodePointMap$ValueFilter;Ljdk/internal/icu/util/CodePointMap$Range;)Z", nullptr, $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljdk/internal/icu/util/CodePointMap$Range;>;", $PUBLIC},
	{"stringIterator", "(Ljava/lang/CharSequence;I)Ljdk/internal/icu/util/CodePointMap$StringIterator;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CodePointMap_InnerClassesInfo_[] = {
	{"jdk.internal.icu.util.CodePointMap$StringIterator", "jdk.internal.icu.util.CodePointMap", "StringIterator", $PUBLIC},
	{"jdk.internal.icu.util.CodePointMap$RangeIterator", "jdk.internal.icu.util.CodePointMap", "RangeIterator", $PRIVATE | $FINAL},
	{"jdk.internal.icu.util.CodePointMap$Range", "jdk.internal.icu.util.CodePointMap", "Range", $PUBLIC | $STATIC | $FINAL},
	{"jdk.internal.icu.util.CodePointMap$ValueFilter", "jdk.internal.icu.util.CodePointMap", "ValueFilter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"jdk.internal.icu.util.CodePointMap$RangeOption", "jdk.internal.icu.util.CodePointMap", "RangeOption", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _CodePointMap_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"jdk.internal.icu.util.CodePointMap",
	"java.lang.Object",
	"java.lang.Iterable",
	_CodePointMap_FieldInfo_,
	_CodePointMap_MethodInfo_,
	"Ljava/lang/Object;Ljava/lang/Iterable<Ljdk/internal/icu/util/CodePointMap$Range;>;",
	nullptr,
	_CodePointMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.internal.icu.util.CodePointMap$StringIterator,jdk.internal.icu.util.CodePointMap$RangeIterator,jdk.internal.icu.util.CodePointMap$Range,jdk.internal.icu.util.CodePointMap$ValueFilter,jdk.internal.icu.util.CodePointMap$RangeOption"
};

$Object* allocate$CodePointMap($Class* clazz) {
	return $of($alloc(CodePointMap));
}

bool CodePointMap::$assertionsDisabled = false;

void CodePointMap::init$() {
}

bool CodePointMap::getRange(int32_t start, $CodePointMap$RangeOption* option, int32_t surrogateValue, $CodePointMap$ValueFilter* filter, $CodePointMap$Range* range) {
	if (!CodePointMap::$assertionsDisabled && !(option != nullptr)) {
		$throwNew($AssertionError);
	}
	if (!getRange(start, filter, range)) {
		return false;
	}
	$init($CodePointMap$RangeOption);
	if (option == $CodePointMap$RangeOption::NORMAL) {
		return true;
	}
	int32_t surrEnd = option == $CodePointMap$RangeOption::FIXED_ALL_SURROGATES ? 0x0000DFFF : 0x0000DBFF;
	int32_t end = $nc(range)->end;
	if (end < 0x0000D7FF || start > surrEnd) {
		return true;
	}
	if (range->value == surrogateValue) {
		if (end >= surrEnd) {
			return true;
		}
	} else {
		if (start <= 0x0000D7FF) {
			range->end = 0x0000D7FF;
			return true;
		}
		range->value = surrogateValue;
		if (end > surrEnd) {
			range->end = surrEnd;
			return true;
		}
	}
	if (getRange(surrEnd + 1, filter, range) && range->value == surrogateValue) {
		range->start = start;
		return true;
	}
	range->start = start;
	range->end = surrEnd;
	range->value = surrogateValue;
	return true;
}

$Iterator* CodePointMap::iterator() {
	return $new($CodePointMap$RangeIterator, this);
}

$CodePointMap$StringIterator* CodePointMap::stringIterator($CharSequence* s, int32_t sIndex) {
	return $new($CodePointMap$StringIterator, this, s, sIndex);
}

void clinit$CodePointMap($Class* class$) {
	CodePointMap::$assertionsDisabled = !CodePointMap::class$->desiredAssertionStatus();
}

CodePointMap::CodePointMap() {
}

$Class* CodePointMap::load$($String* name, bool initialize) {
	$loadClass(CodePointMap, name, initialize, &_CodePointMap_ClassInfo_, clinit$CodePointMap, allocate$CodePointMap);
	return class$;
}

$Class* CodePointMap::class$ = nullptr;

			} // util
		} // icu
	} // internal
} // jdk