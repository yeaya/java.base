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

$FieldInfo _Inet6Address$Inet6AddressHolder_FieldInfo_[] = {
	{"ipaddress", "[B", nullptr, 0, $field(Inet6Address$Inet6AddressHolder, ipaddress)},
	{"scope_id", "I", nullptr, 0, $field(Inet6Address$Inet6AddressHolder, scope_id)},
	{"scope_id_set", "Z", nullptr, 0, $field(Inet6Address$Inet6AddressHolder, scope_id_set)},
	{"scope_ifname", "Ljava/net/NetworkInterface;", nullptr, 0, $field(Inet6Address$Inet6AddressHolder, scope_ifname)},
	{"scope_ifname_set", "Z", nullptr, 0, $field(Inet6Address$Inet6AddressHolder, scope_ifname_set)},
	{}
};

$MethodInfo _Inet6Address$Inet6AddressHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Inet6Address$Inet6AddressHolder::*)()>(&Inet6Address$Inet6AddressHolder::init$))},
	{"<init>", "([BIZLjava/net/NetworkInterface;Z)V", nullptr, $PRIVATE, $method(static_cast<void(Inet6Address$Inet6AddressHolder::*)($bytes*,int32_t,bool,$NetworkInterface*,bool)>(&Inet6Address$Inet6AddressHolder::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getHostAddress", "()Ljava/lang/String;", nullptr, 0},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"init", "([BI)V", nullptr, 0},
	{"init", "([BLjava/net/NetworkInterface;)V", nullptr, 0, nullptr, "java.net.UnknownHostException"},
	{"isAnyLocalAddress", "()Z", nullptr, 0},
	{"isIPv4CompatibleAddress", "()Z", nullptr, 0},
	{"isLinkLocalAddress", "()Z", nullptr, 0},
	{"isLoopbackAddress", "()Z", nullptr, 0},
	{"isMCGlobal", "()Z", nullptr, 0},
	{"isMCLinkLocal", "()Z", nullptr, 0},
	{"isMCNodeLocal", "()Z", nullptr, 0},
	{"isMCOrgLocal", "()Z", nullptr, 0},
	{"isMCSiteLocal", "()Z", nullptr, 0},
	{"isMulticastAddress", "()Z", nullptr, 0},
	{"isSiteLocalAddress", "()Z", nullptr, 0},
	{"setAddr", "([B)V", nullptr, 0},
	{}
};

$InnerClassInfo _Inet6Address$Inet6AddressHolder_InnerClassesInfo_[] = {
	{"java.net.Inet6Address$Inet6AddressHolder", "java.net.Inet6Address", "Inet6AddressHolder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Inet6Address$Inet6AddressHolder_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.Inet6Address$Inet6AddressHolder",
	"java.lang.Object",
	nullptr,
	_Inet6Address$Inet6AddressHolder_FieldInfo_,
	_Inet6Address$Inet6AddressHolder_MethodInfo_,
	nullptr,
	nullptr,
	_Inet6Address$Inet6AddressHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.Inet6Address"
};

$Object* allocate$Inet6Address$Inet6AddressHolder($Class* clazz) {
	return $of($alloc(Inet6Address$Inet6AddressHolder));
}

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
	$useLocalCurrentObjectStackCache();
	$var($String, s, $Inet6Address::numericToTextFormat(this->ipaddress));
	if (this->scope_ifname != nullptr) {
		$assign(s, $str({s, "%"_s, $($nc(this->scope_ifname)->getName())}));
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
				component = (component << 8) + $nc(this->ipaddress)->get(i);
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
	if (($nc(this->ipaddress)->get(0) == 0) && ($nc(this->ipaddress)->get(1) == 0) && ($nc(this->ipaddress)->get(2) == 0) && ($nc(this->ipaddress)->get(3) == 0) && ($nc(this->ipaddress)->get(4) == 0) && ($nc(this->ipaddress)->get(5) == 0) && ($nc(this->ipaddress)->get(6) == 0) && ($nc(this->ipaddress)->get(7) == 0) && ($nc(this->ipaddress)->get(8) == 0) && ($nc(this->ipaddress)->get(9) == 0) && ($nc(this->ipaddress)->get(10) == 0) && ($nc(this->ipaddress)->get(11) == 0)) {
		return true;
	}
	return false;
}

bool Inet6Address$Inet6AddressHolder::isMulticastAddress() {
	return (((int32_t)($nc(this->ipaddress)->get(0) & (uint32_t)255)) == 255);
}

bool Inet6Address$Inet6AddressHolder::isAnyLocalAddress() {
	int8_t test = (int8_t)0;
	for (int32_t i = 0; i < 16; ++i) {
		test |= $nc(this->ipaddress)->get(i);
	}
	return (test == 0);
}

bool Inet6Address$Inet6AddressHolder::isLoopbackAddress() {
	int8_t test = (int8_t)0;
	for (int32_t i = 0; i < 15; ++i) {
		test |= $nc(this->ipaddress)->get(i);
	}
	return (test == 0) && ($nc(this->ipaddress)->get(15) == 1);
}

bool Inet6Address$Inet6AddressHolder::isLinkLocalAddress() {
	return (((int32_t)($nc(this->ipaddress)->get(0) & (uint32_t)255)) == 254 && ((int32_t)($nc(this->ipaddress)->get(1) & (uint32_t)192)) == 128);
}

bool Inet6Address$Inet6AddressHolder::isSiteLocalAddress() {
	return (((int32_t)($nc(this->ipaddress)->get(0) & (uint32_t)255)) == 254 && ((int32_t)($nc(this->ipaddress)->get(1) & (uint32_t)192)) == 192);
}

bool Inet6Address$Inet6AddressHolder::isMCGlobal() {
	return (((int32_t)($nc(this->ipaddress)->get(0) & (uint32_t)255)) == 255 && ((int32_t)($nc(this->ipaddress)->get(1) & (uint32_t)15)) == 14);
}

bool Inet6Address$Inet6AddressHolder::isMCNodeLocal() {
	return (((int32_t)($nc(this->ipaddress)->get(0) & (uint32_t)255)) == 255 && ((int32_t)($nc(this->ipaddress)->get(1) & (uint32_t)15)) == 1);
}

bool Inet6Address$Inet6AddressHolder::isMCLinkLocal() {
	return (((int32_t)($nc(this->ipaddress)->get(0) & (uint32_t)255)) == 255 && ((int32_t)($nc(this->ipaddress)->get(1) & (uint32_t)15)) == 2);
}

bool Inet6Address$Inet6AddressHolder::isMCSiteLocal() {
	return (((int32_t)($nc(this->ipaddress)->get(0) & (uint32_t)255)) == 255 && ((int32_t)($nc(this->ipaddress)->get(1) & (uint32_t)15)) == 5);
}

bool Inet6Address$Inet6AddressHolder::isMCOrgLocal() {
	return (((int32_t)($nc(this->ipaddress)->get(0) & (uint32_t)255)) == 255 && ((int32_t)($nc(this->ipaddress)->get(1) & (uint32_t)15)) == 8);
}

Inet6Address$Inet6AddressHolder::Inet6Address$Inet6AddressHolder() {
}

$Class* Inet6Address$Inet6AddressHolder::load$($String* name, bool initialize) {
	$loadClass(Inet6Address$Inet6AddressHolder, name, initialize, &_Inet6Address$Inet6AddressHolder_ClassInfo_, allocate$Inet6Address$Inet6AddressHolder);
	return class$;
}

$Class* Inet6Address$Inet6AddressHolder::class$ = nullptr;

	} // net
} // java