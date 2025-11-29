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

$FieldInfo _UCharacterProperty$1_FieldInfo_[] = {
	{"this$0", "Ljdk/internal/icu/impl/UCharacterProperty;", nullptr, $FINAL | $SYNTHETIC, $field(UCharacterProperty$1, this$0)},
	{}
};

$MethodInfo _UCharacterProperty$1_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/icu/impl/UCharacterProperty;)V", nullptr, 0, $method(static_cast<void(UCharacterProperty$1::*)($UCharacterProperty*)>(&UCharacterProperty$1::init$))},
	{"getValue", "(I)I", nullptr, 0},
	{}
};

$EnclosingMethodInfo _UCharacterProperty$1_EnclosingMethodInfo_ = {
	"jdk.internal.icu.impl.UCharacterProperty",
	nullptr,
	nullptr
};

$InnerClassInfo _UCharacterProperty$1_InnerClassesInfo_[] = {
	{"jdk.internal.icu.impl.UCharacterProperty$1", nullptr, nullptr, 0},
	{"jdk.internal.icu.impl.UCharacterProperty$BiDiIntProperty", "jdk.internal.icu.impl.UCharacterProperty", "BiDiIntProperty", $PRIVATE},
	{}
};

$ClassInfo _UCharacterProperty$1_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.icu.impl.UCharacterProperty$1",
	"jdk.internal.icu.impl.UCharacterProperty$BiDiIntProperty",
	nullptr,
	_UCharacterProperty$1_FieldInfo_,
	_UCharacterProperty$1_MethodInfo_,
	nullptr,
	&_UCharacterProperty$1_EnclosingMethodInfo_,
	_UCharacterProperty$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.impl.UCharacterProperty"
};

$Object* allocate$UCharacterProperty$1($Class* clazz) {
	return $of($alloc(UCharacterProperty$1));
}

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
	$loadClass(UCharacterProperty$1, name, initialize, &_UCharacterProperty$1_ClassInfo_, allocate$UCharacterProperty$1);
	return class$;
}

$Class* UCharacterProperty$1::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk