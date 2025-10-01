#include <java/net/InetAddress$CachedLocalHost.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/InetAddress.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;

namespace java {
	namespace net {

$FieldInfo _InetAddress$CachedLocalHost_FieldInfo_[] = {
	{"host", "Ljava/lang/String;", nullptr, $FINAL, $field(InetAddress$CachedLocalHost, host)},
	{"addr", "Ljava/net/InetAddress;", nullptr, $FINAL, $field(InetAddress$CachedLocalHost, addr)},
	{"expiryTime", "J", nullptr, $FINAL, $field(InetAddress$CachedLocalHost, expiryTime)},
	{}
};

$MethodInfo _InetAddress$CachedLocalHost_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/net/InetAddress;)V", nullptr, 0, $method(static_cast<void(InetAddress$CachedLocalHost::*)($String*,$InetAddress*)>(&InetAddress$CachedLocalHost::init$))},
	{}
};

$InnerClassInfo _InetAddress$CachedLocalHost_InnerClassesInfo_[] = {
	{"java.net.InetAddress$CachedLocalHost", "java.net.InetAddress", "CachedLocalHost", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _InetAddress$CachedLocalHost_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.net.InetAddress$CachedLocalHost",
	"java.lang.Object",
	nullptr,
	_InetAddress$CachedLocalHost_FieldInfo_,
	_InetAddress$CachedLocalHost_MethodInfo_,
	nullptr,
	nullptr,
	_InetAddress$CachedLocalHost_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.InetAddress"
};

$Object* allocate$InetAddress$CachedLocalHost($Class* clazz) {
	return $of($alloc(InetAddress$CachedLocalHost));
}

void InetAddress$CachedLocalHost::init$($String* host, $InetAddress* addr) {
	this->expiryTime = $System::nanoTime() + (int64_t)0x000000012A05F200;
	$set(this, host, host);
	$set(this, addr, addr);
}

InetAddress$CachedLocalHost::InetAddress$CachedLocalHost() {
}

$Class* InetAddress$CachedLocalHost::load$($String* name, bool initialize) {
	$loadClass(InetAddress$CachedLocalHost, name, initialize, &_InetAddress$CachedLocalHost_ClassInfo_, allocate$InetAddress$CachedLocalHost);
	return class$;
}

$Class* InetAddress$CachedLocalHost::class$ = nullptr;

	} // net
} // java