#include <jdk/test/NP.h>

#include <jcpp.h>

#undef NP

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace test {

$MethodInfo _NP_MethodInfo_[] = {
	{"m", "()I", nullptr, $PUBLIC, $virtualMethod(NP, m, int32_t)},
	{"test", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NP, test, void)},
	{}
};

$ClassInfo _NP_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"jdk.test.NP",
	nullptr,
	nullptr,
	nullptr,
	_NP_MethodInfo_
};

$Object* allocate$NP($Class* clazz) {
	return $of($alloc(NP));
}

int32_t NP::m() {
	return 100;
}

$Class* NP::load$($String* name, bool initialize) {
	$loadClass(NP, name, initialize, &_NP_ClassInfo_, allocate$NP);
	return class$;
}

$Class* NP::class$ = nullptr;

	} // test
} // jdk