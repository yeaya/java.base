#include <SimpleProxy.h>

#include <SimpleProxy$1.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/reflect/InvocationHandler.h>
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
using $InvocationHandler = ::java::lang::reflect::InvocationHandler;
using $Proxy = ::java::lang::reflect::Proxy;
using $ReflectPermission = ::java::lang::reflect::ReflectPermission;
using $AccessControlException = ::java::security::AccessControlException;
using $Permission = ::java::security::Permission;

$MethodInfo _SimpleProxy_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SimpleProxy, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SimpleProxy, main, void, $StringArray*), "java.lang.Exception"},
	{"makeProxy", "(Ljava/lang/ClassLoader;Ljava/lang/Class;)V", "(Ljava/lang/ClassLoader;Ljava/lang/Class<*>;)V", $PRIVATE | $STATIC, $staticMethod(SimpleProxy, makeProxy, void, $ClassLoader*, $Class*)},
	{}
};

$InnerClassInfo _SimpleProxy_InnerClassesInfo_[] = {
	{"SimpleProxy$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SimpleProxy_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SimpleProxy",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SimpleProxy_MethodInfo_,
	nullptr,
	nullptr,
	_SimpleProxy_InnerClassesInfo_,
	nullptr,
	nullptr,
	"SimpleProxy$1"
};

$Object* allocate$SimpleProxy($Class* clazz) {
	return $of($alloc(SimpleProxy));
}

void SimpleProxy::init$() {
}

void SimpleProxy::main($StringArray* args) {
	$load(SimpleProxy);
	$useLocalCurrentObjectStackCache();
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
		bool var$0 = $nc($of($(e->getPermission())))->getClass() != $ReflectPermission::class$;
		if (var$0 || !$nc($($nc($(e->getPermission()))->getName()))->equals("newProxyInPackage.p"_s)) {
			$throw(e);
		}
	}
}

void SimpleProxy::makeProxy($ClassLoader* loader, $Class* cls) {
	$load(SimpleProxy);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($ClassArray, intfs, $new($ClassArray, {cls}));
	$Proxy::newProxyInstance(loader, intfs, static_cast<$InvocationHandler*>($$new($SimpleProxy$1)));
}

SimpleProxy::SimpleProxy() {
}

$Class* SimpleProxy::load$($String* name, bool initialize) {
	$loadClass(SimpleProxy, name, initialize, &_SimpleProxy_ClassInfo_, allocate$SimpleProxy);
	return class$;
}

$Class* SimpleProxy::class$ = nullptr;