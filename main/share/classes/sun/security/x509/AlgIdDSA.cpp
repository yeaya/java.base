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

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $ProviderException = ::java::security::ProviderException;
using $Debug = ::sun::security::util::Debug;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $AlgorithmId = ::sun::security::x509::AlgorithmId;

namespace sun {
	namespace security {
		namespace x509 {

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
	$useLocalObjectStack();
	$var($DerOutputStream, out, $new($DerOutputStream));
	out->putInteger(this->p);
	out->putInteger(this->q);
	out->putInteger(this->g);
	$var($DerOutputStream, result, $new($DerOutputStream));
	result->write($DerValue::tag_Sequence, out);
	$set(this, encodedParams, result->toByteArray());
}

void AlgIdDSA::decodeParams() {
	$useLocalObjectStack();
	if (this->encodedParams == nullptr) {
		$throwNew($IOException, "DSA alg params are null"_s);
	}
	$var($DerValue, params, $new($DerValue, this->encodedParams));
	if (params->tag != $DerValue::tag_Sequence) {
		$throwNew($IOException, "DSA alg parsing error"_s);
	}
	$nc(params->data$)->reset();
	$set(this, p, params->data$->getBigInteger());
	$set(this, q, params->data$->getBigInteger());
	$set(this, g, params->data$->getBigInteger());
	if (params->data$->available() != 0) {
		$throwNew($IOException, $$str({"AlgIdDSA params, extra="_s, $$str(params->data$->available())}));
	}
}

$String* AlgIdDSA::toString() {
	return paramsToString();
}

$String* AlgIdDSA::paramsToString() {
	$useLocalObjectStack();
	if (this->encodedParams == nullptr) {
		return " null\n"_s;
	} else {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("\n    p:\n"_s);
		var$0->append($($Debug::toHexString(this->p)));
		var$0->append("\n    q:\n"_s);
		var$0->append($($Debug::toHexString(this->q)));
		var$0->append("\n    g:\n"_s);
		var$0->append($($Debug::toHexString(this->g)));
		var$0->append("\n"_s);
		return $str(var$0);
	}
}

AlgIdDSA::AlgIdDSA() {
}

$Class* AlgIdDSA::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AlgIdDSA, serialVersionUID)},
		{"p", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(AlgIdDSA, p)},
		{"q", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(AlgIdDSA, q)},
		{"g", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(AlgIdDSA, g)},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC},
		{"<init>", "()V", nullptr, $PUBLIC | $DEPRECATED, $method(AlgIdDSA, init$, void), nullptr, nullptr, init$methodAnnotations$$},
		{"<init>", "(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V", nullptr, $PUBLIC, $method(AlgIdDSA, init$, void, $BigInteger*, $BigInteger*, $BigInteger*)},
		{"decodeParams", "()V", nullptr, $PROTECTED, $virtualMethod(AlgIdDSA, decodeParams, void), "java.io.IOException"},
		{"getG", "()Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(AlgIdDSA, getG, $BigInteger*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AlgIdDSA, getName, $String*)},
		{"getP", "()Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(AlgIdDSA, getP, $BigInteger*)},
		{"getQ", "()Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(AlgIdDSA, getQ, $BigInteger*)},
		{"initializeParams", "()V", nullptr, $PRIVATE, $method(AlgIdDSA, initializeParams, void), "java.io.IOException"},
		{"paramsToString", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(AlgIdDSA, paramsToString, $String*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AlgIdDSA, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.x509.AlgIdDSA",
		"sun.security.x509.AlgorithmId",
		"java.security.interfaces.DSAParams",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AlgIdDSA, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AlgIdDSA));
	});
	return class$;
}

$Class* AlgIdDSA::class$ = nullptr;

		} // x509
	} // security
} // sun