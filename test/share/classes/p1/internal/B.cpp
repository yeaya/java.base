#include <p1/internal/B.h>

#include <jcpp.h>

#undef B

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace p1 {
	namespace internal {

$MethodInfo _B_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(B::*)()>(&B::init$))},
	{}
};

$ClassInfo _B_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"p1.internal.B",
	"java.lang.Object",
	nullptr,
	nullptr,
	_B_MethodInfo_
};

$Object* allocate$B($Class* clazz) {
	return $of($alloc(B));
}

void B::init$() {
}

B::B() {
}

$Class* B::load$($String* name, bool initialize) {
	$loadClass(B, name, initialize, &_B_ClassInfo_, allocate$B);
	return class$;
}

$Class* B::class$ = nullptr;

	} // internal
} // p1