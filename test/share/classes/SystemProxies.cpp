#include <SystemProxies.h>
#include <java/net/Proxy.h>
#include <java/net/ProxySelector.h>
#include <java/net/URI.h>
#include <java/net/URISyntaxException.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Proxy = ::java::net::Proxy;
using $ProxySelector = ::java::net::ProxySelector;
using $URI = ::java::net::URI;
using $URISyntaxException = ::java::net::URISyntaxException;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;

$StringArray* SystemProxies::uriAuthority = nullptr;
$ProxySelector* SystemProxies::proxySel = nullptr;

void SystemProxies::init$() {
}

void SystemProxies::main($StringArray* args) {
	$init(SystemProxies);
	if (!"true"_s->equals($($System::getProperty("java.net.useSystemProxies"_s)))) {
		$nc($System::out)->println("Usage: java -Djava.net.useSystemProxies=true SystemProxies"_s);
		return;
	}
	printProxies("http://"_s);
	printProxies("https://"_s);
	printProxies("ftp://"_s);
	printProxies("none://"_s);
	printProxies("rtsp://"_s);
	printProxies("socket://"_s);
}

void SystemProxies::printProxies($String* proto) {
	$init(SystemProxies);
	$useLocalObjectStack();
	$nc($System::out)->println($$str({"Protocol:"_s, proto}));
	{
		$var($StringArray, arr$, SystemProxies::uriAuthority);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, uri, arr$->get(i$));
			{
				$var($String, uriStr, $str({proto, uri}));
				try {
					$var($List, proxies, $nc(SystemProxies::proxySel)->select($$new($URI, uriStr)));
					$System::out->println($$str({"\tProxies returned for "_s, uriStr}));
					{
						$var($Iterator, i$, $nc(proxies)->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($Proxy, proxy, $cast($Proxy, i$->next()));
							$System::out->println($$str({"\t\t"_s, proxy}));
						}
					}
				} catch ($URISyntaxException& e) {
					$nc($System::err)->println($of(e));
				}
			}
		}
	}
}

void SystemProxies::clinit$($Class* clazz) {
	$assignStatic(SystemProxies::uriAuthority, $new($StringArray, {
		"myMachine/"_s,
		"local"_s,
		"localhost"_s,
		"127.0.0.1"_s,
		"127.0.0.123"_s,
		"127.0.2.2"_s,
		"127.3.3.3"_s,
		"128.0.0.1"_s
	}));
	$assignStatic(SystemProxies::proxySel, $ProxySelector::getDefault());
}

SystemProxies::SystemProxies() {
}

$Class* SystemProxies::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"uriAuthority", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(SystemProxies, uriAuthority)},
		{"proxySel", "Ljava/net/ProxySelector;", nullptr, $STATIC | $FINAL, $staticField(SystemProxies, proxySel)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SystemProxies, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SystemProxies, main, void, $StringArray*)},
		{"printProxies", "(Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(SystemProxies, printProxies, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"SystemProxies",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SystemProxies, name, initialize, &classInfo$$, SystemProxies::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SystemProxies);
	});
	return class$;
}

$Class* SystemProxies::class$ = nullptr;