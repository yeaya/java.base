#include <testPkg/Singleton.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace testPkg {

$MethodInfo _Singleton_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Singleton, init$, void)},
	{}
};

$ClassInfo _Singleton_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"testPkg.Singleton",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Singleton_MethodInfo_
};

$Object* allocate$Singleton($Class* clazz) {
	return $of($alloc(Singleton));
}

void Singleton::init$() {
}

Singleton::Singleton() {
}

$Class* Singleton::load$($String* name, bool initialize) {
	$loadClass(Singleton, name, initialize, &_Singleton_ClassInfo_, allocate$Singleton);
	return class$;
}

$Class* Singleton::class$ = nullptr;

} // testPkg