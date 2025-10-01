#include <java/net/SocksSocketImpl$2.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/Authenticator.h>
#include <java/net/InetAddress.h>
#include <java/net/PasswordAuthentication.h>
#include <java/net/SocksSocketImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Authenticator = ::java::net::Authenticator;
using $InetAddress = ::java::net::InetAddress;
using $PasswordAuthentication = ::java::net::PasswordAuthentication;
using $SocksSocketImpl = ::java::net::SocksSocketImpl;
using $PrivilegedAction = ::java::security::PrivilegedAction;

namespace java {
	namespace net {

$FieldInfo _SocksSocketImpl$2_FieldInfo_[] = {
	{"this$0", "Ljava/net/SocksSocketImpl;", nullptr, $FINAL | $SYNTHETIC, $field(SocksSocketImpl$2, this$0)},
	{"val$addr", "Ljava/net/InetAddress;", nullptr, $FINAL | $SYNTHETIC, $field(SocksSocketImpl$2, val$addr)},
	{}
};

$MethodInfo _SocksSocketImpl$2_MethodInfo_[] = {
	{"<init>", "(Ljava/net/SocksSocketImpl;Ljava/net/InetAddress;)V", nullptr, 0, $method(static_cast<void(SocksSocketImpl$2::*)($SocksSocketImpl*,$InetAddress*)>(&SocksSocketImpl$2::init$))},
	{"run", "()Ljava/net/PasswordAuthentication;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SocksSocketImpl$2_EnclosingMethodInfo_ = {
	"java.net.SocksSocketImpl",
	"authenticate",
	"(BLjava/io/InputStream;Ljava/io/BufferedOutputStream;J)Z"
};

$InnerClassInfo _SocksSocketImpl$2_InnerClassesInfo_[] = {
	{"java.net.SocksSocketImpl$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SocksSocketImpl$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.SocksSocketImpl$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_SocksSocketImpl$2_FieldInfo_,
	_SocksSocketImpl$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/net/PasswordAuthentication;>;",
	&_SocksSocketImpl$2_EnclosingMethodInfo_,
	_SocksSocketImpl$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.SocksSocketImpl"
};

$Object* allocate$SocksSocketImpl$2($Class* clazz) {
	return $of($alloc(SocksSocketImpl$2));
}

void SocksSocketImpl$2::init$($SocksSocketImpl* this$0, $InetAddress* val$addr) {
	$set(this, this$0, this$0);
	$set(this, val$addr, val$addr);
}

$Object* SocksSocketImpl$2::run() {
	return $of($Authenticator::requestPasswordAuthentication(this->this$0->server, this->val$addr, this->this$0->serverPort, "SOCKS5"_s, "SOCKS authentication"_s, nullptr));
}

SocksSocketImpl$2::SocksSocketImpl$2() {
}

$Class* SocksSocketImpl$2::load$($String* name, bool initialize) {
	$loadClass(SocksSocketImpl$2, name, initialize, &_SocksSocketImpl$2_ClassInfo_, allocate$SocksSocketImpl$2);
	return class$;
}

$Class* SocksSocketImpl$2::class$ = nullptr;

	} // net
} // java