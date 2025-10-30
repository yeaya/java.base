#include <jdk/internal/icu/lang/UCharacter$NumericType.h>

#include <jdk/internal/icu/lang/UCharacter.h>
#include <jcpp.h>

#undef COUNT
#undef DECIMAL
#undef DIGIT
#undef NONE
#undef NUMERIC

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $UCharacter = ::jdk::internal::icu::lang::UCharacter;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace lang {

$FieldInfo _UCharacter$NumericType_FieldInfo_[] = {
	{"NONE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacter$NumericType, NONE)},
	{"DECIMAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacter$NumericType, DECIMAL)},
	{"DIGIT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacter$NumericType, DIGIT)},
	{"NUMERIC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacter$NumericType, NUMERIC)},
	{"COUNT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacter$NumericType, COUNT)},
	{}
};

$InnerClassInfo _UCharacter$NumericType_InnerClassesInfo_[] = {
	{"jdk.internal.icu.lang.UCharacter$NumericType", "jdk.internal.icu.lang.UCharacter", "NumericType", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _UCharacter$NumericType_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.icu.lang.UCharacter$NumericType",
	nullptr,
	nullptr,
	_UCharacter$NumericType_FieldInfo_,
	nullptr,
	nullptr,
	nullptr,
	_UCharacter$NumericType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.lang.UCharacter"
};

$Object* allocate$UCharacter$NumericType($Class* clazz) {
	return $of($alloc(UCharacter$NumericType));
}

$Class* UCharacter$NumericType::load$($String* name, bool initialize) {
	$loadClass(UCharacter$NumericType, name, initialize, &_UCharacter$NumericType_ClassInfo_, allocate$UCharacter$NumericType);
	return class$;
}

$Class* UCharacter$NumericType::class$ = nullptr;

			} // lang
		} // icu
	} // internal
} // jdk