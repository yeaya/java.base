#include <p/B.h>

#include <jcpp.h>

#undef B

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace p {

$MethodInfo _B_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(B, init$, void)},
	{"hello", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(B, hello, void)},
	{}
};

$ClassInfo _B_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"p.B",
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

void B::hello() {
	$nc($System::out)->println("B"_s);
}

B::B() {
}

$Class* B::load$($String* name, bool initialize) {
	$loadClass(B, name, initialize, &_B_ClassInfo_, allocate$B);
	return class$;
}

$Class* B::class$ = nullptr;

} // p