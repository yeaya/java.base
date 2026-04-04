#include <SimpleProxy.h>
#include <SimpleProxy$1.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/reflect/Proxy.h>
#include <java/lang/reflect/ReflectPermission.h>
#include <java/security/AccessControlException.h>
#include <java/security/Permission.h>
#include <jcpp.h>

using $SimpleProxy$1 = ::SimpleProxy$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityManager = ::java::lang::SecurityManager;
using $Proxy = ::java::lang::reflect::Proxy;
using $ReflectPermission = ::java::lang::reflect::ReflectPermission;
using $AccessControlException = ::java::security::AccessControlException;

void SimpleProxy::init$() {
}

void SimpleProxy::main($StringArray* args) {
	$useLocalObjectStack();
	$load(SimpleProxy);
	$beforeCallerSensitive();
	$var($ClassLoader, loader, SimpleProxy::class$->getClassLoader());
	$Class* fooClass = $Class::forName("p.Foo"_s);
	$Class* barClass = $Class::forName("p.Bar"_s);
	makeProxy(loader, fooClass);
	$System::setSecurityManager($$new($SecurityManager));
	try {
		makeProxy(loader, barClass);
		$throwNew($RuntimeException, "should fail to new proxy instance of a non-public interface"_s);
	} catch ($AccessControlException& e) {
		$load($ReflectPermission);
		bool var$0 = $$of($nc(e->getPermission()))->getClass() != $ReflectPermission::class$;
		if (var$0 || !$$nc($$nc(e->getPermission())->getName())->equals("newProxyInPackage.p"_s)) {
			$throw(e);
		}
	}
}

void SimpleProxy::makeProxy($ClassLoader* loader, $Class* cls) {
	$useLocalObjectStack();
	$load(SimpleProxy);
	$beforeCallerSensitive();
	$var($ClassArray, intfs, $new($ClassArray, {cls}));
	$Proxy::newProxyInstance(loader, intfs, $$new($SimpleProxy$1));
}

SimpleProxy::SimpleProxy() {
}

$Class* SimpleProxy::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SimpleProxy, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SimpleProxy, main, void, $StringArray*), "java.lang.Exception"},
		{"makeProxy", "(Ljava/lang/ClassLoader;Ljava/lang/Class;)V", "(Ljava/lang/ClassLoader;Ljava/lang/Class<*>;)V", $PRIVATE | $STATIC, $staticMethod(SimpleProxy, makeProxy, void, $ClassLoader*, $Class*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SimpleProxy$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"SimpleProxy",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"SimpleProxy$1"
	};
	$loadClass(SimpleProxy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SimpleProxy);
	});
	return class$;
}

$Class* SimpleProxy::class$ = nullptr;