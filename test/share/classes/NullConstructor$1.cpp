#include <NullConstructor$1.h>
#include <NullConstructor.h>
#include <java/net/ServerSocket.h>
#include <java/net/SocketImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ServerSocket = ::java::net::ServerSocket;
using $SocketImpl = ::java::net::SocketImpl;

void NullConstructor$1::init$($SocketImpl* arg0) {
	$ServerSocket::init$(arg0);
}

NullConstructor$1::NullConstructor$1() {
}

$Class* NullConstructor$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/SocketImpl;)V", nullptr, 0, $method(NullConstructor$1, init$, void, $SocketImpl*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"NullConstructor",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"NullConstructor$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"NullConstructor$1",
		"java.net.ServerSocket",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"NullConstructor"
	};
	$loadClass(NullConstructor$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NullConstructor$1);
	});
	return class$;
}

$Class* NullConstructor$1::class$ = nullptr;