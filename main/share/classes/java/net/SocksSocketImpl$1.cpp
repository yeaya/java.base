#include <java/net/SocksSocketImpl$1.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/net/SocksSocketImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SocksSocketImpl = ::java::net::SocksSocketImpl;

namespace java {
	namespace net {

void SocksSocketImpl$1::init$($SocksSocketImpl* this$0, $String* val$host, int32_t val$port, int32_t val$timeout) {
	$set(this, this$0, this$0);
	$set(this, val$host, val$host);
	this->val$port = val$port;
	this->val$timeout = val$timeout;
}

$Object* SocksSocketImpl$1::run() {
	this->this$0->superConnectServer(this->val$host, this->val$port, this->val$timeout);
	$set(this->this$0, cmdIn, this->this$0->getInputStream());
	$set(this->this$0, cmdOut, this->this$0->getOutputStream());
	return nullptr;
}

SocksSocketImpl$1::SocksSocketImpl$1() {
}

$Class* SocksSocketImpl$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/net/SocksSocketImpl;", nullptr, $FINAL | $SYNTHETIC, $field(SocksSocketImpl$1, this$0)},
		{"val$timeout", "I", nullptr, $FINAL | $SYNTHETIC, $field(SocksSocketImpl$1, val$timeout)},
		{"val$port", "I", nullptr, $FINAL | $SYNTHETIC, $field(SocksSocketImpl$1, val$port)},
		{"val$host", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(SocksSocketImpl$1, val$host)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/SocksSocketImpl;Ljava/lang/String;II)V", nullptr, 0, $method(SocksSocketImpl$1, init$, void, $SocksSocketImpl*, $String*, int32_t, int32_t)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(SocksSocketImpl$1, run, $Object*), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.net.SocksSocketImpl",
		"privilegedConnect",
		"(Ljava/lang/String;II)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.SocksSocketImpl$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.net.SocksSocketImpl$1",
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
		"java.net.SocksSocketImpl"
	};
	$loadClass(SocksSocketImpl$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SocksSocketImpl$1);
	});
	return class$;
}

$Class* SocksSocketImpl$1::class$ = nullptr;

	} // net
} // java