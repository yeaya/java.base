#include <p/A.h>

#include <jcpp.h>

#undef A

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace p {

$MethodInfo _A_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(A, init$, void)},
	{"hello", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(A, hello, void)},
	{}
};

$ClassInfo _A_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"p.A",
	"java.lang.Object",
	nullptr,
	nullptr,
	_A_MethodInfo_
};

$Object* allocate$A($Class* clazz) {
	return $of($alloc(A));
}

void A::init$() {
}

void A::hello() {
	$nc($System::out)->println("A"_s);
}

A::A() {
}

$Class* A::load$($String* name, bool initialize) {
	$loadClass(A, name, initialize, &_A_ClassInfo_, allocate$A);
	return class$;
}

$Class* A::class$ = nullptr;

} // p