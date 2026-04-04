#include <jdk/internal/icu/impl/UCharacterProperty$NormQuickCheckIntProperty.h>
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

void UCharacterProperty$NormQuickCheckIntProperty::init$($UCharacterProperty* this$0, int32_t source, int32_t which, int32_t max) {
	$set(this, this$0, this$0);
	$UCharacterProperty$IntProperty::init$(this$0, source);
	this->which = which;
	this->max = max;
}

UCharacterProperty$NormQuickCheckIntProperty::UCharacterProperty$NormQuickCheckIntProperty() {
}

$Class* UCharacterProperty$NormQuickCheckIntProperty::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/icu/impl/UCharacterProperty;", nullptr, $FINAL | $SYNTHETIC, $field(UCharacterProperty$NormQuickCheckIntProperty, this$0)},
		{"which", "I", nullptr, 0, $field(UCharacterProperty$NormQuickCheckIntProperty, which)},
		{"max", "I", nullptr, 0, $field(UCharacterProperty$NormQuickCheckIntProperty, max)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/icu/impl/UCharacterProperty;III)V", nullptr, 0, $method(UCharacterProperty$NormQuickCheckIntProperty, init$, void, $UCharacterProperty*, int32_t, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.impl.UCharacterProperty$NormQuickCheckIntProperty", "jdk.internal.icu.impl.UCharacterProperty", "NormQuickCheckIntProperty", $PRIVATE},
		{"jdk.internal.icu.impl.UCharacterProperty$IntProperty", "jdk.internal.icu.impl.UCharacterProperty", "IntProperty", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.icu.impl.UCharacterProperty$NormQuickCheckIntProperty",
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
	$loadClass(UCharacterProperty$NormQuickCheckIntProperty, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UCharacterProperty$NormQuickCheckIntProperty);
	});
	return class$;
}

$Class* UCharacterProperty$NormQuickCheckIntProperty::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk