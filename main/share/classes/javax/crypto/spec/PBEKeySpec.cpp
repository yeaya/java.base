#include <javax/crypto/spec/PBEKeySpec.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $KeySpec = ::java::security::spec::KeySpec;
using $Arrays = ::java::util::Arrays;

namespace javax {
	namespace crypto {
		namespace spec {

$FieldInfo _PBEKeySpec_FieldInfo_[] = {
	{"password", "[C", nullptr, $PRIVATE, $field(PBEKeySpec, password)},
	{"salt", "[B", nullptr, $PRIVATE, $field(PBEKeySpec, salt)},
	{"iterationCount", "I", nullptr, $PRIVATE, $field(PBEKeySpec, iterationCount)},
	{"keyLength", "I", nullptr, $PRIVATE, $field(PBEKeySpec, keyLength)},
	{}
};

$MethodInfo _PBEKeySpec_MethodInfo_[] = {
	{"<init>", "([C)V", nullptr, $PUBLIC, $method(static_cast<void(PBEKeySpec::*)($chars*)>(&PBEKeySpec::init$))},
	{"<init>", "([C[BII)V", nullptr, $PUBLIC, $method(static_cast<void(PBEKeySpec::*)($chars*,$bytes*,int32_t,int32_t)>(&PBEKeySpec::init$))},
	{"<init>", "([C[BI)V", nullptr, $PUBLIC, $method(static_cast<void(PBEKeySpec::*)($chars*,$bytes*,int32_t)>(&PBEKeySpec::init$))},
	{"clearPassword", "()V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(PBEKeySpec::*)()>(&PBEKeySpec::clearPassword))},
	{"getIterationCount", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(PBEKeySpec::*)()>(&PBEKeySpec::getIterationCount))},
	{"getKeyLength", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(PBEKeySpec::*)()>(&PBEKeySpec::getKeyLength))},
	{"getPassword", "()[C", nullptr, $PUBLIC | $FINAL, $method(static_cast<$chars*(PBEKeySpec::*)()>(&PBEKeySpec::getPassword))},
	{"getSalt", "()[B", nullptr, $PUBLIC | $FINAL, $method(static_cast<$bytes*(PBEKeySpec::*)()>(&PBEKeySpec::getSalt))},
	{}
};

$ClassInfo _PBEKeySpec_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.crypto.spec.PBEKeySpec",
	"java.lang.Object",
	"java.security.spec.KeySpec",
	_PBEKeySpec_FieldInfo_,
	_PBEKeySpec_MethodInfo_
};

$Object* allocate$PBEKeySpec($Class* clazz) {
	return $of($alloc(PBEKeySpec));
}

void PBEKeySpec::init$($chars* password) {
	$set(this, salt, nullptr);
	this->iterationCount = 0;
	this->keyLength = 0;
	if ((password == nullptr) || ($nc(password)->length == 0)) {
		$set(this, password, $new($chars, 0));
	} else {
		$set(this, password, $cast($chars, password->clone()));
	}
}

void PBEKeySpec::init$($chars* password, $bytes* salt, int32_t iterationCount, int32_t keyLength) {
	$set(this, salt, nullptr);
	this->iterationCount = 0;
	this->keyLength = 0;
	if ((password == nullptr) || ($nc(password)->length == 0)) {
		$set(this, password, $new($chars, 0));
	} else {
		$set(this, password, $cast($chars, password->clone()));
	}
	if (salt == nullptr) {
		$throwNew($NullPointerException, "the salt parameter must be non-null"_s);
	} else if (salt->length == 0) {
		$throwNew($IllegalArgumentException, "the salt parameter must not be empty"_s);
	} else {
		$set(this, salt, $cast($bytes, salt->clone()));
	}
	if (iterationCount <= 0) {
		$throwNew($IllegalArgumentException, "invalid iterationCount value"_s);
	}
	if (keyLength <= 0) {
		$throwNew($IllegalArgumentException, "invalid keyLength value"_s);
	}
	this->iterationCount = iterationCount;
	this->keyLength = keyLength;
}

void PBEKeySpec::init$($chars* password, $bytes* salt, int32_t iterationCount) {
	$set(this, salt, nullptr);
	this->iterationCount = 0;
	this->keyLength = 0;
	if ((password == nullptr) || ($nc(password)->length == 0)) {
		$set(this, password, $new($chars, 0));
	} else {
		$set(this, password, $cast($chars, password->clone()));
	}
	if (salt == nullptr) {
		$throwNew($NullPointerException, "the salt parameter must be non-null"_s);
	} else if (salt->length == 0) {
		$throwNew($IllegalArgumentException, "the salt parameter must not be empty"_s);
	} else {
		$set(this, salt, $cast($bytes, salt->clone()));
	}
	if (iterationCount <= 0) {
		$throwNew($IllegalArgumentException, "invalid iterationCount value"_s);
	}
	this->iterationCount = iterationCount;
}

void PBEKeySpec::clearPassword() {
	if (this->password != nullptr) {
		$Arrays::fill(this->password, u' ');
		$set(this, password, nullptr);
	}
}

$chars* PBEKeySpec::getPassword() {
	if (this->password == nullptr) {
		$throwNew($IllegalStateException, "password has been cleared"_s);
	}
	return $cast($chars, $nc(this->password)->clone());
}

$bytes* PBEKeySpec::getSalt() {
	if (this->salt != nullptr) {
		return $cast($bytes, $nc(this->salt)->clone());
	} else {
		return nullptr;
	}
}

int32_t PBEKeySpec::getIterationCount() {
	return this->iterationCount;
}

int32_t PBEKeySpec::getKeyLength() {
	return this->keyLength;
}

PBEKeySpec::PBEKeySpec() {
}

$Class* PBEKeySpec::load$($String* name, bool initialize) {
	$loadClass(PBEKeySpec, name, initialize, &_PBEKeySpec_ClassInfo_, allocate$PBEKeySpec);
	return class$;
}

$Class* PBEKeySpec::class$ = nullptr;

		} // spec
	} // crypto
} // javax