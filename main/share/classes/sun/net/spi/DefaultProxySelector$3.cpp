#include <sun/net/spi/DefaultProxySelector$3.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/Proxy$Type.h>
#include <java/net/Proxy.h>
#include <java/util/regex/Pattern.h>
#include <sun/net/NetProperties.h>
#include <sun/net/SocksProxy.h>
#include <sun/net/spi/DefaultProxySelector$NonProxyInfo.h>
#include <sun/net/spi/DefaultProxySelector.h>
#include <jcpp.h>

#undef HTTP

using $ProxyArray = $Array<::java::net::Proxy>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $Proxy = ::java::net::Proxy;
using $Proxy$Type = ::java::net::Proxy$Type;
using $NetProperties = ::sun::net::NetProperties;
using $SocksProxy = ::sun::net::SocksProxy;
using $DefaultProxySelector = ::sun::net::spi::DefaultProxySelector;
using $DefaultProxySelector$NonProxyInfo = ::sun::net::spi::DefaultProxySelector$NonProxyInfo;

namespace sun {
	namespace net {
		namespace spi {

void DefaultProxySelector$3::init$($DefaultProxySelector* this$0, $String* val$proto, $String* val$urlhost, $DefaultProxySelector$NonProxyInfo* val$nprop) {
	$set(this, this$0, this$0);
	$set(this, val$proto, val$proto);
	$set(this, val$urlhost, val$urlhost);
	$set(this, val$nprop, val$nprop);
}

$Object* DefaultProxySelector$3::run() {
	$useLocalObjectStack();
	int32_t i = 0;
	int32_t j = 0;
	$var($String, phost, nullptr);
	int32_t pport = 0;
	$var($String, nphosts, nullptr);
	$var($InetSocketAddress, saddr, nullptr);
	$init($DefaultProxySelector);
	for (i = 0; i < $nc($DefaultProxySelector::props)->length; ++i) {
		if ($nc($nc($DefaultProxySelector::props->get(i))->get(0))->equalsIgnoreCase(this->val$proto)) {
			for (j = 1; j < $nc($DefaultProxySelector::props->get(i))->length; ++j) {
				$assign(phost, $NetProperties::get($$str({$nc($DefaultProxySelector::props->get(i))->get(j), "Host"_s})));
				if (phost != nullptr && phost->length() != 0) {
					break;
				}
			}
			if (phost == nullptr || phost->isEmpty()) {
				if ($DefaultProxySelector::hasSystemProxies) {
					$var($String, sproto, nullptr);
					if ($nc(this->val$proto)->equalsIgnoreCase("socket"_s)) {
						$assign(sproto, "socks"_s);
					} else {
						$assign(sproto, this->val$proto);
					}
					return this->this$0->getSystemProxies(sproto, this->val$urlhost);
				}
				return nullptr;
			}
			if (this->val$nprop != nullptr) {
				$assign(nphosts, $NetProperties::get(this->val$nprop->property));
				$synchronized(this->val$nprop) {
					if (nphosts == nullptr) {
						if (this->val$nprop->defaultVal != nullptr) {
							$assign(nphosts, this->val$nprop->defaultVal);
						} else {
							$set(this->val$nprop, hostsSource, nullptr);
							$set(this->val$nprop, pattern, nullptr);
						}
					} else if (!nphosts->isEmpty()) {
						$plusAssign(nphosts, $$str({"|"_s, $DefaultProxySelector$NonProxyInfo::defStringVal}));
					}
					if (nphosts != nullptr) {
						if (!nphosts->equals(this->val$nprop->hostsSource)) {
							$set(this->val$nprop, pattern, $DefaultProxySelector::toPattern(nphosts));
							$set(this->val$nprop, hostsSource, nphosts);
						}
					}
					if ($DefaultProxySelector::shouldNotUseProxyFor(this->val$nprop->pattern, this->val$urlhost)) {
						return nullptr;
					}
				}
			}
			pport = $$nc($NetProperties::getInteger($$str({$nc($DefaultProxySelector::props->get(i))->get(j), "Port"_s}), 0))->intValue();
			if (pport == 0 && j < ($nc($DefaultProxySelector::props->get(i))->length - 1)) {
				for (int32_t k = 1; k < ($nc($DefaultProxySelector::props->get(i))->length - 1); ++k) {
					if ((k != j) && (pport == 0)) {
						pport = $$nc($NetProperties::getInteger($$str({$nc($DefaultProxySelector::props->get(i))->get(k), "Port"_s}), 0))->intValue();
					}
				}
			}
			if (pport == 0) {
				if (j == ($nc($DefaultProxySelector::props->get(i))->length - 1)) {
					pport = this->this$0->defaultPort("socket"_s);
				} else {
					pport = this->this$0->defaultPort(this->val$proto);
				}
			}
			$assign(saddr, $InetSocketAddress::createUnresolved(phost, pport));
			if (j == ($nc($DefaultProxySelector::props->get(i))->length - 1)) {
				return $new($ProxyArray, {$($SocksProxy::create(saddr, $DefaultProxySelector::socksProxyVersion()))});
			}
			$init($Proxy$Type);
			return $new($ProxyArray, {$$new($Proxy, $Proxy$Type::HTTP, saddr)});
		}
	}
	return nullptr;
}

DefaultProxySelector$3::DefaultProxySelector$3() {
}

$Class* DefaultProxySelector$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/net/spi/DefaultProxySelector;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultProxySelector$3, this$0)},
		{"val$nprop", "Lsun/net/spi/DefaultProxySelector$NonProxyInfo;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultProxySelector$3, val$nprop)},
		{"val$urlhost", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultProxySelector$3, val$urlhost)},
		{"val$proto", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultProxySelector$3, val$proto)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/net/spi/DefaultProxySelector;Ljava/lang/String;Ljava/lang/String;Lsun/net/spi/DefaultProxySelector$NonProxyInfo;)V", "()V", 0, $method(DefaultProxySelector$3, init$, void, $DefaultProxySelector*, $String*, $String*, $DefaultProxySelector$NonProxyInfo*)},
		{"run", "()[Ljava/net/Proxy;", nullptr, $PUBLIC, $virtualMethod(DefaultProxySelector$3, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.net.spi.DefaultProxySelector",
		"select",
		"(Ljava/net/URI;)Ljava/util/List;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.spi.DefaultProxySelector$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.spi.DefaultProxySelector$3",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<[Ljava/net/Proxy;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.net.spi.DefaultProxySelector"
	};
	$loadClass(DefaultProxySelector$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultProxySelector$3);
	});
	return class$;
}

$Class* DefaultProxySelector$3::class$ = nullptr;

		} // spi
	} // net
} // sun