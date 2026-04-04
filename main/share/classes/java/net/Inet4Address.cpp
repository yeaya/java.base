#include <java/net/Inet4Address.h>
#include <java/net/InetAddress$InetAddressHolder.h>
#include <java/net/InetAddress.h>
#include <jcpp.h>

#undef INADDRSZ

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;

namespace java {
	namespace net {

void Inet4Address::init$() {
	$useLocalObjectStack();
	$InetAddress::init$();
	$set($nc($(holder())), hostName, nullptr);
	$nc($(holder()))->address = 0;
	$nc($(holder()))->family = $InetAddress::IPv4;
}

void Inet4Address::init$($String* hostName, $bytes* addr) {
	$useLocalObjectStack();
	$InetAddress::init$();
	$set($nc($(holder())), hostName, hostName);
	$nc($(holder()))->family = $InetAddress::IPv4;
	if (addr != nullptr) {
		if (addr->length == Inet4Address::INADDRSZ) {
			int32_t address = addr->get(3) & 0xff;
			address |= ((addr->get(2) << 8) & 0xff00);
			address |= ((addr->get(1) << 16) & 0x00ff0000);
			address |= ((addr->get(0) << 24) & (int32_t)0xff000000);
			$nc($(holder()))->address = address;
		}
	}
	$set($nc($(holder())), originalHostName, hostName);
}

void Inet4Address::init$($String* hostName, int32_t address) {
	$useLocalObjectStack();
	$InetAddress::init$();
	$set($nc($(holder())), hostName, hostName);
	$nc($(holder()))->family = $InetAddress::IPv4;
	$nc($(holder()))->address = address;
	$set($nc($(holder())), originalHostName, hostName);
}

$Object* Inet4Address::writeReplace() {
	$useLocalObjectStack();
	$var($InetAddress, inet, $new($InetAddress));
	$set($nc($(inet->holder())), hostName, $$nc(holder())->getHostName());
	$nc($(inet->holder()))->address = $$nc(holder())->getAddress();
	$nc($(inet->holder()))->family = 2;
	return inet;
}

bool Inet4Address::isMulticastAddress() {
	return (($$nc(holder())->getAddress() & (int32_t)0xf0000000) == (int32_t)0xe0000000);
}

bool Inet4Address::isAnyLocalAddress() {
	return $$nc(holder())->getAddress() == 0;
}

bool Inet4Address::isLoopbackAddress() {
	$var($bytes, byteAddr, getAddress());
	return $nc(byteAddr)->get(0) == 127;
}

bool Inet4Address::isLinkLocalAddress() {
	int32_t address = $$nc(holder())->getAddress();
	return ((((int32_t)((uint32_t)address >> 24)) & 0xff) == 0xa9) && ((((int32_t)((uint32_t)address >> 16)) & 0xff) == 0xfe);
}

bool Inet4Address::isSiteLocalAddress() {
	int32_t address = $$nc(holder())->getAddress();
	return ((((int32_t)((uint32_t)address >> 24)) & 0xff) == 0x0a) || (((((int32_t)((uint32_t)address >> 24)) & 0xff) == 0xac) && ((((int32_t)((uint32_t)address >> 16)) & 0xf0) == 0x10)) || (((((int32_t)((uint32_t)address >> 24)) & 0xff) == 0xc0) && ((((int32_t)((uint32_t)address >> 16)) & 0xff) == 0xa8));
}

bool Inet4Address::isMCGlobal() {
	$var($bytes, byteAddr, getAddress());
	return (($nc(byteAddr)->get(0) & 0xff) >= 0xe0 && (byteAddr->get(0) & 0xff) <= 0xee) && !((byteAddr->get(0) & 0xff) == 0xe0 && byteAddr->get(1) == 0 && byteAddr->get(2) == 0);
}

bool Inet4Address::isMCNodeLocal() {
	return false;
}

bool Inet4Address::isMCLinkLocal() {
	int32_t address = $$nc(holder())->getAddress();
	return ((((int32_t)((uint32_t)address >> 24)) & 0xff) == 0xe0) && ((((int32_t)((uint32_t)address >> 16)) & 0xff) == 0) && ((((int32_t)((uint32_t)address >> 8)) & 0xff) == 0);
}

bool Inet4Address::isMCSiteLocal() {
	int32_t address = $$nc(holder())->getAddress();
	return ((((int32_t)((uint32_t)address >> 24)) & 0xff) == 0xef) && ((((int32_t)((uint32_t)address >> 16)) & 0xff) == 0xff);
}

bool Inet4Address::isMCOrgLocal() {
	int32_t address = $$nc(holder())->getAddress();
	return ((((int32_t)((uint32_t)address >> 24)) & 0xff) == 0xef) && ((((int32_t)((uint32_t)address >> 16)) & 0xff) >= 0xc0) && ((((int32_t)((uint32_t)address >> 16)) & 0xff) <= 0xc3);
}

$bytes* Inet4Address::getAddress() {
	$useLocalObjectStack();
	int32_t address = $$nc(holder())->getAddress();
	$var($bytes, addr, $new($bytes, Inet4Address::INADDRSZ));
	addr->set(0, (int8_t)(((int32_t)((uint32_t)address >> 24)) & 0xff));
	addr->set(1, (int8_t)(((int32_t)((uint32_t)address >> 16)) & 0xff));
	addr->set(2, (int8_t)(((int32_t)((uint32_t)address >> 8)) & 0xff));
	addr->set(3, (int8_t)(address & 0xff));
	return addr;
}

int32_t Inet4Address::addressValue() {
	return $$nc(holder())->getAddress();
}

$String* Inet4Address::getHostAddress() {
	return numericToTextFormat($(getAddress()));
}

int32_t Inet4Address::hashCode() {
	return $$nc(holder())->getAddress();
}

bool Inet4Address::equals(Object$* obj) {
	$useLocalObjectStack();
	$var(Inet4Address, inet4Address, nullptr);
	bool var$1 = $instanceOf(Inet4Address, obj);
	if (var$1) {
		$assign(inet4Address, $cast(Inet4Address, obj));
		var$1 = true;
	}
	bool var$0 = var$1;
	if (var$0) {
		int32_t var$2 = $$nc($nc(inet4Address)->holder())->getAddress();
		var$0 = var$2 == $$nc(holder())->getAddress();
	}
	return var$0;
}

$String* Inet4Address::numericToTextFormat($bytes* src) {
	$init(Inet4Address);
	$useLocalObjectStack();
	return $str({$$str(($nc(src)->get(0) & 0xff)), "."_s, $$str(($nc(src)->get(1) & 0xff)), "."_s, $$str(($nc(src)->get(2) & 0xff)), "."_s, $$str(($nc(src)->get(3) & 0xff))});
}

void Inet4Address::init() {
	$init(Inet4Address);
	$prepareNativeStatic(init, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void Inet4Address::clinit$($Class* clazz) {
	{
		Inet4Address::init();
	}
}

Inet4Address::Inet4Address() {
}

$Class* Inet4Address::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"INADDRSZ", "I", nullptr, $STATIC | $FINAL, $constField(Inet4Address, INADDRSZ)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Inet4Address, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Inet4Address, init$, void)},
		{"<init>", "(Ljava/lang/String;[B)V", nullptr, 0, $method(Inet4Address, init$, void, $String*, $bytes*)},
		{"<init>", "(Ljava/lang/String;I)V", nullptr, 0, $method(Inet4Address, init$, void, $String*, int32_t)},
		{"addressValue", "()I", nullptr, 0, $method(Inet4Address, addressValue, int32_t)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Inet4Address, equals, bool, Object$*)},
		{"getAddress", "()[B", nullptr, $PUBLIC, $virtualMethod(Inet4Address, getAddress, $bytes*)},
		{"getHostAddress", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Inet4Address, getHostAddress, $String*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(Inet4Address, hashCode, int32_t)},
		{"init", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(Inet4Address, init, void)},
		{"isAnyLocalAddress", "()Z", nullptr, $PUBLIC, $virtualMethod(Inet4Address, isAnyLocalAddress, bool)},
		{"isLinkLocalAddress", "()Z", nullptr, $PUBLIC, $virtualMethod(Inet4Address, isLinkLocalAddress, bool)},
		{"isLoopbackAddress", "()Z", nullptr, $PUBLIC, $virtualMethod(Inet4Address, isLoopbackAddress, bool)},
		{"isMCGlobal", "()Z", nullptr, $PUBLIC, $virtualMethod(Inet4Address, isMCGlobal, bool)},
		{"isMCLinkLocal", "()Z", nullptr, $PUBLIC, $virtualMethod(Inet4Address, isMCLinkLocal, bool)},
		{"isMCNodeLocal", "()Z", nullptr, $PUBLIC, $virtualMethod(Inet4Address, isMCNodeLocal, bool)},
		{"isMCOrgLocal", "()Z", nullptr, $PUBLIC, $virtualMethod(Inet4Address, isMCOrgLocal, bool)},
		{"isMCSiteLocal", "()Z", nullptr, $PUBLIC, $virtualMethod(Inet4Address, isMCSiteLocal, bool)},
		{"isMulticastAddress", "()Z", nullptr, $PUBLIC, $virtualMethod(Inet4Address, isMulticastAddress, bool)},
		{"isSiteLocalAddress", "()Z", nullptr, $PUBLIC, $virtualMethod(Inet4Address, isSiteLocalAddress, bool)},
		{"numericToTextFormat", "([B)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(Inet4Address, numericToTextFormat, $String*, $bytes*)},
		{"writeReplace", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(Inet4Address, writeReplace, $Object*), "java.io.ObjectStreamException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.net.Inet4Address",
		"java.net.InetAddress",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Inet4Address, name, initialize, &classInfo$$, Inet4Address::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Inet4Address);
	});
	return class$;
}

$Class* Inet4Address::class$ = nullptr;

	} // net
} // java