#include <GetURLsTest$MyURLClassLoader.h>
#include <GetURLsTest.h>
#include <java/net/URL.h>
#include <java/net/URLClassLoader.h>
#include <jcpp.h>

using $URLArray = $Array<::java::net::URL>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $URLClassLoader = ::java::net::URLClassLoader;

void GetURLsTest$MyURLClassLoader::init$($URLArray* urls) {
	$URLClassLoader::init$(urls);
}

void GetURLsTest$MyURLClassLoader::addURL($URL* url) {
	$URLClassLoader::addURL(url);
}

GetURLsTest$MyURLClassLoader::GetURLsTest$MyURLClassLoader() {
}

$Class* GetURLsTest$MyURLClassLoader::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Ljava/net/URL;)V", nullptr, $PUBLIC, $method(GetURLsTest$MyURLClassLoader, init$, void, $URLArray*)},
		{"addURL", "(Ljava/net/URL;)V", nullptr, $PUBLIC, $virtualMethod(GetURLsTest$MyURLClassLoader, addURL, void, $URL*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GetURLsTest$MyURLClassLoader", "GetURLsTest", "MyURLClassLoader", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"GetURLsTest$MyURLClassLoader",
		"java.net.URLClassLoader",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"GetURLsTest"
	};
	$loadClass(GetURLsTest$MyURLClassLoader, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(GetURLsTest$MyURLClassLoader));
	});
	return class$;
}

$Class* GetURLsTest$MyURLClassLoader::class$ = nullptr;