#include <foo/Foo.h>

#include <java/lang/Package.h>
#include <jcpp.h>

using $PackageArray = $Array<::java::lang::Package>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Package = ::java::lang::Package;

namespace foo {

$MethodInfo _Foo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Foo, init$, void)},
	{"getPackages", "()[Ljava/lang/Package;", nullptr, $PUBLIC | $STATIC, $staticMethod(Foo, getPackages, $PackageArray*)},
	{}
};

$ClassInfo _Foo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"foo.Foo",
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

$PackageArray* Foo::getPackages() {
	$load(Foo);
	$beforeCallerSensitive();
	return $Package::getPackages();
}

Foo::Foo() {
}

$Class* Foo::load$($String* name, bool initialize) {
	$loadClass(Foo, name, initialize, &_Foo_ClassInfo_, allocate$Foo);
	return class$;
}

$Class* Foo::class$ = nullptr;

} // foo