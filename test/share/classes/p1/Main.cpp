#include <p1/Main.h>

#include <java/io/InputStream.h>
#include <java/lang/ClassLoader.h>
#include <java/net/URL.h>
#include <java/util/Enumeration.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $Enumeration = ::java::util::Enumeration;

namespace p1 {

$MethodInfo _Main_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(Main, init$, void)},
	{"getResourceAsStreamInClassLoader", "(Ljava/lang/String;)Ljava/io/InputStream;", nullptr, $PUBLIC | $STATIC, $staticMethod(Main, getResourceAsStreamInClassLoader, $InputStream*, $String*)},
	{"getResourceInClassLoader", "(Ljava/lang/String;)Ljava/net/URL;", nullptr, $PUBLIC | $STATIC, $staticMethod(Main, getResourceInClassLoader, $URL*, $String*)},
	{"getResourcesInClassLoader", "(Ljava/lang/String;)Ljava/util/Enumeration;", "(Ljava/lang/String;)Ljava/util/Enumeration<Ljava/net/URL;>;", $PUBLIC | $STATIC, $staticMethod(Main, getResourcesInClassLoader, $Enumeration*, $String*), "java.io.IOException"},
	{}
};

$ClassInfo _Main_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"p1.Main",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Main_MethodInfo_
};

$Object* allocate$Main($Class* clazz) {
	return $of($alloc(Main));
}

void Main::init$() {
}

$URL* Main::getResourceInClassLoader($String* name) {
	$load(Main);
	$beforeCallerSensitive();
	return $nc($(Main::class$->getClassLoader()))->getResource(name);
}

$Enumeration* Main::getResourcesInClassLoader($String* name) {
	$load(Main);
	$beforeCallerSensitive();
	return $nc($(Main::class$->getClassLoader()))->getResources(name);
}

$InputStream* Main::getResourceAsStreamInClassLoader($String* name) {
	$load(Main);
	$beforeCallerSensitive();
	return $nc($(Main::class$->getClassLoader()))->getResourceAsStream(name);
}

Main::Main() {
}

$Class* Main::load$($String* name, bool initialize) {
	$loadClass(Main, name, initialize, &_Main_ClassInfo_, allocate$Main);
	return class$;
}

$Class* Main::class$ = nullptr;

} // p1