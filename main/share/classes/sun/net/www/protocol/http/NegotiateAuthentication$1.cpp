#include <sun/net/www/protocol/http/NegotiateAuthentication$1.h>

#include <java/lang/ThreadLocal.h>
#include <java/util/HashMap.h>
#include <sun/net/www/protocol/http/NegotiateAuthentication.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;
using $HashMap = ::java::util::HashMap;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {

$MethodInfo _NegotiateAuthentication$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(NegotiateAuthentication$1::*)()>(&NegotiateAuthentication$1::init$))},
	{"initialValue", "()Ljava/util/HashMap;", "()Ljava/util/HashMap<Ljava/lang/String;Lsun/net/www/protocol/http/Negotiator;>;", $PROTECTED},
	{}
};

$EnclosingMethodInfo _NegotiateAuthentication$1_EnclosingMethodInfo_ = {
	"sun.net.www.protocol.http.NegotiateAuthentication",
	"isSupported",
	"(Lsun/net/www/protocol/http/HttpCallerInfo;)Z"
};

$InnerClassInfo _NegotiateAuthentication$1_InnerClassesInfo_[] = {
	{"sun.net.www.protocol.http.NegotiateAuthentication$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NegotiateAuthentication$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.www.protocol.http.NegotiateAuthentication$1",
	"java.lang.ThreadLocal",
	nullptr,
	nullptr,
	_NegotiateAuthentication$1_MethodInfo_,
	"Ljava/lang/ThreadLocal<Ljava/util/HashMap<Ljava/lang/String;Lsun/net/www/protocol/http/Negotiator;>;>;",
	&_NegotiateAuthentication$1_EnclosingMethodInfo_,
	_NegotiateAuthentication$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.www.protocol.http.NegotiateAuthentication"
};

$Object* allocate$NegotiateAuthentication$1($Class* clazz) {
	return $of($alloc(NegotiateAuthentication$1));
}

void NegotiateAuthentication$1::init$() {
	$ThreadLocal::init$();
}

$Object* NegotiateAuthentication$1::initialValue() {
	return $of($new($HashMap));
}

NegotiateAuthentication$1::NegotiateAuthentication$1() {
}

$Class* NegotiateAuthentication$1::load$($String* name, bool initialize) {
	$loadClass(NegotiateAuthentication$1, name, initialize, &_NegotiateAuthentication$1_ClassInfo_, allocate$NegotiateAuthentication$1);
	return class$;
}

$Class* NegotiateAuthentication$1::class$ = nullptr;

				} // http
			} // protocol
		} // www
	} // net
} // sun