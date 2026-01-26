#include <java/security/AlgorithmParametersSpi.h>

#include <java/security/spec/AlgorithmParameterSpec.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;

namespace java {
	namespace security {

$MethodInfo _AlgorithmParametersSpi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(AlgorithmParametersSpi, init$, void)},
	{"engineGetEncoded", "()[B", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(AlgorithmParametersSpi, engineGetEncoded, $bytes*), "java.io.IOException"},
	{"engineGetEncoded", "(Ljava/lang/String;)[B", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(AlgorithmParametersSpi, engineGetEncoded, $bytes*, $String*), "java.io.IOException"},
	{"engineGetParameterSpec", "(Ljava/lang/Class;)Ljava/security/spec/AlgorithmParameterSpec;", "<T::Ljava/security/spec/AlgorithmParameterSpec;>(Ljava/lang/Class<TT;>;)TT;", $PROTECTED | $ABSTRACT, $virtualMethod(AlgorithmParametersSpi, engineGetParameterSpec, $AlgorithmParameterSpec*, $Class*), "java.security.spec.InvalidParameterSpecException"},
	{"engineInit", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(AlgorithmParametersSpi, engineInit, void, $AlgorithmParameterSpec*), "java.security.spec.InvalidParameterSpecException"},
	{"engineInit", "([B)V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(AlgorithmParametersSpi, engineInit, void, $bytes*), "java.io.IOException"},
	{"engineInit", "([BLjava/lang/String;)V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(AlgorithmParametersSpi, engineInit, void, $bytes*, $String*), "java.io.IOException"},
	{"engineToString", "()Ljava/lang/String;", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(AlgorithmParametersSpi, engineToString, $String*)},
	{}
};

$ClassInfo _AlgorithmParametersSpi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.security.AlgorithmParametersSpi",
	"java.lang.Object",
	nullptr,
	nullptr,
	_AlgorithmParametersSpi_MethodInfo_
};

$Object* allocate$AlgorithmParametersSpi($Class* clazz) {
	return $of($alloc(AlgorithmParametersSpi));
}

void AlgorithmParametersSpi::init$() {
}

AlgorithmParametersSpi::AlgorithmParametersSpi() {
}

$Class* AlgorithmParametersSpi::load$($String* name, bool initialize) {
	$loadClass(AlgorithmParametersSpi, name, initialize, &_AlgorithmParametersSpi_ClassInfo_, allocate$AlgorithmParametersSpi);
	return class$;
}

$Class* AlgorithmParametersSpi::class$ = nullptr;

	} // security
} // java