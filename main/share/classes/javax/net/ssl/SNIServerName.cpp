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

$FieldInfo _SNIServerName_FieldInfo_[] = {
	{"type", "I", nullptr, $PRIVATE | $FINAL, $field(SNIServerName, type)},
	{"encoded", "[B", nullptr, $PRIVATE | $FINAL, $field(SNIServerName, encoded)},
	{}
};

$MethodInfo _SNIServerName_MethodInfo_[] = {
	{"<init>", "(I[B)V", nullptr, $PROTECTED, $method(static_cast<void(SNIServerName::*)(int32_t,$bytes*)>(&SNIServerName::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getEncoded", "()[B", nullptr, $PUBLIC | $FINAL, $method(static_cast<$bytes*(SNIServerName::*)()>(&SNIServerName::getEncoded))},
	{"getType", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(SNIServerName::*)()>(&SNIServerName::getType))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toHexString", "([B)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($bytes*)>(&SNIServerName::toHexString))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SNIServerName_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.net.ssl.SNIServerName",
	"java.lang.Object",
	nullptr,
	_SNIServerName_FieldInfo_,
	_SNIServerName_MethodInfo_
};

$Object* allocate$SNIServerName($Class* clazz) {
	return $of($alloc(SNIServerName));
}

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
	if ($of(this)->getClass() != $nc($of(other))->getClass()) {
		return false;
	}
	$var(SNIServerName, that, $cast(SNIServerName, other));
	return (this->type == $nc(that)->type) && $Arrays::equals(this->encoded, that->encoded);
}

int32_t SNIServerName::hashCode() {
	int32_t result = 17;
	result = 31 * result + this->type;
	result = 31 * result + $Arrays::hashCode(this->encoded);
	return result;
}

$String* SNIServerName::toString() {
	$useLocalCurrentObjectStackCache();
	if (this->type == $StandardConstants::SNI_HOST_NAME) {
		return $str({"type=host_name (0), value="_s, $(toHexString(this->encoded))});
	} else {
		return $str({"type=("_s, $$str(this->type), "), value="_s, $(toHexString(this->encoded))});
	}
}

$String* SNIServerName::toHexString($bytes* bytes) {
	$useLocalCurrentObjectStackCache();
	if ($nc(bytes)->length == 0) {
		return "(empty)"_s;
	}
	return $nc($($nc($($HexFormat::ofDelimiter(":"_s)))->withUpperCase()))->formatHex(bytes);
}

SNIServerName::SNIServerName() {
}

$Class* SNIServerName::load$($String* name, bool initialize) {
	$loadClass(SNIServerName, name, initialize, &_SNIServerName_ClassInfo_, allocate$SNIServerName);
	return class$;
}

$Class* SNIServerName::class$ = nullptr;

		} // ssl
	} // net
} // javax