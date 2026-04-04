#include <PackageMain.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Deprecated.h>
#include <java/lang/Error.h>
#include <java/lang/Package.h>
#include <java/lang/annotation/Annotation.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Deprecated = ::java::lang::Deprecated;
using $Error = ::java::lang::Error;
using $MethodInfo = ::java::lang::MethodInfo;
using $Package = ::java::lang::Package;

void PackageMain::init$() {
}

void PackageMain::main($StringArray* args) {
	$useLocalObjectStack();
	$load(PackageMain);
	$beforeCallerSensitive();
	$Class* c = $Class::forName("foo.bar.Baz"_s);
	$nc($System::out)->println($$str({"c="_s, c}));
	$System::out->println($$str({"cl="_s, $(c->getClassLoader())}));
	$var($Package, p, c->getPackage());
	$System::out->println($$str({"p="_s, p}));
	$load($Deprecated);
	$var($Deprecated, d, $cast($Deprecated, $nc(p)->getAnnotation($Deprecated::class$)));
	if (d == nullptr) {
		$throwNew($Error);
	}
}

PackageMain::PackageMain() {
}

$Class* PackageMain::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PackageMain, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(PackageMain, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"PackageMain",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(PackageMain, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PackageMain);
	});
	return class$;
}

$Class* PackageMain::class$ = nullptr;