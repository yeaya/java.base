#include <GetPackage.h>
#include <TestClassLoader.h>
#include <java/lang/Package.h>
#include <jcpp.h>

using $TestClassLoader = ::TestClassLoader;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

void GetPackage::init$() {
}

void GetPackage::main($StringArray* arg) {
	$useLocalObjectStack();
	$var($TestClassLoader, parent, $new($TestClassLoader));
	$var($TestClassLoader, child, $new($TestClassLoader, parent));
	child->defineEmptyPackage("foo"_s);
	parent->defineEmptyPackage("foo"_s);
	if (!child->testPackageView("foo"_s)) {
		$throwNew($Exception, "Inconsistent packages view"_s);
	}
}

GetPackage::GetPackage() {
}

$Class* GetPackage::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(GetPackage, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(GetPackage, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"GetPackage",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(GetPackage, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetPackage);
	});
	return class$;
}

$Class* GetPackage::class$ = nullptr;