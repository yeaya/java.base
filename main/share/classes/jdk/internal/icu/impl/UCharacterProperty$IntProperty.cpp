#include <jdk/internal/icu/impl/UCharacterProperty$IntProperty.h>
#include <jdk/internal/icu/impl/UCharacterProperty.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UCharacterProperty = ::jdk::internal::icu::impl::UCharacterProperty;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

void UCharacterProperty$IntProperty::init$($UCharacterProperty* this$0, int32_t column, int32_t mask, int32_t shift) {
	$set(this, this$0, this$0);
	this->column = column;
	this->mask = mask;
	this->shift = shift;
}

void UCharacterProperty$IntProperty::init$($UCharacterProperty* this$0, int32_t source) {
	$set(this, this$0, this$0);
	this->column = source;
	this->mask = 0;
}

int32_t UCharacterProperty$IntProperty::getValue(int32_t c) {
	return $usr(this->this$0->getAdditional(c, this->column) & this->mask, this->shift);
}

UCharacterProperty$IntProperty::UCharacterProperty$IntProperty() {
}

$Class* UCharacterProperty$IntProperty::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/icu/impl/UCharacterProperty;", nullptr, $FINAL | $SYNTHETIC, $field(UCharacterProperty$IntProperty, this$0)},
		{"column", "I", nullptr, 0, $field(UCharacterProperty$IntProperty, column)},
		{"mask", "I", nullptr, 0, $field(UCharacterProperty$IntProperty, mask)},
		{"shift", "I", nullptr, 0, $field(UCharacterProperty$IntProperty, shift)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/icu/impl/UCharacterProperty;III)V", nullptr, 0, $method(UCharacterProperty$IntProperty, init$, void, $UCharacterProperty*, int32_t, int32_t, int32_t)},
		{"<init>", "(Ljdk/internal/icu/impl/UCharacterProperty;I)V", nullptr, 0, $method(UCharacterProperty$IntProperty, init$, void, $UCharacterProperty*, int32_t)},
		{"getValue", "(I)I", nullptr, 0, $virtualMethod(UCharacterProperty$IntProperty, getValue, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.impl.UCharacterProperty$IntProperty", "jdk.internal.icu.impl.UCharacterProperty", "IntProperty", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.icu.impl.UCharacterProperty$IntProperty",
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
		"jdk.internal.icu.impl.UCharacterProperty"
	};
	$loadClass(UCharacterProperty$IntProperty, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UCharacterProperty$IntProperty);
	});
	return class$;
}

$Class* UCharacterProperty$IntProperty::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk