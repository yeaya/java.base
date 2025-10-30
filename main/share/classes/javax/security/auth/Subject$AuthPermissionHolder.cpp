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
using $Subject = ::javax::security::auth::Subject;

namespace javax {
	namespace security {
		namespace auth {

$FieldInfo _Subject$AuthPermissionHolder_FieldInfo_[] = {
	{"DO_AS_PERMISSION", "Ljavax/security/auth/AuthPermission;", nullptr, $STATIC | $FINAL, $staticField(Subject$AuthPermissionHolder, DO_AS_PERMISSION)},
	{"DO_AS_PRIVILEGED_PERMISSION", "Ljavax/security/auth/AuthPermission;", nullptr, $STATIC | $FINAL, $staticField(Subject$AuthPermissionHolder, DO_AS_PRIVILEGED_PERMISSION)},
	{"SET_READ_ONLY_PERMISSION", "Ljavax/security/auth/AuthPermission;", nullptr, $STATIC | $FINAL, $staticField(Subject$AuthPermissionHolder, SET_READ_ONLY_PERMISSION)},
	{"GET_SUBJECT_PERMISSION", "Ljavax/security/auth/AuthPermission;", nullptr, $STATIC | $FINAL, $staticField(Subject$AuthPermissionHolder, GET_SUBJECT_PERMISSION)},
	{"MODIFY_PRINCIPALS_PERMISSION", "Ljavax/security/auth/AuthPermission;", nullptr, $STATIC | $FINAL, $staticField(Subject$AuthPermissionHolder, MODIFY_PRINCIPALS_PERMISSION)},
	{"MODIFY_PUBLIC_CREDENTIALS_PERMISSION", "Ljavax/security/auth/AuthPermission;", nullptr, $STATIC | $FINAL, $staticField(Subject$AuthPermissionHolder, MODIFY_PUBLIC_CREDENTIALS_PERMISSION)},
	{"MODIFY_PRIVATE_CREDENTIALS_PERMISSION", "Ljavax/security/auth/AuthPermission;", nullptr, $STATIC | $FINAL, $staticField(Subject$AuthPermissionHolder, MODIFY_PRIVATE_CREDENTIALS_PERMISSION)},
	{}
};

$MethodInfo _Subject$AuthPermissionHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Subject$AuthPermissionHolder::*)()>(&Subject$AuthPermissionHolder::init$))},
	{}
};

$InnerClassInfo _Subject$AuthPermissionHolder_InnerClassesInfo_[] = {
	{"javax.security.auth.Subject$AuthPermissionHolder", "javax.security.auth.Subject", "AuthPermissionHolder", $STATIC | $FINAL},
	{}
};

$ClassInfo _Subject$AuthPermissionHolder_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.security.auth.Subject$AuthPermissionHolder",
	"java.lang.Object",
	nullptr,
	_Subject$AuthPermissionHolder_FieldInfo_,
	_Subject$AuthPermissionHolder_MethodInfo_,
	nullptr,
	nullptr,
	_Subject$AuthPermissionHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.security.auth.Subject"
};

$Object* allocate$Subject$AuthPermissionHolder($Class* clazz) {
	return $of($alloc(Subject$AuthPermissionHolder));
}

$AuthPermission* Subject$AuthPermissionHolder::DO_AS_PERMISSION = nullptr;
$AuthPermission* Subject$AuthPermissionHolder::DO_AS_PRIVILEGED_PERMISSION = nullptr;
$AuthPermission* Subject$AuthPermissionHolder::SET_READ_ONLY_PERMISSION = nullptr;
$AuthPermission* Subject$AuthPermissionHolder::GET_SUBJECT_PERMISSION = nullptr;
$AuthPermission* Subject$AuthPermissionHolder::MODIFY_PRINCIPALS_PERMISSION = nullptr;
$AuthPermission* Subject$AuthPermissionHolder::MODIFY_PUBLIC_CREDENTIALS_PERMISSION = nullptr;
$AuthPermission* Subject$AuthPermissionHolder::MODIFY_PRIVATE_CREDENTIALS_PERMISSION = nullptr;

void Subject$AuthPermissionHolder::init$() {
}

void clinit$Subject$AuthPermissionHolder($Class* class$) {
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
	$loadClass(Subject$AuthPermissionHolder, name, initialize, &_Subject$AuthPermissionHolder_ClassInfo_, clinit$Subject$AuthPermissionHolder, allocate$Subject$AuthPermissionHolder);
	return class$;
}

$Class* Subject$AuthPermissionHolder::class$ = nullptr;

		} // auth
	} // security
} // javax