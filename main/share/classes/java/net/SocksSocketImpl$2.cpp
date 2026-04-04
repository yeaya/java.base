#include <java/net/SocksSocketImpl$2.h>
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
using $SocksSocketImpl = ::java::net::SocksSocketImpl;

namespace java {
	namespace net {

void SocksSocketImpl$2::init$($SocksSocketImpl* this$0, $InetAddress* val$addr) {
	$set(this, this$0, this$0);
	$set(this, val$addr, val$addr);
}

$Object* SocksSocketImpl$2::run() {
	return $Authenticator::requestPasswordAuthentication(this->this$0->server, this->val$addr, this->this$0->serverPort, "SOCKS5"_s, "SOCKS authentication"_s, nullptr);
}

SocksSocketImpl$2::SocksSocketImpl$2() {
}

$Class* SocksSocketImpl$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/net/SocksSocketImpl;", nullptr, $FINAL | $SYNTHETIC, $field(SocksSocketImpl$2, this$0)},
		{"val$addr", "Ljava/net/InetAddress;", nullptr, $FINAL | $SYNTHETIC, $field(SocksSocketImpl$2, val$addr)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/SocksSocketImpl;Ljava/net/InetAddress;)V", nullptr, 0, $method(SocksSocketImpl$2, init$, void, $SocksSocketImpl*, $InetAddress*)},
		{"run", "()Ljava/net/PasswordAuthentication;", nullptr, $PUBLIC, $virtualMethod(SocksSocketImpl$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.net.SocksSocketImpl",
		"authenticate",
		"(BLjava/io/InputStream;Ljava/io/BufferedOutputStream;J)Z"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.SocksSocketImpl$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.net.SocksSocketImpl$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/net/PasswordAuthentication;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.net.SocksSocketImpl"
	};
	$loadClass(SocksSocketImpl$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SocksSocketImpl$2);
	});
	return class$;
}

$Class* SocksSocketImpl$2::class$ = nullptr;

	} // net
} // java