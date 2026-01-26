#include <sun/security/ssl/SSLAlgorithmConstraints$SupportedSignatureAlgorithmConstraints.h>

#include <java/security/AlgorithmParameters.h>
#include <java/security/Key.h>
#include <java/util/Set.h>
#include <sun/security/ssl/SSLAlgorithmConstraints.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParameters = ::java::security::AlgorithmParameters;
using $Key = ::java::security::Key;
using $Set = ::java::util::Set;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _SSLAlgorithmConstraints$SupportedSignatureAlgorithmConstraints_FieldInfo_[] = {
	{"supportedAlgorithms", "[Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(SSLAlgorithmConstraints$SupportedSignatureAlgorithmConstraints, supportedAlgorithms)},
	{}
};

$MethodInfo _SSLAlgorithmConstraints$SupportedSignatureAlgorithmConstraints_MethodInfo_[] = {
	{"<init>", "([Ljava/lang/String;)V", nullptr, 0, $method(SSLAlgorithmConstraints$SupportedSignatureAlgorithmConstraints, init$, void, $StringArray*)},
	{"permits", "(Ljava/util/Set;Ljava/lang/String;Ljava/security/AlgorithmParameters;)Z", "(Ljava/util/Set<Ljava/security/CryptoPrimitive;>;Ljava/lang/String;Ljava/security/AlgorithmParameters;)Z", $PUBLIC, $virtualMethod(SSLAlgorithmConstraints$SupportedSignatureAlgorithmConstraints, permits, bool, $Set*, $String*, $AlgorithmParameters*)},
	{"permits", "(Ljava/util/Set;Ljava/security/Key;)Z", "(Ljava/util/Set<Ljava/security/CryptoPrimitive;>;Ljava/security/Key;)Z", $PUBLIC | $FINAL, $virtualMethod(SSLAlgorithmConstraints$SupportedSignatureAlgorithmConstraints, permits, bool, $Set*, $Key*)},
	{"permits", "(Ljava/util/Set;Ljava/lang/String;Ljava/security/Key;Ljava/security/AlgorithmParameters;)Z", "(Ljava/util/Set<Ljava/security/CryptoPrimitive;>;Ljava/lang/String;Ljava/security/Key;Ljava/security/AlgorithmParameters;)Z", $PUBLIC | $FINAL, $virtualMethod(SSLAlgorithmConstraints$SupportedSignatureAlgorithmConstraints, permits, bool, $Set*, $String*, $Key*, $AlgorithmParameters*)},
	{}
};

$InnerClassInfo _SSLAlgorithmConstraints$SupportedSignatureAlgorithmConstraints_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLAlgorithmConstraints$SupportedSignatureAlgorithmConstraints", "sun.security.ssl.SSLAlgorithmConstraints", "SupportedSignatureAlgorithmConstraints", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SSLAlgorithmConstraints$SupportedSignatureAlgorithmConstraints_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.SSLAlgorithmConstraints$SupportedSignatureAlgorithmConstraints",
	"java.lang.Object",
	"java.security.AlgorithmConstraints",
	_SSLAlgorithmConstraints$SupportedSignatureAlgorithmConstraints_FieldInfo_,
	_SSLAlgorithmConstraints$SupportedSignatureAlgorithmConstraints_MethodInfo_,
	nullptr,
	nullptr,
	_SSLAlgorithmConstraints$SupportedSignatureAlgorithmConstraints_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLAlgorithmConstraints"
};

$Object* allocate$SSLAlgorithmConstraints$SupportedSignatureAlgorithmConstraints($Class* clazz) {
	return $of($alloc(SSLAlgorithmConstraints$SupportedSignatureAlgorithmConstraints));
}

void SSLAlgorithmConstraints$SupportedSignatureAlgorithmConstraints::init$($StringArray* supportedAlgorithms) {
	if (supportedAlgorithms != nullptr) {
		$set(this, supportedAlgorithms, $cast($StringArray, supportedAlgorithms->clone()));
	} else {
		$set(this, supportedAlgorithms, nullptr);
	}
}

bool SSLAlgorithmConstraints$SupportedSignatureAlgorithmConstraints::permits($Set* primitives, $String* algorithm$renamed, $AlgorithmParameters* parameters) {
	$useLocalCurrentObjectStackCache();
	$var($String, algorithm, algorithm$renamed);
	if (algorithm == nullptr || $nc(algorithm)->isEmpty()) {
		$throwNew($IllegalArgumentException, "No algorithm name specified"_s);
	}
	if (primitives == nullptr || $nc(primitives)->isEmpty()) {
		$throwNew($IllegalArgumentException, "No cryptographic primitive specified"_s);
	}
	if (this->supportedAlgorithms == nullptr || $nc(this->supportedAlgorithms)->length == 0) {
		return false;
	}
	int32_t position = $nc(algorithm)->indexOf("and"_s);
	if (position > 0) {
		$assign(algorithm, algorithm->substring(0, position));
	}
	{
		$var($StringArray, arr$, this->supportedAlgorithms);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, supportedAlgorithm, arr$->get(i$));
			{
				if (algorithm->equalsIgnoreCase(supportedAlgorithm)) {
					return true;
				}
			}
		}
	}
	return false;
}

bool SSLAlgorithmConstraints$SupportedSignatureAlgorithmConstraints::permits($Set* primitives, $Key* key) {
	return true;
}

bool SSLAlgorithmConstraints$SupportedSignatureAlgorithmConstraints::permits($Set* primitives, $String* algorithm, $Key* key, $AlgorithmParameters* parameters) {
	if (algorithm == nullptr || $nc(algorithm)->isEmpty()) {
		$throwNew($IllegalArgumentException, "No algorithm name specified"_s);
	}
	return permits(primitives, algorithm, parameters);
}

SSLAlgorithmConstraints$SupportedSignatureAlgorithmConstraints::SSLAlgorithmConstraints$SupportedSignatureAlgorithmConstraints() {
}

$Class* SSLAlgorithmConstraints$SupportedSignatureAlgorithmConstraints::load$($String* name, bool initialize) {
	$loadClass(SSLAlgorithmConstraints$SupportedSignatureAlgorithmConstraints, name, initialize, &_SSLAlgorithmConstraints$SupportedSignatureAlgorithmConstraints_ClassInfo_, allocate$SSLAlgorithmConstraints$SupportedSignatureAlgorithmConstraints);
	return class$;
}

$Class* SSLAlgorithmConstraints$SupportedSignatureAlgorithmConstraints::class$ = nullptr;

		} // ssl
	} // security
} // sun