#include <sun/nio/ch/NativeSocketAddress.h>
#include <java/lang/InternalError.h>
#include <java/lang/Math.h>
#include <java/lang/OutOfMemoryError.h>
#include <java/net/Inet4Address.h>
#include <java/net/Inet6Address.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ProtocolFamily.h>
#include <java/net/SocketException.h>
#include <java/net/StandardProtocolFamily.h>
#include <java/net/UnknownHostException.h>
#include <java/nio/channels/UnsupportedAddressTypeException.h>
#include <jdk/internal/access/JavaNetInetAddressAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jdk/internal/util/ArraysSupport.h>
#include <sun/nio/ch/IOUtil.h>
#include <jcpp.h>

#undef AFINET
#undef AFINET6
#undef AF_INET
#undef AF_INET6
#undef ARRAY_BASE_OFFSET
#undef INET
#undef JNINA
#undef LOG2_ARRAY_BYTE_INDEX_SCALE
#undef OFFSET_FAMILY
#undef OFFSET_SIN4_ADDR
#undef OFFSET_SIN4_PORT
#undef OFFSET_SIN6_ADDR
#undef OFFSET_SIN6_FLOWINFO
#undef OFFSET_SIN6_PORT
#undef OFFSET_SIN6_SCOPE_ID
#undef SIZEOF_FAMILY
#undef SIZEOF_SOCKADDR4
#undef SIZEOF_SOCKADDR6
#undef SIZEOF_SOCKETADDRESS
#undef UNSAFE

using $NativeSocketAddressArray = $Array<::sun::nio::ch::NativeSocketAddress>;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $OutOfMemoryError = ::java::lang::OutOfMemoryError;
using $Inet4Address = ::java::net::Inet4Address;
using $Inet6Address = ::java::net::Inet6Address;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ProtocolFamily = ::java::net::ProtocolFamily;
using $SocketException = ::java::net::SocketException;
using $StandardProtocolFamily = ::java::net::StandardProtocolFamily;
using $UnknownHostException = ::java::net::UnknownHostException;
using $UnsupportedAddressTypeException = ::java::nio::channels::UnsupportedAddressTypeException;
using $JavaNetInetAddressAccess = ::jdk::internal::access::JavaNetInetAddressAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $ArraysSupport = ::jdk::internal::util::ArraysSupport;
using $IOUtil = ::sun::nio::ch::IOUtil;

namespace sun {
	namespace nio {
		namespace ch {

$JavaNetInetAddressAccess* NativeSocketAddress::JNINA = nullptr;
$Unsafe* NativeSocketAddress::UNSAFE = nullptr;
int64_t NativeSocketAddress::ARRAY_BASE_OFFSET = 0;
int32_t NativeSocketAddress::AF_INET = 0;
int32_t NativeSocketAddress::AF_INET6 = 0;
int32_t NativeSocketAddress::SIZEOF_SOCKADDR4 = 0;
int32_t NativeSocketAddress::SIZEOF_SOCKADDR6 = 0;
int32_t NativeSocketAddress::SIZEOF_SOCKETADDRESS = 0;
int32_t NativeSocketAddress::SIZEOF_FAMILY = 0;
int32_t NativeSocketAddress::OFFSET_FAMILY = 0;
int32_t NativeSocketAddress::OFFSET_SIN4_PORT = 0;
int32_t NativeSocketAddress::OFFSET_SIN4_ADDR = 0;
int32_t NativeSocketAddress::OFFSET_SIN6_PORT = 0;
int32_t NativeSocketAddress::OFFSET_SIN6_ADDR = 0;
int32_t NativeSocketAddress::OFFSET_SIN6_SCOPE_ID = 0;
int32_t NativeSocketAddress::OFFSET_SIN6_FLOWINFO = 0;

int64_t NativeSocketAddress::address() {
	return this->address$;
}

void NativeSocketAddress::init$() {
	int64_t base = $nc(NativeSocketAddress::UNSAFE)->allocateMemory(NativeSocketAddress::SIZEOF_SOCKETADDRESS);
	NativeSocketAddress::UNSAFE->setMemory(base, NativeSocketAddress::SIZEOF_SOCKETADDRESS, (int8_t)0);
	this->address$ = base;
}

$NativeSocketAddressArray* NativeSocketAddress::allocate(int32_t count) {
	$init(NativeSocketAddress);
	$useLocalObjectStack();
	$var($NativeSocketAddressArray, array, $new($NativeSocketAddressArray, count));
	for (int32_t i = 0; i < count; ++i) {
		try {
			array->set(i, $$new(NativeSocketAddress));
		} catch ($OutOfMemoryError& e) {
			freeAll(array);
			$throw(e);
		}
	}
	return array;
}

void NativeSocketAddress::freeAll($NativeSocketAddressArray* array) {
	$init(NativeSocketAddress);
	$useLocalObjectStack();
	for (int32_t i = 0; i < $nc(array)->length; ++i) {
		$var(NativeSocketAddress, sa, array->get(i));
		if (sa != nullptr) {
			$nc(NativeSocketAddress::UNSAFE)->freeMemory(sa->address$);
		}
	}
}

int32_t NativeSocketAddress::encode($ProtocolFamily* protocolFamily, $InetSocketAddress* isa) {
	$useLocalObjectStack();
	$init($StandardProtocolFamily);
	if ($equals(protocolFamily, $StandardProtocolFamily::INET)) {
		$var($InetAddress, ia, $nc(isa)->getAddress());
		if (!($instanceOf($Inet4Address, ia))) {
			$throwNew($UnsupportedAddressTypeException);
		}
		putFamily(NativeSocketAddress::AF_INET);
		putAddress(NativeSocketAddress::AF_INET, ia);
		putPort(NativeSocketAddress::AF_INET, isa->getPort());
		return NativeSocketAddress::SIZEOF_SOCKADDR4;
	} else {
		putFamily(NativeSocketAddress::AF_INET6);
		putAddress(NativeSocketAddress::AF_INET6, $($nc(isa)->getAddress()));
		putPort(NativeSocketAddress::AF_INET6, isa->getPort());
		$nc(NativeSocketAddress::UNSAFE)->putInt(this->address$ + NativeSocketAddress::OFFSET_SIN6_FLOWINFO, 0);
		return NativeSocketAddress::SIZEOF_SOCKADDR6;
	}
}

$InetSocketAddress* NativeSocketAddress::decode() {
	int32_t family = this->family();
	if (family != NativeSocketAddress::AF_INET && family != NativeSocketAddress::AF_INET6) {
		$throwNew($SocketException, "Socket family not recognized"_s);
	}
	$var($InetAddress, var$0, address(family));
	return $new($InetSocketAddress, var$0, port(family));
}

int32_t NativeSocketAddress::mismatch(NativeSocketAddress* other) {
	$init($ArraysSupport);
	int32_t i = $ArraysSupport::vectorizedMismatch(nullptr, this->address$, nullptr, $nc(other)->address$, NativeSocketAddress::SIZEOF_SOCKETADDRESS, $ArraysSupport::LOG2_ARRAY_BYTE_INDEX_SCALE);
	if (i >= 0) {
		return i;
	}
	i = NativeSocketAddress::SIZEOF_SOCKETADDRESS - ~i;
	for (; i < NativeSocketAddress::SIZEOF_SOCKETADDRESS; ++i) {
		int8_t var$0 = $nc(NativeSocketAddress::UNSAFE)->getByte(this->address$ + i);
		if (var$0 != NativeSocketAddress::UNSAFE->getByte(other->address$ + i)) {
			return i;
		}
	}
	return -1;
}

bool NativeSocketAddress::equals(Object$* other) {
	if ($instanceOf(NativeSocketAddress, other)) {
		return mismatch($cast(NativeSocketAddress, other)) < 0;
	} else {
		return false;
	}
}

int32_t NativeSocketAddress::hashCode() {
	int32_t h = 0;
	for (int32_t offset = 0; offset < NativeSocketAddress::SIZEOF_SOCKETADDRESS; ++offset) {
		h = 31 * h + $nc(NativeSocketAddress::UNSAFE)->getByte(this->address$ + offset);
	}
	return h;
}

$String* NativeSocketAddress::toString() {
	$useLocalObjectStack();
	int32_t family = this->family();
	if (family == NativeSocketAddress::AF_INET || family == NativeSocketAddress::AF_INET6) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append((family == NativeSocketAddress::AF_INET) ? "AF_INET"_s : "AF_INET6"_s);
		var$0->append(", address="_s);
		var$0->append($(address(family)));
		var$0->append(", port="_s);
		var$0->append(port(family));
		return $str(var$0);
	} else {
		return "<unknown>"_s;
	}
}

int32_t NativeSocketAddress::family() {
	if (NativeSocketAddress::SIZEOF_FAMILY == 1) {
		return $nc(NativeSocketAddress::UNSAFE)->getByte(this->address$ + NativeSocketAddress::OFFSET_FAMILY);
	} else if (NativeSocketAddress::SIZEOF_FAMILY == 2) {
		return $nc(NativeSocketAddress::UNSAFE)->getShort(this->address$ + NativeSocketAddress::OFFSET_FAMILY);
	} else {
		$throwNew($InternalError);
	}
}

void NativeSocketAddress::putFamily(int32_t family) {
	if (NativeSocketAddress::SIZEOF_FAMILY == 1) {
		$nc(NativeSocketAddress::UNSAFE)->putByte(this->address$ + NativeSocketAddress::OFFSET_FAMILY, (int8_t)family);
	} else if (NativeSocketAddress::SIZEOF_FAMILY == 2) {
		$nc(NativeSocketAddress::UNSAFE)->putShort(this->address$ + NativeSocketAddress::OFFSET_FAMILY, (int16_t)family);
	} else {
		$throwNew($InternalError);
	}
}

int32_t NativeSocketAddress::port(int32_t family) {
	int8_t b1 = 0;
	int8_t b2 = 0;
	if (family == NativeSocketAddress::AF_INET) {
		b1 = $nc(NativeSocketAddress::UNSAFE)->getByte(this->address$ + NativeSocketAddress::OFFSET_SIN4_PORT);
		b2 = NativeSocketAddress::UNSAFE->getByte(this->address$ + NativeSocketAddress::OFFSET_SIN4_PORT + 1);
	} else {
		b1 = $nc(NativeSocketAddress::UNSAFE)->getByte(this->address$ + NativeSocketAddress::OFFSET_SIN6_PORT);
		b2 = NativeSocketAddress::UNSAFE->getByte(this->address$ + NativeSocketAddress::OFFSET_SIN6_PORT + 1);
	}
	int32_t var$0 = $Byte::toUnsignedInt(b1) << 8;
	return var$0 + $Byte::toUnsignedInt(b2);
}

void NativeSocketAddress::putPort(int32_t family, int32_t port) {
	int8_t b1 = (int8_t)((port >> 8) & 0xff);
	int8_t b2 = (int8_t)((port >> 0) & 0xff);
	if (family == NativeSocketAddress::AF_INET) {
		$nc(NativeSocketAddress::UNSAFE)->putByte(this->address$ + NativeSocketAddress::OFFSET_SIN4_PORT, b1);
		NativeSocketAddress::UNSAFE->putByte(this->address$ + NativeSocketAddress::OFFSET_SIN4_PORT + 1, b2);
	} else {
		$nc(NativeSocketAddress::UNSAFE)->putByte(this->address$ + NativeSocketAddress::OFFSET_SIN6_PORT, b1);
		NativeSocketAddress::UNSAFE->putByte(this->address$ + NativeSocketAddress::OFFSET_SIN6_PORT + 1, b2);
	}
}

$InetAddress* NativeSocketAddress::address(int32_t family) {
	int32_t len = 0;
	int32_t offset = 0;
	int32_t scope_id = 0;
	if (family == NativeSocketAddress::AF_INET) {
		len = 4;
		offset = NativeSocketAddress::OFFSET_SIN4_ADDR;
		scope_id = 0;
	} else {
		len = 16;
		offset = NativeSocketAddress::OFFSET_SIN6_ADDR;
		scope_id = $nc(NativeSocketAddress::UNSAFE)->getInt(this->address$ + NativeSocketAddress::OFFSET_SIN6_SCOPE_ID);
	}
	$var($bytes, bytes, $new($bytes, len));
	$nc(NativeSocketAddress::UNSAFE)->copyMemory(nullptr, this->address$ + offset, bytes, NativeSocketAddress::ARRAY_BASE_OFFSET, len);
	try {
		if (scope_id == 0) {
			return $InetAddress::getByAddress(bytes);
		} else {
			return $Inet6Address::getByAddress(nullptr, bytes, scope_id);
		}
	} catch ($UnknownHostException& e) {
		$throwNew($InternalError, e);
	}
	$shouldNotReachHere();
}

void NativeSocketAddress::putAddress(int32_t family, $InetAddress* ia) {
	if (family == NativeSocketAddress::AF_INET) {
		putAddress(this->address$ + NativeSocketAddress::OFFSET_SIN4_ADDR, $cast($Inet4Address, ia));
	} else {
		int32_t scope_id = 0;
		if ($instanceOf($Inet4Address, ia)) {
			$nc(NativeSocketAddress::UNSAFE)->setMemory(this->address$ + NativeSocketAddress::OFFSET_SIN6_ADDR, 10, (int8_t)0);
			NativeSocketAddress::UNSAFE->putByte(this->address$ + NativeSocketAddress::OFFSET_SIN6_ADDR + 10, (int8_t)255);
			NativeSocketAddress::UNSAFE->putByte(this->address$ + NativeSocketAddress::OFFSET_SIN6_ADDR + 11, (int8_t)255);
			putAddress(this->address$ + NativeSocketAddress::OFFSET_SIN6_ADDR + 12, $cast($Inet4Address, ia));
			scope_id = 0;
		} else {
			$var($Inet6Address, inet6Address, $cast($Inet6Address, ia));
			putAddress(this->address$ + NativeSocketAddress::OFFSET_SIN6_ADDR, inet6Address);
			scope_id = $nc(inet6Address)->getScopeId();
		}
		$nc(NativeSocketAddress::UNSAFE)->putInt(this->address$ + NativeSocketAddress::OFFSET_SIN6_SCOPE_ID, scope_id);
	}
}

void NativeSocketAddress::putAddress(int64_t address, $Inet4Address* ia) {
	$init(NativeSocketAddress);
	int32_t ipAddress = $nc(NativeSocketAddress::JNINA)->addressValue(ia);
	$nc(NativeSocketAddress::UNSAFE)->putByte(address + 0, (int8_t)(((int32_t)((uint32_t)ipAddress >> 24)) & 0xff));
	NativeSocketAddress::UNSAFE->putByte(address + 1, (int8_t)(((int32_t)((uint32_t)ipAddress >> 16)) & 0xff));
	NativeSocketAddress::UNSAFE->putByte(address + 2, (int8_t)(((int32_t)((uint32_t)ipAddress >> 8)) & 0xff));
	NativeSocketAddress::UNSAFE->putByte(address + 3, (int8_t)(ipAddress & 0xff));
}

void NativeSocketAddress::putAddress(int64_t address, $Inet6Address* ia) {
	$init(NativeSocketAddress);
	$var($bytes, bytes, $nc(NativeSocketAddress::JNINA)->addressBytes(ia));
	$nc(NativeSocketAddress::UNSAFE)->copyMemory(bytes, NativeSocketAddress::ARRAY_BASE_OFFSET, nullptr, address, 16);
}

int32_t NativeSocketAddress::AFINET() {
	$init(NativeSocketAddress);
	$prepareNativeStatic(AFINET, int32_t);
	int32_t $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

int32_t NativeSocketAddress::AFINET6() {
	$init(NativeSocketAddress);
	$prepareNativeStatic(AFINET6, int32_t);
	int32_t $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

int32_t NativeSocketAddress::sizeofSockAddr4() {
	$init(NativeSocketAddress);
	$prepareNativeStatic(sizeofSockAddr4, int32_t);
	int32_t $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

int32_t NativeSocketAddress::sizeofSockAddr6() {
	$init(NativeSocketAddress);
	$prepareNativeStatic(sizeofSockAddr6, int32_t);
	int32_t $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

int32_t NativeSocketAddress::sizeofFamily() {
	$init(NativeSocketAddress);
	$prepareNativeStatic(sizeofFamily, int32_t);
	int32_t $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

int32_t NativeSocketAddress::offsetFamily() {
	$init(NativeSocketAddress);
	$prepareNativeStatic(offsetFamily, int32_t);
	int32_t $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

int32_t NativeSocketAddress::offsetSin4Port() {
	$init(NativeSocketAddress);
	$prepareNativeStatic(offsetSin4Port, int32_t);
	int32_t $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

int32_t NativeSocketAddress::offsetSin4Addr() {
	$init(NativeSocketAddress);
	$prepareNativeStatic(offsetSin4Addr, int32_t);
	int32_t $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

int32_t NativeSocketAddress::offsetSin6Port() {
	$init(NativeSocketAddress);
	$prepareNativeStatic(offsetSin6Port, int32_t);
	int32_t $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

int32_t NativeSocketAddress::offsetSin6Addr() {
	$init(NativeSocketAddress);
	$prepareNativeStatic(offsetSin6Addr, int32_t);
	int32_t $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

int32_t NativeSocketAddress::offsetSin6ScopeId() {
	$init(NativeSocketAddress);
	$prepareNativeStatic(offsetSin6ScopeId, int32_t);
	int32_t $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

int32_t NativeSocketAddress::offsetSin6FlowInfo() {
	$init(NativeSocketAddress);
	$prepareNativeStatic(offsetSin6FlowInfo, int32_t);
	int32_t $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

void NativeSocketAddress::clinit$($Class* clazz) {
	$assignStatic(NativeSocketAddress::JNINA, $SharedSecrets::getJavaNetInetAddressAccess());
	$assignStatic(NativeSocketAddress::UNSAFE, $Unsafe::getUnsafe());
	NativeSocketAddress::ARRAY_BASE_OFFSET = $nc(NativeSocketAddress::UNSAFE)->arrayBaseOffset($getClass($bytes));
	NativeSocketAddress::AF_INET = NativeSocketAddress::AFINET();
	NativeSocketAddress::AF_INET6 = NativeSocketAddress::AFINET6();
	NativeSocketAddress::SIZEOF_SOCKADDR4 = NativeSocketAddress::sizeofSockAddr4();
	NativeSocketAddress::SIZEOF_SOCKADDR6 = NativeSocketAddress::sizeofSockAddr6();
	NativeSocketAddress::SIZEOF_SOCKETADDRESS = $Math::max(NativeSocketAddress::SIZEOF_SOCKADDR4, NativeSocketAddress::SIZEOF_SOCKADDR6);
	NativeSocketAddress::SIZEOF_FAMILY = NativeSocketAddress::sizeofFamily();
	NativeSocketAddress::OFFSET_FAMILY = NativeSocketAddress::offsetFamily();
	NativeSocketAddress::OFFSET_SIN4_PORT = NativeSocketAddress::offsetSin4Port();
	NativeSocketAddress::OFFSET_SIN4_ADDR = NativeSocketAddress::offsetSin4Addr();
	NativeSocketAddress::OFFSET_SIN6_PORT = NativeSocketAddress::offsetSin6Port();
	NativeSocketAddress::OFFSET_SIN6_ADDR = NativeSocketAddress::offsetSin6Addr();
	NativeSocketAddress::OFFSET_SIN6_SCOPE_ID = NativeSocketAddress::offsetSin6ScopeId();
	NativeSocketAddress::OFFSET_SIN6_FLOWINFO = NativeSocketAddress::offsetSin6FlowInfo();
	{
		$IOUtil::load();
	}
}

NativeSocketAddress::NativeSocketAddress() {
}

$Class* NativeSocketAddress::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"JNINA", "Ljdk/internal/access/JavaNetInetAddressAccess;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NativeSocketAddress, JNINA)},
		{"UNSAFE", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NativeSocketAddress, UNSAFE)},
		{"ARRAY_BASE_OFFSET", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NativeSocketAddress, ARRAY_BASE_OFFSET)},
		{"AF_INET", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NativeSocketAddress, AF_INET)},
		{"AF_INET6", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NativeSocketAddress, AF_INET6)},
		{"SIZEOF_SOCKADDR4", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NativeSocketAddress, SIZEOF_SOCKADDR4)},
		{"SIZEOF_SOCKADDR6", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NativeSocketAddress, SIZEOF_SOCKADDR6)},
		{"SIZEOF_SOCKETADDRESS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NativeSocketAddress, SIZEOF_SOCKETADDRESS)},
		{"SIZEOF_FAMILY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NativeSocketAddress, SIZEOF_FAMILY)},
		{"OFFSET_FAMILY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NativeSocketAddress, OFFSET_FAMILY)},
		{"OFFSET_SIN4_PORT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NativeSocketAddress, OFFSET_SIN4_PORT)},
		{"OFFSET_SIN4_ADDR", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NativeSocketAddress, OFFSET_SIN4_ADDR)},
		{"OFFSET_SIN6_PORT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NativeSocketAddress, OFFSET_SIN6_PORT)},
		{"OFFSET_SIN6_ADDR", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NativeSocketAddress, OFFSET_SIN6_ADDR)},
		{"OFFSET_SIN6_SCOPE_ID", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NativeSocketAddress, OFFSET_SIN6_SCOPE_ID)},
		{"OFFSET_SIN6_FLOWINFO", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NativeSocketAddress, OFFSET_SIN6_FLOWINFO)},
		{"address", "J", nullptr, $PRIVATE | $FINAL, $field(NativeSocketAddress, address$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(NativeSocketAddress, init$, void)},
		{"AFINET", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(NativeSocketAddress, AFINET, int32_t)},
		{"AFINET6", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(NativeSocketAddress, AFINET6, int32_t)},
		{"address", "()J", nullptr, 0, $virtualMethod(NativeSocketAddress, address, int64_t)},
		{"address", "(I)Ljava/net/InetAddress;", nullptr, $PRIVATE, $method(NativeSocketAddress, address, $InetAddress*, int32_t)},
		{"allocate", "(I)[Lsun/nio/ch/NativeSocketAddress;", nullptr, $STATIC, $staticMethod(NativeSocketAddress, allocate, $NativeSocketAddressArray*, int32_t)},
		{"decode", "()Ljava/net/InetSocketAddress;", nullptr, 0, $virtualMethod(NativeSocketAddress, decode, $InetSocketAddress*), "java.net.SocketException"},
		{"encode", "(Ljava/net/ProtocolFamily;Ljava/net/InetSocketAddress;)I", nullptr, 0, $virtualMethod(NativeSocketAddress, encode, int32_t, $ProtocolFamily*, $InetSocketAddress*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(NativeSocketAddress, equals, bool, Object$*)},
		{"family", "()I", nullptr, $PRIVATE, $method(NativeSocketAddress, family, int32_t)},
		{"freeAll", "([Lsun/nio/ch/NativeSocketAddress;)V", nullptr, $STATIC, $staticMethod(NativeSocketAddress, freeAll, void, $NativeSocketAddressArray*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(NativeSocketAddress, hashCode, int32_t)},
		{"mismatch", "(Lsun/nio/ch/NativeSocketAddress;)I", nullptr, $PRIVATE, $method(NativeSocketAddress, mismatch, int32_t, NativeSocketAddress*)},
		{"offsetFamily", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(NativeSocketAddress, offsetFamily, int32_t)},
		{"offsetSin4Addr", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(NativeSocketAddress, offsetSin4Addr, int32_t)},
		{"offsetSin4Port", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(NativeSocketAddress, offsetSin4Port, int32_t)},
		{"offsetSin6Addr", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(NativeSocketAddress, offsetSin6Addr, int32_t)},
		{"offsetSin6FlowInfo", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(NativeSocketAddress, offsetSin6FlowInfo, int32_t)},
		{"offsetSin6Port", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(NativeSocketAddress, offsetSin6Port, int32_t)},
		{"offsetSin6ScopeId", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(NativeSocketAddress, offsetSin6ScopeId, int32_t)},
		{"port", "(I)I", nullptr, $PRIVATE, $method(NativeSocketAddress, port, int32_t, int32_t)},
		{"putAddress", "(ILjava/net/InetAddress;)V", nullptr, $PRIVATE, $method(NativeSocketAddress, putAddress, void, int32_t, $InetAddress*)},
		{"putAddress", "(JLjava/net/Inet4Address;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(NativeSocketAddress, putAddress, void, int64_t, $Inet4Address*)},
		{"putAddress", "(JLjava/net/Inet6Address;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(NativeSocketAddress, putAddress, void, int64_t, $Inet6Address*)},
		{"putFamily", "(I)V", nullptr, $PRIVATE, $method(NativeSocketAddress, putFamily, void, int32_t)},
		{"putPort", "(II)V", nullptr, $PRIVATE, $method(NativeSocketAddress, putPort, void, int32_t, int32_t)},
		{"sizeofFamily", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(NativeSocketAddress, sizeofFamily, int32_t)},
		{"sizeofSockAddr4", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(NativeSocketAddress, sizeofSockAddr4, int32_t)},
		{"sizeofSockAddr6", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(NativeSocketAddress, sizeofSockAddr6, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NativeSocketAddress, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.ch.NativeSocketAddress",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NativeSocketAddress, name, initialize, &classInfo$$, NativeSocketAddress::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(NativeSocketAddress);
	});
	return class$;
}

$Class* NativeSocketAddress::class$ = nullptr;

		} // ch
	} // nio
} // sun