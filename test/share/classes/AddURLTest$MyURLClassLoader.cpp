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

$MethodInfo _AddURLTest$MyURLClassLoader_MethodInfo_[] = {
	{"<init>", "([Ljava/net/URL;)V", nullptr, $PUBLIC, $method(static_cast<void(AddURLTest$MyURLClassLoader::*)($URLArray*)>(&AddURLTest$MyURLClassLoader::init$))},
	{"addURL", "(Ljava/net/URL;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AddURLTest$MyURLClassLoader_InnerClassesInfo_[] = {
	{"AddURLTest$MyURLClassLoader", "AddURLTest", "MyURLClassLoader", $STATIC},
	{}
};

$ClassInfo _AddURLTest$MyURLClassLoader_ClassInfo_ = {
	$ACC_SUPER,
	"AddURLTest$MyURLClassLoader",
	"java.net.URLClassLoader",
	nullptr,
	nullptr,
	_AddURLTest$MyURLClassLoader_MethodInfo_,
	nullptr,
	nullptr,
	_AddURLTest$MyURLClassLoader_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"AddURLTest"
};

$Object* allocate$AddURLTest$MyURLClassLoader($Class* clazz) {
	return $of($alloc(AddURLTest$MyURLClassLoader));
}

void AddURLTest$MyURLClassLoader::init$($URLArray* urls) {
	$URLClassLoader::init$(urls);
}

void AddURLTest$MyURLClassLoader::addURL($URL* url) {
	$URLClassLoader::addURL(url);
}

AddURLTest$MyURLClassLoader::AddURLTest$MyURLClassLoader() {
}

$Class* AddURLTest$MyURLClassLoader::load$($String* name, bool initialize) {
	$loadClass(AddURLTest$MyURLClassLoader, name, initialize, &_AddURLTest$MyURLClassLoader_ClassInfo_, allocate$AddURLTest$MyURLClassLoader);
	return class$;
}

$Class* AddURLTest$MyURLClassLoader::class$ = nullptr;