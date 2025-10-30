#include <sun/security/x509/AlgIdDSA.h>

#include <java/io/IOException.h>
#include <java/math/BigInteger.h>
#include <java/security/ProviderException.h>
#include <sun/security/util/Debug.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <sun/security/x509/AlgorithmId.h>
#include <jcpp.h>

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $ProviderException = ::java::security::ProviderException;
using $DSAParams = ::java::security::interfaces::DSAParams;
using $Debug = ::sun::security::util::Debug;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $ObjectIdentifier = ::sun::security::util::ObjectIdentifier;
using $AlgorithmId = ::sun::security::x509::AlgorithmId;

namespace sun {
	namespace security {
		namespace x509 {

$CompoundAttribute _AlgIdDSA_MethodAnnotations_init$0[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _AlgIdDSA_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AlgIdDSA, serialVersionUID)},
	{"p", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(AlgIdDSA, p)},
	{"q", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(AlgIdDSA, q)},
	{"g", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(AlgIdDSA, g)},
	{}
};

$MethodInfo _AlgIdDSA_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC | $DEPRECATED, $method(static_cast<void(AlgIdDSA::*)()>(&AlgIdDSA::init$)), nullptr, nullptr, _AlgIdDSA_MethodAnnotations_init$0},
	{"<init>", "(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V", nullptr, $PUBLIC, $method(static_cast<void(AlgIdDSA::*)($BigInteger*,$BigInteger*,$BigInteger*)>(&AlgIdDSA::init$))},
	{"decodeParams", "()V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"getG", "()Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getP", "()Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"getQ", "()Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"initializeParams", "()V", nullptr, $PRIVATE, $method(static_cast<void(AlgIdDSA::*)()>(&AlgIdDSA::initializeParams)), "java.io.IOException"},
	{"paramsToString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AlgIdDSA_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.x509.AlgIdDSA",
	"sun.security.x509.AlgorithmId",
	"java.security.interfaces.DSAParams",
	_AlgIdDSA_FieldInfo_,
	_AlgIdDSA_MethodInfo_
};

$Object* allocate$AlgIdDSA($Class* clazz) {
	return $of($alloc(AlgIdDSA));
}

bool AlgIdDSA::equals(Object$* other) {
	 return this->$AlgorithmId::equals(other);
}

int32_t AlgIdDSA::hashCode() {
	 return this->$AlgorithmId::hashCode();
}

$Object* AlgIdDSA::clone() {
	 return this->$AlgorithmId::clone();
}

void AlgIdDSA::finalize() {
	this->$AlgorithmId::finalize();
}

$BigInteger* AlgIdDSA::getP() {
	return this->p;
}

$BigInteger* AlgIdDSA::getQ() {
	return this->q;
}

$BigInteger* AlgIdDSA::getG() {
	return this->g;
}

void AlgIdDSA::init$() {
	$AlgorithmId::init$();
}

void AlgIdDSA::init$($BigInteger* p, $BigInteger* q, $BigInteger* g) {
	$init($AlgorithmId);
	$AlgorithmId::init$($AlgorithmId::DSA_oid);
	if (p != nullptr || q != nullptr || g != nullptr) {
		if (p == nullptr || q == nullptr || g == nullptr) {
			$throwNew($ProviderException, "Invalid parameters for DSS/DSA Algorithm ID"_s);
		}
		try {
			$set(this, p, p);
			$set(this, q, q);
			$set(this, g, g);
			initializeParams();
		} catch ($IOException& e) {
			$throwNew($ProviderException, "Construct DSS/DSA Algorithm ID"_s);
		}
	}
}

$String* AlgIdDSA::getName() {
	return "DSA"_s;
}

void AlgIdDSA::initializeParams() {
	$useLocalCurrentObjectStackCache();
	$var($DerOutputStream, out, $new($DerOutputStream));
	out->putInteger(this->p);
	out->putInteger(this->q);
	out->putInteger(this->g);
	$var($DerOutputStream, result, $new($DerOutputStream));
	result->write($DerValue::tag_Sequence, out);
	$set(this, encodedParams, result->toByteArray());
}

void AlgIdDSA::decodeParams() {
	$useLocalCurrentObjectStackCache();
	if (this->encodedParams == nullptr) {
		$throwNew($IOException, "DSA alg params are null"_s);
	}
	$var($DerValue, params, $new($DerValue, this->encodedParams));
	if (params->tag != $DerValue::tag_Sequence) {
		$throwNew($IOException, "DSA alg parsing error"_s);
	}
	$nc(params->data$)->reset();
	$set(this, p, $nc(params->data$)->getBigInteger());
	$set(this, q, $nc(params->data$)->getBigInteger());
	$set(this, g, $nc(params->data$)->getBigInteger());
	if ($nc(params->data$)->available() != 0) {
		$throwNew($IOException, $$str({"AlgIdDSA params, extra="_s, $$str($nc(params->data$)->available())}));
	}
}

$String* AlgIdDSA::toString() {
	return paramsToString();
}

$String* AlgIdDSA::paramsToString() {
	$useLocalCurrentObjectStackCache();
	if (this->encodedParams == nullptr) {
		return " null\n"_s;
	} else {
		$var($String, var$3, $$str({"\n    p:\n"_s, $($Debug::toHexString(this->p)), "\n    q:\n"_s}));
		$var($String, var$2, $$concat(var$3, $($Debug::toHexString(this->q))));
		$var($String, var$1, $$concat(var$2, "\n    g:\n"));
		$var($String, var$0, $$concat(var$1, $($Debug::toHexString(this->g))));
		return $concat(var$0, "\n");
	}
}

AlgIdDSA::AlgIdDSA() {
}

$Class* AlgIdDSA::load$($String* name, bool initialize) {
	$loadClass(AlgIdDSA, name, initialize, &_AlgIdDSA_ClassInfo_, allocate$AlgIdDSA);
	return class$;
}

$Class* AlgIdDSA::class$ = nullptr;

		} // x509
	} // security
} // sun