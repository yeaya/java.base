#include <sun/net/NetProperties$1.h>

#include <sun/net/NetProperties.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $NetProperties = ::sun::net::NetProperties;

namespace sun {
	namespace net {

$MethodInfo _NetProperties$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(NetProperties$1::*)()>(&NetProperties$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _NetProperties$1_EnclosingMethodInfo_ = {
	"sun.net.NetProperties",
	nullptr,
	nullptr
};

$InnerClassInfo _NetProperties$1_InnerClassesInfo_[] = {
	{"sun.net.NetProperties$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NetProperties$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.NetProperties$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_NetProperties$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_NetProperties$1_EnclosingMethodInfo_,
	_NetProperties$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.NetProperties"
};

$Object* allocate$NetProperties$1($Class* clazz) {
	return $of($alloc(NetProperties$1));
}

void NetProperties$1::init$() {
}

$Object* NetProperties$1::run() {
	$NetProperties::loadDefaultProperties();
	return $of(nullptr);
}

NetProperties$1::NetProperties$1() {
}

$Class* NetProperties$1::load$($String* name, bool initialize) {
	$loadClass(NetProperties$1, name, initialize, &_NetProperties$1_ClassInfo_, allocate$NetProperties$1);
	return class$;
}

$Class* NetProperties$1::class$ = nullptr;

	} // net
} // sun