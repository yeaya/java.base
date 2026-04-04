#include <AddURLTest$MyURLClassLoader.h>
#include <AddURLTest.h>
#include <java/net/URL.h>
#include <java/net/URLClassLoader.h>
#include <jcpp.h>

using $URLArray = $Array<::java::net::URL>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $URLClassLoader = ::java::net::URLClassLoader;

void AddURLTest$MyURLClassLoader::init$($URLArray* urls) {
	$URLClassLoader::init$(urls);
}

void AddURLTest$MyURLClassLoader::addURL($URL* url) {
	$URLClassLoader::addURL(url);
}

AddURLTest$MyURLClassLoader::AddURLTest$MyURLClassLoader() {
}

$Class* AddURLTest$MyURLClassLoader::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Ljava/net/URL;)V", nullptr, $PUBLIC, $method(AddURLTest$MyURLClassLoader, init$, void, $URLArray*)},
		{"addURL", "(Ljava/net/URL;)V", nullptr, $PUBLIC, $virtualMethod(AddURLTest$MyURLClassLoader, addURL, void, $URL*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"AddURLTest$MyURLClassLoader", "AddURLTest", "MyURLClassLoader", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"AddURLTest$MyURLClassLoader",
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
		"AddURLTest"
	};
	$loadClass(AddURLTest$MyURLClassLoader, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AddURLTest$MyURLClassLoader));
	});
	return class$;
}

$Class* AddURLTest$MyURLClassLoader::class$ = nullptr;