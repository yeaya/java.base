#include <B6827999$MyURLClassLoader.h>
#include <B6827999.h>
#include <java/net/URL.h>
#include <java/net/URLClassLoader.h>
#include <jcpp.h>

using $URLArray = $Array<::java::net::URL>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $URLClassLoader = ::java::net::URLClassLoader;

void B6827999$MyURLClassLoader::init$($URLArray* urls) {
	$URLClassLoader::init$(urls);
}

void B6827999$MyURLClassLoader::addURL($URL* url) {
	$URLClassLoader::addURL(url);
}

B6827999$MyURLClassLoader::B6827999$MyURLClassLoader() {
}

$Class* B6827999$MyURLClassLoader::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Ljava/net/URL;)V", nullptr, $PUBLIC, $method(B6827999$MyURLClassLoader, init$, void, $URLArray*)},
		{"addURL", "(Ljava/net/URL;)V", nullptr, $PUBLIC, $virtualMethod(B6827999$MyURLClassLoader, addURL, void, $URL*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"B6827999$MyURLClassLoader", "B6827999", "MyURLClassLoader", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"B6827999$MyURLClassLoader",
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
		"B6827999"
	};
	$loadClass(B6827999$MyURLClassLoader, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(B6827999$MyURLClassLoader));
	});
	return class$;
}

$Class* B6827999$MyURLClassLoader::class$ = nullptr;