#include <jdk/internal/icu/impl/ICUBinary$Authenticate.h>

#include <jdk/internal/icu/impl/ICUBinary.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

$MethodInfo _ICUBinary$Authenticate_MethodInfo_[] = {
	{"isDataVersionAcceptable", "([B)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _ICUBinary$Authenticate_InnerClassesInfo_[] = {
	{"jdk.internal.icu.impl.ICUBinary$Authenticate", "jdk.internal.icu.impl.ICUBinary", "Authenticate", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ICUBinary$Authenticate_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.icu.impl.ICUBinary$Authenticate",
	nullptr,
	nullptr,
	nullptr,
	_ICUBinary$Authenticate_MethodInfo_,
	nullptr,
	nullptr,
	_ICUBinary$Authenticate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.impl.ICUBinary"
};

$Object* allocate$ICUBinary$Authenticate($Class* clazz) {
	return $of($alloc(ICUBinary$Authenticate));
}

$Class* ICUBinary$Authenticate::load$($String* name, bool initialize) {
	$loadClass(ICUBinary$Authenticate, name, initialize, &_ICUBinary$Authenticate_ClassInfo_, allocate$ICUBinary$Authenticate);
	return class$;
}

$Class* ICUBinary$Authenticate::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk