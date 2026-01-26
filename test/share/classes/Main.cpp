#include <Main.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Main_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Main, init$, void)},
	{}
};

$ClassInfo _Main_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Main",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Main_MethodInfo_
};

$Object* allocate$Main($Class* clazz) {
	return $of($alloc(Main));
}

void Main::init$() {
}

Main::Main() {
}

$Class* Main::load$($String* name, bool initialize) {
	$loadClass(Main, name, initialize, &_Main_ClassInfo_, allocate$Main);
	return class$;
}

$Class* Main::class$ = nullptr;