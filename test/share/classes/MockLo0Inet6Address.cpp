#include <MockLo0Inet6Address.h>

#include <jcpp.h>

#undef BARE_LO0HOSTADDRESS
#undef LO0HOSTADDRESS
#undef LO0HOSTADDRESS_WITHINDEX
#undef LOCALHOSTNAME
#undef LOOPBACKIPV6ADDRESS
#undef NETWORK_IF_LO0
#undef SCOPE_ID_LO0
#undef SCOPE_ID_ZERO

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _MockLo0Inet6Address_FieldInfo_[] = {
	{"LOOPBACKIPV6ADDRESS", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MockLo0Inet6Address, LOOPBACKIPV6ADDRESS)},
	{"LOCALHOSTNAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MockLo0Inet6Address, LOCALHOSTNAME)},
	{"LO0HOSTADDRESS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MockLo0Inet6Address, LO0HOSTADDRESS)},
	{"BARE_LO0HOSTADDRESS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MockLo0Inet6Address, BARE_LO0HOSTADDRESS)},
	{"LO0HOSTADDRESS_WITHINDEX", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MockLo0Inet6Address, LO0HOSTADDRESS_WITHINDEX)},
	{"SCOPE_ID_LO0", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MockLo0Inet6Address, SCOPE_ID_LO0)},
	{"SCOPE_ID_ZERO", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MockLo0Inet6Address, SCOPE_ID_ZERO)},
	{"NETWORK_IF_LO0", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MockLo0Inet6Address, NETWORK_IF_LO0)},
	{}
};

$MethodInfo _MockLo0Inet6Address_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MockLo0Inet6Address::*)()>(&MockLo0Inet6Address::init$))},
	{"getAddress", "()[B", nullptr, $STATIC, $method(static_cast<$bytes*(*)()>(&MockLo0Inet6Address::getAddress))},
	{"getBareHostAddress", "()Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)()>(&MockLo0Inet6Address::getBareHostAddress))},
	{"getHostAddress", "()Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)()>(&MockLo0Inet6Address::getHostAddress))},
	{"getHostAddressWithIndex", "()Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)()>(&MockLo0Inet6Address::getHostAddressWithIndex))},
	{"getHostName", "()Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)()>(&MockLo0Inet6Address::getHostName))},
	{"getScopeId", "()I", nullptr, $STATIC, $method(static_cast<int32_t(*)()>(&MockLo0Inet6Address::getScopeId))},
	{"getScopeIfName", "()Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)()>(&MockLo0Inet6Address::getScopeIfName))},
	{"getScopeZero", "()I", nullptr, $STATIC, $method(static_cast<int32_t(*)()>(&MockLo0Inet6Address::getScopeZero))},
	{}
};

$ClassInfo _MockLo0Inet6Address_ClassInfo_ = {
	$ACC_SUPER,
	"MockLo0Inet6Address",
	"java.lang.Object",
	nullptr,
	_MockLo0Inet6Address_FieldInfo_,
	_MockLo0Inet6Address_MethodInfo_
};

$Object* allocate$MockLo0Inet6Address($Class* clazz) {
	return $of($alloc(MockLo0Inet6Address));
}

$bytes* MockLo0Inet6Address::LOOPBACKIPV6ADDRESS = nullptr;
$String* MockLo0Inet6Address::LOCALHOSTNAME = nullptr;
$String* MockLo0Inet6Address::LO0HOSTADDRESS = nullptr;
$String* MockLo0Inet6Address::BARE_LO0HOSTADDRESS = nullptr;
$String* MockLo0Inet6Address::LO0HOSTADDRESS_WITHINDEX = nullptr;
$String* MockLo0Inet6Address::NETWORK_IF_LO0 = nullptr;

void MockLo0Inet6Address::init$() {
}

$String* MockLo0Inet6Address::getHostName() {
	$init(MockLo0Inet6Address);
	return MockLo0Inet6Address::LOCALHOSTNAME;
}

$String* MockLo0Inet6Address::getHostAddress() {
	$init(MockLo0Inet6Address);
	return MockLo0Inet6Address::LO0HOSTADDRESS;
}

$String* MockLo0Inet6Address::getBareHostAddress() {
	$init(MockLo0Inet6Address);
	return MockLo0Inet6Address::BARE_LO0HOSTADDRESS;
}

$String* MockLo0Inet6Address::getHostAddressWithIndex() {
	$init(MockLo0Inet6Address);
	return MockLo0Inet6Address::LO0HOSTADDRESS_WITHINDEX;
}

$bytes* MockLo0Inet6Address::getAddress() {
	$init(MockLo0Inet6Address);
	return MockLo0Inet6Address::LOOPBACKIPV6ADDRESS;
}

int32_t MockLo0Inet6Address::getScopeId() {
	$init(MockLo0Inet6Address);
	return MockLo0Inet6Address::SCOPE_ID_LO0;
}

int32_t MockLo0Inet6Address::getScopeZero() {
	$init(MockLo0Inet6Address);
	return MockLo0Inet6Address::SCOPE_ID_ZERO;
}

$String* MockLo0Inet6Address::getScopeIfName() {
	$init(MockLo0Inet6Address);
	return MockLo0Inet6Address::NETWORK_IF_LO0;
}

void clinit$MockLo0Inet6Address($Class* class$) {
	$assignStatic(MockLo0Inet6Address::LOCALHOSTNAME, "localhost"_s);
	$assignStatic(MockLo0Inet6Address::LO0HOSTADDRESS, "0:0:0:0:0:0:0:1%lo0"_s);
	$assignStatic(MockLo0Inet6Address::BARE_LO0HOSTADDRESS, "0:0:0:0:0:0:0:1"_s);
	$assignStatic(MockLo0Inet6Address::LO0HOSTADDRESS_WITHINDEX, "0:0:0:0:0:0:0:1%1"_s);
	$assignStatic(MockLo0Inet6Address::NETWORK_IF_LO0, "lo0"_s);
	$assignStatic(MockLo0Inet6Address::LOOPBACKIPV6ADDRESS, $new($bytes, {
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)1
	}));
}

MockLo0Inet6Address::MockLo0Inet6Address() {
}

$Class* MockLo0Inet6Address::load$($String* name, bool initialize) {
	$loadClass(MockLo0Inet6Address, name, initialize, &_MockLo0Inet6Address_ClassInfo_, clinit$MockLo0Inet6Address, allocate$MockLo0Inet6Address);
	return class$;
}

$Class* MockLo0Inet6Address::class$ = nullptr;