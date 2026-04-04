#include <java/text/DecimalFormat$FastPathData.h>
#include <java/text/DecimalFormat.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace text {

void DecimalFormat$FastPathData::init$() {
	this->positiveAffixesRequired = true;
	this->negativeAffixesRequired = true;
}

DecimalFormat$FastPathData::DecimalFormat$FastPathData() {
}

$Class* DecimalFormat$FastPathData::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"lastFreeIndex", "I", nullptr, 0, $field(DecimalFormat$FastPathData, lastFreeIndex)},
		{"firstUsedIndex", "I", nullptr, 0, $field(DecimalFormat$FastPathData, firstUsedIndex)},
		{"zeroDelta", "I", nullptr, 0, $field(DecimalFormat$FastPathData, zeroDelta)},
		{"groupingChar", "C", nullptr, 0, $field(DecimalFormat$FastPathData, groupingChar)},
		{"integralLastIndex", "I", nullptr, 0, $field(DecimalFormat$FastPathData, integralLastIndex)},
		{"fractionalFirstIndex", "I", nullptr, 0, $field(DecimalFormat$FastPathData, fractionalFirstIndex)},
		{"fractionalScaleFactor", "D", nullptr, 0, $field(DecimalFormat$FastPathData, fractionalScaleFactor)},
		{"fractionalMaxIntBound", "I", nullptr, 0, $field(DecimalFormat$FastPathData, fractionalMaxIntBound)},
		{"fastPathContainer", "[C", nullptr, 0, $field(DecimalFormat$FastPathData, fastPathContainer)},
		{"charsPositivePrefix", "[C", nullptr, 0, $field(DecimalFormat$FastPathData, charsPositivePrefix)},
		{"charsNegativePrefix", "[C", nullptr, 0, $field(DecimalFormat$FastPathData, charsNegativePrefix)},
		{"charsPositiveSuffix", "[C", nullptr, 0, $field(DecimalFormat$FastPathData, charsPositiveSuffix)},
		{"charsNegativeSuffix", "[C", nullptr, 0, $field(DecimalFormat$FastPathData, charsNegativeSuffix)},
		{"positiveAffixesRequired", "Z", nullptr, 0, $field(DecimalFormat$FastPathData, positiveAffixesRequired)},
		{"negativeAffixesRequired", "Z", nullptr, 0, $field(DecimalFormat$FastPathData, negativeAffixesRequired)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(DecimalFormat$FastPathData, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.text.DecimalFormat$FastPathData", "java.text.DecimalFormat", "FastPathData", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.text.DecimalFormat$FastPathData",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.text.DecimalFormat"
	};
	$loadClass(DecimalFormat$FastPathData, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DecimalFormat$FastPathData);
	});
	return class$;
}

$Class* DecimalFormat$FastPathData::class$ = nullptr;

	} // text
} // java