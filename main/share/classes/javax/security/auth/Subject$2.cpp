#include <javax/security/auth/Subject$2.h>

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
using $Subject = ::javax::security::auth::Subject;
using $SubjectDomainCombiner = ::javax::security::auth::SubjectDomainCombiner;

namespace javax {
	namespace security {
		namespace auth {

$FieldInfo _Subject$2_FieldInfo_[] = {
	{"val$acc", "Ljava/security/AccessControlContext;", nullptr, $FINAL | $SYNTHETIC, $field(Subject$2, val$acc)},
	{"val$subject", "Ljavax/security/auth/Subject;", nullptr, $FINAL | $SYNTHETIC, $field(Subject$2, val$subject)},
	{}
};

$MethodInfo _Subject$2_MethodInfo_[] = {
	{"<init>", "(Ljavax/security/auth/Subject;Ljava/security/AccessControlContext;)V", nullptr, 0, $method(Subject$2, init$, void, $Subject*, $AccessControlContext*)},
	{"run", "()Ljava/security/AccessControlContext;", nullptr, $PUBLIC, $virtualMethod(Subject$2, run, $Object*)},
	{}
};

$EnclosingMethodInfo _Subject$2_EnclosingMethodInfo_ = {
	"javax.security.auth.Subject",
	"createContext",
	"(Ljavax/security/auth/Subject;Ljava/security/AccessControlContext;)Ljava/security/AccessControlContext;"
};

$InnerClassInfo _Subject$2_InnerClassesInfo_[] = {
	{"javax.security.auth.Subject$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Subject$2_ClassInfo_ = {
	$ACC_SUPER,
	"javax.security.auth.Subject$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_Subject$2_FieldInfo_,
	_Subject$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/security/AccessControlContext;>;",
	&_Subject$2_EnclosingMethodInfo_,
	_Subject$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.security.auth.Subject"
};

$Object* allocate$Subject$2($Class* clazz) {
	return $of($alloc(Subject$2));
}

void Subject$2::init$($Subject* val$subject, $AccessControlContext* val$acc) {
	$set(this, val$subject, val$subject);
	$set(this, val$acc, val$acc);
}

$Object* Subject$2::run() {
	if (this->val$subject == nullptr) {
		return $of($new($AccessControlContext, this->val$acc, ($DomainCombiner*)nullptr));
	} else {
		return $of($new($AccessControlContext, this->val$acc, static_cast<$DomainCombiner*>($$new($SubjectDomainCombiner, this->val$subject))));
	}
}

Subject$2::Subject$2() {
}

$Class* Subject$2::load$($String* name, bool initialize) {
	$loadClass(Subject$2, name, initialize, &_Subject$2_ClassInfo_, allocate$Subject$2);
	return class$;
}

$Class* Subject$2::class$ = nullptr;

		} // auth
	} // security
} // javax