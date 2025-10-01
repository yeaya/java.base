#include <java/fake/Fake.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace fake {

$MethodInfo _Fake_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Fake::*)()>(&Fake::init$))},
	{"run", "()V", nullptr, $PUBLIC},
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