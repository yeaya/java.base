#include <java/net/Inet6Address.h>

#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamField.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/SecurityException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/Inet6Address$Inet6AddressHolder.h>
#include <java/net/InetAddress$InetAddressHolder.h>
#include <java/net/InetAddress.h>
#include <java/net/NetworkInterface.h>
#include <java/net/SocketException.h>
#include <java/net/UnknownHostException.h>
#include <java/util/Enumeration.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef FIELDS_OFFSET
#undef INADDRSZ
#undef INT16SZ
#undef TYPE
#undef UNSAFE

using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectOutputStream$PutField = ::java::io::ObjectOutputStream$PutField;
using $ObjectStreamField = ::java::io::ObjectStreamField;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $Inet6Address$Inet6AddressHolder = ::java::net::Inet6Address$Inet6AddressHolder;
using $InetAddress = ::java::net::InetAddress;
using $InetAddress$InetAddressHolder = ::java::net::InetAddress$InetAddressHolder;
using $NetworkInterface = ::java::net::NetworkInterface;
using $SocketException = ::java::net::SocketException;
using $UnknownHostException = ::java::net::UnknownHostException;
using $Enumeration = ::java::util::Enumeration;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace net {

$FieldInfo _Inet6Address_FieldInfo_[] = {
	{"INADDRSZ", "I", nullptr, $STATIC | $FINAL, $constField(Inet6Address, INADDRSZ)},
	{"holder6", "Ljava/net/Inet6Address$Inet6AddressHolder;", nullptr, $PRIVATE | $FINAL | $TRANSIENT, $field(Inet6Address, holder6)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Inet6Address, serialVersionUID)},
	{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Inet6Address, serialPersistentFields)},
	{"UNSAFE", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Inet6Address, UNSAFE)},
	{"FIELDS_OFFSET", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Inet6Address, FIELDS_OFFSET)},
	{"INT16SZ", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Inet6Address, INT16SZ)},
	{}
};

$MethodInfo _Inet6Address_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Inet6Address::*)()>(&Inet6Address::init$))},
	{"<init>", "(Ljava/lang/String;[BI)V", nullptr, 0, $method(static_cast<void(Inet6Address::*)($String*,$bytes*,int32_t)>(&Inet6Address::init$))},
	{"<init>", "(Ljava/lang/String;[B)V", nullptr, 0, $method(static_cast<void(Inet6Address::*)($String*,$bytes*)>(&Inet6Address::init$))},
	{"<init>", "(Ljava/lang/String;[BLjava/net/NetworkInterface;)V", nullptr, 0, $method(static_cast<void(Inet6Address::*)($String*,$bytes*,$NetworkInterface*)>(&Inet6Address::init$)), "java.net.UnknownHostException"},
	{"<init>", "(Ljava/lang/String;[BLjava/lang/String;)V", nullptr, 0, $method(static_cast<void(Inet6Address::*)($String*,$bytes*,$String*)>(&Inet6Address::init$)), "java.net.UnknownHostException"},
	{"addressBytes", "()[B", nullptr, 0, $method(static_cast<$bytes*(Inet6Address::*)()>(&Inet6Address::addressBytes))},
	{"deriveNumericScope", "([BLjava/net/NetworkInterface;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($bytes*,$NetworkInterface*)>(&Inet6Address::deriveNumericScope)), "java.net.UnknownHostException"},
	{"deriveNumericScope", "(Ljava/lang/String;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(Inet6Address::*)($String*)>(&Inet6Address::deriveNumericScope)), "java.net.UnknownHostException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getAddress", "()[B", nullptr, $PUBLIC},
	{"getByAddress", "(Ljava/lang/String;[BLjava/net/NetworkInterface;)Ljava/net/Inet6Address;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Inet6Address*(*)($String*,$bytes*,$NetworkInterface*)>(&Inet6Address::getByAddress)), "java.net.UnknownHostException"},
	{"getByAddress", "(Ljava/lang/String;[BI)Ljava/net/Inet6Address;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Inet6Address*(*)($String*,$bytes*,int32_t)>(&Inet6Address::getByAddress)), "java.net.UnknownHostException"},
	{"getHostAddress", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getScopeId", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(Inet6Address::*)()>(&Inet6Address::getScopeId))},
	{"getScopedInterface", "()Ljava/net/NetworkInterface;", nullptr, $PUBLIC, $method(static_cast<$NetworkInterface*(Inet6Address::*)()>(&Inet6Address::getScopedInterface))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"init", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&Inet6Address::init))},
	{"initif", "(Ljava/lang/String;[BLjava/net/NetworkInterface;)V", nullptr, $PRIVATE, $method(static_cast<void(Inet6Address::*)($String*,$bytes*,$NetworkInterface*)>(&Inet6Address::initif)), "java.net.UnknownHostException"},
	{"initstr", "(Ljava/lang/String;[BLjava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(Inet6Address::*)($String*,$bytes*,$String*)>(&Inet6Address::initstr)), "java.net.UnknownHostException"},
	{"isAnyLocalAddress", "()Z", nullptr, $PUBLIC},
	{"isDifferentLocalAddressType", "([B[B)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($bytes*,$bytes*)>(&Inet6Address::isDifferentLocalAddressType))},
	{"isIPv4CompatibleAddress", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Inet6Address::*)()>(&Inet6Address::isIPv4CompatibleAddress))},
	{"isLinkLocalAddress", "()Z", nullptr, $PUBLIC},
	{"isLinkLocalAddress", "([B)Z", nullptr, $STATIC, $method(static_cast<bool(*)($bytes*)>(&Inet6Address::isLinkLocalAddress))},
	{"isLoopbackAddress", "()Z", nullptr, $PUBLIC},
	{"isMCGlobal", "()Z", nullptr, $PUBLIC},
	{"isMCLinkLocal", "()Z", nullptr, $PUBLIC},
	{"isMCNodeLocal", "()Z", nullptr, $PUBLIC},
	{"isMCOrgLocal", "()Z", nullptr, $PUBLIC},
	{"isMCSiteLocal", "()Z", nullptr, $PUBLIC},
	{"isMulticastAddress", "()Z", nullptr, $PUBLIC},
	{"isSiteLocalAddress", "()Z", nullptr, $PUBLIC},
	{"isSiteLocalAddress", "([B)Z", nullptr, $STATIC, $method(static_cast<bool(*)($bytes*)>(&Inet6Address::isSiteLocalAddress))},
	{"numericToTextFormat", "([B)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($bytes*)>(&Inet6Address::numericToTextFormat))},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(Inet6Address::*)($ObjectInputStream*)>(&Inet6Address::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(Inet6Address::*)($ObjectOutputStream*)>(&Inet6Address::writeObject)), "java.io.IOException"},
	{}
};

#define _METHOD_INDEX_init 16

$InnerClassInfo _Inet6Address_InnerClassesInfo_[] = {
	{"java.net.Inet6Address$Inet6AddressHolder", "java.net.Inet6Address", "Inet6AddressHolder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Inet6Address_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.net.Inet6Address",
	"java.net.InetAddress",
	nullptr,
	_Inet6Address_FieldInfo_,
	_Inet6Address_MethodInfo_,
	nullptr,
	nullptr,
	_Inet6Address_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.net.Inet6Address$Inet6AddressHolder"
};

$Object* allocate$Inet6Address($Class* clazz) {
	return $of($alloc(Inet6Address));
}


$ObjectStreamFieldArray* Inet6Address::serialPersistentFields = nullptr;
$Unsafe* Inet6Address::UNSAFE = nullptr;
int64_t Inet6Address::FIELDS_OFFSET = 0;

void Inet6Address::init$() {
	$InetAddress::init$();
	$nc(this->holder$)->init(nullptr, $InetAddress::IPv6);
	$set(this, holder6, $new($Inet6Address$Inet6AddressHolder));
}

void Inet6Address::init$($String* hostName, $bytes* addr, int32_t scope_id) {
	$InetAddress::init$();
	$nc(this->holder$)->init(hostName, $InetAddress::IPv6);
	$set(this, holder6, $new($Inet6Address$Inet6AddressHolder));
	$nc(this->holder6)->init(addr, scope_id);
}

void Inet6Address::init$($String* hostName, $bytes* addr) {
	$InetAddress::init$();
	$set(this, holder6, $new($Inet6Address$Inet6AddressHolder));
	try {
		initif(hostName, addr, nullptr);
	} catch ($UnknownHostException&) {
		$catch();
	}
}

void Inet6Address::init$($String* hostName, $bytes* addr, $NetworkInterface* nif) {
	$InetAddress::init$();
	$set(this, holder6, $new($Inet6Address$Inet6AddressHolder));
	initif(hostName, addr, nif);
}

void Inet6Address::init$($String* hostName, $bytes* addr, $String* ifname) {
	$InetAddress::init$();
	$set(this, holder6, $new($Inet6Address$Inet6AddressHolder));
	initstr(hostName, addr, ifname);
}

Inet6Address* Inet6Address::getByAddress($String* host$renamed, $bytes* addr, $NetworkInterface* nif) {
	$init(Inet6Address);
	$var($String, host, host$renamed);
	bool var$0 = host != nullptr && !host->isEmpty();
	if (var$0 && host->charAt(0) == u'[') {
		if (host->charAt(host->length() - 1) == u']') {
			$assign(host, host->substring(1, host->length() - 1));
		}
	}
	if (addr != nullptr) {
		if (addr->length == Inet6Address::INADDRSZ) {
			return $new(Inet6Address, host, addr, nif);
		}
	}
	$throwNew($UnknownHostException, "addr is of illegal length"_s);
}

Inet6Address* Inet6Address::getByAddress($String* host$renamed, $bytes* addr, int32_t scope_id) {
	$init(Inet6Address);
	$var($String, host, host$renamed);
	bool var$0 = host != nullptr && !host->isEmpty();
	if (var$0 && host->charAt(0) == u'[') {
		if (host->charAt(host->length() - 1) == u']') {
			$assign(host, host->substring(1, host->length() - 1));
		}
	}
	if (addr != nullptr) {
		if (addr->length == Inet6Address::INADDRSZ) {
			return $new(Inet6Address, host, addr, scope_id);
		}
	}
	$throwNew($UnknownHostException, "addr is of illegal length"_s);
}

void Inet6Address::initstr($String* hostName, $bytes* addr, $String* ifname) {
	try {
		$var($NetworkInterface, nif, $NetworkInterface::getByName(ifname));
		if (nif == nullptr) {
			$throwNew($UnknownHostException, $$str({"no such interface "_s, ifname}));
		}
		initif(hostName, addr, nif);
	} catch ($SocketException&) {
		$var($SocketException, e, $catch());
		$throwNew($UnknownHostException, $$str({"SocketException thrown"_s, ifname}));
	}
}

void Inet6Address::initif($String* hostName, $bytes* addr, $NetworkInterface* nif) {
	int32_t family = -1;
	$nc(this->holder6)->init(addr, nif);
	if ($nc(addr)->length == Inet6Address::INADDRSZ) {
		family = $InetAddress::IPv6;
	}
	$nc(this->holder$)->init(hostName, family);
}

bool Inet6Address::isDifferentLocalAddressType($bytes* thisAddr, $bytes* otherAddr) {
	$init(Inet6Address);
	bool var$0 = Inet6Address::isLinkLocalAddress(thisAddr);
	if (var$0 && !Inet6Address::isLinkLocalAddress(otherAddr)) {
		return false;
	}
	bool var$1 = Inet6Address::isSiteLocalAddress(thisAddr);
	if (var$1 && !Inet6Address::isSiteLocalAddress(otherAddr)) {
		return false;
	}
	return true;
}

int32_t Inet6Address::deriveNumericScope($bytes* thisAddr, $NetworkInterface* ifc) {
	$init(Inet6Address);
	$var($Enumeration, addresses, $nc(ifc)->getInetAddresses());
	while ($nc(addresses)->hasMoreElements()) {
		$var($InetAddress, addr, $cast($InetAddress, addresses->nextElement()));
		$var(Inet6Address, ia6_addr, nullptr);
		bool var$0 = $instanceOf(Inet6Address, addr);
		if (var$0) {
			$assign(ia6_addr, $cast(Inet6Address, addr));
			var$0 = true;
		}
		if (!(var$0)) {
			continue;
		}
		if (!isDifferentLocalAddressType(thisAddr, $($nc(ia6_addr)->getAddress()))) {
			continue;
		}
		return $nc(ia6_addr)->getScopeId();
	}
	$throwNew($UnknownHostException, "no scope_id found"_s);
}

int32_t Inet6Address::deriveNumericScope($String* ifname) {
	$var($Enumeration, en, nullptr);
	try {
		$assign(en, $NetworkInterface::getNetworkInterfaces());
	} catch ($SocketException&) {
		$var($SocketException, e, $catch());
		$throwNew($UnknownHostException, "could not enumerate local network interfaces"_s);
	}
	while ($nc(en)->hasMoreElements()) {
		$var($NetworkInterface, ifc, $cast($NetworkInterface, en->nextElement()));
		if ($nc($($nc(ifc)->getName()))->equals(ifname)) {
			return deriveNumericScope($nc(this->holder6)->ipaddress, ifc);
		}
	}
	$throwNew($UnknownHostException, $$str({"No matching address found for interface : "_s, ifname}));
}

void Inet6Address::readObject($ObjectInputStream* s) {
	$beforeCallerSensitive();
	$var($NetworkInterface, scope_ifname, nullptr);
	if ($of(this)->getClass()->getClassLoader() != nullptr) {
		$throwNew($SecurityException, "invalid address type"_s);
	}
	$var($ObjectInputStream$GetField, gf, $nc(s)->readFields());
	$var($bytes, ipaddress, $cast($bytes, $nc(gf)->get("ipaddress"_s, $of($$new($bytes, 0)))));
	int32_t scope_id = gf->get("scope_id"_s, -1);
	bool scope_id_set = gf->get("scope_id_set"_s, false);
	bool scope_ifname_set = gf->get("scope_ifname_set"_s, false);
	$var($String, ifname, $cast($String, gf->get("ifname"_s, ($Object*)nullptr)));
	if (ifname != nullptr && !ifname->isEmpty()) {
		try {
			$assign(scope_ifname, $NetworkInterface::getByName(ifname));
			if (scope_ifname == nullptr) {
				scope_id_set = false;
				scope_ifname_set = false;
				scope_id = 0;
			} else {
				scope_ifname_set = true;
				try {
					scope_id = deriveNumericScope(ipaddress, scope_ifname);
				} catch ($UnknownHostException&) {
					$catch();
				}
			}
		} catch ($SocketException&) {
			$catch();
		}
	}
	$assign(ipaddress, $cast($bytes, $nc(ipaddress)->clone()));
	if (ipaddress->length != Inet6Address::INADDRSZ) {
		$throwNew($InvalidObjectException, $$str({"invalid address length: "_s, $$str(ipaddress->length)}));
	}
	if ($nc(this->holder$)->getFamily() != $InetAddress::IPv6) {
		$throwNew($InvalidObjectException, "invalid address family type"_s);
	}
	$var($Inet6Address$Inet6AddressHolder, h, $new($Inet6Address$Inet6AddressHolder, ipaddress, scope_id, scope_id_set, scope_ifname, scope_ifname_set));
	$nc(Inet6Address::UNSAFE)->putReference(this, Inet6Address::FIELDS_OFFSET, h);
}

void Inet6Address::writeObject($ObjectOutputStream* s) {
	$synchronized(this) {
		$var($String, ifname, nullptr);
		if ($nc(this->holder6)->scope_ifname != nullptr) {
			$assign(ifname, $nc($nc(this->holder6)->scope_ifname)->getName());
			$nc(this->holder6)->scope_ifname_set = true;
		}
		$var($ObjectOutputStream$PutField, pfields, $nc(s)->putFields());
		$nc(pfields)->put("ipaddress"_s, $of($nc(this->holder6)->ipaddress));
		pfields->put("scope_id"_s, $nc(this->holder6)->scope_id);
		pfields->put("scope_id_set"_s, $nc(this->holder6)->scope_id_set);
		pfields->put("scope_ifname_set"_s, $nc(this->holder6)->scope_ifname_set);
		pfields->put("ifname"_s, $of(ifname));
		s->writeFields();
	}
}

bool Inet6Address::isMulticastAddress() {
	return $nc(this->holder6)->isMulticastAddress();
}

bool Inet6Address::isAnyLocalAddress() {
	return $nc(this->holder6)->isAnyLocalAddress();
}

bool Inet6Address::isLoopbackAddress() {
	return $nc(this->holder6)->isLoopbackAddress();
}

bool Inet6Address::isLinkLocalAddress() {
	return $nc(this->holder6)->isLinkLocalAddress();
}

bool Inet6Address::isLinkLocalAddress($bytes* ipaddress) {
	$init(Inet6Address);
	return (((int32_t)($nc(ipaddress)->get(0) & (uint32_t)255)) == 254 && ((int32_t)(ipaddress->get(1) & (uint32_t)192)) == 128);
}

bool Inet6Address::isSiteLocalAddress() {
	return $nc(this->holder6)->isSiteLocalAddress();
}

bool Inet6Address::isSiteLocalAddress($bytes* ipaddress) {
	$init(Inet6Address);
	return (((int32_t)($nc(ipaddress)->get(0) & (uint32_t)255)) == 254 && ((int32_t)(ipaddress->get(1) & (uint32_t)192)) == 192);
}

bool Inet6Address::isMCGlobal() {
	return $nc(this->holder6)->isMCGlobal();
}

bool Inet6Address::isMCNodeLocal() {
	return $nc(this->holder6)->isMCNodeLocal();
}

bool Inet6Address::isMCLinkLocal() {
	return $nc(this->holder6)->isMCLinkLocal();
}

bool Inet6Address::isMCSiteLocal() {
	return $nc(this->holder6)->isMCSiteLocal();
}

bool Inet6Address::isMCOrgLocal() {
	return $nc(this->holder6)->isMCOrgLocal();
}

$bytes* Inet6Address::getAddress() {
	return $cast($bytes, $nc($nc(this->holder6)->ipaddress)->clone());
}

$bytes* Inet6Address::addressBytes() {
	return $nc(this->holder6)->ipaddress;
}

int32_t Inet6Address::getScopeId() {
	return $nc(this->holder6)->scope_id;
}

$NetworkInterface* Inet6Address::getScopedInterface() {
	return $nc(this->holder6)->scope_ifname;
}

$String* Inet6Address::getHostAddress() {
	return $nc(this->holder6)->getHostAddress();
}

int32_t Inet6Address::hashCode() {
	return $nc(this->holder6)->hashCode();
}

bool Inet6Address::equals(Object$* obj) {
	{
		$var(Inet6Address, inetAddr, nullptr);
		bool var$0 = $instanceOf(Inet6Address, obj);
		if (var$0) {
			$assign(inetAddr, $cast(Inet6Address, obj));
			var$0 = true;
		}
		if (var$0) {
			return $nc(this->holder6)->equals($nc(inetAddr)->holder6);
		}
	}
	return false;
}

bool Inet6Address::isIPv4CompatibleAddress() {
	return $nc(this->holder6)->isIPv4CompatibleAddress();
}

$String* Inet6Address::numericToTextFormat($bytes* src) {
	$init(Inet6Address);
	$var($StringBuilder, sb, $new($StringBuilder, 39));
	for (int32_t i = 0; i < ($div(Inet6Address::INADDRSZ, Inet6Address::INT16SZ)); ++i) {
		sb->append($($Integer::toHexString(((int32_t)(($nc(src)->get(i << 1) << 8) & (uint32_t)0x0000FF00)) | ((int32_t)(src->get((i << 1) + 1) & (uint32_t)255)))));
		if (i < ($div(Inet6Address::INADDRSZ, Inet6Address::INT16SZ)) - 1) {
			sb->append(":"_s);
		}
	}
	return sb->toString();
}

void Inet6Address::init() {
	$init(Inet6Address);
	$prepareNativeStatic(Inet6Address, init, void);
	$invokeNativeStatic(Inet6Address, init);
	$finishNativeStatic();
}

void clinit$Inet6Address($Class* class$) {
	{
		Inet6Address::init();
	}
		$load($bytes);
		$init($Integer);
		$init($Boolean);
		$load($String);
	$assignStatic(Inet6Address::serialPersistentFields, $new($ObjectStreamFieldArray, {
		$$new($ObjectStreamField, "ipaddress"_s, $getClass($bytes)),
		$$new($ObjectStreamField, "scope_id"_s, $Integer::TYPE),
		$$new($ObjectStreamField, "scope_id_set"_s, $Boolean::TYPE),
		$$new($ObjectStreamField, "scope_ifname_set"_s, $Boolean::TYPE),
		$$new($ObjectStreamField, "ifname"_s, $String::class$)
	}));
	$assignStatic(Inet6Address::UNSAFE, $Unsafe::getUnsafe());
	Inet6Address::FIELDS_OFFSET = $nc(Inet6Address::UNSAFE)->objectFieldOffset(Inet6Address::class$, "holder6"_s);
}

Inet6Address::Inet6Address() {
}

$Class* Inet6Address::load$($String* name, bool initialize) {
	$loadClass(Inet6Address, name, initialize, &_Inet6Address_ClassInfo_, clinit$Inet6Address, allocate$Inet6Address);
	return class$;
}

$Class* Inet6Address::class$ = nullptr;

	} // net
} // java