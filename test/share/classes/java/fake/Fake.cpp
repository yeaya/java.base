#include <java/fake/Fake.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace fake {

$MethodInfo _Fake_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Fake, init$, void)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Fake, run, void)},
	{}
};

$ClassInfo _Fake_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.fake.Fake",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Fake_MethodInfo_
};

$Object* allocate$Fake($Class* clazz) {
	return $of($alloc(Fake));
}

void Fake::init$() {
}

void Fake::run() {
}

Fake::Fake() {
}

$Class* Fake::load$($String* name, bool initialize) {
	$loadClass(Fake, name, initialize, &_Fake_ClassInfo_, allocate$Fake);
	return class$;
}

$Class* Fake::class$ = nullptr;

	} // fake
} // java