#include <jdk/internal/loader/ClassLoaders$BootClassLoader.h>

#include <jdk/internal/access/JavaLangAccess.h>
#include <jdk/internal/loader/BuiltinClassLoader.h>
#include <jdk/internal/loader/ClassLoaders.h>
#include <jdk/internal/loader/URLClassPath.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BuiltinClassLoader = ::jdk::internal::loader::BuiltinClassLoader;
using $URLClassPath = ::jdk::internal::loader::URLClassPath;

namespace jdk {
	namespace internal {
		namespace loader {

$MethodInfo _ClassLoaders$BootClassLoader_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/loader/URLClassPath;)V", nullptr, 0, $method(static_cast<void(ClassLoaders$BootClassLoader::*)($URLClassPath*)>(&ClassLoaders$BootClassLoader::init$))},
	{"loadClassOrNull", "(Ljava/lang/String;Z)Ljava/lang/Class;", "(Ljava/lang/String;Z)Ljava/lang/Class<*>;", $PROTECTED},
	{}
};

$InnerClassInfo _ClassLoaders$BootClassLoader_InnerClassesInfo_[] = {
	{"jdk.internal.loader.ClassLoaders$BootClassLoader", "jdk.internal.loader.ClassLoaders", "BootClassLoader", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ClassLoaders$BootClassLoader_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.loader.ClassLoaders$BootClassLoader",
	"jdk.internal.loader.BuiltinClassLoader",
	nullptr,
	nullptr,
	_ClassLoaders$BootClassLoader_MethodInfo_,
	nullptr,
	nullptr,
	_ClassLoaders$BootClassLoader_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.loader.ClassLoaders"
};

$Object* allocate$ClassLoaders$BootClassLoader($Class* clazz) {
	return $of($alloc(ClassLoaders$BootClassLoader));
}

void ClassLoaders$BootClassLoader::init$($URLClassPath* bcp) {
	$BuiltinClassLoader::init$(nullptr, nullptr, bcp);
}

$Class* ClassLoaders$BootClassLoader::loadClassOrNull($String* cn, bool resolve) {
	$init(ClassLoaders);
	$Class* clazz = ClassLoaders::JLA->findBootstrapClassOrNull(cn);
	//if (clazz != nullptr && clazz->classLoader == nullptr) {
	//	_assign(clazz->classLoader, this);
	//}
	return clazz;
}

ClassLoaders$BootClassLoader::ClassLoaders$BootClassLoader() {
}

$Class* ClassLoaders$BootClassLoader::load$($String* name, bool initialize) {
	$loadClass(ClassLoaders$BootClassLoader, name, initialize, &_ClassLoaders$BootClassLoader_ClassInfo_, allocate$ClassLoaders$BootClassLoader);
	return class$;
}

$Class* ClassLoaders$BootClassLoader::class$ = nullptr;

		} // loader
	} // internal
} // jdk