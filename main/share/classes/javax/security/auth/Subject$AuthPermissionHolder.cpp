#include <javax/security/auth/Subject$AuthPermissionHolder.h>
#include <javax/security/auth/AuthPermission.h>
#include <javax/security/auth/Subject.h>
#include <jcpp.h>

#undef DO_AS_PERMISSION
#undef DO_AS_PRIVILEGED_PERMISSION
#undef GET_SUBJECT_PERMISSION
#undef MODIFY_PRINCIPALS_PERMISSION
#undef MODIFY_PRIVATE_CREDENTIALS_PERMISSION
#undef MODIFY_PUBLIC_CREDENTIALS_PERMISSION
#undef SET_READ_ONLY_PERMISSION

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AuthPermission = ::javax::security::auth::AuthPermission;

namespace javax {
	namespace security {
		namespace auth {

$AuthPermission* Subject$AuthPermissionHolder::DO_AS_PERMISSION = nullptr;
$AuthPermission* Subject$AuthPermissionHolder::DO_AS_PRIVILEGED_PERMISSION = nullptr;
$AuthPermission* Subject$AuthPermissionHolder::SET_READ_ONLY_PERMISSION = nullptr;
$AuthPermission* Subject$AuthPermissionHolder::GET_SUBJECT_PERMISSION = nullptr;
$AuthPermission* Subject$AuthPermissionHolder::MODIFY_PRINCIPALS_PERMISSION = nullptr;
$AuthPermission* Subject$AuthPermissionHolder::MODIFY_PUBLIC_CREDENTIALS_PERMISSION = nullptr;
$AuthPermission* Subject$AuthPermissionHolder::MODIFY_PRIVATE_CREDENTIALS_PERMISSION = nullptr;

void Subject$AuthPermissionHolder::init$() {
}

void Subject$AuthPermissionHolder::clinit$($Class* clazz) {
	$assignStatic(Subject$AuthPermissionHolder::DO_AS_PERMISSION, $new($AuthPermission, "doAs"_s));
	$assignStatic(Subject$AuthPermissionHolder::DO_AS_PRIVILEGED_PERMISSION, $new($AuthPermission, "doAsPrivileged"_s));
	$assignStatic(Subject$AuthPermissionHolder::SET_READ_ONLY_PERMISSION, $new($AuthPermission, "setReadOnly"_s));
	$assignStatic(Subject$AuthPermissionHolder::GET_SUBJECT_PERMISSION, $new($AuthPermission, "getSubject"_s));
	$assignStatic(Subject$AuthPermissionHolder::MODIFY_PRINCIPALS_PERMISSION, $new($AuthPermission, "modifyPrincipals"_s));
	$assignStatic(Subject$AuthPermissionHolder::MODIFY_PUBLIC_CREDENTIALS_PERMISSION, $new($AuthPermission, "modifyPublicCredentials"_s));
	$assignStatic(Subject$AuthPermissionHolder::MODIFY_PRIVATE_CREDENTIALS_PERMISSION, $new($AuthPermission, "modifyPrivateCredentials"_s));
}

Subject$AuthPermissionHolder::Subject$AuthPermissionHolder() {
}

$Class* Subject$AuthPermissionHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"DO_AS_PERMISSION", "Ljavax/security/auth/AuthPermission;", nullptr, $STATIC | $FINAL, $staticField(Subject$AuthPermissionHolder, DO_AS_PERMISSION)},
		{"DO_AS_PRIVILEGED_PERMISSION", "Ljavax/security/auth/AuthPermission;", nullptr, $STATIC | $FINAL, $staticField(Subject$AuthPermissionHolder, DO_AS_PRIVILEGED_PERMISSION)},
		{"SET_READ_ONLY_PERMISSION", "Ljavax/security/auth/AuthPermission;", nullptr, $STATIC | $FINAL, $staticField(Subject$AuthPermissionHolder, SET_READ_ONLY_PERMISSION)},
		{"GET_SUBJECT_PERMISSION", "Ljavax/security/auth/AuthPermission;", nullptr, $STATIC | $FINAL, $staticField(Subject$AuthPermissionHolder, GET_SUBJECT_PERMISSION)},
		{"MODIFY_PRINCIPALS_PERMISSION", "Ljavax/security/auth/AuthPermission;", nullptr, $STATIC | $FINAL, $staticField(Subject$AuthPermissionHolder, MODIFY_PRINCIPALS_PERMISSION)},
		{"MODIFY_PUBLIC_CREDENTIALS_PERMISSION", "Ljavax/security/auth/AuthPermission;", nullptr, $STATIC | $FINAL, $staticField(Subject$AuthPermissionHolder, MODIFY_PUBLIC_CREDENTIALS_PERMISSION)},
		{"MODIFY_PRIVATE_CREDENTIALS_PERMISSION", "Ljavax/security/auth/AuthPermission;", nullptr, $STATIC | $FINAL, $staticField(Subject$AuthPermissionHolder, MODIFY_PRIVATE_CREDENTIALS_PERMISSION)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Subject$AuthPermissionHolder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.security.auth.Subject$AuthPermissionHolder", "javax.security.auth.Subject", "AuthPermissionHolder", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"javax.security.auth.Subject$AuthPermissionHolder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.security.auth.Subject"
	};
	$loadClass(Subject$AuthPermissionHolder, name, initialize, &classInfo$$, Subject$AuthPermissionHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Subject$AuthPermissionHolder);
	});
	return class$;
}

$Class* Subject$AuthPermissionHolder::class$ = nullptr;

		} // auth
	} // security
} // javax