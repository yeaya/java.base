#include <javax/net/ssl/SNIServerName.h>
#include <java/util/Arrays.h>
#include <java/util/HexFormat.h>
#include <javax/net/ssl/StandardConstants.h>
#include <jcpp.h>

#undef SNI_HOST_NAME

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Arrays = ::java::util::Arrays;
using $HexFormat = ::java::util::HexFormat;
using $StandardConstants = ::javax::net::ssl::StandardConstants;

namespace javax {
	namespace net {
		namespace ssl {

void SNIServerName::init$(int32_t type, $bytes* encoded) {
	if (type < 0) {
		$throwNew($IllegalArgumentException, "Server name type cannot be less than zero"_s);
	} else if (type > 255) {
		$throwNew($IllegalArgumentException, "Server name type cannot be greater than 255"_s);
	}
	this->type = type;
	if (encoded == nullptr) {
		$throwNew($NullPointerException, "Server name encoded value cannot be null"_s);
	}
	$set(this, encoded, $cast($bytes, $nc(encoded)->clone()));
}

int32_t SNIServerName::getType() {
	return this->type;
}

$bytes* SNIServerName::getEncoded() {
	return $cast($bytes, $nc(this->encoded)->clone());
}

bool SNIServerName::equals(Object$* other) {
	if ($equals(this, other)) {
		return true;
	}
	if (this->getClass() != $nc($of(other))->getClass()) {
		return false;
	}
	$var(SNIServerName, that, $cast(SNIServerName, other));
	return (this->type == that->type) && $Arrays::equals(this->encoded, that->encoded);
}

int32_t SNIServerName::hashCode() {
	int32_t result = 17;
	result = 31 * result + this->type;
	result = 31 * result + $Arrays::hashCode(this->encoded);
	return result;
}

$String* SNIServerName::toString() {
	$useLocalObjectStack();
	if (this->type == $StandardConstants::SNI_HOST_NAME) {
		return $str({"type=host_name (0), value="_s, $(toHexString(this->encoded))});
	} else {
		return $str({"type=("_s, $$str(this->type), "), value="_s, $(toHexString(this->encoded))});
	}
}

$String* SNIServerName::toHexString($bytes* bytes) {
	$useLocalObjectStack();
	if ($nc(bytes)->length == 0) {
		return "(empty)"_s;
	}
	return $$nc($$nc($HexFormat::ofDelimiter(":"_s))->withUpperCase())->formatHex(bytes);
}

SNIServerName::SNIServerName() {
}

$Class* SNIServerName::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"type", "I", nullptr, $PRIVATE | $FINAL, $field(SNIServerName, type)},
		{"encoded", "[B", nullptr, $PRIVATE | $FINAL, $field(SNIServerName, encoded)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I[B)V", nullptr, $PROTECTED, $method(SNIServerName, init$, void, int32_t, $bytes*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(SNIServerName, equals, bool, Object$*)},
		{"getEncoded", "()[B", nullptr, $PUBLIC | $FINAL, $method(SNIServerName, getEncoded, $bytes*)},
		{"getType", "()I", nullptr, $PUBLIC | $FINAL, $method(SNIServerName, getType, int32_t)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(SNIServerName, hashCode, int32_t)},
		{"toHexString", "([B)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(SNIServerName, toHexString, $String*, $bytes*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SNIServerName, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.net.ssl.SNIServerName",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SNIServerName, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SNIServerName);
	});
	return class$;
}

$Class* SNIServerName::class$ = nullptr;

		} // ssl
	} // net
} // javax