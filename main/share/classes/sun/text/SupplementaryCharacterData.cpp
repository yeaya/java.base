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

bool SupplementaryCharacterData::$assertionsDisabled = false;

void SupplementaryCharacterData::init$($ints* table) {
	$set(this, dataTable, table);
}

int32_t SupplementaryCharacterData::getValue(int32_t index) {
	$useLocalObjectStack();
	if (!SupplementaryCharacterData::$assertionsDisabled && !(index >= $Character::MIN_SUPPLEMENTARY_CODE_POINT && index <= $Character::MAX_CODE_POINT)) {
		$throwNew($AssertionError, $$of($str({"Invalid code point:"_s, $($Integer::toHexString(index))})));
	}
	int32_t i = 0;
	int32_t j = $nc(this->dataTable)->length - 1;
	int32_t k = 0;
	for (;;) {
		k = (i + j) / 2;
		int32_t start = this->dataTable->get(k) >> 8;
		int32_t end = this->dataTable->get(k + 1) >> 8;
		if (index < start) {
			j = k;
		} else if (index > (end - 1)) {
			i = k;
		} else {
			int32_t v = this->dataTable->get(k) & 0xff;
			return (v == 255) ? SupplementaryCharacterData::IGNORE : v;
		}
	}
}

$ints* SupplementaryCharacterData::getArray() {
	return this->dataTable;
}

void SupplementaryCharacterData::clinit$($Class* clazz) {
	SupplementaryCharacterData::$assertionsDisabled = !SupplementaryCharacterData::class$->desiredAssertionStatus();
}

SupplementaryCharacterData::SupplementaryCharacterData() {
}

$Class* SupplementaryCharacterData::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SupplementaryCharacterData, $assertionsDisabled)},
		{"IGNORE", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SupplementaryCharacterData, IGNORE)},
		{"dataTable", "[I", nullptr, $PRIVATE, $field(SupplementaryCharacterData, dataTable)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([I)V", nullptr, $PUBLIC, $method(SupplementaryCharacterData, init$, void, $ints*)},
		{"getArray", "()[I", nullptr, $PUBLIC, $method(SupplementaryCharacterData, getArray, $ints*)},
		{"getValue", "(I)I", nullptr, $PUBLIC, $method(SupplementaryCharacterData, getValue, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.text.SupplementaryCharacterData",
		"java.lang.Object",
		"java.lang.Cloneable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SupplementaryCharacterData, name, initialize, &classInfo$$, SupplementaryCharacterData::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SupplementaryCharacterData);
	});
	return class$;
}

$Class* SupplementaryCharacterData::class$ = nullptr;

	} // text
} // sun