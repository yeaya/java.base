#include <ResourcesStreamTest$SuccessClassLoader.h>
#include <ResourcesStreamTest.h>
#include <java/lang/ClassLoader.h>
#include <java/net/URL.h>
#include <java/util/Collections.h>
#include <java/util/Enumeration.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $Collections = ::java::util::Collections;
using $Enumeration = ::java::util::Enumeration;

void ResourcesStreamTest$SuccessClassLoader::init$() {
	$ClassLoader::init$();
}

$Enumeration* ResourcesStreamTest$SuccessClassLoader::getResources($String* name) {
	$useLocalObjectStack();
	$var($URL, url, $new($URL, "file:/somefile"_s));
	return $Collections::enumeration($($Collections::singleton(url)));
}

ResourcesStreamTest$SuccessClassLoader::ResourcesStreamTest$SuccessClassLoader() {
}

$Class* ResourcesStreamTest$SuccessClassLoader::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ResourcesStreamTest$SuccessClassLoader, init$, void)},
		{"getResources", "(Ljava/lang/String;)Ljava/util/Enumeration;", "(Ljava/lang/String;)Ljava/util/Enumeration<Ljava/net/URL;>;", $PUBLIC, $virtualMethod(ResourcesStreamTest$SuccessClassLoader, getResources, $Enumeration*, $String*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ResourcesStreamTest$SuccessClassLoader", "ResourcesStreamTest", "SuccessClassLoader", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ResourcesStreamTest$SuccessClassLoader",
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
	$loadClass(ResourcesStreamTest$SuccessClassLoader, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ResourcesStreamTest$SuccessClassLoader);
	});
	return class$;
}

$Class* ResourcesStreamTest$SuccessClassLoader::class$ = nullptr;