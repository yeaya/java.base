#include <TestClassLoader.h>

#include <java/lang/ClassLoader.h>
#include <java/lang/Package.h>
#include <java/net/URL.h>
#include <jcpp.h>

using $PackageArray = $Array<::java::lang::Package>;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $MethodInfo = ::java::lang::MethodInfo;
using $Package = ::java::lang::Package;
using $URL = ::java::net::URL;

$MethodInfo _TestClassLoader_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestClassLoader::*)()>(&TestClassLoader::init$))},
	{"<init>", "(Ljava/lang/ClassLoader;)V", nullptr, $PUBLIC, $method(static_cast<void(TestClassLoader::*)($ClassLoader*)>(&TestClassLoader::init$))},
	{"defineEmptyPackage", "(Ljava/lang/String;)Ljava/lang/Package;", nullptr, $PUBLIC},
	{"testPackageView", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TestClassLoader_ClassInfo_ = {
	$ACC_SUPER,
	"TestClassLoader",
	"java.lang.ClassLoader",
	nullptr,
	nullptr,
	_TestClassLoader_MethodInfo_
};

$Object* allocate$TestClassLoader($Class* clazz) {
	return $of($alloc(TestClassLoader));
}

void TestClassLoader::init$() {
	$ClassLoader::init$();
}

void TestClassLoader::init$($ClassLoader* parent) {
	$ClassLoader::init$(parent);
}

$Package* TestClassLoader::defineEmptyPackage($String* name) {
	return definePackage(name, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr);
}

bool TestClassLoader::testPackageView($String* name) {
	$useLocalCurrentObjectStackCache();
	$var($PackageArray, pkgs, getPackages());
	$var($Package, pkg, getPackage(name));
	for (int32_t i = 0; i < $nc(pkgs)->length; ++i) {
		if ($nc($($nc(pkgs->get(i))->getName()))->equals(name) && pkgs->get(i) == pkg) {
			return true;
		}
	}
	return false;
}

TestClassLoader::TestClassLoader() {
}

$Class* TestClassLoader::load$($String* name, bool initialize) {
	$loadClass(TestClassLoader, name, initialize, &_TestClassLoader_ClassInfo_, allocate$TestClassLoader);
	return class$;
}

$Class* TestClassLoader::class$ = nullptr;