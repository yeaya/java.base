#include <jdk/internal/icu/impl/ICUBinary$IsAcceptable.h>

#include <jdk/internal/icu/impl/ICUBinary.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

$MethodInfo _ICUBinary$IsAcceptable_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(ICUBinary$IsAcceptable, init$, void)},
	{"isDataVersionAcceptable", "([B)Z", nullptr, $PUBLIC, $virtualMethod(ICUBinary$IsAcceptable, isDataVersionAcceptable, bool, $bytes*)},
	{}
};

$InnerClassInfo _ICUBinary$IsAcceptable_InnerClassesInfo_[] = {
	{"jdk.internal.icu.impl.ICUBinary$IsAcceptable", "jdk.internal.icu.impl.ICUBinary", "IsAcceptable", $PRIVATE | $STATIC | $FINAL},
	{"jdk.internal.icu.impl.ICUBinary$Authenticate", "jdk.internal.icu.impl.ICUBinary", "Authenticate", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ICUBinary$IsAcceptable_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.icu.impl.ICUBinary$IsAcceptable",
	"java.lang.Object",
	"jdk.internal.icu.impl.ICUBinary$Authenticate",
	nullptr,
	_ICUBinary$IsAcceptable_MethodInfo_,
	nullptr,
	nullptr,
	_ICUBinary$IsAcceptable_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.impl.ICUBinary"
};

$Object* allocate$ICUBinary$IsAcceptable($Class* clazz) {
	return $of($alloc(ICUBinary$IsAcceptable));
}

void ICUBinary$IsAcceptable::init$() {
}

bool ICUBinary$IsAcceptable::isDataVersionAcceptable($bytes* version) {
	return $nc(version)->get(0) == 1;
}

ICUBinary$IsAcceptable::ICUBinary$IsAcceptable() {
}

$Class* ICUBinary$IsAcceptable::load$($String* name, bool initialize) {
	$loadClass(ICUBinary$IsAcceptable, name, initialize, &_ICUBinary$IsAcceptable_ClassInfo_, allocate$ICUBinary$IsAcceptable);
	return class$;
}

$Class* ICUBinary$IsAcceptable::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk