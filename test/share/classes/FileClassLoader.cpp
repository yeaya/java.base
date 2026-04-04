#include <FileClassLoader.h>
#include <java/lang/ClassLoader.h>
#include <java/net/URL.h>
#include <java/net/URLClassLoader.h>
#include <jcpp.h>

using $URLArray = $Array<::java::net::URL>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URLClassLoader = ::java::net::URLClassLoader;

void FileClassLoader::init$($URLArray* urls) {
	$URLClassLoader::init$(urls);
}

void FileClassLoader::testFindLoadedClass($String* name) {
	$URLClassLoader::findLoadedClass(name);
}

FileClassLoader::FileClassLoader() {
}

$Class* FileClassLoader::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Ljava/net/URL;)V", nullptr, $PUBLIC, $method(FileClassLoader, init$, void, $URLArray*)},
		{"testFindLoadedClass", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(FileClassLoader, testFindLoadedClass, void, $String*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"FileClassLoader",
		"java.net.URLClassLoader",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FileClassLoader, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(FileClassLoader));
	});
	return class$;
}

$Class* FileClassLoader::class$ = nullptr;