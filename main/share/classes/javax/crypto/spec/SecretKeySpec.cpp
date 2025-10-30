#include <javax/crypto/spec/SecretKeySpec.h>

#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/security/Key.h>
#include <java/security/MessageDigest.h>
#include <java/security/spec/KeySpec.h>
#include <java/util/Arrays.h>
#include <java/util/Locale.h>
#include <javax/crypto/SecretKey.h>
#include <javax/crypto/spec/SecretKeySpec$1.h>
#include <jdk/internal/access/JavaxCryptoSpecAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jcpp.h>

#undef ENGLISH

using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Key = ::java::security::Key;
using $MessageDigest = ::java::security::MessageDigest;
using $KeySpec = ::java::security::spec::KeySpec;
using $Arrays = ::java::util::Arrays;
using $Locale = ::java::util::Locale;
using $SecretKey = ::javax::crypto::SecretKey;
using $SecretKeySpec$1 = ::javax::crypto::spec::SecretKeySpec$1;
using $JavaxCryptoSpecAccess = ::jdk::internal::access::JavaxCryptoSpecAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;

namespace javax {
	namespace crypto {
		namespace spec {

$FieldInfo _SecretKeySpec_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SecretKeySpec, serialVersionUID)},
	{"key", "[B", nullptr, $PRIVATE, $field(SecretKeySpec, key)},
	{"algorithm", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SecretKeySpec, algorithm)},
	{}
};

$MethodInfo _SecretKeySpec_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "([BLjava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SecretKeySpec::*)($bytes*,$String*)>(&SecretKeySpec::init$))},
	{"<init>", "([BIILjava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SecretKeySpec::*)($bytes*,int32_t,int32_t,$String*)>(&SecretKeySpec::init$))},
	{"clear", "()V", nullptr, 0},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getEncoded", "()[B", nullptr, $PUBLIC},
	{"getFormat", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SecretKeySpec_InnerClassesInfo_[] = {
	{"javax.crypto.spec.SecretKeySpec$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SecretKeySpec_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.crypto.spec.SecretKeySpec",
	"java.lang.Object",
	"java.security.spec.KeySpec,javax.crypto.SecretKey",
	_SecretKeySpec_FieldInfo_,
	_SecretKeySpec_MethodInfo_,
	nullptr,
	nullptr,
	_SecretKeySpec_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.crypto.spec.SecretKeySpec$1"
};

$Object* allocate$SecretKeySpec($Class* clazz) {
	return $of($alloc(SecretKeySpec));
}

$Object* SecretKeySpec::clone() {
	 return this->$KeySpec::clone();
}

$String* SecretKeySpec::toString() {
	 return this->$KeySpec::toString();
}

void SecretKeySpec::finalize() {
	this->$KeySpec::finalize();
}

void SecretKeySpec::init$($bytes* key, $String* algorithm) {
	if (key == nullptr || algorithm == nullptr) {
		$throwNew($IllegalArgumentException, "Missing argument"_s);
	}
	if ($nc(key)->length == 0) {
		$throwNew($IllegalArgumentException, "Empty key"_s);
	}
	$set(this, key, $cast($bytes, $nc(key)->clone()));
	$set(this, algorithm, algorithm);
}

void SecretKeySpec::init$($bytes* key, int32_t offset, int32_t len, $String* algorithm) {
	if (key == nullptr || algorithm == nullptr) {
		$throwNew($IllegalArgumentException, "Missing argument"_s);
	}
	if ($nc(key)->length == 0) {
		$throwNew($IllegalArgumentException, "Empty key"_s);
	}
	if ($nc(key)->length - offset < len) {
		$throwNew($IllegalArgumentException, "Invalid offset/length combination"_s);
	}
	if (len < 0) {
		$throwNew($ArrayIndexOutOfBoundsException, "len is negative"_s);
	}
	$set(this, key, $new($bytes, len));
	$System::arraycopy(key, offset, this->key, 0, len);
	$set(this, algorithm, algorithm);
}

$String* SecretKeySpec::getAlgorithm() {
	return this->algorithm;
}

$String* SecretKeySpec::getFormat() {
	return "RAW"_s;
}

$bytes* SecretKeySpec::getEncoded() {
	return $cast($bytes, $nc(this->key)->clone());
}

int32_t SecretKeySpec::hashCode() {
	int32_t retval = 0;
	for (int32_t i = 1; i < $nc(this->key)->length; ++i) {
		retval += $nc(this->key)->get(i) * i;
	}
	if ($nc(this->algorithm)->equalsIgnoreCase("TripleDES"_s)) {
		return (retval ^= "desede"_s->hashCode());
	} else {
		$init($Locale);
		return (retval ^= $($nc(this->algorithm)->toLowerCase($Locale::ENGLISH))->hashCode());
	}
}

bool SecretKeySpec::equals(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if ($equals(this, obj)) {
		return true;
	}
	if (!($instanceOf($SecretKey, obj))) {
		return false;
	}
	$var($String, thatAlg, $nc(($cast($SecretKey, obj)))->getAlgorithm());
	if (!($nc(thatAlg)->equalsIgnoreCase(this->algorithm))) {
		bool var$1 = !(thatAlg->equalsIgnoreCase("DESede"_s));
		bool var$0 = (var$1 || !($nc(this->algorithm)->equalsIgnoreCase("TripleDES"_s)));
		if (var$0) {
			bool var$2 = !(thatAlg->equalsIgnoreCase("TripleDES"_s));
			var$0 = (var$2 || !($nc(this->algorithm)->equalsIgnoreCase("DESede"_s)));
		}
		if (var$0) {
			return false;
		}
	}
	$var($bytes, thatKey, ($cast($SecretKey, obj))->getEncoded());
	{
		$var($Throwable, var$3, nullptr);
		bool var$5 = false;
		bool return$4 = false;
		try {
			var$5 = $MessageDigest::isEqual(this->key, thatKey);
			return$4 = true;
			goto $finally;
		} catch ($Throwable& var$6) {
			$assign(var$3, var$6);
		} $finally: {
			if (thatKey != nullptr) {
				$Arrays::fill(thatKey, (int8_t)0);
			}
		}
		if (var$3 != nullptr) {
			$throw(var$3);
		}
		if (return$4) {
			return var$5;
		}
	}
	$shouldNotReachHere();
}

void SecretKeySpec::clear() {
	$Arrays::fill(this->key, (int8_t)0);
}

void clinit$SecretKeySpec($Class* class$) {
	{
		$SharedSecrets::setJavaxCryptoSpecAccess($$new($SecretKeySpec$1));
	}
}

SecretKeySpec::SecretKeySpec() {
}

$Class* SecretKeySpec::load$($String* name, bool initialize) {
	$loadClass(SecretKeySpec, name, initialize, &_SecretKeySpec_ClassInfo_, clinit$SecretKeySpec, allocate$SecretKeySpec);
	return class$;
}

$Class* SecretKeySpec::class$ = nullptr;

		} // spec
	} // crypto
} // javax