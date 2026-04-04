#include <java/net/Inet6Address$Inet6AddressHolder.h>
#include <java/net/Inet6Address.h>
#include <java/net/NetworkInterface.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Inet6Address = ::java::net::Inet6Address;
using $NetworkInterface = ::java::net::NetworkInterface;
using $Arrays = ::java::util::Arrays;

namespace java {
	namespace net {

void Inet6Address$Inet6AddressHolder::init$() {
	$set(this, ipaddress, $new($bytes, 16));
}

void Inet6Address$Inet6AddressHolder::init$($bytes* ipaddress, int32_t scope_id, bool scope_id_set, $NetworkInterface* ifname, bool scope_ifname_set) {
	$set(this, ipaddress, ipaddress);
	this->scope_id = scope_id;
	this->scope_id_set = scope_id_set;
	this->scope_ifname_set = scope_ifname_set;
	$set(this, scope_ifname, ifname);
}

void Inet6Address$Inet6AddressHolder::setAddr($bytes* addr) {
	if ($nc(addr)->length == 16) {
		$System::arraycopy(addr, 0, this->ipaddress, 0, 16);
	}
}

void Inet6Address$Inet6AddressHolder::init($bytes* addr, int32_t scope_id) {
	setAddr(addr);
	if (scope_id >= 0) {
		this->scope_id = scope_id;
		this->scope_id_set = true;
	}
}

void Inet6Address$Inet6AddressHolder::init($bytes* addr, $NetworkInterface* nif) {
	setAddr(addr);
	if (nif != nullptr) {
		this->scope_id = $Inet6Address::deriveNumericScope(this->ipaddress, nif);
		this->scope_id_set = true;
		$set(this, scope_ifname, nif);
		this->scope_ifname_set = true;
	}
}

$String* Inet6Address$Inet6AddressHolder::getHostAddress() {
	$useLocalObjectStack();
	$var($String, s, $Inet6Address::numericToTextFormat(this->ipaddress));
	if (this->scope_ifname != nullptr) {
		$assign(s, $str({s, "%"_s, $(this->scope_ifname->getName())}));
	} else if (this->scope_id_set) {
		$assign(s, $str({s, "%"_s, $$str(this->scope_id)}));
	}
	return s;
}

bool Inet6Address$Inet6AddressHolder::equals(Object$* o) {
	$var(Inet6Address$Inet6AddressHolder, that, nullptr);
	bool var$0 = $instanceOf(Inet6Address$Inet6AddressHolder, o);
	if (var$0) {
		$assign(that, $cast(Inet6Address$Inet6AddressHolder, o));
		var$0 = true;
	}
	if (!(var$0)) {
		return false;
	}
	return $Arrays::equals(this->ipaddress, $nc(that)->ipaddress);
}

int32_t Inet6Address$Inet6AddressHolder::hashCode() {
	if (this->ipaddress != nullptr) {
		int32_t hash = 0;
		int32_t i = 0;
		while (i < 16) {
			int32_t j = 0;
			int32_t component = 0;
			while (j < 4 && i < 16) {
				component = (component << 8) + this->ipaddress->get(i);
				++j;
				++i;
			}
			hash += component;
		}
		return hash;
	} else {
		return 0;
	}
}

bool Inet6Address$Inet6AddressHolder::isIPv4CompatibleAddress() {
	if (($nc(this->ipaddress)->get(0) == 0) && (this->ipaddress->get(1) == 0) && (this->ipaddress->get(2) == 0) && (this->ipaddress->get(3) == 0) && (this->ipaddress->get(4) == 0) && (this->ipaddress->get(5) == 0) && (this->ipaddress->get(6) == 0) && (this->ipaddress->get(7) == 0) && (this->ipaddress->get(8) == 0) && (this->ipaddress->get(9) == 0) && (this->ipaddress->get(10) == 0) && (this->ipaddress->get(11) == 0)) {
		return true;
	}
	return false;
}

bool Inet6Address$Inet6AddressHolder::isMulticastAddress() {
	return (($nc(this->ipaddress)->get(0) & 0xff) == 0xff);
}

bool Inet6Address$Inet6AddressHolder::isAnyLocalAddress() {
	int8_t test = 0;
	for (int32_t i = 0; i < 16; ++i) {
		test |= $nc(this->ipaddress)->get(i);
	}
	return (test == 0);
}

bool Inet6Address$Inet6AddressHolder::isLoopbackAddress() {
	int8_t test = 0;
	for (int32_t i = 0; i < 15; ++i) {
		test |= $nc(this->ipaddress)->get(i);
	}
	return (test == 0) && ($nc(this->ipaddress)->get(15) == 1);
}

bool Inet6Address$Inet6AddressHolder::isLinkLocalAddress() {
	return (($nc(this->ipaddress)->get(0) & 0xff) == 0xfe && (this->ipaddress->get(1) & 0xc0) == 0x80);
}

bool Inet6Address$Inet6AddressHolder::isSiteLocalAddress() {
	return (($nc(this->ipaddress)->get(0) & 0xff) == 0xfe && (this->ipaddress->get(1) & 0xc0) == 0xc0);
}

bool Inet6Address$Inet6AddressHolder::isMCGlobal() {
	return (($nc(this->ipaddress)->get(0) & 0xff) == 0xff && (this->ipaddress->get(1) & 0x0f) == 0x0e);
}

bool Inet6Address$Inet6AddressHolder::isMCNodeLocal() {
	return (($nc(this->ipaddress)->get(0) & 0xff) == 0xff && (this->ipaddress->get(1) & 0x0f) == 1);
}

bool Inet6Address$Inet6AddressHolder::isMCLinkLocal() {
	return (($nc(this->ipaddress)->get(0) & 0xff) == 0xff && (this->ipaddress->get(1) & 0x0f) == 2);
}

bool Inet6Address$Inet6AddressHolder::isMCSiteLocal() {
	return (($nc(this->ipaddress)->get(0) & 0xff) == 0xff && (this->ipaddress->get(1) & 0x0f) == 5);
}

bool Inet6Address$Inet6AddressHolder::isMCOrgLocal() {
	return (($nc(this->ipaddress)->get(0) & 0xff) == 0xff && (this->ipaddress->get(1) & 0x0f) == 8);
}

Inet6Address$Inet6AddressHolder::Inet6Address$Inet6AddressHolder() {
}

$Class* Inet6Address$Inet6AddressHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ipaddress", "[B", nullptr, 0, $field(Inet6Address$Inet6AddressHolder, ipaddress)},
		{"scope_id", "I", nullptr, 0, $field(Inet6Address$Inet6AddressHolder, scope_id)},
		{"scope_id_set", "Z", nullptr, 0, $field(Inet6Address$Inet6AddressHolder, scope_id_set)},
		{"scope_ifname", "Ljava/net/NetworkInterface;", nullptr, 0, $field(Inet6Address$Inet6AddressHolder, scope_ifname)},
		{"scope_ifname_set", "Z", nullptr, 0, $field(Inet6Address$Inet6AddressHolder, scope_ifname_set)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Inet6Address$Inet6AddressHolder, init$, void)},
		{"<init>", "([BIZLjava/net/NetworkInterface;Z)V", nullptr, $PRIVATE, $method(Inet6Address$Inet6AddressHolder, init$, void, $bytes*, int32_t, bool, $NetworkInterface*, bool)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Inet6Address$Inet6AddressHolder, equals, bool, Object$*)},
		{"getHostAddress", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(Inet6Address$Inet6AddressHolder, getHostAddress, $String*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(Inet6Address$Inet6AddressHolder, hashCode, int32_t)},
		{"init", "([BI)V", nullptr, 0, $virtualMethod(Inet6Address$Inet6AddressHolder, init, void, $bytes*, int32_t)},
		{"init", "([BLjava/net/NetworkInterface;)V", nullptr, 0, $virtualMethod(Inet6Address$Inet6AddressHolder, init, void, $bytes*, $NetworkInterface*), "java.net.UnknownHostException"},
		{"isAnyLocalAddress", "()Z", nullptr, 0, $virtualMethod(Inet6Address$Inet6AddressHolder, isAnyLocalAddress, bool)},
		{"isIPv4CompatibleAddress", "()Z", nullptr, 0, $virtualMethod(Inet6Address$Inet6AddressHolder, isIPv4CompatibleAddress, bool)},
		{"isLinkLocalAddress", "()Z", nullptr, 0, $virtualMethod(Inet6Address$Inet6AddressHolder, isLinkLocalAddress, bool)},
		{"isLoopbackAddress", "()Z", nullptr, 0, $virtualMethod(Inet6Address$Inet6AddressHolder, isLoopbackAddress, bool)},
		{"isMCGlobal", "()Z", nullptr, 0, $virtualMethod(Inet6Address$Inet6AddressHolder, isMCGlobal, bool)},
		{"isMCLinkLocal", "()Z", nullptr, 0, $virtualMethod(Inet6Address$Inet6AddressHolder, isMCLinkLocal, bool)},
		{"isMCNodeLocal", "()Z", nullptr, 0, $virtualMethod(Inet6Address$Inet6AddressHolder, isMCNodeLocal, bool)},
		{"isMCOrgLocal", "()Z", nullptr, 0, $virtualMethod(Inet6Address$Inet6AddressHolder, isMCOrgLocal, bool)},
		{"isMCSiteLocal", "()Z", nullptr, 0, $virtualMethod(Inet6Address$Inet6AddressHolder, isMCSiteLocal, bool)},
		{"isMulticastAddress", "()Z", nullptr, 0, $virtualMethod(Inet6Address$Inet6AddressHolder, isMulticastAddress, bool)},
		{"isSiteLocalAddress", "()Z", nullptr, 0, $virtualMethod(Inet6Address$Inet6AddressHolder, isSiteLocalAddress, bool)},
		{"setAddr", "([B)V", nullptr, 0, $virtualMethod(Inet6Address$Inet6AddressHolder, setAddr, void, $bytes*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.Inet6Address$Inet6AddressHolder", "java.net.Inet6Address", "Inet6AddressHolder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.net.Inet6Address$Inet6AddressHolder",
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
		"java.net.Inet6Address"
	};
	$loadClass(Inet6Address$Inet6AddressHolder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Inet6Address$Inet6AddressHolder);
	});
	return class$;
}

$Class* Inet6Address$Inet6AddressHolder::class$ = nullptr;

	} // net
} // java