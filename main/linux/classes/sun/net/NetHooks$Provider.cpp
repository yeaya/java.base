#include <sun/net/NetHooks$Provider.h>

#include <java/io/FileDescriptor.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/InetAddress.h>
#include <sun/net/NetHooks.h>
#include <jcpp.h>

using $FileDescriptor = ::java::io::FileDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $NetHooks = ::sun::net::NetHooks;

namespace sun {
	namespace net {

$MethodInfo _NetHooks$Provider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(NetHooks$Provider::*)()>(&NetHooks$Provider::init$))},
	{"implBeforeTcpBind", "(Ljava/io/FileDescriptor;Ljava/net/InetAddress;I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"implBeforeTcpConnect", "(Ljava/io/FileDescriptor;Ljava/net/InetAddress;I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _NetHooks$Provider_InnerClassesInfo_[] = {
	{"sun.net.NetHooks$Provider", "sun.net.NetHooks", "Provider", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _NetHooks$Provider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.net.NetHooks$Provider",
	"java.lang.Object",
	nullptr,
	nullptr,
	_NetHooks$Provider_MethodInfo_,
	nullptr,
	nullptr,
	_NetHooks$Provider_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.NetHooks"
};

$Object* allocate$NetHooks$Provider($Class* clazz) {
	return $of($alloc(NetHooks$Provider));
}

void NetHooks$Provider::init$() {
}

NetHooks$Provider::NetHooks$Provider() {
}

$Class* NetHooks$Provider::load$($String* name, bool initialize) {
	$loadClass(NetHooks$Provider, name, initialize, &_NetHooks$Provider_ClassInfo_, allocate$NetHooks$Provider);
	return class$;
}

$Class* NetHooks$Provider::class$ = nullptr;

	} // net
} // sun