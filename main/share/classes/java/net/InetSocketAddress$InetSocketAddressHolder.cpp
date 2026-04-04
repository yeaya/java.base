#include <java/net/InetSocketAddress$InetSocketAddressHolder.h>
#include <java/net/Inet6Address.h>
#include <java/net/InetAddress$InetAddressHolder.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Inet6Address = ::java::net::Inet6Address;
using $InetAddress = ::java::net::InetAddress;

namespace java {
	namespace net {

void InetSocketAddress$InetSocketAddressHolder::init$($String* hostname, $InetAddress* addr, int32_t port) {
	$set(this, hostname, hostname);
	$set(this, addr, addr);
	this->port = port;
}

int32_t InetSocketAddress$InetSocketAddressHolder::getPort() {
	return this->port;
}

$InetAddress* InetSocketAddress$InetSocketAddressHolder::getAddress() {
	return this->addr;
}

$String* InetSocketAddress$InetSocketAddressHolder::getHostName() {
	if (this->hostname != nullptr) {
		return this->hostname;
	}
	if (this->addr != nullptr) {
		return this->addr->getHostName();
	}
	return nullptr;
}

$String* InetSocketAddress$InetSocketAddressHolder::getHostString() {
	$useLocalObjectStack();
	if (this->hostname != nullptr) {
		return this->hostname;
	}
	if (this->addr != nullptr) {
		if ($$nc(this->addr->holder())->getHostName() != nullptr) {
			return $$nc(this->addr->holder())->getHostName();
		} else {
			return this->addr->getHostAddress();
		}
	}
	return nullptr;
}

bool InetSocketAddress$InetSocketAddressHolder::isUnresolved() {
	return this->addr == nullptr;
}

$String* InetSocketAddress$InetSocketAddressHolder::toString() {
	$useLocalObjectStack();
	$var($String, formatted, nullptr);
	if (isUnresolved()) {
		$assign(formatted, $str({this->hostname, "/<unresolved>"_s}));
	} else {
		$assign(formatted, $nc(this->addr)->toString());
		if ($instanceOf($Inet6Address, this->addr)) {
			int32_t i = $nc(formatted)->lastIndexOf("/"_s);
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append($(formatted->substring(0, i + 1)));
			var$0->append("["_s);
			var$0->append($(formatted->substring(i + 1)));
			var$0->append("]"_s);
			$assign(formatted, $str(var$0));
		}
	}
	return $str({formatted, ":"_s, $$str(this->port)});
}

bool InetSocketAddress$InetSocketAddressHolder::equals(Object$* obj) {
	$var(InetSocketAddress$InetSocketAddressHolder, that, nullptr);
	bool var$0 = $instanceOf(InetSocketAddress$InetSocketAddressHolder, obj);
	if (var$0) {
		$assign(that, $cast(InetSocketAddress$InetSocketAddressHolder, obj));
		var$0 = true;
	}
	if (!(var$0)) {
		return false;
	}
	bool sameIP = false;
	if (this->addr != nullptr) {
		sameIP = this->addr->equals($nc(that)->addr);
	} else if (this->hostname != nullptr) {
		sameIP = ($nc(that)->addr == nullptr) && this->hostname->equalsIgnoreCase(that->hostname);
	} else {
		sameIP = ($nc(that)->addr == nullptr) && (that->hostname == nullptr);
	}
	return sameIP && (this->port == $nc(that)->port);
}

int32_t InetSocketAddress$InetSocketAddressHolder::hashCode() {
	if (this->addr != nullptr) {
		return this->addr->hashCode() + this->port;
	}
	if (this->hostname != nullptr) {
		return $(this->hostname->toLowerCase())->hashCode() + this->port;
	}
	return this->port;
}

InetSocketAddress$InetSocketAddressHolder::InetSocketAddress$InetSocketAddressHolder() {
}

$Class* InetSocketAddress$InetSocketAddressHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"hostname", "Ljava/lang/String;", nullptr, $PRIVATE, $field(InetSocketAddress$InetSocketAddressHolder, hostname)},
		{"addr", "Ljava/net/InetAddress;", nullptr, $PRIVATE, $field(InetSocketAddress$InetSocketAddressHolder, addr)},
		{"port", "I", nullptr, $PRIVATE, $field(InetSocketAddress$InetSocketAddressHolder, port)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/net/InetAddress;I)V", nullptr, $PRIVATE, $method(InetSocketAddress$InetSocketAddressHolder, init$, void, $String*, $InetAddress*, int32_t)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(InetSocketAddress$InetSocketAddressHolder, equals, bool, Object$*)},
		{"getAddress", "()Ljava/net/InetAddress;", nullptr, $PRIVATE, $method(InetSocketAddress$InetSocketAddressHolder, getAddress, $InetAddress*)},
		{"getHostName", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(InetSocketAddress$InetSocketAddressHolder, getHostName, $String*)},
		{"getHostString", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(InetSocketAddress$InetSocketAddressHolder, getHostString, $String*)},
		{"getPort", "()I", nullptr, $PRIVATE, $method(InetSocketAddress$InetSocketAddressHolder, getPort, int32_t)},
		{"hashCode", "()I", nullptr, $PUBLIC | $FINAL, $virtualMethod(InetSocketAddress$InetSocketAddressHolder, hashCode, int32_t)},
		{"isUnresolved", "()Z", nullptr, $PRIVATE, $method(InetSocketAddress$InetSocketAddressHolder, isUnresolved, bool)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(InetSocketAddress$InetSocketAddressHolder, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.InetSocketAddress$InetSocketAddressHolder", "java.net.InetSocketAddress", "InetSocketAddressHolder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.net.InetSocketAddress$InetSocketAddressHolder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.net.InetSocketAddress"
	};
	$loadClass(InetSocketAddress$InetSocketAddressHolder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InetSocketAddress$InetSocketAddressHolder);
	});
	return class$;
}

$Class* InetSocketAddress$InetSocketAddressHolder::class$ = nullptr;

	} // net
} // java