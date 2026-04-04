#include <java/security/KeyStore$Entry.h>
#include <java/security/KeyStore$Entry$Attribute.h>
#include <java/security/KeyStore.h>
#include <java/util/Collections.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;
using $Set = ::java::util::Set;

namespace java {
	namespace security {

$Set* KeyStore$Entry::getAttributes() {
	return $Collections::emptySet();
}

$Class* KeyStore$Entry::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getAttributes", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/security/KeyStore$Entry$Attribute;>;", $PUBLIC, $virtualMethod(KeyStore$Entry, getAttributes, $Set*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.security.KeyStore$Entry", "java.security.KeyStore", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"java.security.KeyStore$Entry$Attribute", "java.security.KeyStore$Entry", "Attribute", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.security.KeyStore$Entry",
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
	$loadClass(KeyStore$Entry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyStore$Entry);
	});
	return class$;
}

$Class* KeyStore$Entry::class$ = nullptr;

	} // security
} // java