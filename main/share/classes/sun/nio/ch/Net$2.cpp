#include <sun/nio/ch/Net$2.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/Inet4Address.h>
#include <java/net/InetAddress.h>
#include <java/net/NetworkInterface.h>
#include <java/util/Enumeration.h>
#include <sun/nio/ch/Net.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Inet4Address = ::java::net::Inet4Address;
using $InetAddress = ::java::net::InetAddress;
using $NetworkInterface = ::java::net::NetworkInterface;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Enumeration = ::java::util::Enumeration;
using $Net = ::sun::nio::ch::Net;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _Net$2_FieldInfo_[] = {
	{"val$interf", "Ljava/net/NetworkInterface;", nullptr, $FINAL | $SYNTHETIC, $field(Net$2, val$interf)},
	{}
};

$MethodInfo _Net$2_MethodInfo_[] = {
	{"<init>", "(Ljava/net/NetworkInterface;)V", "()V", 0, $method(static_cast<void(Net$2::*)($NetworkInterface*)>(&Net$2::init$))},
	{"run", "()Ljava/net/Inet4Address;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Net$2_EnclosingMethodInfo_ = {
	"sun.nio.ch.Net",
	"anyInet4Address",
	"(Ljava/net/NetworkInterface;)Ljava/net/Inet4Address;"
};

$InnerClassInfo _Net$2_InnerClassesInfo_[] = {
	{"sun.nio.ch.Net$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Net$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.Net$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_Net$2_FieldInfo_,
	_Net$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/net/Inet4Address;>;",
	&_Net$2_EnclosingMethodInfo_,
	_Net$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.Net"
};

$Object* allocate$Net$2($Class* clazz) {
	return $of($alloc(Net$2));
}

void Net$2::init$($NetworkInterface* val$interf) {
	$set(this, val$interf, val$interf);
}

$Object* Net$2::run() {
	$useLocalCurrentObjectStackCache();
	$var($Enumeration, addrs, $nc(this->val$interf)->getInetAddresses());
	while ($nc(addrs)->hasMoreElements()) {
		$var($InetAddress, addr, $cast($InetAddress, addrs->nextElement()));
		if ($instanceOf($Inet4Address, addr)) {
			return $of($cast($Inet4Address, addr));
		}
	}
	return $of(nullptr);
}

Net$2::Net$2() {
}

$Class* Net$2::load$($String* name, bool initialize) {
	$loadClass(Net$2, name, initialize, &_Net$2_ClassInfo_, allocate$Net$2);
	return class$;
}

$Class* Net$2::class$ = nullptr;

		} // ch
	} // nio
} // sun