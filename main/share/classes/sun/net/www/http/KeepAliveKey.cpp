#include <sun/net/www/http/KeepAliveKey.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;

namespace sun {
	namespace net {
		namespace www {
			namespace http {

$FieldInfo _KeepAliveKey_FieldInfo_[] = {
	{"protocol", "Ljava/lang/String;", nullptr, $PRIVATE, $field(KeepAliveKey, protocol)},
	{"host", "Ljava/lang/String;", nullptr, $PRIVATE, $field(KeepAliveKey, host)},
	{"port", "I", nullptr, $PRIVATE, $field(KeepAliveKey, port)},
	{"obj", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(KeepAliveKey, obj)},
	{}
};

$MethodInfo _KeepAliveKey_MethodInfo_[] = {
	{"<init>", "(Ljava/net/URL;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(KeepAliveKey::*)($URL*,Object$*)>(&KeepAliveKey::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _KeepAliveKey_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.www.http.KeepAliveKey",
	"java.lang.Object",
	nullptr,
	_KeepAliveKey_FieldInfo_,
	_KeepAliveKey_MethodInfo_
};

$Object* allocate$KeepAliveKey($Class* clazz) {
	return $of($alloc(KeepAliveKey));
}

void KeepAliveKey::init$($URL* url, Object$* obj) {
	$set(this, protocol, nullptr);
	$set(this, host, nullptr);
	this->port = 0;
	$set(this, obj, nullptr);
	$set(this, protocol, $nc(url)->getProtocol());
	$set(this, host, url->getHost());
	this->port = url->getPort();
	$set(this, obj, obj);
}

bool KeepAliveKey::equals(Object$* obj) {
	if (($instanceOf(KeepAliveKey, obj)) == false) {
		return false;
	}
	$var(KeepAliveKey, kae, $cast(KeepAliveKey, obj));
	bool var$0 = $nc(this->host)->equals($nc(kae)->host) && (this->port == $nc(kae)->port);
	return var$0 && $nc(this->protocol)->equals(kae->protocol) && $equals(this->obj, kae->obj);
}

int32_t KeepAliveKey::hashCode() {
	$useLocalCurrentObjectStackCache();
	$var($String, str, $str({this->protocol, this->host, $$str(this->port)}));
	int32_t var$0 = 0;
	if (this->obj == nullptr) {
		var$0 = $nc(str)->hashCode();
	} else {
		int32_t var$1 = str->hashCode();
		var$0 = var$1 + $nc($of(this->obj))->hashCode();
	}
	return var$0;
}

KeepAliveKey::KeepAliveKey() {
}

$Class* KeepAliveKey::load$($String* name, bool initialize) {
	$loadClass(KeepAliveKey, name, initialize, &_KeepAliveKey_ClassInfo_, allocate$KeepAliveKey);
	return class$;
}

$Class* KeepAliveKey::class$ = nullptr;

			} // http
		} // www
	} // net
} // sun