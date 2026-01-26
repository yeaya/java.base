#include <java/net/HttpConnectSocketImpl$2.h>

#include <java/net/HttpConnectSocketImpl.h>
#include <java/net/Socket.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpConnectSocketImpl = ::java::net::HttpConnectSocketImpl;

namespace java {
	namespace net {

$FieldInfo _HttpConnectSocketImpl$2_FieldInfo_[] = {
	{"this$0", "Ljava/net/HttpConnectSocketImpl;", nullptr, $FINAL | $SYNTHETIC, $field(HttpConnectSocketImpl$2, this$0)},
	{"val$timeout", "I", nullptr, $FINAL | $SYNTHETIC, $field(HttpConnectSocketImpl$2, val$timeout)},
	{"val$urlString", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(HttpConnectSocketImpl$2, val$urlString)},
	{}
};

$MethodInfo _HttpConnectSocketImpl$2_MethodInfo_[] = {
	{"<init>", "(Ljava/net/HttpConnectSocketImpl;Ljava/lang/String;I)V", nullptr, 0, $method(HttpConnectSocketImpl$2, init$, void, $HttpConnectSocketImpl*, $String*, int32_t)},
	{"run", "()Ljava/net/Socket;", nullptr, $PUBLIC, $virtualMethod(HttpConnectSocketImpl$2, run, $Object*), "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _HttpConnectSocketImpl$2_EnclosingMethodInfo_ = {
	"java.net.HttpConnectSocketImpl",
	"privilegedDoTunnel",
	"(Ljava/lang/String;I)Ljava/net/Socket;"
};

$InnerClassInfo _HttpConnectSocketImpl$2_InnerClassesInfo_[] = {
	{"java.net.HttpConnectSocketImpl$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HttpConnectSocketImpl$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.HttpConnectSocketImpl$2",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_HttpConnectSocketImpl$2_FieldInfo_,
	_HttpConnectSocketImpl$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/net/Socket;>;",
	&_HttpConnectSocketImpl$2_EnclosingMethodInfo_,
	_HttpConnectSocketImpl$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.HttpConnectSocketImpl"
};

$Object* allocate$HttpConnectSocketImpl$2($Class* clazz) {
	return $of($alloc(HttpConnectSocketImpl$2));
}

void HttpConnectSocketImpl$2::init$($HttpConnectSocketImpl* this$0, $String* val$urlString, int32_t val$timeout) {
	$set(this, this$0, this$0);
	$set(this, val$urlString, val$urlString);
	this->val$timeout = val$timeout;
}

$Object* HttpConnectSocketImpl$2::run() {
	return $of(this->this$0->doTunnel(this->val$urlString, this->val$timeout));
}

HttpConnectSocketImpl$2::HttpConnectSocketImpl$2() {
}

$Class* HttpConnectSocketImpl$2::load$($String* name, bool initialize) {
	$loadClass(HttpConnectSocketImpl$2, name, initialize, &_HttpConnectSocketImpl$2_ClassInfo_, allocate$HttpConnectSocketImpl$2);
	return class$;
}

$Class* HttpConnectSocketImpl$2::class$ = nullptr;

	} // net
} // java