#include <jdk/internal/icu/impl/UCharacterProperty$CombiningClassIntProperty.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _UCharacterProperty$CombiningClassIntProperty_FieldInfo_[] = {
	{"this$0", "Ljdk/internal/icu/impl/UCharacterProperty;", nullptr, $FINAL | $SYNTHETIC, $field(UCharacterProperty$CombiningClassIntProperty, this$0)},
	{}
};

$MethodInfo _UCharacterProperty$CombiningClassIntProperty_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/icu/impl/UCharacterProperty;I)V", nullptr, 0, $method(static_cast<void(UCharacterProperty$CombiningClassIntProperty::*)($UCharacterProperty*,int32_t)>(&UCharacterProperty$CombiningClassIntProperty::init$))},
	{}
};

$InnerClassInfo _UCharacterProperty$CombiningClassIntProperty_InnerClassesInfo_[] = {
	{"jdk.internal.icu.impl.UCharacterProperty$CombiningClassIntProperty", "jdk.internal.icu.impl.UCharacterProperty", "CombiningClassIntProperty", $PRIVATE},
	{"jdk.internal.icu.impl.UCharacterProperty$IntProperty", "jdk.internal.icu.impl.UCharacterProperty", "IntProperty", $PRIVATE},
	{}
};

$ClassInfo _UCharacterProperty$CombiningClassIntProperty_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.icu.impl.UCharacterProperty$CombiningClassIntProperty",
	"jdk.internal.icu.impl.UCharacterProperty$IntProperty",
	nullptr,
	_UCharacterProperty$CombiningClassIntProperty_FieldInfo_,
	_UCharacterProperty$CombiningClassIntProperty_MethodInfo_,
	nullptr,
	nullptr,
	_UCharacterProperty$CombiningClassIntProperty_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.impl.UCharacterProperty"
};

$Object* allocate$UCharacterProperty$CombiningClassIntProperty($Class* clazz) {
	return $of($alloc(UCharacterProperty$CombiningClassIntProperty));
}

void UCharacterProperty$CombiningClassIntProperty::init$($UCharacterProperty* this$0, int32_t source) {
	$set(this, this$0, this$0);
	$UCharacterProperty$IntProperty::init$(this$0, source);
}

UCharacterProperty$CombiningClassIntProperty::UCharacterProperty$CombiningClassIntProperty() {
}

$Class* UCharacterProperty$CombiningClassIntProperty::load$($String* name, bool initialize) {
	$loadClass(UCharacterProperty$CombiningClassIntProperty, name, initialize, &_UCharacterProperty$CombiningClassIntProperty_ClassInfo_, allocate$UCharacterProperty$CombiningClassIntProperty);
	return class$;
}

$Class* UCharacterProperty$CombiningClassIntProperty::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk