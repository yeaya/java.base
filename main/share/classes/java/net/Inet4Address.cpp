#include <java/net/Inet4Address.h>

#include <java/net/InetAddress$InetAddressHolder.h>
#include <java/net/InetAddress.h>
#include <jcpp.h>

#undef INADDRSZ

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $InetAddress$InetAddressHolder = ::java::net::InetAddress$InetAddressHolder;

namespace java {
	namespace net {

$FieldInfo _Inet4Address_FieldInfo_[] = {
	{"INADDRSZ", "I", nullptr, $STATIC | $FINAL, $constField(Inet4Address, INADDRSZ)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Inet4Address, serialVersionUID)},
	{}
};

$MethodInfo _Inet4Address_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Inet4Address::*)()>(&Inet4Address::init$))},
	{"<init>", "(Ljava/lang/String;[B)V", nullptr, 0, $method(static_cast<void(Inet4Address::*)($String*,$bytes*)>(&Inet4Address::init$))},
	{"<init>", "(Ljava/lang/String;I)V", nullptr, 0, $method(static_cast<void(Inet4Address::*)($String*,int32_t)>(&Inet4Address::init$))},
	{"addressValue", "()I", nullptr, 0, $method(static_cast<int32_t(Inet4Address::*)()>(&Inet4Address::addressValue))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getAddress", "()[B", nullptr, $PUBLIC},
	{"getHostAddress", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"init", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&Inet4Address::init))},
	{"isAnyLocalAddress", "()Z", nullptr, $PUBLIC},
	{"isLinkLocalAddress", "()Z", nullptr, $PUBLIC},
	{"isLoopbackAddress", "()Z", nullptr, $PUBLIC},
	{"isMCGlobal", "()Z", nullptr, $PUBLIC},
	{"isMCLinkLocal", "()Z", nullptr, $PUBLIC},
	{"isMCNodeLocal", "()Z", nullptr, $PUBLIC},
	{"isMCOrgLocal", "()Z", nullptr, $PUBLIC},
	{"isMCSiteLocal", "()Z", nullptr, $PUBLIC},
	{"isMulticastAddress", "()Z", nullptr, $PUBLIC},
	{"isSiteLocalAddress", "()Z", nullptr, $PUBLIC},
	{"numericToTextFormat", "([B)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($bytes*)>(&Inet4Address::numericToTextFormat))},
	{"writeReplace", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(Inet4Address::*)()>(&Inet4Address::writeReplace)), "java.io.ObjectStreamException"},
	{}
};

#define _METHOD_INDEX_init 8

$ClassInfo _Inet4Address_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.net.Inet4Address",
	"java.net.InetAddress",
	nullptr,
	_Inet4Address_FieldInfo_,
	_Inet4Address_MethodInfo_
};

$Object* allocate$Inet4Address($Class* clazz) {
	return $of($alloc(Inet4Address));
}

void Inet4Address::init$() {
	$useLocalCurrentObjectStackCache();
	$InetAddress::init$();
	$set($nc($(holder())), hostName, nullptr);
	$nc($(holder()))->address = 0;
	$nc($(holder()))->family = $InetAddress::IPv4;
}

void Inet4Address::init$($String* hostName, $bytes* addr) {
	$useLocalCurrentObjectStackCache();
	$InetAddress::init$();
	$set($nc($(holder())), hostName, hostName);
	$nc($(holder()))->family = $InetAddress::IPv4;
	if (addr != nullptr) {
		if (addr->length == Inet4Address::INADDRSZ) {
			int32_t address = (int32_t)(addr->get(3) & (uint32_t)255);
			address |= ((int32_t)((addr->get(2) << 8) & (uint32_t)0x0000FF00));
			address |= ((int32_t)((addr->get(1) << 16) & (uint32_t)0x00FF0000));
			address |= ((int32_t)((addr->get(0) << 24) & (uint32_t)(int32_t)0xFF000000));
			$nc($(holder()))->address = address;
		}
	}
	$set($nc($(holder())), originalHostName, hostName);
}

void Inet4Address::init$($String* hostName, int32_t address) {
	$useLocalCurrentObjectStackCache();
	$InetAddress::init$();
	$set($nc($(holder())), hostName, hostName);
	$nc($(holder()))->family = $InetAddress::IPv4;
	$nc($(holder()))->address = address;
	$set($nc($(holder())), originalHostName, hostName);
}

$Object* Inet4Address::writeReplace() {
	$useLocalCurrentObjectStackCache();
	$var($InetAddress, inet, $new($InetAddress));
	$set($nc($(inet->holder())), hostName, $nc($(holder()))->getHostName());
	$nc($(inet->holder()))->address = $nc($(holder()))->getAddress();
	$nc($(inet->holder()))->family = 2;
	return $of(inet);
}

bool Inet4Address::isMulticastAddress() {
	return (((int32_t)($nc($(holder()))->getAddress() & (uint32_t)(int32_t)0xF0000000)) == (int32_t)0xE0000000);
}

bool Inet4Address::isAnyLocalAddress() {
	return $nc($(holder()))->getAddress() == 0;
}

bool Inet4Address::isLoopbackAddress() {
	$var($bytes, byteAddr, getAddress());
	return $nc(byteAddr)->get(0) == 127;
}

bool Inet4Address::isLinkLocalAddress() {
	int32_t address = $nc($(holder()))->getAddress();
	return (((int32_t)(((int32_t)((uint32_t)address >> 24)) & (uint32_t)255)) == 169) && (((int32_t)(((int32_t)((uint32_t)address >> 16)) & (uint32_t)255)) == 254);
}

bool Inet4Address::isSiteLocalAddress() {
	int32_t address = $nc($(holder()))->getAddress();
	return (((int32_t)(((int32_t)((uint32_t)address >> 24)) & (uint32_t)255)) == 10) || ((((int32_t)(((int32_t)((uint32_t)address >> 24)) & (uint32_t)255)) == 172) && (((int32_t)(((int32_t)((uint32_t)address >> 16)) & (uint32_t)240)) == 16)) || ((((int32_t)(((int32_t)((uint32_t)address >> 24)) & (uint32_t)255)) == 192) && (((int32_t)(((int32_t)((uint32_t)address >> 16)) & (uint32_t)255)) == 168));
}

bool Inet4Address::isMCGlobal() {
	$var($bytes, byteAddr, getAddress());
	return (((int32_t)($nc(byteAddr)->get(0) & (uint32_t)255)) >= 224 && ((int32_t)(byteAddr->get(0) & (uint32_t)255)) <= 238) && !(((int32_t)(byteAddr->get(0) & (uint32_t)255)) == 224 && byteAddr->get(1) == 0 && byteAddr->get(2) == 0);
}

bool Inet4Address::isMCNodeLocal() {
	return false;
}

bool Inet4Address::isMCLinkLocal() {
	int32_t address = $nc($(holder()))->getAddress();
	return (((int32_t)(((int32_t)((uint32_t)address >> 24)) & (uint32_t)255)) == 224) && (((int32_t)(((int32_t)((uint32_t)address >> 16)) & (uint32_t)255)) == 0) && (((int32_t)(((int32_t)((uint32_t)address >> 8)) & (uint32_t)255)) == 0);
}

bool Inet4Address::isMCSiteLocal() {
	int32_t address = $nc($(holder()))->getAddress();
	return (((int32_t)(((int32_t)((uint32_t)address >> 24)) & (uint32_t)255)) == 239) && (((int32_t)(((int32_t)((uint32_t)address >> 16)) & (uint32_t)255)) == 255);
}

bool Inet4Address::isMCOrgLocal() {
	int32_t address = $nc($(holder()))->getAddress();
	return (((int32_t)(((int32_t)((uint32_t)address >> 24)) & (uint32_t)255)) == 239) && (((int32_t)(((int32_t)((uint32_t)address >> 16)) & (uint32_t)255)) >= 192) && (((int32_t)(((int32_t)((uint32_t)address >> 16)) & (uint32_t)255)) <= 195);
}

$bytes* Inet4Address::getAddress() {
	$useLocalCurrentObjectStackCache();
	int32_t address = $nc($(holder()))->getAddress();
	$var($bytes, addr, $new($bytes, Inet4Address::INADDRSZ));
	addr->set(0, (int8_t)((int32_t)(((int32_t)((uint32_t)address >> 24)) & (uint32_t)255)));
	addr->set(1, (int8_t)((int32_t)(((int32_t)((uint32_t)address >> 16)) & (uint32_t)255)));
	addr->set(2, (int8_t)((int32_t)(((int32_t)((uint32_t)address >> 8)) & (uint32_t)255)));
	addr->set(3, (int8_t)((int32_t)(address & (uint32_t)255)));
	return addr;
}

int32_t Inet4Address::addressValue() {
	return $nc($(holder()))->getAddress();
}

$String* Inet4Address::getHostAddress() {
	return numericToTextFormat($(getAddress()));
}

int32_t Inet4Address::hashCode() {
	return $nc($(holder()))->getAddress();
}

bool Inet4Address::equals(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	$var(Inet4Address, inet4Address, nullptr);
	bool var$1 = $instanceOf(Inet4Address, obj);
	if (var$1) {
		$assign(inet4Address, $cast(Inet4Address, obj));
		var$1 = true;
	}
	bool var$0 = (var$1);
	if (var$0) {
		int32_t var$2 = $nc($($nc(inet4Address)->holder()))->getAddress();
		var$0 = var$2 == $nc($(holder()))->getAddress();
	}
	return var$0;
}

$String* Inet4Address::numericToTextFormat($bytes* src) {
	$init(Inet4Address);
	$useLocalCurrentObjectStackCache();
	return $str({$$str(((int32_t)($nc(src)->get(0) & (uint32_t)255))), "."_s, $$str(((int32_t)(src->get(1) & (uint32_t)255))), "."_s, $$str(((int32_t)(src->get(2) & (uint32_t)255))), "."_s, $$str(((int32_t)(src->get(3) & (uint32_t)255)))});
}

void Inet4Address::init() {
	$init(Inet4Address);
	$prepareNativeStatic(Inet4Address, init, void);
	$invokeNativeStatic(Inet4Address, init);
	$finishNativeStatic();
}

void clinit$Inet4Address($Class* class$) {
	{
		Inet4Address::init();
	}
}

Inet4Address::Inet4Address() {
}

$Class* Inet4Address::load$($String* name, bool initialize) {
	$loadClass(Inet4Address, name, initialize, &_Inet4Address_ClassInfo_, clinit$Inet4Address, allocate$Inet4Address);
	return class$;
}

$Class* Inet4Address::class$ = nullptr;

	} // net
} // java