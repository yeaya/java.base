#include <ProxyClashTest.h>
#include <ProxyClashTest$ClashWithRunnable.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Runnable.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Proxy.h>
#include <java/util/Observer.h>
#include <jcpp.h>

#undef TYPE

using $ProxyClashTest$ClashWithRunnable = ::ProxyClashTest$ClashWithRunnable;
using $MethodArray = $Array<::java::lang::reflect::Method>;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Method = ::java::lang::reflect::Method;
using $Proxy = ::java::lang::reflect::Proxy;
using $Observer = ::java::util::Observer;

void ProxyClashTest::init$() {
}

void ProxyClashTest::main($StringArray* args) {
	$useLocalObjectStack();
	$load(ProxyClashTest);
	$beforeCallerSensitive();
	$nc($System::err)->println("\nDynamic proxy API static method clash test\n"_s);
	$load($ProxyClashTest$ClashWithRunnable);
	$load($Observer);
	$var($ClassArray, interfaces, $new($ClassArray, {
		$ProxyClashTest$ClashWithRunnable::class$,
		$Runnable::class$,
		$Observer::class$
	}));
	$var($ClassLoader, loader, ProxyClashTest::class$->getClassLoader());
	$Class* proxyClass = $Proxy::getProxyClass(loader, interfaces);
	$System::err->println($$str({"+ generated proxy class: "_s, proxyClass}));
	{
		$var($MethodArray, arr$, $nc(proxyClass)->getDeclaredMethods());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Method, method, arr$->get(i$));
			{
				bool var$0 = $$nc($nc(method)->getName())->equals("run"_s);
				if (var$0 && method->getReturnType() == $Integer::TYPE) {
					$throwNew($RuntimeException, "proxy intercept a static method"_s);
				}
				if ($$nc(method->getName())->equals("foo"_s)) {
					$throwNew($RuntimeException, "proxy intercept a static method"_s);
				}
			}
		}
	}
	$System::err->println("\nTEST PASSED"_s);
}

ProxyClashTest::ProxyClashTest() {
}

$Class* ProxyClashTest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ProxyClashTest, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ProxyClashTest, main, void, $StringArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ProxyClashTest$ClashWithRunnable", "ProxyClashTest", "ClashWithRunnable", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ProxyClashTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"ProxyClashTest$ClashWithRunnable"
	};
	$loadClass(ProxyClashTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProxyClashTest);
	});
	return class$;
}

$Class* ProxyClashTest::class$ = nullptr;