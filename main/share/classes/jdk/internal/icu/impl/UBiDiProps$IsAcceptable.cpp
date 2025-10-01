#include <jdk/internal/icu/impl/UBiDiProps$IsAcceptable.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/icu/impl/UBiDiProps.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ICUBinary$Authenticate = ::jdk::internal::icu::impl::ICUBinary$Authenticate;
using $UBiDiProps = ::jdk::internal::icu::impl::UBiDiProps;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

$MethodInfo _UBiDiProps$IsAcceptable_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(UBiDiProps$IsAcceptable::*)()>(&UBiDiProps$IsAcceptable::init$))},
	{"isDataVersionAcceptable", "([B)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _UBiDiProps$IsAcceptable_InnerClassesInfo_[] = {
	{"jdk.internal.icu.impl.UBiDiProps$IsAcceptable", "jdk.internal.icu.impl.UBiDiProps", "IsAcceptable", $PRIVATE | $STATIC | $FINAL},
	{"jdk.internal.icu.impl.ICUBinary$Authenticate", "jdk.internal.icu.impl.ICUBinary", "Authenticate", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _UBiDiProps$IsAcceptable_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.icu.impl.UBiDiProps$IsAcceptable",
	"java.lang.Object",
	"jdk.internal.icu.impl.ICUBinary$Authenticate",
	nullptr,
	_UBiDiProps$IsAcceptable_MethodInfo_,
	nullptr,
	nullptr,
	_UBiDiProps$IsAcceptable_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.impl.UBiDiProps"
};

$Object* allocate$UBiDiProps$IsAcceptable($Class* clazz) {
	return $of($alloc(UBiDiProps$IsAcceptable));
}

void UBiDiProps$IsAcceptable::init$() {
}

bool UBiDiProps$IsAcceptable::isDataVersionAcceptable($bytes* version) {
	return $nc(version)->get(0) == 2;
}

UBiDiProps$IsAcceptable::UBiDiProps$IsAcceptable() {
}

$Class* UBiDiProps$IsAcceptable::load$($String* name, bool initialize) {
	$loadClass(UBiDiProps$IsAcceptable, name, initialize, &_UBiDiProps$IsAcceptable_ClassInfo_, allocate$UBiDiProps$IsAcceptable);
	return class$;
}

$Class* UBiDiProps$IsAcceptable::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk