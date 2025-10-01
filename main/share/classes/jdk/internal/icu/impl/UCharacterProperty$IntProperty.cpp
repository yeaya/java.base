#include <jdk/internal/icu/impl/UCharacterProperty$IntProperty.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _UCharacterProperty$IntProperty_FieldInfo_[] = {
	{"this$0", "Ljdk/internal/icu/impl/UCharacterProperty;", nullptr, $FINAL | $SYNTHETIC, $field(UCharacterProperty$IntProperty, this$0)},
	{"column", "I", nullptr, 0, $field(UCharacterProperty$IntProperty, column)},
	{"mask", "I", nullptr, 0, $field(UCharacterProperty$IntProperty, mask)},
	{"shift", "I", nullptr, 0, $field(UCharacterProperty$IntProperty, shift)},
	{}
};

$MethodInfo _UCharacterProperty$IntProperty_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/icu/impl/UCharacterProperty;III)V", nullptr, 0, $method(static_cast<void(UCharacterProperty$IntProperty::*)($UCharacterProperty*,int32_t,int32_t,int32_t)>(&UCharacterProperty$IntProperty::init$))},
	{"<init>", "(Ljdk/internal/icu/impl/UCharacterProperty;I)V", nullptr, 0, $method(static_cast<void(UCharacterProperty$IntProperty::*)($UCharacterProperty*,int32_t)>(&UCharacterProperty$IntProperty::init$))},
	{"getValue", "(I)I", nullptr, 0},
	{}
};

$InnerClassInfo _UCharacterProperty$IntProperty_InnerClassesInfo_[] = {
	{"jdk.internal.icu.impl.UCharacterProperty$IntProperty", "jdk.internal.icu.impl.UCharacterProperty", "IntProperty", $PRIVATE},
	{}
};

$ClassInfo _UCharacterProperty$IntProperty_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.icu.impl.UCharacterProperty$IntProperty",
	"java.lang.Object",
	nullptr,
	_UCharacterProperty$IntProperty_FieldInfo_,
	_UCharacterProperty$IntProperty_MethodInfo_,
	nullptr,
	nullptr,
	_UCharacterProperty$IntProperty_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.impl.UCharacterProperty"
};

$Object* allocate$UCharacterProperty$IntProperty($Class* clazz) {
	return $of($alloc(UCharacterProperty$IntProperty));
}

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
	return $usr((int32_t)(this->this$0->getAdditional(c, this->column) & (uint32_t)this->mask), this->shift);
}

UCharacterProperty$IntProperty::UCharacterProperty$IntProperty() {
}

$Class* UCharacterProperty$IntProperty::load$($String* name, bool initialize) {
	$loadClass(UCharacterProperty$IntProperty, name, initialize, &_UCharacterProperty$IntProperty_ClassInfo_, allocate$UCharacterProperty$IntProperty);
	return class$;
}

$Class* UCharacterProperty$IntProperty::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk