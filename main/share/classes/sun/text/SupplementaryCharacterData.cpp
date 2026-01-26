#include <sun/text/SupplementaryCharacterData.h>

#include <java/lang/AssertionError.h>
#include <jcpp.h>

#undef IGNORE
#undef MAX_CODE_POINT
#undef MIN_SUPPLEMENTARY_CODE_POINT

using $AssertionError = ::java::lang::AssertionError;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace text {

$FieldInfo _SupplementaryCharacterData_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SupplementaryCharacterData, $assertionsDisabled)},
	{"IGNORE", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SupplementaryCharacterData, IGNORE)},
	{"dataTable", "[I", nullptr, $PRIVATE, $field(SupplementaryCharacterData, dataTable)},
	{}
};

$MethodInfo _SupplementaryCharacterData_MethodInfo_[] = {
	{"<init>", "([I)V", nullptr, $PUBLIC, $method(SupplementaryCharacterData, init$, void, $ints*)},
	{"getArray", "()[I", nullptr, $PUBLIC, $method(SupplementaryCharacterData, getArray, $ints*)},
	{"getValue", "(I)I", nullptr, $PUBLIC, $method(SupplementaryCharacterData, getValue, int32_t, int32_t)},
	{}
};

$ClassInfo _SupplementaryCharacterData_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.text.SupplementaryCharacterData",
	"java.lang.Object",
	"java.lang.Cloneable",
	_SupplementaryCharacterData_FieldInfo_,
	_SupplementaryCharacterData_MethodInfo_
};

$Object* allocate$SupplementaryCharacterData($Class* clazz) {
	return $of($alloc(SupplementaryCharacterData));
}

bool SupplementaryCharacterData::$assertionsDisabled = false;

void SupplementaryCharacterData::init$($ints* table) {
	$set(this, dataTable, table);
}

int32_t SupplementaryCharacterData::getValue(int32_t index) {
	$useLocalCurrentObjectStackCache();
	if (!SupplementaryCharacterData::$assertionsDisabled && !(index >= $Character::MIN_SUPPLEMENTARY_CODE_POINT && index <= $Character::MAX_CODE_POINT)) {
		$throwNew($AssertionError, $of($$str({"Invalid code point:"_s, $($Integer::toHexString(index))})));
	}
	int32_t i = 0;
	int32_t j = $nc(this->dataTable)->length - 1;
	int32_t k = 0;
	for (;;) {
		k = (i + j) / 2;
		int32_t start = $nc(this->dataTable)->get(k) >> 8;
		int32_t end = $nc(this->dataTable)->get(k + 1) >> 8;
		if (index < start) {
			j = k;
		} else if (index > (end - 1)) {
			i = k;
		} else {
			int32_t v = (int32_t)($nc(this->dataTable)->get(k) & (uint32_t)255);
			return (v == 255) ? (int32_t)SupplementaryCharacterData::IGNORE : v;
		}
	}
}

$ints* SupplementaryCharacterData::getArray() {
	return this->dataTable;
}

void clinit$SupplementaryCharacterData($Class* class$) {
	SupplementaryCharacterData::$assertionsDisabled = !SupplementaryCharacterData::class$->desiredAssertionStatus();
}

SupplementaryCharacterData::SupplementaryCharacterData() {
}

$Class* SupplementaryCharacterData::load$($String* name, bool initialize) {
	$loadClass(SupplementaryCharacterData, name, initialize, &_SupplementaryCharacterData_ClassInfo_, clinit$SupplementaryCharacterData, allocate$SupplementaryCharacterData);
	return class$;
}

$Class* SupplementaryCharacterData::class$ = nullptr;

	} // text
} // sun