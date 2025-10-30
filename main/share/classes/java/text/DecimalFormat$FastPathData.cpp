#include <java/text/DecimalFormat$FastPathData.h>

#include <java/text/DecimalFormat.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DecimalFormat = ::java::text::DecimalFormat;

namespace java {
	namespace text {

$FieldInfo _DecimalFormat$FastPathData_FieldInfo_[] = {
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

$MethodInfo _DecimalFormat$FastPathData_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(DecimalFormat$FastPathData::*)()>(&DecimalFormat$FastPathData::init$))},
	{}
};

$InnerClassInfo _DecimalFormat$FastPathData_InnerClassesInfo_[] = {
	{"java.text.DecimalFormat$FastPathData", "java.text.DecimalFormat", "FastPathData", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DecimalFormat$FastPathData_ClassInfo_ = {
	$ACC_SUPER,
	"java.text.DecimalFormat$FastPathData",
	"java.lang.Object",
	nullptr,
	_DecimalFormat$FastPathData_FieldInfo_,
	_DecimalFormat$FastPathData_MethodInfo_,
	nullptr,
	nullptr,
	_DecimalFormat$FastPathData_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.text.DecimalFormat"
};

$Object* allocate$DecimalFormat$FastPathData($Class* clazz) {
	return $of($alloc(DecimalFormat$FastPathData));
}

void DecimalFormat$FastPathData::init$() {
	this->positiveAffixesRequired = true;
	this->negativeAffixesRequired = true;
}

DecimalFormat$FastPathData::DecimalFormat$FastPathData() {
}

$Class* DecimalFormat$FastPathData::load$($String* name, bool initialize) {
	$loadClass(DecimalFormat$FastPathData, name, initialize, &_DecimalFormat$FastPathData_ClassInfo_, allocate$DecimalFormat$FastPathData);
	return class$;
}

$Class* DecimalFormat$FastPathData::class$ = nullptr;

	} // text
} // java