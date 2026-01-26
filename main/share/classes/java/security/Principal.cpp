#include <java/security/Principal.h>

#include <java/util/Set.h>
#include <javax/security/auth/Subject.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Set = ::java::util::Set;
using $Subject = ::javax::security::auth::Subject;

namespace java {
	namespace security {

$MethodInfo _Principal_MethodInfo_[] = {
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Principal, getName, $String*)},
	{"hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"implies", "(Ljavax/security/auth/Subject;)Z", nullptr, $PUBLIC, $virtualMethod(Principal, implies, bool, $Subject*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Principal_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.security.Principal",
	nullptr,
	nullptr,
	nullptr,
	_Principal_MethodInfo_
};

$Object* allocate$Principal($Class* clazz) {
	return $of($alloc(Principal));
}

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
	return $nc($($nc(subject)->getPrincipals()))->contains(this);
}

$Class* Principal::load$($String* name, bool initialize) {
	$loadClass(Principal, name, initialize, &_Principal_ClassInfo_, allocate$Principal);
	return class$;
}

$Class* Principal::class$ = nullptr;

	} // security
} // java