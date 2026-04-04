#include <java/net/NetMulticastSocket$1.h>
#include <java/lang/reflect/Method.h>
#include <java/net/DatagramPacket.h>
#include <java/net/DatagramSocketImpl.h>
#include <java/net/NetMulticastSocket.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DatagramPacket = ::java::net::DatagramPacket;
using $DatagramSocketImpl = ::java::net::DatagramSocketImpl;

namespace java {
	namespace net {

void NetMulticastSocket$1::init$($DatagramSocketImpl* val$impl) {
	$set(this, val$impl, val$impl);
}

$Object* NetMulticastSocket$1::run() {
	$beforeCallerSensitive();
	$var($ClassArray, cl, $new($ClassArray, 1));
	$load($DatagramPacket);
	cl->set(0, $DatagramPacket::class$);
	$nc(this->val$impl)->getClass()->getDeclaredMethod("peekData"_s, cl);
	return nullptr;
}

NetMulticastSocket$1::NetMulticastSocket$1() {
}

$Class* NetMulticastSocket$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$impl", "Ljava/net/DatagramSocketImpl;", nullptr, $FINAL | $SYNTHETIC, $field(NetMulticastSocket$1, val$impl)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/DatagramSocketImpl;)V", nullptr, 0, $method(NetMulticastSocket$1, init$, void, $DatagramSocketImpl*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(NetMulticastSocket$1, run, $Object*), "java.lang.NoSuchMethodException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.net.NetMulticastSocket",
		"checkOldImpl",
		"(Ljava/net/DatagramSocketImpl;)Z"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.NetMulticastSocket$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.net.NetMulticastSocket$1",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.net.NetMulticastSocket"
	};
	$loadClass(NetMulticastSocket$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NetMulticastSocket$1);
	});
	return class$;
}

$Class* NetMulticastSocket$1::class$ = nullptr;

	} // net
} // java