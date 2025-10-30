#include <p/Baz.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace p {

$MethodInfo _Baz_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Baz::*)()>(&Baz::init$))},
	{}
};

$ClassInfo _Baz_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"p.Baz",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Baz_MethodInfo_
};

$Object* allocate$Baz($Class* clazz) {
	return $of($alloc(Baz));
}

void Baz::init$() {
}

Baz::Baz() {
}

$Class* Baz::load$($String* name, bool initialize) {
	$loadClass(Baz, name, initialize, &_Baz_ClassInfo_, allocate$Baz);
	return class$;
}

$Class* Baz::class$ = nullptr;

} // p