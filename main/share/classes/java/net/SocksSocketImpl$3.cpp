#include <java/net/SocksSocketImpl$3.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/ProxySelector.h>
#include <java/net/SocksSocketImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProxySelector = ::java::net::ProxySelector;
using $SocksSocketImpl = ::java::net::SocksSocketImpl;
using $PrivilegedAction = ::java::security::PrivilegedAction;

namespace java {
	namespace net {

$FieldInfo _SocksSocketImpl$3_FieldInfo_[] = {
	{"this$0", "Ljava/net/SocksSocketImpl;", nullptr, $FINAL | $SYNTHETIC, $field(SocksSocketImpl$3, this$0)},
	{}
};

$MethodInfo _SocksSocketImpl$3_MethodInfo_[] = {
	{"<init>", "(Ljava/net/SocksSocketImpl;)V", nullptr, 0, $method(static_cast<void(SocksSocketImpl$3::*)($SocksSocketImpl*)>(&SocksSocketImpl$3::init$))},
	{"run", "()Ljava/net/ProxySelector;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SocksSocketImpl$3_EnclosingMethodInfo_ = {
	"java.net.SocksSocketImpl",
	"connect",
	"(Ljava/net/SocketAddress;I)V"
};

$InnerClassInfo _SocksSocketImpl$3_InnerClassesInfo_[] = {
	{"java.net.SocksSocketImpl$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SocksSocketImpl$3_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.SocksSocketImpl$3",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_SocksSocketImpl$3_FieldInfo_,
	_SocksSocketImpl$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/net/ProxySelector;>;",
	&_SocksSocketImpl$3_EnclosingMethodInfo_,
	_SocksSocketImpl$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.SocksSocketImpl"
};

$Object* allocate$SocksSocketImpl$3($Class* clazz) {
	return $of($alloc(SocksSocketImpl$3));
}

void SocksSocketImpl$3::init$($SocksSocketImpl* this$0) {
	$set(this, this$0, this$0);
}

$Object* SocksSocketImpl$3::run() {
	return $of($ProxySelector::getDefault());
}

SocksSocketImpl$3::SocksSocketImpl$3() {
}

$Class* SocksSocketImpl$3::load$($String* name, bool initialize) {
	$loadClass(SocksSocketImpl$3, name, initialize, &_SocksSocketImpl$3_ClassInfo_, allocate$SocksSocketImpl$3);
	return class$;
}

$Class* SocksSocketImpl$3::class$ = nullptr;

	} // net
} // java