#include <sun/net/www/http/KeepAliveKey.h>
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
	bool var$0 = $nc(this->host)->equals($nc(kae)->host) && (this->port == kae->port);
	return var$0 && $nc(this->protocol)->equals(kae->protocol) && $equals(this->obj, kae->obj);
}

int32_t KeepAliveKey::hashCode() {
	$useLocalObjectStack();
	$var($String, str, $str({this->protocol, this->host, $$str(this->port)}));
	int32_t var$0 = 0;
	if (this->obj == nullptr) {
		var$0 = str->hashCode();
	} else {
		int32_t var$1 = str->hashCode();
		var$0 = var$1 + $nc(this->obj)->hashCode();
	}
	return var$0;
}

KeepAliveKey::KeepAliveKey() {
}

$Class* KeepAliveKey::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"protocol", "Ljava/lang/String;", nullptr, $PRIVATE, $field(KeepAliveKey, protocol)},
		{"host", "Ljava/lang/String;", nullptr, $PRIVATE, $field(KeepAliveKey, host)},
		{"port", "I", nullptr, $PRIVATE, $field(KeepAliveKey, port)},
		{"obj", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(KeepAliveKey, obj)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/URL;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(KeepAliveKey, init$, void, $URL*, Object$*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(KeepAliveKey, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(KeepAliveKey, hashCode, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.www.http.KeepAliveKey",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(KeepAliveKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeepAliveKey);
	});
	return class$;
}

$Class* KeepAliveKey::class$ = nullptr;

			} // http
		} // www
	} // net
} // sun