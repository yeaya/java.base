#include <jdk/internal/icu/impl/NormalizerImpl$IsAcceptable.h>

#include <jdk/internal/icu/impl/NormalizerImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

$MethodInfo _NormalizerImpl$IsAcceptable_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(NormalizerImpl$IsAcceptable::*)()>(&NormalizerImpl$IsAcceptable::init$))},
	{"isDataVersionAcceptable", "([B)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _NormalizerImpl$IsAcceptable_InnerClassesInfo_[] = {
	{"jdk.internal.icu.impl.NormalizerImpl$IsAcceptable", "jdk.internal.icu.impl.NormalizerImpl", "IsAcceptable", $PRIVATE | $STATIC | $FINAL},
	{"jdk.internal.icu.impl.ICUBinary$Authenticate", "jdk.internal.icu.impl.ICUBinary", "Authenticate", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _NormalizerImpl$IsAcceptable_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.icu.impl.NormalizerImpl$IsAcceptable",
	"java.lang.Object",
	"jdk.internal.icu.impl.ICUBinary$Authenticate",
	nullptr,
	_NormalizerImpl$IsAcceptable_MethodInfo_,
	nullptr,
	nullptr,
	_NormalizerImpl$IsAcceptable_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.impl.NormalizerImpl"
};

$Object* allocate$NormalizerImpl$IsAcceptable($Class* clazz) {
	return $of($alloc(NormalizerImpl$IsAcceptable));
}

void NormalizerImpl$IsAcceptable::init$() {
}

bool NormalizerImpl$IsAcceptable::isDataVersionAcceptable($bytes* version) {
	return $nc(version)->get(0) == 4;
}

NormalizerImpl$IsAcceptable::NormalizerImpl$IsAcceptable() {
}

$Class* NormalizerImpl$IsAcceptable::load$($String* name, bool initialize) {
	$loadClass(NormalizerImpl$IsAcceptable, name, initialize, &_NormalizerImpl$IsAcceptable_ClassInfo_, allocate$NormalizerImpl$IsAcceptable);
	return class$;
}

$Class* NormalizerImpl$IsAcceptable::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk