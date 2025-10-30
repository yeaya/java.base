#include <B6737819.h>

#include <java/net/Proxy$Type.h>
#include <java/net/Proxy.h>
#include <java/net/ProxySelector.h>
#include <java/net/URI.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef DIRECT
#undef HTTP

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Proxy = ::java::net::Proxy;
using $Proxy$Type = ::java::net::Proxy$Type;
using $ProxySelector = ::java::net::ProxySelector;
using $URI = ::java::net::URI;
using $List = ::java::util::List;

$FieldInfo _B6737819_FieldInfo_[] = {
	{"uris", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(B6737819, uris)},
	{}
};

$MethodInfo _B6737819_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(B6737819::*)()>(&B6737819::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&B6737819::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _B6737819_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"B6737819",
	"java.lang.Object",
	nullptr,
	_B6737819_FieldInfo_,
	_B6737819_MethodInfo_
};

$Object* allocate$B6737819($Class* clazz) {
	return $of($alloc(B6737819));
}

$StringArray* B6737819::uris = nullptr;

void B6737819::init$() {
}

void B6737819::main($StringArray* args) {
	$init(B6737819);
	$useLocalCurrentObjectStackCache();
	$System::setProperty("http.proxyHost"_s, "myproxy"_s);
	$System::setProperty("http.proxyPort"_s, "8080"_s);
	$var($ProxySelector, sel, $ProxySelector::getDefault());
	$var($List, l, nullptr);
	{
		$var($StringArray, arr$, B6737819::uris);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, s, arr$->get(i$));
			{
				$assign(l, $nc(sel)->select($$new($URI, s)));
				bool var$0 = $nc(l)->size() == 1;
				$init($Proxy$Type);
				if (var$0 && $nc(($cast($Proxy, $(l->get(0)))))->type() != $Proxy$Type::DIRECT) {
					$throwNew($RuntimeException, $$str({"ProxySelector returned the wrong proxy for "_s, s}));
				}
			}
		}
	}
	$System::setProperty("http.nonProxyHosts"_s, ""_s);
	{
		$var($StringArray, arr$, B6737819::uris);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, s, arr$->get(i$));
			{
				$assign(l, $nc(sel)->select($$new($URI, s)));
				bool var$1 = $nc(l)->size() == 1;
				$init($Proxy$Type);
				if (var$1 && $nc(($cast($Proxy, $(l->get(0)))))->type() != $Proxy$Type::HTTP) {
					$throwNew($RuntimeException, $$str({"ProxySelector returned the wrong proxy for "_s, s}));
				}
			}
		}
	}
}

void clinit$B6737819($Class* class$) {
	$assignStatic(B6737819::uris, $new($StringArray, {
		"http://localhost/index.html"_s,
		"http://127.0.0.1/index.html"_s,
		"http://127.2/index.html"_s,
		"http://[::1]/index.html"_s
	}));
}

B6737819::B6737819() {
}

$Class* B6737819::load$($String* name, bool initialize) {
	$loadClass(B6737819, name, initialize, &_B6737819_ClassInfo_, clinit$B6737819, allocate$B6737819);
	return class$;
}

$Class* B6737819::class$ = nullptr;