#include <java/security/spec/EncodedKeySpec.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/spec/EncodedKeySpec$1.h>
#include <java/util/Arrays.h>
#include <jdk/internal/access/JavaSecuritySpecAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $EncodedKeySpec$1 = ::java::security::spec::EncodedKeySpec$1;
using $KeySpec = ::java::security::spec::KeySpec;
using $Arrays = ::java::util::Arrays;
using $JavaSecuritySpecAccess = ::jdk::internal::access::JavaSecuritySpecAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;

namespace java {
	namespace security {
		namespace spec {

$FieldInfo _EncodedKeySpec_FieldInfo_[] = {
	{"encodedKey", "[B", nullptr, $PRIVATE, $field(EncodedKeySpec, encodedKey)},
	{"algorithmName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(EncodedKeySpec, algorithmName)},
	{}
};

$MethodInfo _EncodedKeySpec_MethodInfo_[] = {
	{"<init>", "([B)V", nullptr, $PUBLIC, $method(static_cast<void(EncodedKeySpec::*)($bytes*)>(&EncodedKeySpec::init$))},
	{"<init>", "([BLjava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(EncodedKeySpec::*)($bytes*,$String*)>(&EncodedKeySpec::init$))},
	{"clear", "()V", nullptr, 0},
	{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getEncoded", "()[B", nullptr, $PUBLIC},
	{"getFormat", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _EncodedKeySpec_InnerClassesInfo_[] = {
	{"java.security.spec.EncodedKeySpec$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _EncodedKeySpec_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.security.spec.EncodedKeySpec",
	"java.lang.Object",
	"java.security.spec.KeySpec",
	_EncodedKeySpec_FieldInfo_,
	_EncodedKeySpec_MethodInfo_,
	nullptr,
	nullptr,
	_EncodedKeySpec_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.security.spec.EncodedKeySpec$1"
};

$Object* allocate$EncodedKeySpec($Class* clazz) {
	return $of($alloc(EncodedKeySpec));
}

void EncodedKeySpec::init$($bytes* encodedKey) {
	$set(this, encodedKey, $cast($bytes, $nc(encodedKey)->clone()));
}

void EncodedKeySpec::init$($bytes* encodedKey, $String* algorithm) {
	if (algorithm == nullptr) {
		$throwNew($NullPointerException, "algorithm name may not be null"_s);
	}
	if ($nc(algorithm)->isEmpty()) {
		$throwNew($IllegalArgumentException, "algorithm name may not be empty"_s);
	}
	$set(this, encodedKey, $cast($bytes, $nc(encodedKey)->clone()));
	$set(this, algorithmName, algorithm);
}

$String* EncodedKeySpec::getAlgorithm() {
	return this->algorithmName;
}

$bytes* EncodedKeySpec::getEncoded() {
	return $cast($bytes, $nc(this->encodedKey)->clone());
}

void EncodedKeySpec::clear() {
	$Arrays::fill(this->encodedKey, (int8_t)0);
}

void clinit$EncodedKeySpec($Class* class$) {
	{
		$SharedSecrets::setJavaSecuritySpecAccess($$new($EncodedKeySpec$1));
	}
}

EncodedKeySpec::EncodedKeySpec() {
}

$Class* EncodedKeySpec::load$($String* name, bool initialize) {
	$loadClass(EncodedKeySpec, name, initialize, &_EncodedKeySpec_ClassInfo_, clinit$EncodedKeySpec, allocate$EncodedKeySpec);
	return class$;
}

$Class* EncodedKeySpec::class$ = nullptr;

		} // spec
	} // security
} // java