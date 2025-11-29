#include <java/net/SocketPermission$1.h>

#include <java/net/SocketPermission.h>
#include <sun/net/PortConfig.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $PortConfig = ::sun::net::PortConfig;

namespace java {
	namespace net {

$FieldInfo _SocketPermission$1_FieldInfo_[] = {
	{"val$suffix", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(SocketPermission$1, val$suffix)},
	{}
};

$MethodInfo _SocketPermission$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(SocketPermission$1::*)($String*)>(&SocketPermission$1::init$))},
	{"run", "()Ljava/lang/Integer;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SocketPermission$1_EnclosingMethodInfo_ = {
	"java.net.SocketPermission",
	"initEphemeralPorts",
	"(Ljava/lang/String;I)I"
};

$InnerClassInfo _SocketPermission$1_InnerClassesInfo_[] = {
	{"java.net.SocketPermission$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SocketPermission$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.SocketPermission$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_SocketPermission$1_FieldInfo_,
	_SocketPermission$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Integer;>;",
	&_SocketPermission$1_EnclosingMethodInfo_,
	_SocketPermission$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.SocketPermission"
};

$Object* allocate$SocketPermission$1($Class* clazz) {
	return $of($alloc(SocketPermission$1));
}

void SocketPermission$1::init$($String* val$suffix) {
	$set(this, val$suffix, val$suffix);
}

$Object* SocketPermission$1::run() {
	$useLocalCurrentObjectStackCache();
	int32_t val = $nc($($Integer::getInteger($$str({"jdk.net.ephemeralPortRange."_s, this->val$suffix}), -1)))->intValue();
	if (val != -1) {
		return $of($Integer::valueOf(val));
	} else {
		return $of($Integer::valueOf($nc(this->val$suffix)->equals("low"_s) ? $PortConfig::getLower() : $PortConfig::getUpper()));
	}
}

SocketPermission$1::SocketPermission$1() {
}

$Class* SocketPermission$1::load$($String* name, bool initialize) {
	$loadClass(SocketPermission$1, name, initialize, &_SocketPermission$1_ClassInfo_, allocate$SocketPermission$1);
	return class$;
}

$Class* SocketPermission$1::class$ = nullptr;

	} // net
} // java