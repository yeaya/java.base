#include <MockE1000g0Inet6Address.h>

#include <jcpp.h>

#undef SCOPE_ID_ZERO

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _MockE1000g0Inet6Address_FieldInfo_[] = {
	{"E1000G0IPV6ADDRESS", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MockE1000g0Inet6Address, E1000G0IPV6ADDRESS)},
	{"E1000G0HOSTNAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MockE1000g0Inet6Address, E1000G0HOSTNAME)},
	{"BARE_E1000G0HOSTADDRESS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MockE1000g0Inet6Address, BARE_E1000G0HOSTADDRESS)},
	{"E1000G0HOSTADDRESS_WITHINDEX", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MockE1000g0Inet6Address, E1000G0HOSTADDRESS_WITHINDEX)},
	{"E1000G0HOSTADDRESS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MockE1000g0Inet6Address, E1000G0HOSTADDRESS)},
	{"NETWORK_IF_E1000G0", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MockE1000g0Inet6Address, NETWORK_IF_E1000G0)},
	{"SCOPE_ID_E1000G0", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MockE1000g0Inet6Address, SCOPE_ID_E1000G0)},
	{"SCOPE_ID_ZERO", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MockE1000g0Inet6Address, SCOPE_ID_ZERO)},
	{}
};

$MethodInfo _MockE1000g0Inet6Address_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(MockE1000g0Inet6Address, init$, void)},
	{"getAddress", "()[B", nullptr, $STATIC, $staticMethod(MockE1000g0Inet6Address, getAddress, $bytes*)},
	{"getBareHostAddress", "()Ljava/lang/String;", nullptr, $STATIC, $staticMethod(MockE1000g0Inet6Address, getBareHostAddress, $String*)},
	{"getHostAddress", "()Ljava/lang/String;", nullptr, $STATIC, $staticMethod(MockE1000g0Inet6Address, getHostAddress, $String*)},
	{"getHostAddressWithIndex", "()Ljava/lang/String;", nullptr, $STATIC, $staticMethod(MockE1000g0Inet6Address, getHostAddressWithIndex, $String*)},
	{"getHostName", "()Ljava/lang/String;", nullptr, $STATIC, $staticMethod(MockE1000g0Inet6Address, getHostName, $String*)},
	{"getScopeId", "()I", nullptr, $STATIC, $staticMethod(MockE1000g0Inet6Address, getScopeId, int32_t)},
	{"getScopeIfName", "()Ljava/lang/String;", nullptr, $STATIC, $staticMethod(MockE1000g0Inet6Address, getScopeIfName, $String*)},
	{"getScopeZero", "()I", nullptr, $STATIC, $staticMethod(MockE1000g0Inet6Address, getScopeZero, int32_t)},
	{}
};

$ClassInfo _MockE1000g0Inet6Address_ClassInfo_ = {
	$ACC_SUPER,
	"MockE1000g0Inet6Address",
	"java.lang.Object",
	nullptr,
	_MockE1000g0Inet6Address_FieldInfo_,
	_MockE1000g0Inet6Address_MethodInfo_
};

$Object* allocate$MockE1000g0Inet6Address($Class* clazz) {
	return $of($alloc(MockE1000g0Inet6Address));
}

$bytes* MockE1000g0Inet6Address::E1000G0IPV6ADDRESS = nullptr;
$String* MockE1000g0Inet6Address::E1000G0HOSTNAME = nullptr;
$String* MockE1000g0Inet6Address::BARE_E1000G0HOSTADDRESS = nullptr;
$String* MockE1000g0Inet6Address::E1000G0HOSTADDRESS_WITHINDEX = nullptr;
$String* MockE1000g0Inet6Address::E1000G0HOSTADDRESS = nullptr;
$String* MockE1000g0Inet6Address::NETWORK_IF_E1000G0 = nullptr;

void MockE1000g0Inet6Address::init$() {
}

$String* MockE1000g0Inet6Address::getHostName() {
	$init(MockE1000g0Inet6Address);
	return MockE1000g0Inet6Address::E1000G0HOSTNAME;
}

$String* MockE1000g0Inet6Address::getHostAddress() {
	$init(MockE1000g0Inet6Address);
	return MockE1000g0Inet6Address::E1000G0HOSTADDRESS;
}

$String* MockE1000g0Inet6Address::getHostAddressWithIndex() {
	$init(MockE1000g0Inet6Address);
	return MockE1000g0Inet6Address::E1000G0HOSTADDRESS_WITHINDEX;
}

$String* MockE1000g0Inet6Address::getBareHostAddress() {
	$init(MockE1000g0Inet6Address);
	return MockE1000g0Inet6Address::BARE_E1000G0HOSTADDRESS;
}

$bytes* MockE1000g0Inet6Address::getAddress() {
	$init(MockE1000g0Inet6Address);
	return MockE1000g0Inet6Address::E1000G0IPV6ADDRESS;
}

int32_t MockE1000g0Inet6Address::getScopeId() {
	$init(MockE1000g0Inet6Address);
	return MockE1000g0Inet6Address::SCOPE_ID_E1000G0;
}

int32_t MockE1000g0Inet6Address::getScopeZero() {
	$init(MockE1000g0Inet6Address);
	return MockE1000g0Inet6Address::SCOPE_ID_ZERO;
}

$String* MockE1000g0Inet6Address::getScopeIfName() {
	$init(MockE1000g0Inet6Address);
	return MockE1000g0Inet6Address::NETWORK_IF_E1000G0;
}

void clinit$MockE1000g0Inet6Address($Class* class$) {
	$assignStatic(MockE1000g0Inet6Address::E1000G0HOSTNAME, "fe80:0:0:0:21b:24ff:febd:f29c%e1000g0"_s);
	$assignStatic(MockE1000g0Inet6Address::BARE_E1000G0HOSTADDRESS, "fe80:0:0:0:21b:24ff:febd:f29c"_s);
	$assignStatic(MockE1000g0Inet6Address::E1000G0HOSTADDRESS_WITHINDEX, "fe80:0:0:0:21b:24ff:febd:f29c%2"_s);
	$assignStatic(MockE1000g0Inet6Address::E1000G0HOSTADDRESS, "fe80:0:0:0:21b:24ff:febd:f29c%e1000g0"_s);
	$assignStatic(MockE1000g0Inet6Address::NETWORK_IF_E1000G0, "e1000g0"_s);
	$assignStatic(MockE1000g0Inet6Address::E1000G0IPV6ADDRESS, $new($bytes, {
		(int8_t)254,
		(int8_t)128,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)2,
		(int8_t)27,
		(int8_t)36,
		(int8_t)255,
		(int8_t)254,
		(int8_t)189,
		(int8_t)242,
		(int8_t)156
	}));
}

MockE1000g0Inet6Address::MockE1000g0Inet6Address() {
}

$Class* MockE1000g0Inet6Address::load$($String* name, bool initialize) {
	$loadClass(MockE1000g0Inet6Address, name, initialize, &_MockE1000g0Inet6Address_ClassInfo_, clinit$MockE1000g0Inet6Address, allocate$MockE1000g0Inet6Address);
	return class$;
}

$Class* MockE1000g0Inet6Address::class$ = nullptr;