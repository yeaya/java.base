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
	if (var$0 || this->principalClass->equals($nc(that)->principalClass)) {
		bool var$1 = $nc(this->principalName)->equals("*"_s);
		if (var$1 || this->principalName->equals($nc(that)->principalName)) {
			return true;
		}
	}
	return false;
}

$String* PrivateCredentialPermission$CredOwner::toString() {
	$useLocalObjectStack();
	$var($MessageFormat, form, $new($MessageFormat, $($ResourcesMgr::getString("CredOwner.Principal.Class.class.Principal.Name.name"_s))));
	$var($ObjectArray, source, $new($ObjectArray, {
		this->principalClass,
		this->principalName
	}));
	return (form->format(source));
}

PrivateCredentialPermission$CredOwner::PrivateCredentialPermission$CredOwner() {
}

$Class* PrivateCredentialPermission$CredOwner::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PrivateCredentialPermission$CredOwner, serialVersionUID)},
		{"principalClass", "Ljava/lang/String;", nullptr, 0, $field(PrivateCredentialPermission$CredOwner, principalClass)},
		{"principalName", "Ljava/lang/String;", nullptr, 0, $field(PrivateCredentialPermission$CredOwner, principalName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(PrivateCredentialPermission$CredOwner, init$, void, $String*, $String*)},
		{"implies", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(PrivateCredentialPermission$CredOwner, implies, bool, Object$*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PrivateCredentialPermission$CredOwner, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.security.auth.PrivateCredentialPermission$CredOwner", "javax.security.auth.PrivateCredentialPermission", "CredOwner", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.security.auth.PrivateCredentialPermission$CredOwner",
		"java.lang.Object",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.security.auth.PrivateCredentialPermission"
	};
	$loadClass(PrivateCredentialPermission$CredOwner, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrivateCredentialPermission$CredOwner);
	});
	return class$;
}

$Class* PrivateCredentialPermission$CredOwner::class$ = nullptr;

		} // auth
	} // security
} // javax