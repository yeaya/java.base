#include <javax/security/auth/PrivateCredentialPermission$CredOwner.h>

#include <java/text/MessageFormat.h>
#include <javax/security/auth/PrivateCredentialPermission.h>
#include <sun/security/util/ResourcesMgr.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MessageFormat = ::java::text::MessageFormat;
using $ResourcesMgr = ::sun::security::util::ResourcesMgr;

namespace javax {
	namespace security {
		namespace auth {

$FieldInfo _PrivateCredentialPermission$CredOwner_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PrivateCredentialPermission$CredOwner, serialVersionUID)},
	{"principalClass", "Ljava/lang/String;", nullptr, 0, $field(PrivateCredentialPermission$CredOwner, principalClass)},
	{"principalName", "Ljava/lang/String;", nullptr, 0, $field(PrivateCredentialPermission$CredOwner, principalName)},
	{}
};

$MethodInfo _PrivateCredentialPermission$CredOwner_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(PrivateCredentialPermission$CredOwner, init$, void, $String*, $String*)},
	{"implies", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(PrivateCredentialPermission$CredOwner, implies, bool, Object$*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PrivateCredentialPermission$CredOwner, toString, $String*)},
	{}
};

$InnerClassInfo _PrivateCredentialPermission$CredOwner_InnerClassesInfo_[] = {
	{"javax.security.auth.PrivateCredentialPermission$CredOwner", "javax.security.auth.PrivateCredentialPermission", "CredOwner", $STATIC},
	{}
};

$ClassInfo _PrivateCredentialPermission$CredOwner_ClassInfo_ = {
	$ACC_SUPER,
	"javax.security.auth.PrivateCredentialPermission$CredOwner",
	"java.lang.Object",
	"java.io.Serializable",
	_PrivateCredentialPermission$CredOwner_FieldInfo_,
	_PrivateCredentialPermission$CredOwner_MethodInfo_,
	nullptr,
	nullptr,
	_PrivateCredentialPermission$CredOwner_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.security.auth.PrivateCredentialPermission"
};

$Object* allocate$PrivateCredentialPermission$CredOwner($Class* clazz) {
	return $of($alloc(PrivateCredentialPermission$CredOwner));
}

void PrivateCredentialPermission$CredOwner::init$($String* principalClass, $String* principalName) {
	$set(this, principalClass, principalClass);
	$set(this, principalName, principalName);
}

bool PrivateCredentialPermission$CredOwner::implies(Object$* obj) {
	if (obj == nullptr || !($instanceOf(PrivateCredentialPermission$CredOwner, obj))) {
		return false;
	}
	$var(PrivateCredentialPermission$CredOwner, that, $cast(PrivateCredentialPermission$CredOwner, obj));
	bool var$0 = $nc(this->principalClass)->equals("*"_s);
	if (var$0 || $nc(this->principalClass)->equals($nc(that)->principalClass)) {
		bool var$1 = $nc(this->principalName)->equals("*"_s);
		if (var$1 || $nc(this->principalName)->equals($nc(that)->principalName)) {
			return true;
		}
	}
	return false;
}

$String* PrivateCredentialPermission$CredOwner::toString() {
	$useLocalCurrentObjectStackCache();
	$var($MessageFormat, form, $new($MessageFormat, $($ResourcesMgr::getString("CredOwner.Principal.Class.class.Principal.Name.name"_s))));
	$var($ObjectArray, source, $new($ObjectArray, {
		$of(this->principalClass),
		$of(this->principalName)
	}));
	return (form->format(source));
}

PrivateCredentialPermission$CredOwner::PrivateCredentialPermission$CredOwner() {
}

$Class* PrivateCredentialPermission$CredOwner::load$($String* name, bool initialize) {
	$loadClass(PrivateCredentialPermission$CredOwner, name, initialize, &_PrivateCredentialPermission$CredOwner_ClassInfo_, allocate$PrivateCredentialPermission$CredOwner);
	return class$;
}

$Class* PrivateCredentialPermission$CredOwner::class$ = nullptr;

		} // auth
	} // security
} // javax