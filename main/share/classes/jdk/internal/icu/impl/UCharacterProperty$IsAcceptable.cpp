#include <jdk/internal/icu/impl/UCharacterProperty$IsAcceptable.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/icu/impl/UCharacterProperty.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ICUBinary$Authenticate = ::jdk::internal::icu::impl::ICUBinary$Authenticate;
using $UCharacterProperty = ::jdk::internal::icu::impl::UCharacterProperty;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

$MethodInfo _UCharacterProperty$IsAcceptable_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(UCharacterProperty$IsAcceptable::*)()>(&UCharacterProperty$IsAcceptable::init$))},
	{"isDataVersionAcceptable", "([B)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _UCharacterProperty$IsAcceptable_InnerClassesInfo_[] = {
	{"jdk.internal.icu.impl.UCharacterProperty$IsAcceptable", "jdk.internal.icu.impl.UCharacterProperty", "IsAcceptable", $PRIVATE | $STATIC | $FINAL},
	{"jdk.internal.icu.impl.ICUBinary$Authenticate", "jdk.internal.icu.impl.ICUBinary", "Authenticate", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _UCharacterProperty$IsAcceptable_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.icu.impl.UCharacterProperty$IsAcceptable",
	"java.lang.Object",
	"jdk.internal.icu.impl.ICUBinary$Authenticate",
	nullptr,
	_UCharacterProperty$IsAcceptable_MethodInfo_,
	nullptr,
	nullptr,
	_UCharacterProperty$IsAcceptable_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.impl.UCharacterProperty"
};

$Object* allocate$UCharacterProperty$IsAcceptable($Class* clazz) {
	return $of($alloc(UCharacterProperty$IsAcceptable));
}

void UCharacterProperty$IsAcceptable::init$() {
}

bool UCharacterProperty$IsAcceptable::isDataVersionAcceptable($bytes* version) {
	return $nc(version)->get(0) == 7;
}

UCharacterProperty$IsAcceptable::UCharacterProperty$IsAcceptable() {
}

$Class* UCharacterProperty$IsAcceptable::load$($String* name, bool initialize) {
	$loadClass(UCharacterProperty$IsAcceptable, name, initialize, &_UCharacterProperty$IsAcceptable_ClassInfo_, allocate$UCharacterProperty$IsAcceptable);
	return class$;
}

$Class* UCharacterProperty$IsAcceptable::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk