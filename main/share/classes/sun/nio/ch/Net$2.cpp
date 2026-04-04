#include <sun/nio/ch/Net$2.h>
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
using $Enumeration = ::java::util::Enumeration;

namespace sun {
	namespace nio {
		namespace ch {

void Net$2::init$($NetworkInterface* val$interf) {
	$set(this, val$interf, val$interf);
}

$Object* Net$2::run() {
	$useLocalObjectStack();
	$var($Enumeration, addrs, $nc(this->val$interf)->getInetAddresses());
	while ($nc(addrs)->hasMoreElements()) {
		$var($InetAddress, addr, $cast($InetAddress, addrs->nextElement()));
		if ($instanceOf($Inet4Address, addr)) {
			return $cast($Inet4Address, addr);
		}
	}
	return nullptr;
}

Net$2::Net$2() {
}

$Class* Net$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$interf", "Ljava/net/NetworkInterface;", nullptr, $FINAL | $SYNTHETIC, $field(Net$2, val$interf)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/NetworkInterface;)V", "()V", 0, $method(Net$2, init$, void, $NetworkInterface*)},
		{"run", "()Ljava/net/Inet4Address;", nullptr, $PUBLIC, $virtualMethod(Net$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.ch.Net",
		"anyInet4Address",
		"(Ljava/net/NetworkInterface;)Ljava/net/Inet4Address;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.Net$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.ch.Net$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/net/Inet4Address;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.ch.Net"
	};
	$loadClass(Net$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Net$2);
	});
	return class$;
}

$Class* Net$2::class$ = nullptr;

		} // ch
	} // nio
} // sun