#include <java/security/AccessControlException.h>
#include <java/lang/SecurityException.h>
#include <java/security/Permission.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $SecurityException = ::java::lang::SecurityException;
using $Permission = ::java::security::Permission;

namespace java {
	namespace security {

void AccessControlException::init$($String* s) {
	$SecurityException::init$(s);
}

void AccessControlException::init$($String* s, $Permission* p) {
	$SecurityException::init$(s);
	$set(this, perm, p);
}

$Permission* AccessControlException::getPermission() {
	return this->perm;
}

AccessControlException::AccessControlException() {
}

AccessControlException::AccessControlException(const AccessControlException& e) : $SecurityException(e) {
}

void AccessControlException::throw$() {
	throw *this;
}

$Class* AccessControlException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AccessControlException, serialVersionUID)},
		{"perm", "Ljava/security/Permission;", nullptr, $PRIVATE, $field(AccessControlException, perm)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(AccessControlException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/security/Permission;)V", nullptr, $PUBLIC, $method(AccessControlException, init$, void, $String*, $Permission*)},
		{"getPermission", "()Ljava/security/Permission;", nullptr, $PUBLIC, $virtualMethod(AccessControlException, getPermission, $Permission*)},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"since", 's', "17"},
		{"forRemoval", 'Z', "true"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/Deprecated;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.security.AccessControlException",
		"java.lang.SecurityException",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(AccessControlException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AccessControlException);
	});
	return class$;
}

$Class* AccessControlException::class$ = nullptr;

	} // security
} // java