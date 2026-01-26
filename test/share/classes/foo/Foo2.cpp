#include <foo/Foo2.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace foo {

$MethodInfo _Foo2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Foo2, init$, void)},
	{}
};

$ClassInfo _Foo2_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"foo.Foo2",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Foo2_MethodInfo_
};

$Object* allocate$Foo2($Class* clazz) {
	return $of($alloc(Foo2));
}

void Foo2::init$() {
}

Foo2::Foo2() {
}

$Class* Foo2::load$($String* name, bool initialize) {
	$loadClass(Foo2, name, initialize, &_Foo2_ClassInfo_, allocate$Foo2);
	return class$;
}

$Class* Foo2::class$ = nullptr;

} // foo