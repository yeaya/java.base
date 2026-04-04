#include <ResourcesStreamTest$FailingClassLoader.h>
#include <ResourcesStreamTest.h>
#include <java/io/IOException.h>
#include <java/lang/ClassLoader.h>
#include <java/util/Enumeration.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;

void ResourcesStreamTest$FailingClassLoader::init$() {
	$ClassLoader::init$();
}

$Enumeration* ResourcesStreamTest$FailingClassLoader::getResources($String* name) {
	$throwNew($IOException, name);
	$shouldNotReachHere();
}

ResourcesStreamTest$FailingClassLoader::ResourcesStreamTest$FailingClassLoader() {
}

$Class* ResourcesStreamTest$FailingClassLoader::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ResourcesStreamTest$FailingClassLoader, init$, void)},
		{"getResources", "(Ljava/lang/String;)Ljava/util/Enumeration;", "(Ljava/lang/String;)Ljava/util/Enumeration<Ljava/net/URL;>;", $PUBLIC, $virtualMethod(ResourcesStreamTest$FailingClassLoader, getResources, $Enumeration*, $String*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ResourcesStreamTest$FailingClassLoader", "ResourcesStreamTest", "FailingClassLoader", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ResourcesStreamTest$FailingClassLoader",
		"java.lang.ClassLoader",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"ResourcesStreamTest"
	};
	$loadClass(ResourcesStreamTest$FailingClassLoader, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ResourcesStreamTest$FailingClassLoader);
	});
	return class$;
}

$Class* ResourcesStreamTest$FailingClassLoader::class$ = nullptr;