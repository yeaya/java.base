#include <MultiThreadedSystemProxies$1.h>
#include <MultiThreadedSystemProxies.h>
#include <java/net/ProxySelector.h>
#include <java/net/URI.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ProxySelector = ::java::net::ProxySelector;
using $URI = ::java::net::URI;

void MultiThreadedSystemProxies$1::init$($ProxySelector* val$ps, $URI* val$uri) {
	$set(this, val$ps, val$ps);
	$set(this, val$uri, val$uri);
}

void MultiThreadedSystemProxies$1::run() {
	try {
		$nc(this->val$ps)->select(this->val$uri);
	} catch ($Exception& x) {
		$throwNew($RuntimeException, x);
	}
}

MultiThreadedSystemProxies$1::MultiThreadedSystemProxies$1() {
}

$Class* MultiThreadedSystemProxies$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$uri", "Ljava/net/URI;", nullptr, $FINAL | $SYNTHETIC, $field(MultiThreadedSystemProxies$1, val$uri)},
		{"val$ps", "Ljava/net/ProxySelector;", nullptr, $FINAL | $SYNTHETIC, $field(MultiThreadedSystemProxies$1, val$ps)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/ProxySelector;Ljava/net/URI;)V", "()V", 0, $method(MultiThreadedSystemProxies$1, init$, void, $ProxySelector*, $URI*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(MultiThreadedSystemProxies$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"MultiThreadedSystemProxies",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"MultiThreadedSystemProxies$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"MultiThreadedSystemProxies$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"MultiThreadedSystemProxies"
	};
	$loadClass(MultiThreadedSystemProxies$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MultiThreadedSystemProxies$1);
	});
	return class$;
}

$Class* MultiThreadedSystemProxies$1::class$ = nullptr;