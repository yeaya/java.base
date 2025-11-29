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

$MethodInfo _GetURLsTest$MyURLClassLoader_MethodInfo_[] = {
	{"<init>", "([Ljava/net/URL;)V", nullptr, $PUBLIC, $method(static_cast<void(GetURLsTest$MyURLClassLoader::*)($URLArray*)>(&GetURLsTest$MyURLClassLoader::init$))},
	{"addURL", "(Ljava/net/URL;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GetURLsTest$MyURLClassLoader_InnerClassesInfo_[] = {
	{"GetURLsTest$MyURLClassLoader", "GetURLsTest", "MyURLClassLoader", $STATIC},
	{}
};

$ClassInfo _GetURLsTest$MyURLClassLoader_ClassInfo_ = {
	$ACC_SUPER,
	"GetURLsTest$MyURLClassLoader",
	"java.net.URLClassLoader",
	nullptr,
	nullptr,
	_GetURLsTest$MyURLClassLoader_MethodInfo_,
	nullptr,
	nullptr,
	_GetURLsTest$MyURLClassLoader_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"GetURLsTest"
};

$Object* allocate$GetURLsTest$MyURLClassLoader($Class* clazz) {
	return $of($alloc(GetURLsTest$MyURLClassLoader));
}

void GetURLsTest$MyURLClassLoader::init$($URLArray* urls) {
	$URLClassLoader::init$(urls);
}

void GetURLsTest$MyURLClassLoader::addURL($URL* url) {
	$URLClassLoader::addURL(url);
}

GetURLsTest$MyURLClassLoader::GetURLsTest$MyURLClassLoader() {
}

$Class* GetURLsTest$MyURLClassLoader::load$($String* name, bool initialize) {
	$loadClass(GetURLsTest$MyURLClassLoader, name, initialize, &_GetURLsTest$MyURLClassLoader_ClassInfo_, allocate$GetURLsTest$MyURLClassLoader);
	return class$;
}

$Class* GetURLsTest$MyURLClassLoader::class$ = nullptr;