#include <java/security/KeyStore$Entry$Attribute.h>
#include <java/security/KeyStore$Entry.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace security {

$Class* KeyStore$Entry$Attribute::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(KeyStore$Entry$Attribute, getName, $String*)},
		{"getValue", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(KeyStore$Entry$Attribute, getValue, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.security.KeyStore$Entry", "java.security.KeyStore", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"java.security.KeyStore$Entry$Attribute", "java.security.KeyStore$Entry", "Attribute", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.security.KeyStore$Entry$Attribute",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.security.KeyStore"
	};
	$loadClass(KeyStore$Entry$Attribute, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyStore$Entry$Attribute);
	});
	return class$;
}

$Class* KeyStore$Entry$Attribute::class$ = nullptr;

	} // security
} // java