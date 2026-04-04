#include <B6563259.h>
#include <java/net/Proxy.h>
#include <java/net/ProxySelector.h>
#include <java/net/URI.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef NO_PROXY

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Proxy = ::java::net::Proxy;
using $ProxySelector = ::java::net::ProxySelector;
using $URI = ::java::net::URI;
using $List = ::java::util::List;

void B6563259::init$() {
}

void B6563259::main($StringArray* args) {
	$useLocalObjectStack();
	$System::setProperty("http.proxyHost"_s, "myproxy"_s);
	$System::setProperty("http.proxyPort"_s, "8080"_s);
	$System::setProperty("http.nonProxyHosts"_s, "host1.*"_s);
	$var($ProxySelector, sel, $ProxySelector::getDefault());
	$var($List, l, $nc(sel)->select($$new($URI, "http://HOST1.sun.com/"_s)));
	$init($Proxy);
	if (!$equals($nc(l)->get(0), $Proxy::NO_PROXY)) {
		$throwNew($RuntimeException, "ProxySelector returned the wrong proxy"_s);
	}
}

B6563259::B6563259() {
}

$Class* B6563259::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(B6563259, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(B6563259, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"B6563259",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(B6563259, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(B6563259);
	});
	return class$;
}

$Class* B6563259::class$ = nullptr;