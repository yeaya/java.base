#include <jdk/internal/icu/impl/UCharacterProperty$1.h>
#include <jdk/internal/icu/impl/UBiDiProps.h>
#include <jdk/internal/icu/impl/UCharacterProperty$BiDiIntProperty.h>
#include <jdk/internal/icu/impl/UCharacterProperty$IntProperty.h>
#include <jdk/internal/icu/impl/UCharacterProperty.h>
#include <jcpp.h>

#undef INSTANCE

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UBiDiProps = ::jdk::internal::icu::impl::UBiDiProps;
using $UCharacterProperty = ::jdk::internal::icu::impl::UCharacterProperty;
using $UCharacterProperty$BiDiIntProperty = ::jdk::internal::icu::impl::UCharacterProperty$BiDiIntProperty;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

void UCharacterProperty$1::init$($UCharacterProperty* this$0) {
	$set(this, this$0, this$0);
	$UCharacterProperty$BiDiIntProperty::init$(this$0);
}

int32_t UCharacterProperty$1::getValue(int32_t c) {
	$init($UBiDiProps);
	return $nc($UBiDiProps::INSTANCE)->getPairedBracketType(c);
}

UCharacterProperty$1::UCharacterProperty$1() {
}

$Class* UCharacterProperty$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/icu/impl/UCharacterProperty;", nullptr, $FINAL | $SYNTHETIC, $field(UCharacterProperty$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/icu/impl/UCharacterProperty;)V", nullptr, 0, $method(UCharacterProperty$1, init$, void, $UCharacterProperty*)},
		{"getValue", "(I)I", nullptr, 0, $virtualMethod(UCharacterProperty$1, getValue, int32_t, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.icu.impl.UCharacterProperty",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.impl.UCharacterProperty$1", nullptr, nullptr, 0},
		{"jdk.internal.icu.impl.UCharacterProperty$BiDiIntProperty", "jdk.internal.icu.impl.UCharacterProperty", "BiDiIntProperty", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.icu.impl.UCharacterProperty$1",
		"jdk.internal.icu.impl.UCharacterProperty$BiDiIntProperty",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.icu.impl.UCharacterProperty"
	};
	$loadClass(UCharacterProperty$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UCharacterProperty$1);
	});
	return class$;
}

$Class* UCharacterProperty$1::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk