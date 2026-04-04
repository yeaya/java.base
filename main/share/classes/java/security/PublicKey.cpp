#include <java/security/PublicKey.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;

namespace java {
	namespace security {

$Class* PublicKey::load$($String* name, bool initialize) {
	$CompoundAttribute serialVersionUIDfieldAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(PublicKey, serialVersionUID), serialVersionUIDfieldAnnotations$$},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.security.PublicKey",
		nullptr,
		"java.security.Key",
		fieldInfos$$
	};
	$loadClass(PublicKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PublicKey);
	});
	return class$;
}

$Class* PublicKey::class$ = nullptr;

	} // security
} // java