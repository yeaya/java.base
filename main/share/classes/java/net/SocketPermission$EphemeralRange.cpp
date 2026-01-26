#include <java/net/SocketPermission$EphemeralRange.h>

#include <java/net/SocketPermission.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SocketPermission = ::java::net::SocketPermission;

namespace java {
	namespace net {

$FieldInfo _SocketPermission$EphemeralRange_FieldInfo_[] = {
	{"low", "I", nullptr, $STATIC | $FINAL, $staticField(SocketPermission$EphemeralRange, low)},
	{"high", "I", nullptr, $STATIC | $FINAL, $staticField(SocketPermission$EphemeralRange, high)},
	{}
};

$MethodInfo _SocketPermission$EphemeralRange_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(SocketPermission$EphemeralRange, init$, void)},
	{}
};

$InnerClassInfo _SocketPermission$EphemeralRange_InnerClassesInfo_[] = {
	{"java.net.SocketPermission$EphemeralRange", "java.net.SocketPermission", "EphemeralRange", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SocketPermission$EphemeralRange_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.SocketPermission$EphemeralRange",
	"java.lang.Object",
	nullptr,
	_SocketPermission$EphemeralRange_FieldInfo_,
	_SocketPermission$EphemeralRange_MethodInfo_,
	nullptr,
	nullptr,
	_SocketPermission$EphemeralRange_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.SocketPermission"
};

$Object* allocate$SocketPermission$EphemeralRange($Class* clazz) {
	return $of($alloc(SocketPermission$EphemeralRange));
}

int32_t SocketPermission$EphemeralRange::low = 0;
int32_t SocketPermission$EphemeralRange::high = 0;

void SocketPermission$EphemeralRange::init$() {
}

void clinit$SocketPermission$EphemeralRange($Class* class$) {
	SocketPermission$EphemeralRange::low = $SocketPermission::initEphemeralPorts("low"_s, 0x0000C000);
	SocketPermission$EphemeralRange::high = $SocketPermission::initEphemeralPorts("high"_s, 0x0000FFFF);
}

SocketPermission$EphemeralRange::SocketPermission$EphemeralRange() {
}

$Class* SocketPermission$EphemeralRange::load$($String* name, bool initialize) {
	$loadClass(SocketPermission$EphemeralRange, name, initialize, &_SocketPermission$EphemeralRange_ClassInfo_, clinit$SocketPermission$EphemeralRange, allocate$SocketPermission$EphemeralRange);
	return class$;
}

$Class* SocketPermission$EphemeralRange::class$ = nullptr;

	} // net
} // java