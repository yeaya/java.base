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

$MethodInfo _B6827999$MyURLClassLoader_MethodInfo_[] = {
	{"<init>", "([Ljava/net/URL;)V", nullptr, $PUBLIC, $method(static_cast<void(B6827999$MyURLClassLoader::*)($URLArray*)>(&B6827999$MyURLClassLoader::init$))},
	{"addURL", "(Ljava/net/URL;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _B6827999$MyURLClassLoader_InnerClassesInfo_[] = {
	{"B6827999$MyURLClassLoader", "B6827999", "MyURLClassLoader", $STATIC},
	{}
};

$ClassInfo _B6827999$MyURLClassLoader_ClassInfo_ = {
	$ACC_SUPER,
	"B6827999$MyURLClassLoader",
	"java.net.URLClassLoader",
	nullptr,
	nullptr,
	_B6827999$MyURLClassLoader_MethodInfo_,
	nullptr,
	nullptr,
	_B6827999$MyURLClassLoader_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"B6827999"
};

$Object* allocate$B6827999$MyURLClassLoader($Class* clazz) {
	return $of($alloc(B6827999$MyURLClassLoader));
}

void B6827999$MyURLClassLoader::init$($URLArray* urls) {
	$URLClassLoader::init$(urls);
}

void B6827999$MyURLClassLoader::addURL($URL* url) {
	$URLClassLoader::addURL(url);
}

B6827999$MyURLClassLoader::B6827999$MyURLClassLoader() {
}

$Class* B6827999$MyURLClassLoader::load$($String* name, bool initialize) {
	$loadClass(B6827999$MyURLClassLoader, name, initialize, &_B6827999$MyURLClassLoader_ClassInfo_, allocate$B6827999$MyURLClassLoader);
	return class$;
}

$Class* B6827999$MyURLClassLoader::class$ = nullptr;