#include <jdk/internal/icu/impl/UCharacterProperty$BiDiIntProperty.h>
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

void UCharacterProperty$BiDiIntProperty::init$($UCharacterProperty* this$0) {
	$set(this, this$0, this$0);
	$UCharacterProperty$IntProperty::init$(this$0, 5);
}

UCharacterProperty$BiDiIntProperty::UCharacterProperty$BiDiIntProperty() {
}

$Class* UCharacterProperty$BiDiIntProperty::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/icu/impl/UCharacterProperty;", nullptr, $FINAL | $SYNTHETIC, $field(UCharacterProperty$BiDiIntProperty, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/icu/impl/UCharacterProperty;)V", nullptr, 0, $method(UCharacterProperty$BiDiIntProperty, init$, void, $UCharacterProperty*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.impl.UCharacterProperty$BiDiIntProperty", "jdk.internal.icu.impl.UCharacterProperty", "BiDiIntProperty", $PRIVATE},
		{"jdk.internal.icu.impl.UCharacterProperty$IntProperty", "jdk.internal.icu.impl.UCharacterProperty", "IntProperty", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.icu.impl.UCharacterProperty$BiDiIntProperty",
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
	$loadClass(UCharacterProperty$BiDiIntProperty, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UCharacterProperty$BiDiIntProperty);
	});
	return class$;
}

$Class* UCharacterProperty$BiDiIntProperty::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk