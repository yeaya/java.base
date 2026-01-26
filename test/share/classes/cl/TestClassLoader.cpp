#include <cl/TestClassLoader.h>

#include <java/lang/ClassLoader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $MethodInfo = ::java::lang::MethodInfo;

namespace cl {

$MethodInfo _TestClassLoader_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/ClassLoader;)V", nullptr, $PUBLIC, $method(TestClassLoader, init$, void, $ClassLoader*)},
	{}
};

$ClassInfo _TestClassLoader_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"cl.TestClassLoader",
	"java.lang.ClassLoader",
	nullptr,
	nullptr,
	_TestClassLoader_MethodInfo_
};

$Object* allocate$TestClassLoader($Class* clazz) {
	return $of($alloc(TestClassLoader));
}

void TestClassLoader::init$($ClassLoader* parent) {
	$ClassLoader::init$(parent);
}

TestClassLoader::TestClassLoader() {
}

$Class* TestClassLoader::load$($String* name, bool initialize) {
	$loadClass(TestClassLoader, name, initialize, &_TestClassLoader_ClassInfo_, allocate$TestClassLoader);
	return class$;
}

$Class* TestClassLoader::class$ = nullptr;

} // cl