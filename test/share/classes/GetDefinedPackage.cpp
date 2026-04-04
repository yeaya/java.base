#include <GetDefinedPackage.h>
#include <GetDefinedPackage$TestClassLoader.h>
#include <java/lang/Package.h>
#include <jcpp.h>

#undef PKG_NAME

using $GetDefinedPackage$TestClassLoader = ::GetDefinedPackage$TestClassLoader;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Package = ::java::lang::Package;
using $RuntimeException = ::java::lang::RuntimeException;

void GetDefinedPackage::init$() {
}

void GetDefinedPackage::main($StringArray* args) {
	$useLocalObjectStack();
	$var($GetDefinedPackage$TestClassLoader, loader, $new($GetDefinedPackage$TestClassLoader));
	$var($Package, pkg, loader->getDefinedPackage($GetDefinedPackage$TestClassLoader::PKG_NAME));
	if (pkg == nullptr) {
		$throwNew($RuntimeException, "package foo not found"_s);
	}
	try {
		loader->getDefinedPackage(nullptr);
		$throwNew($RuntimeException, "NullPointerException not thrown"_s);
	} catch ($NullPointerException& e) {
	}
}

GetDefinedPackage::GetDefinedPackage() {
}

$Class* GetDefinedPackage::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(GetDefinedPackage, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(GetDefinedPackage, main, void, $StringArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GetDefinedPackage$TestClassLoader", "GetDefinedPackage", "TestClassLoader", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"GetDefinedPackage",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"GetDefinedPackage$TestClassLoader"
	};
	$loadClass(GetDefinedPackage, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetDefinedPackage);
	});
	return class$;
}

$Class* GetDefinedPackage::class$ = nullptr;