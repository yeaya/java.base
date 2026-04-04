#include <java/security/Principal.h>
#include <java/util/Set.h>
#include <javax/security/auth/Subject.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Subject = ::javax::security::auth::Subject;

namespace java {
	namespace security {

bool Principal::equals(Object$* another) {
	 return this->$Object::equals(another);
}

$String* Principal::toString() {
	 return this->$Object::toString();
}

int32_t Principal::hashCode() {
	 return this->$Object::hashCode();
}

bool Principal::implies($Subject* subject) {
	if (subject == nullptr) {
		return false;
	}
	return $$nc($nc(subject)->getPrincipals())->contains(this);
}

$Class* Principal::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Principal, getName, $String*)},
		{"hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
		{"implies", "(Ljavax/security/auth/Subject;)Z", nullptr, $PUBLIC, $virtualMethod(Principal, implies, bool, $Subject*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.security.Principal",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Principal, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Principal);
	});
	return class$;
}

$Class* Principal::class$ = nullptr;

	} // security
} // java