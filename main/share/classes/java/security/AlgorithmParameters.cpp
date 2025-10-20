#include <java/security/AlgorithmParameters.h>

#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AlgorithmParametersSpi.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/NoSuchProviderException.h>
#include <java/security/Provider.h>
#include <java/security/Security.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/security/spec/InvalidParameterSpecException.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParametersSpi = ::java::security::AlgorithmParametersSpi;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $NoSuchProviderException = ::java::security::NoSuchProviderException;
using $Provider = ::java::security::Provider;
using $Security = ::java::security::Security;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $InvalidParameterSpecException = ::java::security::spec::InvalidParameterSpecException;
using $Objects = ::java::util::Objects;

namespace java {
	namespace security {

$FieldInfo _AlgorithmParameters_FieldInfo_[] = {
	{"provider", "Ljava/security/Provider;", nullptr, $PRIVATE, $field(AlgorithmParameters, provider)},
	{"paramSpi", "Ljava/security/AlgorithmParametersSpi;", nullptr, $PRIVATE, $field(AlgorithmParameters, paramSpi)},
	{"algorithm", "Ljava/lang/String;", nullptr, $PRIVATE, $field(AlgorithmParameters, algorithm)},
	{"initialized", "Z", nullptr, $PRIVATE, $field(AlgorithmParameters, initialized)},
	{}
};

$MethodInfo _AlgorithmParameters_MethodInfo_[] = {
	{"<init>", "(Ljava/security/AlgorithmParametersSpi;Ljava/security/Provider;Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(AlgorithmParameters::*)($AlgorithmParametersSpi*,$Provider*,$String*)>(&AlgorithmParameters::init$))},
	{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$String*(AlgorithmParameters::*)()>(&AlgorithmParameters::getAlgorithm))},
	{"getEncoded", "()[B", nullptr, $PUBLIC | $FINAL, $method(static_cast<$bytes*(AlgorithmParameters::*)()>(&AlgorithmParameters::getEncoded)), "java.io.IOException"},
	{"getEncoded", "(Ljava/lang/String;)[B", nullptr, $PUBLIC | $FINAL, $method(static_cast<$bytes*(AlgorithmParameters::*)($String*)>(&AlgorithmParameters::getEncoded)), "java.io.IOException"},
	{"getInstance", "(Ljava/lang/String;)Ljava/security/AlgorithmParameters;", nullptr, $PUBLIC | $STATIC, $method(static_cast<AlgorithmParameters*(*)($String*)>(&AlgorithmParameters::getInstance)), "java.security.NoSuchAlgorithmException"},
	{"getInstance", "(Ljava/lang/String;Ljava/lang/String;)Ljava/security/AlgorithmParameters;", nullptr, $PUBLIC | $STATIC, $method(static_cast<AlgorithmParameters*(*)($String*,$String*)>(&AlgorithmParameters::getInstance)), "java.security.NoSuchAlgorithmException,java.security.NoSuchProviderException"},
	{"getInstance", "(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/AlgorithmParameters;", nullptr, $PUBLIC | $STATIC, $method(static_cast<AlgorithmParameters*(*)($String*,$Provider*)>(&AlgorithmParameters::getInstance)), "java.security.NoSuchAlgorithmException"},
	{"getParameterSpec", "(Ljava/lang/Class;)Ljava/security/spec/AlgorithmParameterSpec;", "<T::Ljava/security/spec/AlgorithmParameterSpec;>(Ljava/lang/Class<TT;>;)TT;", $PUBLIC | $FINAL, $method(static_cast<$AlgorithmParameterSpec*(AlgorithmParameters::*)($Class*)>(&AlgorithmParameters::getParameterSpec)), "java.security.spec.InvalidParameterSpecException"},
	{"getProvider", "()Ljava/security/Provider;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Provider*(AlgorithmParameters::*)()>(&AlgorithmParameters::getProvider))},
	{"init", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(AlgorithmParameters::*)($AlgorithmParameterSpec*)>(&AlgorithmParameters::init)), "java.security.spec.InvalidParameterSpecException"},
	{"init", "([B)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(AlgorithmParameters::*)($bytes*)>(&AlgorithmParameters::init)), "java.io.IOException"},
	{"init", "([BLjava/lang/String;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(AlgorithmParameters::*)($bytes*,$String*)>(&AlgorithmParameters::init)), "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$ClassInfo _AlgorithmParameters_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.AlgorithmParameters",
	"java.lang.Object",
	nullptr,
	_AlgorithmParameters_FieldInfo_,
	_AlgorithmParameters_MethodInfo_
};

$Object* allocate$AlgorithmParameters($Class* clazz) {
	return $of($alloc(AlgorithmParameters));
}

void AlgorithmParameters::init$($AlgorithmParametersSpi* paramSpi, $Provider* provider, $String* algorithm) {
	this->initialized = false;
	$set(this, paramSpi, paramSpi);
	$set(this, provider, provider);
	$set(this, algorithm, algorithm);
}

$String* AlgorithmParameters::getAlgorithm() {
	return this->algorithm;
}

AlgorithmParameters* AlgorithmParameters::getInstance($String* algorithm) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull($of(algorithm), "null algorithm name"_s);
	try {
		$var($ObjectArray, objs, $Security::getImpl(algorithm, "AlgorithmParameters"_s, ($String*)nullptr));
		return $new(AlgorithmParameters, $cast($AlgorithmParametersSpi, $nc(objs)->get(0)), $cast($Provider, objs->get(1)), algorithm);
	} catch ($NoSuchProviderException&) {
		$var($NoSuchProviderException, e, $catch());
		$throwNew($NoSuchAlgorithmException, $$str({algorithm, " not found"_s}));
	}
	$shouldNotReachHere();
}

AlgorithmParameters* AlgorithmParameters::getInstance($String* algorithm, $String* provider) {
	$Objects::requireNonNull($of(algorithm), "null algorithm name"_s);
	if (provider == nullptr || $nc(provider)->isEmpty()) {
		$throwNew($IllegalArgumentException, "missing provider"_s);
	}
	$var($ObjectArray, objs, $Security::getImpl(algorithm, "AlgorithmParameters"_s, provider));
	return $new(AlgorithmParameters, $cast($AlgorithmParametersSpi, $nc(objs)->get(0)), $cast($Provider, objs->get(1)), algorithm);
}

AlgorithmParameters* AlgorithmParameters::getInstance($String* algorithm, $Provider* provider) {
	$Objects::requireNonNull($of(algorithm), "null algorithm name"_s);
	if (provider == nullptr) {
		$throwNew($IllegalArgumentException, "missing provider"_s);
	}
	$var($ObjectArray, objs, $Security::getImpl(algorithm, "AlgorithmParameters"_s, provider));
	return $new(AlgorithmParameters, $cast($AlgorithmParametersSpi, $nc(objs)->get(0)), $cast($Provider, objs->get(1)), algorithm);
}

$Provider* AlgorithmParameters::getProvider() {
	return this->provider;
}

void AlgorithmParameters::init($AlgorithmParameterSpec* paramSpec) {
	if (this->initialized) {
		$throwNew($InvalidParameterSpecException, "already initialized"_s);
	}
	$nc(this->paramSpi)->engineInit(paramSpec);
	this->initialized = true;
}

void AlgorithmParameters::init($bytes* params) {
	if (this->initialized) {
		$throwNew($IOException, "already initialized"_s);
	}
	$nc(this->paramSpi)->engineInit(params);
	this->initialized = true;
}

void AlgorithmParameters::init($bytes* params, $String* format) {
	if (this->initialized) {
		$throwNew($IOException, "already initialized"_s);
	}
	$nc(this->paramSpi)->engineInit(params, format);
	this->initialized = true;
}

$AlgorithmParameterSpec* AlgorithmParameters::getParameterSpec($Class* paramSpec) {
	if (this->initialized == false) {
		$throwNew($InvalidParameterSpecException, "not initialized"_s);
	}
	return $nc(this->paramSpi)->engineGetParameterSpec(paramSpec);
}

$bytes* AlgorithmParameters::getEncoded() {
	if (this->initialized == false) {
		$throwNew($IOException, "not initialized"_s);
	}
	return $nc(this->paramSpi)->engineGetEncoded();
}

$bytes* AlgorithmParameters::getEncoded($String* format) {
	if (this->initialized == false) {
		$throwNew($IOException, "not initialized"_s);
	}
	return $nc(this->paramSpi)->engineGetEncoded(format);
}

$String* AlgorithmParameters::toString() {
	if (this->initialized == false) {
		return nullptr;
	}
	return $nc(this->paramSpi)->engineToString();
}

AlgorithmParameters::AlgorithmParameters() {
}

$Class* AlgorithmParameters::load$($String* name, bool initialize) {
	$loadClass(AlgorithmParameters, name, initialize, &_AlgorithmParameters_ClassInfo_, allocate$AlgorithmParameters);
	return class$;
}

$Class* AlgorithmParameters::class$ = nullptr;

	} // security
} // java