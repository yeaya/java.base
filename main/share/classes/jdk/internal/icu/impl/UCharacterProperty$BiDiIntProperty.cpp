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

$FieldInfo _UCharacterProperty$BiDiIntProperty_FieldInfo_[] = {
	{"this$0", "Ljdk/internal/icu/impl/UCharacterProperty;", nullptr, $FINAL | $SYNTHETIC, $field(UCharacterProperty$BiDiIntProperty, this$0)},
	{}
};

$MethodInfo _UCharacterProperty$BiDiIntProperty_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/icu/impl/UCharacterProperty;)V", nullptr, 0, $method(UCharacterProperty$BiDiIntProperty, init$, void, $UCharacterProperty*)},
	{}
};

$InnerClassInfo _UCharacterProperty$BiDiIntProperty_InnerClassesInfo_[] = {
	{"jdk.internal.icu.impl.UCharacterProperty$BiDiIntProperty", "jdk.internal.icu.impl.UCharacterProperty", "BiDiIntProperty", $PRIVATE},
	{"jdk.internal.icu.impl.UCharacterProperty$IntProperty", "jdk.internal.icu.impl.UCharacterProperty", "IntProperty", $PRIVATE},
	{}
};

$ClassInfo _UCharacterProperty$BiDiIntProperty_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.icu.impl.UCharacterProperty$BiDiIntProperty",
	"jdk.internal.icu.impl.UCharacterProperty$IntProperty",
	nullptr,
	_UCharacterProperty$BiDiIntProperty_FieldInfo_,
	_UCharacterProperty$BiDiIntProperty_MethodInfo_,
	nullptr,
	nullptr,
	_UCharacterProperty$BiDiIntProperty_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.impl.UCharacterProperty"
};

$Object* allocate$UCharacterProperty$BiDiIntProperty($Class* clazz) {
	return $of($alloc(UCharacterProperty$BiDiIntProperty));
}

void UCharacterProperty$BiDiIntProperty::init$($UCharacterProperty* this$0) {
	$set(this, this$0, this$0);
	$UCharacterProperty$IntProperty::init$(this$0, 5);
}

UCharacterProperty$BiDiIntProperty::UCharacterProperty$BiDiIntProperty() {
}

$Class* UCharacterProperty$BiDiIntProperty::load$($String* name, bool initialize) {
	$loadClass(UCharacterProperty$BiDiIntProperty, name, initialize, &_UCharacterProperty$BiDiIntProperty_ClassInfo_, allocate$UCharacterProperty$BiDiIntProperty);
	return class$;
}

$Class* UCharacterProperty$BiDiIntProperty::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk