#include <java/net/ProxySelector$StaticProxySelector.h>
#include <java/io/IOException.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/Proxy$Type.h>
#include <java/net/Proxy.h>
#include <java/net/ProxySelector.h>
#include <java/net/SocketAddress.h>
#include <java/net/URI.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef HTTP
#undef NO_PROXY
#undef NO_PROXY_LIST

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $Proxy = ::java::net::Proxy;
using $Proxy$Type = ::java::net::Proxy$Type;
using $ProxySelector = ::java::net::ProxySelector;
using $SocketAddress = ::java::net::SocketAddress;
using $URI = ::java::net::URI;
using $List = ::java::util::List;

namespace java {
	namespace net {

$List* ProxySelector$StaticProxySelector::NO_PROXY_LIST = nullptr;

void ProxySelector$StaticProxySelector::init$($InetSocketAddress* address) {
	$ProxySelector::init$();
	$var($Proxy, p, nullptr);
	if (address == nullptr) {
		$init($Proxy);
		$assign(p, $Proxy::NO_PROXY);
	} else {
		$init($Proxy$Type);
		$assign(p, $new($Proxy, $Proxy$Type::HTTP, address));
	}
	$set(this, list, $List::of(p));
}

void ProxySelector$StaticProxySelector::connectFailed($URI* uri, $SocketAddress* sa, $IOException* e) {
}

$List* ProxySelector$StaticProxySelector::select($URI* uri) {
	$synchronized(this) {
		$useLocalObjectStack();
		$var($String, scheme, $$nc($nc(uri)->getScheme())->toLowerCase());
		bool var$0 = scheme->equals("http"_s);
		if (var$0 || scheme->equals("https"_s)) {
			return this->list;
		} else {
			return ProxySelector$StaticProxySelector::NO_PROXY_LIST;
		}
	}
}

void ProxySelector$StaticProxySelector::clinit$($Class* clazz) {
	$init($Proxy);
	$assignStatic(ProxySelector$StaticProxySelector::NO_PROXY_LIST, $List::of($Proxy::NO_PROXY));
}

ProxySelector$StaticProxySelector::ProxySelector$StaticProxySelector() {
}

$Class* ProxySelector$StaticProxySelector::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NO_PROXY_LIST", "Ljava/util/List;", "Ljava/util/List<Ljava/net/Proxy;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ProxySelector$StaticProxySelector, NO_PROXY_LIST)},
		{"list", "Ljava/util/List;", "Ljava/util/List<Ljava/net/Proxy;>;", $FINAL, $field(ProxySelector$StaticProxySelector, list)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/InetSocketAddress;)V", nullptr, 0, $method(ProxySelector$StaticProxySelector, init$, void, $InetSocketAddress*)},
		{"connectFailed", "(Ljava/net/URI;Ljava/net/SocketAddress;Ljava/io/IOException;)V", nullptr, $PUBLIC, $virtualMethod(ProxySelector$StaticProxySelector, connectFailed, void, $URI*, $SocketAddress*, $IOException*)},
		{"select", "(Ljava/net/URI;)Ljava/util/List;", "(Ljava/net/URI;)Ljava/util/List<Ljava/net/Proxy;>;", $PUBLIC | $SYNCHRONIZED, $virtualMethod(ProxySelector$StaticProxySelector, select, $List*, $URI*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.ProxySelector$StaticProxySelector", "java.net.ProxySelector", "StaticProxySelector", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.net.ProxySelector$StaticProxySelector",
		"java.net.ProxySelector",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.net.ProxySelector"
	};
	$loadClass(ProxySelector$StaticProxySelector, name, initialize, &classInfo$$, ProxySelector$StaticProxySelector::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ProxySelector$StaticProxySelector);
	});
	return class$;
}

$Class* ProxySelector$StaticProxySelector::class$ = nullptr;

	} // net
} // java