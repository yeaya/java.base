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

$NamedAttribute AccessControlException_Attribute_var$0[] = {
	{"since", 's', "17"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _AccessControlException_Annotations_[] = {
	{"Ljava/lang/Deprecated;", AccessControlException_Attribute_var$0},
	{}
};

$FieldInfo _AccessControlException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AccessControlException, serialVersionUID)},
	{"perm", "Ljava/security/Permission;", nullptr, $PRIVATE, $field(AccessControlException, perm)},
	{}
};

$MethodInfo _AccessControlException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(AccessControlException::*)($String*)>(&AccessControlException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/security/Permission;)V", nullptr, $PUBLIC, $method(static_cast<void(AccessControlException::*)($String*,$Permission*)>(&AccessControlException::init$))},
	{"getPermission", "()Ljava/security/Permission;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AccessControlException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.AccessControlException",
	"java.lang.SecurityException",
	nullptr,
	_AccessControlException_FieldInfo_,
	_AccessControlException_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_AccessControlException_Annotations_
};

$Object* allocate$AccessControlException($Class* clazz) {
	return $of($alloc(AccessControlException));
}

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
	$loadClass(AccessControlException, name, initialize, &_AccessControlException_ClassInfo_, allocate$AccessControlException);
	return class$;
}

$Class* AccessControlException::class$ = nullptr;

	} // security
} // java