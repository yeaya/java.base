#include <sun/net/NetHooks$Provider.h>
#include <java/io/FileDescriptor.h>
#include <java/net/InetAddress.h>
#include <sun/net/NetHooks.h>
#include <jcpp.h>

using $FileDescriptor = ::java::io::FileDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;

namespace sun {
	namespace net {

void NetHooks$Provider::init$() {
}

NetHooks$Provider::NetHooks$Provider() {
}

$Class* NetHooks$Provider::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(NetHooks$Provider, init$, void)},
		{"implBeforeTcpBind", "(Ljava/io/FileDescriptor;Ljava/net/InetAddress;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NetHooks$Provider, implBeforeTcpBind, void, $FileDescriptor*, $InetAddress*, int32_t), "java.io.IOException"},
		{"implBeforeTcpConnect", "(Ljava/io/FileDescriptor;Ljava/net/InetAddress;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NetHooks$Provider, implBeforeTcpConnect, void, $FileDescriptor*, $InetAddress*, int32_t), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.NetHooks$Provider", "sun.net.NetHooks", "Provider", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"sun.net.NetHooks$Provider",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.net.NetHooks"
	};
	$loadClass(NetHooks$Provider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NetHooks$Provider);
	});
	return class$;
}

$Class* NetHooks$Provider::class$ = nullptr;

	} // net
} // sun