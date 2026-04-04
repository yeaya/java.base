#include <MultiThreadedSystemProxies.h>
#include <MultiThreadedSystemProxies$1.h>
#include <java/net/ProxySelector.h>
#include <java/net/URI.h>
#include <jcpp.h>

#undef NUM_THREADS

using $MultiThreadedSystemProxies$1 = ::MultiThreadedSystemProxies$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProxySelector = ::java::net::ProxySelector;
using $URI = ::java::net::URI;

void MultiThreadedSystemProxies::init$() {
}

void MultiThreadedSystemProxies::main($StringArray* args) {
	$useLocalObjectStack();
	$System::setProperty("java.net.useSystemProxies"_s, "true"_s);
	$var($ProxySelector, ps, $ProxySelector::getDefault());
	$var($URI, uri, $new($URI, "http://ubuntu.com"_s));
	$var($ThreadArray, threads, $new($ThreadArray, MultiThreadedSystemProxies::NUM_THREADS));
	for (int32_t i = 0; i < MultiThreadedSystemProxies::NUM_THREADS; ++i) {
		threads->set(i, $$new($Thread, $$new($MultiThreadedSystemProxies$1, ps, uri)));
	}
	for (int32_t i = 0; i < MultiThreadedSystemProxies::NUM_THREADS; ++i) {
		$nc(threads->get(i))->start();
	}
	for (int32_t i = 0; i < MultiThreadedSystemProxies::NUM_THREADS; ++i) {
		$nc(threads->get(i))->join();
	}
}

MultiThreadedSystemProxies::MultiThreadedSystemProxies() {
}

$Class* MultiThreadedSystemProxies::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NUM_THREADS", "I", nullptr, $STATIC | $FINAL, $constField(MultiThreadedSystemProxies, NUM_THREADS)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MultiThreadedSystemProxies, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(MultiThreadedSystemProxies, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"MultiThreadedSystemProxies$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"MultiThreadedSystemProxies",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"MultiThreadedSystemProxies$1"
	};
	$loadClass(MultiThreadedSystemProxies, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MultiThreadedSystemProxies);
	});
	return class$;
}

$Class* MultiThreadedSystemProxies::class$ = nullptr;