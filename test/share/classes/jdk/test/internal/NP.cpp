#include <jdk/test/internal/NP.h>

#include <java/lang/UnsupportedOperationException.h>
#include <jcpp.h>

#undef NP

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;

namespace jdk {
	namespace test {
		namespace internal {

$MethodInfo _NP_MethodInfo_[] = {
	{"m", "()I", nullptr, $PUBLIC, $virtualMethod(NP, m, int32_t)},
	{}
};

$ClassInfo _NP_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"jdk.test.internal.NP",
	nullptr,
	nullptr,
	nullptr,
	_NP_MethodInfo_
};

$Object* allocate$NP($Class* clazz) {
	return $of($alloc(NP));
}

int32_t NP::m() {
	$useLocalCurrentObjectStackCache();
	$throwNew($UnsupportedOperationException, $$str({"non-public interface: "_s, $(NP::class$->getName())}));
	$shouldNotReachHere();
}

$Class* NP::load$($String* name, bool initialize) {
	$loadClass(NP, name, initialize, &_NP_ClassInfo_, allocate$NP);
	return class$;
}

$Class* NP::class$ = nullptr;

		} // internal
	} // test
} // jdk