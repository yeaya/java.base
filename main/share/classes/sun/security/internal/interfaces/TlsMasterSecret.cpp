#include <sun/security/internal/interfaces/TlsMasterSecret.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace internal {
			namespace interfaces {

$Class* TlsMasterSecret::load$($String* name, bool initialize) {
	$CompoundAttribute serialVersionUIDfieldAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(TlsMasterSecret, serialVersionUID), serialVersionUIDfieldAnnotations$$},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"getMajorVersion", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TlsMasterSecret, getMajorVersion, int32_t)},
		{"getMinorVersion", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TlsMasterSecret, getMinorVersion, int32_t)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.security.internal.interfaces.TlsMasterSecret",
		nullptr,
		"javax.crypto.SecretKey",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(TlsMasterSecret, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(TlsMasterSecret));
	});
	return class$;
}

$Class* TlsMasterSecret::class$ = nullptr;

			} // interfaces
		} // internal
	} // security
} // sun