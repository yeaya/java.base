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
using $PrintStream = ::java::io::PrintStream;
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

$MethodInfo _ProxyClashTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ProxyClashTest::*)()>(&ProxyClashTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ProxyClashTest::main))},
	{}
};

$InnerClassInfo _ProxyClashTest_InnerClassesInfo_[] = {
	{"ProxyClashTest$ClashWithRunnable", "ProxyClashTest", "ClashWithRunnable", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ProxyClashTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ProxyClashTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ProxyClashTest_MethodInfo_,
	nullptr,
	nullptr,
	_ProxyClashTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"ProxyClashTest$ClashWithRunnable"
};

$Object* allocate$ProxyClashTest($Class* clazz) {
	return $of($alloc(ProxyClashTest));
}

void ProxyClashTest::init$() {
}

void ProxyClashTest::main($StringArray* args) {
	$load(ProxyClashTest);
	$useLocalCurrentObjectStackCache();
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
	$nc($System::err)->println($$str({"+ generated proxy class: "_s, proxyClass}));
	{
		$var($MethodArray, arr$, $nc(proxyClass)->getDeclaredMethods());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Method, method, arr$->get(i$));
			{
				bool var$0 = $nc($($nc(method)->getName()))->equals("run"_s);
				$init($Integer);
				if (var$0 && method->getReturnType() == $Integer::TYPE) {
					$throwNew($RuntimeException, "proxy intercept a static method"_s);
				}
				if ($nc($($nc(method)->getName()))->equals("foo"_s)) {
					$throwNew($RuntimeException, "proxy intercept a static method"_s);
				}
			}
		}
	}
	$nc($System::err)->println("\nTEST PASSED"_s);
}

ProxyClashTest::ProxyClashTest() {
}

$Class* ProxyClashTest::load$($String* name, bool initialize) {
	$loadClass(ProxyClashTest, name, initialize, &_ProxyClashTest_ClassInfo_, allocate$ProxyClashTest);
	return class$;
}

$Class* ProxyClashTest::class$ = nullptr;