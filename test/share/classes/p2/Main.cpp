#include <p2/Main.h>

#include <java/io/InputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <java/util/Enumeration.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $Enumeration = ::java::util::Enumeration;

namespace p2 {

$MethodInfo _Main_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Main::*)()>(&Main::init$))},
	{"getResourceAsStreamInClassLoader", "(Ljava/lang/String;)Ljava/io/InputStream;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$InputStream*(*)($String*)>(&Main::getResourceAsStreamInClassLoader))},
	{"getResourceInClassLoader", "(Ljava/lang/String;)Ljava/net/URL;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$URL*(*)($String*)>(&Main::getResourceInClassLoader))},
	{"getResourcesInClassLoader", "(Ljava/lang/String;)Ljava/util/Enumeration;", "(Ljava/lang/String;)Ljava/util/Enumeration<Ljava/net/URL;>;", $PUBLIC | $STATIC, $method(static_cast<$Enumeration*(*)($String*)>(&Main::getResourcesInClassLoader)), "java.io.IOException"},
	{}
};

$ClassInfo _Main_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"p2.Main",
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

} // p2