#include <p/Foo.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace p {

$MethodInfo _Foo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Foo::*)()>(&Foo::init$))},
	{}
};

$ClassInfo _Foo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"p.Foo",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Foo_MethodInfo_
};

$Object* allocate$Foo($Class* clazz) {
	return $of($alloc(Foo));
}

void Foo::init$() {
}

Foo::Foo() {
}

$Class* Foo::load$($String* name, bool initialize) {
	$loadClass(Foo, name, initialize, &_Foo_ClassInfo_, allocate$Foo);
	return class$;
}

$Class* Foo::class$ = nullptr;

} // p