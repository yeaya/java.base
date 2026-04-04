#include <javax/net/ssl/SNIMatcher.h>
#include <javax/net/ssl/SNIServerName.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $SNIServerName = ::javax::net::ssl::SNIServerName;

namespace javax {
	namespace net {
		namespace ssl {

void SNIMatcher::init$(int32_t type) {
	if (type < 0) {
		$throwNew($IllegalArgumentException, "Server name type cannot be less than zero"_s);
	} else if (type > 255) {
		$throwNew($IllegalArgumentException, "Server name type cannot be greater than 255"_s);
	}
	this->type = type;
}

int32_t SNIMatcher::getType() {
	return this->type;
}

SNIMatcher::SNIMatcher() {
}

$Class* SNIMatcher::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"type", "I", nullptr, $PRIVATE | $FINAL, $field(SNIMatcher, type)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PROTECTED, $method(SNIMatcher, init$, void, int32_t)},
		{"getType", "()I", nullptr, $PUBLIC | $FINAL, $method(SNIMatcher, getType, int32_t)},
		{"matches", "(Ljavax/net/ssl/SNIServerName;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SNIMatcher, matches, bool, $SNIServerName*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.net.ssl.SNIMatcher",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SNIMatcher, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SNIMatcher);
	});
	return class$;
}

$Class* SNIMatcher::class$ = nullptr;

		} // ssl
	} // net
} // javax