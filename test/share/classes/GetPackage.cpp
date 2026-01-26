#include <GetPackage.h>

#include <TestClassLoader.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Package.h>
#include <jcpp.h>

using $TestClassLoader = ::TestClassLoader;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _GetPackage_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(GetPackage, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(GetPackage, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _GetPackage_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"GetPackage",
	"java.lang.Object",
	nullptr,
	nullptr,
	_GetPackage_MethodInfo_
};

$Object* allocate$GetPackage($Class* clazz) {
	return $of($alloc(GetPackage));
}

void GetPackage::init$() {
}

void GetPackage::main($StringArray* arg) {
	$useLocalCurrentObjectStackCache();
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
	$loadClass(GetPackage, name, initialize, &_GetPackage_ClassInfo_, allocate$GetPackage);
	return class$;
}

$Class* GetPackage::class$ = nullptr;