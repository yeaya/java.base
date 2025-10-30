#include <java/net/HttpConnectSocketImpl$1.h>

#include <java/lang/reflect/Field.h>
#include <java/net/HttpConnectSocketImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Field = ::java::lang::reflect::Field;
using $HttpConnectSocketImpl = ::java::net::HttpConnectSocketImpl;
using $PrivilegedAction = ::java::security::PrivilegedAction;

namespace java {
	namespace net {

$MethodInfo _HttpConnectSocketImpl$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HttpConnectSocketImpl$1::*)()>(&HttpConnectSocketImpl$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _HttpConnectSocketImpl$1_EnclosingMethodInfo_ = {
	"java.net.HttpConnectSocketImpl",
	nullptr,
	nullptr
};

$InnerClassInfo _HttpConnectSocketImpl$1_InnerClassesInfo_[] = {
	{"java.net.HttpConnectSocketImpl$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HttpConnectSocketImpl$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.HttpConnectSocketImpl$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_HttpConnectSocketImpl$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_HttpConnectSocketImpl$1_EnclosingMethodInfo_,
	_HttpConnectSocketImpl$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.HttpConnectSocketImpl"
};

$Object* allocate$HttpConnectSocketImpl$1($Class* clazz) {
	return $of($alloc(HttpConnectSocketImpl$1));
}

void HttpConnectSocketImpl$1::init$() {
}

$Object* HttpConnectSocketImpl$1::run() {
	$beforeCallerSensitive();
	$init($HttpConnectSocketImpl);
	$nc($HttpConnectSocketImpl::httpField)->setAccessible(true);
	$nc($HttpConnectSocketImpl::serverSocketField)->setAccessible(true);
	return $of(nullptr);
}

HttpConnectSocketImpl$1::HttpConnectSocketImpl$1() {
}

$Class* HttpConnectSocketImpl$1::load$($String* name, bool initialize) {
	$loadClass(HttpConnectSocketImpl$1, name, initialize, &_HttpConnectSocketImpl$1_ClassInfo_, allocate$HttpConnectSocketImpl$1);
	return class$;
}

$Class* HttpConnectSocketImpl$1::class$ = nullptr;

	} // net
} // java