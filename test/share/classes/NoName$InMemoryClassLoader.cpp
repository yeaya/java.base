#include <NoName$InMemoryClassLoader.h>

#include <NoName.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $NoName = ::NoName;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _NoName$InMemoryClassLoader_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(NoName$InMemoryClassLoader::*)()>(&NoName$InMemoryClassLoader::init$))},
	{"defineClass", "(Ljava/lang/String;[B)Ljava/lang/Class;", "(Ljava/lang/String;[B)Ljava/lang/Class<*>;", $PUBLIC},
	{}
};

$InnerClassInfo _NoName$InMemoryClassLoader_InnerClassesInfo_[] = {
	{"NoName$InMemoryClassLoader", "NoName", "InMemoryClassLoader", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _NoName$InMemoryClassLoader_ClassInfo_ = {
	$ACC_SUPER,
	"NoName$InMemoryClassLoader",
	"java.lang.ClassLoader",
	nullptr,
	nullptr,
	_NoName$InMemoryClassLoader_MethodInfo_,
	nullptr,
	nullptr,
	_NoName$InMemoryClassLoader_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"NoName"
};

$Object* allocate$NoName$InMemoryClassLoader($Class* clazz) {
	return $of($alloc(NoName$InMemoryClassLoader));
}

void NoName$InMemoryClassLoader::init$() {
	$ClassLoader::init$();
}

$Class* NoName$InMemoryClassLoader::defineClass($String* name, $bytes* b) {
	return defineClass(name, b, 0, $nc(b)->length);
}

NoName$InMemoryClassLoader::NoName$InMemoryClassLoader() {
}

$Class* NoName$InMemoryClassLoader::load$($String* name, bool initialize) {
	$loadClass(NoName$InMemoryClassLoader, name, initialize, &_NoName$InMemoryClassLoader_ClassInfo_, allocate$NoName$InMemoryClassLoader);
	return class$;
}

$Class* NoName$InMemoryClassLoader::class$ = nullptr;