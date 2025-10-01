#include <java/security/SecureRandomSpi.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/SecureRandomParameters.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $SecureRandomParameters = ::java::security::SecureRandomParameters;

namespace java {
	namespace security {

$FieldInfo _SecureRandomSpi_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SecureRandomSpi, serialVersionUID)},
	{}
};

$MethodInfo _SecureRandomSpi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SecureRandomSpi::*)()>(&SecureRandomSpi::init$))},
	{"<init>", "(Ljava/security/SecureRandomParameters;)V", nullptr, $PROTECTED, $method(static_cast<void(SecureRandomSpi::*)($SecureRandomParameters*)>(&SecureRandomSpi::init$))},
	{"engineGenerateSeed", "(I)[B", nullptr, $PROTECTED | $ABSTRACT},
	{"engineGetParameters", "()Ljava/security/SecureRandomParameters;", nullptr, $PROTECTED},
	{"engineNextBytes", "([B)V", nullptr, $PROTECTED | $ABSTRACT},
	{"engineNextBytes", "([BLjava/security/SecureRandomParameters;)V", nullptr, $PROTECTED},
	{"engineReseed", "(Ljava/security/SecureRandomParameters;)V", nullptr, $PROTECTED},
	{"engineSetSeed", "([B)V", nullptr, $PROTECTED | $ABSTRACT},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SecureRandomSpi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.security.SecureRandomSpi",
	"java.lang.Object",
	"java.io.Serializable",
	_SecureRandomSpi_FieldInfo_,
	_SecureRandomSpi_MethodInfo_
};

$Object* allocate$SecureRandomSpi($Class* clazz) {
	return $of($alloc(SecureRandomSpi));
}

void SecureRandomSpi::init$() {
}

void SecureRandomSpi::init$($SecureRandomParameters* params) {
}

void SecureRandomSpi::engineNextBytes($bytes* bytes, $SecureRandomParameters* params) {
	$throwNew($UnsupportedOperationException);
}

void SecureRandomSpi::engineReseed($SecureRandomParameters* params) {
	$throwNew($UnsupportedOperationException);
}

$SecureRandomParameters* SecureRandomSpi::engineGetParameters() {
	return nullptr;
}

$String* SecureRandomSpi::toString() {
	return $of(this)->getClass()->getSimpleName();
}

SecureRandomSpi::SecureRandomSpi() {
}

$Class* SecureRandomSpi::load$($String* name, bool initialize) {
	$loadClass(SecureRandomSpi, name, initialize, &_SecureRandomSpi_ClassInfo_, allocate$SecureRandomSpi);
	return class$;
}

$Class* SecureRandomSpi::class$ = nullptr;

	} // security
} // java