#include <foo/bar/Baz.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace foo {
	namespace bar {

$MethodInfo _Baz_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Baz, init$, void)},
	{}
};

$ClassInfo _Baz_ClassInfo_ = {
	$ACC_SUPER,
	"foo.bar.Baz",
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

	} // bar
} // foo