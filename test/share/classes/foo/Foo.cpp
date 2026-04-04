#include <foo/Foo.h>
#include <java/lang/Package.h>
#include <jcpp.h>

using $PackageArray = $Array<::java::lang::Package>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Package = ::java::lang::Package;

namespace foo {

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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Foo, init$, void)},
		{"getPackages", "()[Ljava/lang/Package;", nullptr, $PUBLIC | $STATIC, $staticMethod(Foo, getPackages, $PackageArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"foo.Foo",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Foo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Foo);
	});
	return class$;
}

$Class* Foo::class$ = nullptr;

} // foo