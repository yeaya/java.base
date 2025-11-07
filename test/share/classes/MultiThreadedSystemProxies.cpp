#include <MultiThreadedSystemProxies.h>

#include <MultiThreadedSystemProxies$1.h>
#include <java/lang/Runnable.h>
#include <java/net/ProxySelector.h>
#include <java/net/URI.h>
#include <jcpp.h>

#undef NUM_THREADS

using $MultiThreadedSystemProxies$1 = ::MultiThreadedSystemProxies$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ProxySelector = ::java::net::ProxySelector;
using $URI = ::java::net::URI;

$FieldInfo _MultiThreadedSystemProxies_FieldInfo_[] = {
	{"NUM_THREADS", "I", nullptr, $STATIC | $FINAL, $constField(MultiThreadedSystemProxies, NUM_THREADS)},
	{}
};

$MethodInfo _MultiThreadedSystemProxies_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MultiThreadedSystemProxies::*)()>(&MultiThreadedSystemProxies::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&MultiThreadedSystemProxies::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _MultiThreadedSystemProxies_InnerClassesInfo_[] = {
	{"MultiThreadedSystemProxies$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MultiThreadedSystemProxies_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"MultiThreadedSystemProxies",
	"java.lang.Object",
	nullptr,
	_MultiThreadedSystemProxies_FieldInfo_,
	_MultiThreadedSystemProxies_MethodInfo_,
	nullptr,
	nullptr,
	_MultiThreadedSystemProxies_InnerClassesInfo_,
	nullptr,
	nullptr,
	"MultiThreadedSystemProxies$1"
};

$Object* allocate$MultiThreadedSystemProxies($Class* clazz) {
	return $of($alloc(MultiThreadedSystemProxies));
}

void MultiThreadedSystemProxies::init$() {
}

void MultiThreadedSystemProxies::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$System::setProperty("java.net.useSystemProxies"_s, "true"_s);
	$var($ProxySelector, ps, $ProxySelector::getDefault());
	$var($URI, uri, $new($URI, "http://ubuntu.com"_s));
	$var($ThreadArray, threads, $new($ThreadArray, MultiThreadedSystemProxies::NUM_THREADS));
	for (int32_t i = 0; i < MultiThreadedSystemProxies::NUM_THREADS; ++i) {
		threads->set(i, $$new($Thread, static_cast<$Runnable*>($$new($MultiThreadedSystemProxies$1, ps, uri))));
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
	$loadClass(MultiThreadedSystemProxies, name, initialize, &_MultiThreadedSystemProxies_ClassInfo_, allocate$MultiThreadedSystemProxies);
	return class$;
}

$Class* MultiThreadedSystemProxies::class$ = nullptr;