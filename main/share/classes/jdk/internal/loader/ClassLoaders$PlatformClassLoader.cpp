#include <jdk/internal/loader/ClassLoaders$PlatformClassLoader.h>

#include <java/lang/ClassLoader.h>
#include <java/lang/InternalError.h>
#include <jdk/internal/loader/BuiltinClassLoader.h>
#include <jdk/internal/loader/ClassLoaders$BootClassLoader.h>
#include <jdk/internal/loader/ClassLoaders.h>
#include <jdk/internal/loader/URLClassPath.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $BuiltinClassLoader = ::jdk::internal::loader::BuiltinClassLoader;
using $ClassLoaders = ::jdk::internal::loader::ClassLoaders;
using $ClassLoaders$BootClassLoader = ::jdk::internal::loader::ClassLoaders$BootClassLoader;
using $URLClassPath = ::jdk::internal::loader::URLClassPath;

namespace jdk {
	namespace internal {
		namespace loader {

$MethodInfo _ClassLoaders$PlatformClassLoader_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/loader/ClassLoaders$BootClassLoader;)V", nullptr, 0, $method(static_cast<void(ClassLoaders$PlatformClassLoader::*)($ClassLoaders$BootClassLoader*)>(&ClassLoaders$PlatformClassLoader::init$))},
	{}
};

$InnerClassInfo _ClassLoaders$PlatformClassLoader_InnerClassesInfo_[] = {
	{"jdk.internal.loader.ClassLoaders$PlatformClassLoader", "jdk.internal.loader.ClassLoaders", "PlatformClassLoader", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ClassLoaders$PlatformClassLoader_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.loader.ClassLoaders$PlatformClassLoader",
	"jdk.internal.loader.BuiltinClassLoader",
	nullptr,
	nullptr,
	_ClassLoaders$PlatformClassLoader_MethodInfo_,
	nullptr,
	nullptr,
	_ClassLoaders$PlatformClassLoader_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.loader.ClassLoaders"
};

$Object* allocate$ClassLoaders$PlatformClassLoader($Class* clazz) {
	return $of($alloc(ClassLoaders$PlatformClassLoader));
}

void ClassLoaders$PlatformClassLoader::init$($ClassLoaders$BootClassLoader* parent) {
	$BuiltinClassLoader::init$("platform"_s, parent, nullptr);
}

void clinit$ClassLoaders$PlatformClassLoader($Class* class$) {
	$beforeCallerSensitive();
	{
		if (!$ClassLoader::registerAsParallelCapable()) {
			$throwNew($InternalError);
		}
	}
}

ClassLoaders$PlatformClassLoader::ClassLoaders$PlatformClassLoader() {
}

$Class* ClassLoaders$PlatformClassLoader::load$($String* name, bool initialize) {
	$loadClass(ClassLoaders$PlatformClassLoader, name, initialize, &_ClassLoaders$PlatformClassLoader_ClassInfo_, clinit$ClassLoaders$PlatformClassLoader, allocate$ClassLoaders$PlatformClassLoader);
	return class$;
}

$Class* ClassLoaders$PlatformClassLoader::class$ = nullptr;

		} // loader
	} // internal
} // jdk