#include <BadClassFiles$InMemoryClassLoader.h>

#include <BadClassFiles.h>
#include <java/lang/ClassLoader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _BadClassFiles$InMemoryClassLoader_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(BadClassFiles$InMemoryClassLoader, init$, void)},
	{"defineClass", "(Ljava/lang/String;[B)Ljava/lang/Class;", "(Ljava/lang/String;[B)Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(BadClassFiles$InMemoryClassLoader, defineClass, $Class*, $String*, $bytes*)},
	{}
};

$InnerClassInfo _BadClassFiles$InMemoryClassLoader_InnerClassesInfo_[] = {
	{"BadClassFiles$InMemoryClassLoader", "BadClassFiles", "InMemoryClassLoader", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BadClassFiles$InMemoryClassLoader_ClassInfo_ = {
	$ACC_SUPER,
	"BadClassFiles$InMemoryClassLoader",
	"java.lang.ClassLoader",
	nullptr,
	nullptr,
	_BadClassFiles$InMemoryClassLoader_MethodInfo_,
	nullptr,
	nullptr,
	_BadClassFiles$InMemoryClassLoader_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"BadClassFiles"
};

$Object* allocate$BadClassFiles$InMemoryClassLoader($Class* clazz) {
	return $of($alloc(BadClassFiles$InMemoryClassLoader));
}

void BadClassFiles$InMemoryClassLoader::init$() {
	$ClassLoader::init$();
}

$Class* BadClassFiles$InMemoryClassLoader::defineClass($String* name, $bytes* b) {
	return defineClass(name, b, 0, $nc(b)->length);
}

BadClassFiles$InMemoryClassLoader::BadClassFiles$InMemoryClassLoader() {
}

$Class* BadClassFiles$InMemoryClassLoader::load$($String* name, bool initialize) {
	$loadClass(BadClassFiles$InMemoryClassLoader, name, initialize, &_BadClassFiles$InMemoryClassLoader_ClassInfo_, allocate$BadClassFiles$InMemoryClassLoader);
	return class$;
}

$Class* BadClassFiles$InMemoryClassLoader::class$ = nullptr;