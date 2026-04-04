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

$StringArray* B6737819::uris = nullptr;

void B6737819::init$() {
}

void B6737819::main($StringArray* args) {
	$init(B6737819);
	$useLocalObjectStack();
	$System::setProperty("http.proxyHost"_s, "myproxy"_s);
	$System::setProperty("http.proxyPort"_s, "8080"_s);
	$var($ProxySelector, sel, $ProxySelector::getDefault());
	$var($List, l, nullptr);
	{
		$var($StringArray, arr$, B6737819::uris);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($String, s, arr$->get(i$));
			{
				$assign(l, $nc(sel)->select($$new($URI, s)));
				bool var$0 = $nc(l)->size() == 1;
				$init($Proxy$Type);
				if (var$0 && $$sure($Proxy, l->get(0))->type() != $Proxy$Type::DIRECT) {
					$throwNew($RuntimeException, $$str({"ProxySelector returned the wrong proxy for "_s, s}));
				}
			}
		}
	}
	$System::setProperty("http.nonProxyHosts"_s, ""_s);
	{
		$var($StringArray, arr$, B6737819::uris);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($String, s, arr$->get(i$));
			{
				$assign(l, $nc(sel)->select($$new($URI, s)));
				bool var$1 = $nc(l)->size() == 1;
				$init($Proxy$Type);
				if (var$1 && $$sure($Proxy, l->get(0))->type() != $Proxy$Type::HTTP) {
					$throwNew($RuntimeException, $$str({"ProxySelector returned the wrong proxy for "_s, s}));
				}
			}
		}
	}
}

void B6737819::clinit$($Class* clazz) {
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
	$FieldInfo fieldInfos$$[] = {
		{"uris", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(B6737819, uris)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(B6737819, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(B6737819, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"B6737819",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(B6737819, name, initialize, &classInfo$$, B6737819::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(B6737819);
	});
	return class$;
}

$Class* B6737819::class$ = nullptr;