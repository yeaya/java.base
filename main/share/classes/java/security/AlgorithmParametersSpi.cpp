#include <java/security/AlgorithmParametersSpi.h>

#include <java/security/spec/AlgorithmParameterSpec.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace security {

$MethodInfo _AlgorithmParametersSpi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AlgorithmParametersSpi::*)()>(&AlgorithmParametersSpi::init$))},
	{"engineGetEncoded", "()[B", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.io.IOException"},
	{"engineGetEncoded", "(Ljava/lang/String;)[B", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.io.IOException"},
	{"engineGetParameterSpec", "(Ljava/lang/Class;)Ljava/security/spec/AlgorithmParameterSpec;", "<T::Ljava/security/spec/AlgorithmParameterSpec;>(Ljava/lang/Class<TT;>;)TT;", $PROTECTED | $ABSTRACT, nullptr, "java.security.spec.InvalidParameterSpecException"},
	{"engineInit", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.security.spec.InvalidParameterSpecException"},
	{"engineInit", "([B)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.io.IOException"},
	{"engineInit", "([BLjava/lang/String;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.io.IOException"},
	{"engineToString", "()Ljava/lang/String;", nullptr, $PROTECTED | $ABSTRACT},
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