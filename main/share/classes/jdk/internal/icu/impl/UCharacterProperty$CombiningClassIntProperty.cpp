#include <jdk/internal/icu/impl/UCharacterProperty$CombiningClassIntProperty.h>
#include <jdk/internal/icu/impl/UCharacterProperty$IntProperty.h>
#include <jdk/internal/icu/impl/UCharacterProperty.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UCharacterProperty = ::jdk::internal::icu::impl::UCharacterProperty;
using $UCharacterProperty$IntProperty = ::jdk::internal::icu::impl::UCharacterProperty$IntProperty;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

void UCharacterProperty$CombiningClassIntProperty::init$($UCharacterProperty* this$0, int32_t source) {
	$set(this, this$0, this$0);
	$UCharacterProperty$IntProperty::init$(this$0, source);
}

UCharacterProperty$CombiningClassIntProperty::UCharacterProperty$CombiningClassIntProperty() {
}

$Class* UCharacterProperty$CombiningClassIntProperty::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/icu/impl/UCharacterProperty;", nullptr, $FINAL | $SYNTHETIC, $field(UCharacterProperty$CombiningClassIntProperty, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/icu/impl/UCharacterProperty;I)V", nullptr, 0, $method(UCharacterProperty$CombiningClassIntProperty, init$, void, $UCharacterProperty*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.impl.UCharacterProperty$CombiningClassIntProperty", "jdk.internal.icu.impl.UCharacterProperty", "CombiningClassIntProperty", $PRIVATE},
		{"jdk.internal.icu.impl.UCharacterProperty$IntProperty", "jdk.internal.icu.impl.UCharacterProperty", "IntProperty", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.icu.impl.UCharacterProperty$CombiningClassIntProperty",
		"jdk.internal.icu.impl.UCharacterProperty$IntProperty",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.icu.impl.UCharacterProperty"
	};
	$loadClass(UCharacterProperty$CombiningClassIntProperty, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UCharacterProperty$CombiningClassIntProperty);
	});
	return class$;
}

$Class* UCharacterProperty$CombiningClassIntProperty::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk