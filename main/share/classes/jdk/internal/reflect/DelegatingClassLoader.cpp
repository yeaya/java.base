#include <jdk/internal/reflect/DelegatingClassLoader.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace reflect {

$MethodInfo _DelegatingClassLoader_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/ClassLoader;)V", nullptr, 0, $method(static_cast<void(DelegatingClassLoader::*)($ClassLoader*)>(&DelegatingClassLoader::init$))},
	{}
};

$ClassInfo _DelegatingClassLoader_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.reflect.DelegatingClassLoader",
	"java.lang.ClassLoader",
	nullptr,
	nullptr,
	_DelegatingClassLoader_MethodInfo_
};

$Object* allocate$DelegatingClassLoader($Class* clazz) {
	return $of($alloc(DelegatingClassLoader));
}

void DelegatingClassLoader::init$($ClassLoader* parent) {
	$ClassLoader::init$(parent);
}

DelegatingClassLoader::DelegatingClassLoader() {
}

$Class* DelegatingClassLoader::load$($String* name, bool initialize) {
	$loadClass(DelegatingClassLoader, name, initialize, &_DelegatingClassLoader_ClassInfo_, allocate$DelegatingClassLoader);
	return class$;
}

$Class* DelegatingClassLoader::class$ = nullptr;

		} // reflect
	} // internal
} // jdk