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

$FieldInfo _SNIMatcher_FieldInfo_[] = {
	{"type", "I", nullptr, $PRIVATE | $FINAL, $field(SNIMatcher, type)},
	{}
};

$MethodInfo _SNIMatcher_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PROTECTED, $method(SNIMatcher, init$, void, int32_t)},
	{"getType", "()I", nullptr, $PUBLIC | $FINAL, $method(SNIMatcher, getType, int32_t)},
	{"matches", "(Ljavax/net/ssl/SNIServerName;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SNIMatcher, matches, bool, $SNIServerName*)},
	{}
};

$ClassInfo _SNIMatcher_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.net.ssl.SNIMatcher",
	"java.lang.Object",
	nullptr,
	_SNIMatcher_FieldInfo_,
	_SNIMatcher_MethodInfo_
};

$Object* allocate$SNIMatcher($Class* clazz) {
	return $of($alloc(SNIMatcher));
}

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
	$loadClass(SNIMatcher, name, initialize, &_SNIMatcher_ClassInfo_, allocate$SNIMatcher);
	return class$;
}

$Class* SNIMatcher::class$ = nullptr;

		} // ssl
	} // net
} // javax