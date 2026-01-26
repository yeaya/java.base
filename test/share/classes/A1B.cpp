#include <A1B.h>

#include <jcpp.h>

#undef A1B

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _A1B_MethodInfo_[] = {
	{"baz", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"foo", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"<init>", "()V", nullptr, 0, $method(A1B, init$, void)},
	{}
};

$ClassInfo _A1B_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"A1B",
	"java.lang.Object",
	"SonSuperIwithDefault",
	nullptr,
	_A1B_MethodInfo_
};

$Object* allocate$A1B($Class* clazz) {
	return $of($alloc(A1B));
}

void A1B::init$() {
}

A1B::A1B() {
}

$Class* A1B::load$($String* name, bool initialize) {
	$loadClass(A1B, name, initialize, &_A1B_ClassInfo_, allocate$A1B);
	return class$;
}

$Class* A1B::class$ = nullptr;