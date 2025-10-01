#include <javax/security/auth/Subject$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessControlContext.h>
#include <java/security/DomainCombiner.h>
#include <javax/security/auth/Subject.h>
#include <javax/security/auth/SubjectDomainCombiner.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessControlContext = ::java::security::AccessControlContext;
using $DomainCombiner = ::java::security::DomainCombiner;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Subject = ::javax::security::auth::Subject;
using $SubjectDomainCombiner = ::javax::security::auth::SubjectDomainCombiner;

namespace javax {
	namespace security {
		namespace auth {

$FieldInfo _Subject$1_FieldInfo_[] = {
	{"val$acc", "Ljava/security/AccessControlContext;", nullptr, $FINAL | $SYNTHETIC, $field(Subject$1, val$acc)},
	{}
};

$MethodInfo _Subject$1_MethodInfo_[] = {
	{"<init>", "(Ljava/security/AccessControlContext;)V", nullptr, 0, $method(static_cast<void(Subject$1::*)($AccessControlContext*)>(&Subject$1::init$))},
	{"run", "()Ljavax/security/auth/Subject;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Subject$1_EnclosingMethodInfo_ = {
	"javax.security.auth.Subject",
	"getSubject",
	"(Ljava/security/AccessControlContext;)Ljavax/security/auth/Subject;"
};

$InnerClassInfo _Subject$1_InnerClassesInfo_[] = {
	{"javax.security.auth.Subject$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Subject$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.security.auth.Subject$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_Subject$1_FieldInfo_,
	_Subject$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljavax/security/auth/Subject;>;",
	&_Subject$1_EnclosingMethodInfo_,
	_Subject$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.security.auth.Subject"
};

$Object* allocate$Subject$1($Class* clazz) {
	return $of($alloc(Subject$1));
}

void Subject$1::init$($AccessControlContext* val$acc) {
	$set(this, val$acc, val$acc);
}

$Object* Subject$1::run() {
	$var($DomainCombiner, dc, $nc(this->val$acc)->getDomainCombiner());
	if (!($instanceOf($SubjectDomainCombiner, dc))) {
		return $of(nullptr);
	}
	$var($SubjectDomainCombiner, sdc, $cast($SubjectDomainCombiner, dc));
	return $of($nc(sdc)->getSubject());
}

Subject$1::Subject$1() {
}

$Class* Subject$1::load$($String* name, bool initialize) {
	$loadClass(Subject$1, name, initialize, &_Subject$1_ClassInfo_, allocate$Subject$1);
	return class$;
}

$Class* Subject$1::class$ = nullptr;

		} // auth
	} // security
} // javax