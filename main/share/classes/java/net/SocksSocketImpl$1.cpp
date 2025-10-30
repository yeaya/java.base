#include <java/net/SocksSocketImpl$1.h>

#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/net/SocksSocketImpl.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DelegatingSocketImpl = ::java::net::DelegatingSocketImpl;
using $SocksSocketImpl = ::java::net::SocksSocketImpl;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;

namespace java {
	namespace net {

$FieldInfo _SocksSocketImpl$1_FieldInfo_[] = {
	{"this$0", "Ljava/net/SocksSocketImpl;", nullptr, $FINAL | $SYNTHETIC, $field(SocksSocketImpl$1, this$0)},
	{"val$timeout", "I", nullptr, $FINAL | $SYNTHETIC, $field(SocksSocketImpl$1, val$timeout)},
	{"val$port", "I", nullptr, $FINAL | $SYNTHETIC, $field(SocksSocketImpl$1, val$port)},
	{"val$host", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(SocksSocketImpl$1, val$host)},
	{}
};

$MethodInfo _SocksSocketImpl$1_MethodInfo_[] = {
	{"<init>", "(Ljava/net/SocksSocketImpl;Ljava/lang/String;II)V", nullptr, 0, $method(static_cast<void(SocksSocketImpl$1::*)($SocksSocketImpl*,$String*,int32_t,int32_t)>(&SocksSocketImpl$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _SocksSocketImpl$1_EnclosingMethodInfo_ = {
	"java.net.SocksSocketImpl",
	"privilegedConnect",
	"(Ljava/lang/String;II)V"
};

$InnerClassInfo _SocksSocketImpl$1_InnerClassesInfo_[] = {
	{"java.net.SocksSocketImpl$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SocksSocketImpl$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.SocksSocketImpl$1",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_SocksSocketImpl$1_FieldInfo_,
	_SocksSocketImpl$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Object;>;",
	&_SocksSocketImpl$1_EnclosingMethodInfo_,
	_SocksSocketImpl$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.SocksSocketImpl"
};

$Object* allocate$SocksSocketImpl$1($Class* clazz) {
	return $of($alloc(SocksSocketImpl$1));
}

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
	return $of(nullptr);
}

SocksSocketImpl$1::SocksSocketImpl$1() {
}

$Class* SocksSocketImpl$1::load$($String* name, bool initialize) {
	$loadClass(SocksSocketImpl$1, name, initialize, &_SocksSocketImpl$1_ClassInfo_, allocate$SocksSocketImpl$1);
	return class$;
}

$Class* SocksSocketImpl$1::class$ = nullptr;

	} // net
} // java