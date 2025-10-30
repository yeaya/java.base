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

$MethodInfo _B6563259_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(B6563259::*)()>(&B6563259::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&B6563259::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _B6563259_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"B6563259",
	"java.lang.Object",
	nullptr,
	nullptr,
	_B6563259_MethodInfo_
};

$Object* allocate$B6563259($Class* clazz) {
	return $of($alloc(B6563259));
}

void B6563259::init$() {
}

void B6563259::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
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
	$loadClass(B6563259, name, initialize, &_B6563259_ClassInfo_, allocate$B6563259);
	return class$;
}

$Class* B6563259::class$ = nullptr;