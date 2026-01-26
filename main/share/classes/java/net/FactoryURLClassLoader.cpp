#include <java/net/FactoryURLClassLoader.h>

#include <java/lang/ClassLoader.h>
#include <java/lang/SecurityManager.h>
#include <java/net/URL.h>
#include <java/net/URLClassLoader.h>
#include <java/security/AccessControlContext.h>
#include <jcpp.h>

using $URLArray = $Array<::java::net::URL>;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $URLClassLoader = ::java::net::URLClassLoader;
using $AccessControlContext = ::java::security::AccessControlContext;

namespace java {
	namespace net {

$MethodInfo _FactoryURLClassLoader_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;[Ljava/net/URL;Ljava/lang/ClassLoader;Ljava/security/AccessControlContext;)V", nullptr, 0, $method(FactoryURLClassLoader, init$, void, $String*, $URLArray*, $ClassLoader*, $AccessControlContext*)},
	{"<init>", "([Ljava/net/URL;Ljava/security/AccessControlContext;)V", nullptr, 0, $method(FactoryURLClassLoader, init$, void, $URLArray*, $AccessControlContext*)},
	{"loadClass", "(Ljava/lang/String;Z)Ljava/lang/Class;", "(Ljava/lang/String;Z)Ljava/lang/Class<*>;", $PUBLIC | $FINAL, $virtualMethod(FactoryURLClassLoader, loadClass, $Class*, $String*, bool), "java.lang.ClassNotFoundException"},
	{}
};

$ClassInfo _FactoryURLClassLoader_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.net.FactoryURLClassLoader",
	"java.net.URLClassLoader",
	nullptr,
	nullptr,
	_FactoryURLClassLoader_MethodInfo_
};

$Object* allocate$FactoryURLClassLoader($Class* clazz) {
	return $of($alloc(FactoryURLClassLoader));
}

void FactoryURLClassLoader::init$($String* name, $URLArray* urls, $ClassLoader* parent, $AccessControlContext* acc) {
	$URLClassLoader::init$(name, urls, parent, acc);
}

void FactoryURLClassLoader::init$($URLArray* urls, $AccessControlContext* acc) {
	$URLClassLoader::init$(urls, acc);
}

$Class* FactoryURLClassLoader::loadClass($String* name, bool resolve) {
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		int32_t i = $nc(name)->lastIndexOf((int32_t)u'.');
		if (i != -1) {
			sm->checkPackageAccess($(name->substring(0, i)));
		}
	}
	return $URLClassLoader::loadClass(name, resolve);
}

void clinit$FactoryURLClassLoader($Class* class$) {
	$beforeCallerSensitive();
	{
		$ClassLoader::registerAsParallelCapable();
	}
}

FactoryURLClassLoader::FactoryURLClassLoader() {
}

$Class* FactoryURLClassLoader::load$($String* name, bool initialize) {
	$loadClass(FactoryURLClassLoader, name, initialize, &_FactoryURLClassLoader_ClassInfo_, clinit$FactoryURLClassLoader, allocate$FactoryURLClassLoader);
	return class$;
}

$Class* FactoryURLClassLoader::class$ = nullptr;

	} // net
} // java