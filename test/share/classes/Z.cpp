#include <Z.h>

#include <jcpp.h>

#undef Z

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Z_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Z, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Z, main, void, $StringArray*)},
	{}
};

$ClassInfo _Z_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Z",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Z_MethodInfo_
};

$Object* allocate$Z($Class* clazz) {
	return $of($alloc(Z));
}

void Z::init$() {
}

void Z::main($StringArray* argv) {
	$nc($System::out)->println("Hello world."_s);
}

Z::Z() {
}

$Class* Z::load$($String* name, bool initialize) {
	$loadClass(Z, name, initialize, &_Z_ClassInfo_, allocate$Z);
	return class$;
}

$Class* Z::class$ = nullptr;