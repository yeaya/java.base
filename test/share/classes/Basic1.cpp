#include <Basic1.h>

#include <Basic1$Handler.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/InvocationHandler.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <java/lang/reflect/Proxy.h>
#include <java/security/AllPermission.h>
#include <java/security/Permission.h>
#include <java/security/ProtectionDomain.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <java/util/Observer.h>
#include <jcpp.h>

using $Basic1$Handler = ::Basic1$Handler;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Constructor = ::java::lang::reflect::Constructor;
using $InvocationHandler = ::java::lang::reflect::InvocationHandler;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $Method = ::java::lang::reflect::Method;
using $Modifier = ::java::lang::reflect::Modifier;
using $Proxy = ::java::lang::reflect::Proxy;
using $AllPermission = ::java::security::AllPermission;
using $Permission = ::java::security::Permission;
using $ProtectionDomain = ::java::security::ProtectionDomain;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $Observer = ::java::util::Observer;

$MethodInfo _Basic1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Basic1::*)()>(&Basic1::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Basic1::main))},
	{}
};

$InnerClassInfo _Basic1_InnerClassesInfo_[] = {
	{"Basic1$Handler", "Basic1", "Handler", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Basic1_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Basic1",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Basic1_MethodInfo_,
	nullptr,
	nullptr,
	_Basic1_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Basic1$Handler"
};

$Object* allocate$Basic1($Class* clazz) {
	return $of($alloc(Basic1));
}

void Basic1::init$() {
}

void Basic1::main($StringArray* args) {
	$load(Basic1);
	$beforeCallerSensitive();
	$init($System);
	$nc($System::err)->println("\nBasic functional test of dynamic proxy API, part 1\n"_s);
	try {
			$load($Runnable);
			$load($Observer);
		$var($ClassArray, interfaces, $new($ClassArray, {
			$Runnable::class$,
			$Observer::class$
		}));
		$var($ClassLoader, loader, $ClassLoader::getSystemClassLoader());
		$Class* proxyClass = $Proxy::getProxyClass(loader, interfaces);
		$nc($System::err)->println($$str({"+ generated proxy class: "_s, proxyClass}));
		int32_t flags = $nc(proxyClass)->getModifiers();
		$nc($System::err)->println($$str({"+ proxy class\'s modifiers: "_s, $($Modifier::toString(flags))}));
		if (!$Modifier::isPublic(flags)) {
			$throwNew($RuntimeException, "proxy class in not public"_s);
		}
		if (!$Modifier::isFinal(flags)) {
			$throwNew($RuntimeException, "proxy class in not final"_s);
		}
		if ($Modifier::isAbstract(flags)) {
			$throwNew($RuntimeException, "proxy class in abstract"_s);
		}
		{
			$var($ClassArray, arr$, interfaces);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$Class* intf = arr$->get(i$);
				{
					if (!$nc(intf)->isAssignableFrom(proxyClass)) {
						$throwNew($RuntimeException, $$str({"proxy class not assignable to proxy interface "_s, $(intf->getName())}));
					}
				}
			}
		}
		$var($List, l1, $Arrays::asList(interfaces));
		$var($List, l2, $Arrays::asList($(proxyClass->getInterfaces())));
		$nc($System::err)->println($$str({"+ proxy class\'s interfaces: "_s, l2}));
		if (!$nc(l1)->equals(l2)) {
			$throwNew($RuntimeException, $$str({"proxy class interfaces are "_s, l2, " (expected "_s, l1, ")"_s}));
		}
		$load($Object);
		if ($Proxy::isProxyClass($Object::class$)) {
			$throwNew($RuntimeException, "Proxy.isProxyClass returned true for java.lang.Object"_s);
		}
		if (!$Proxy::isProxyClass(proxyClass)) {
			$throwNew($RuntimeException, "Proxy.isProxyClass returned false for proxy class"_s);
		}
		$var($ProtectionDomain, pd, proxyClass->getProtectionDomain());
		$nc($System::err)->println($$str({"+ proxy class\'s protection domain: "_s, pd}));
		if (!$nc(pd)->implies($$new($AllPermission))) {
			$throwNew($RuntimeException, "proxy class does not have AllPermission"_s);
		}
		$load($InvocationHandler);
		$var($Constructor, cons, proxyClass->getConstructor($$new($ClassArray, {$InvocationHandler::class$})));
		try {
			$nc(cons)->newInstance($$new($ObjectArray, {($Object*)nullptr}));
			$throwNew($RuntimeException, "Expected NullPointerException thrown"_s);
		} catch ($InvocationTargetException&) {
			$var($InvocationTargetException, e, $catch());
			$var($Throwable, t, e->getTargetException());
			if (!($instanceOf($NullPointerException, t))) {
				$throw(t);
			}
		}
		$var($Basic1$Handler, handler, $new($Basic1$Handler));
		$var($Object, proxy, $nc(cons)->newInstance($$new($ObjectArray, {$of(handler)})));
		$set(handler, currentProxy, proxy);
		$var($Method, m, $Runnable::class$->getMethod("run"_s, $$new($ClassArray, 0)));
		$nc(($cast($Runnable, proxy)))->run();
		if (!$nc(handler->lastMethod)->equals(m)) {
			$throwNew($RuntimeException, $$str({"proxy method invocation failure (lastMethod = "_s, handler->lastMethod, ")"_s}));
		}
		$nc($System::err)->println("\nTEST PASSED"_s);
	} catch ($Throwable&) {
		$var($Throwable, e, $catch());
		$nc($System::err)->println("\nTEST FAILED:"_s);
		e->printStackTrace();
		$throwNew($RuntimeException, $$str({"TEST FAILED: "_s, $(e->toString())}));
	}
}

Basic1::Basic1() {
}

$Class* Basic1::load$($String* name, bool initialize) {
	$loadClass(Basic1, name, initialize, &_Basic1_ClassInfo_, allocate$Basic1);
	return class$;
}

$Class* Basic1::class$ = nullptr;