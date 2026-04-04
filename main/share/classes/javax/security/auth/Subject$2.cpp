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

void Subject$2::init$($Subject* val$subject, $AccessControlContext* val$acc) {
	$set(this, val$subject, val$subject);
	$set(this, val$acc, val$acc);
}

$Object* Subject$2::run() {
	if (this->val$subject == nullptr) {
		return $new($AccessControlContext, this->val$acc, nullptr);
	} else {
		return $new($AccessControlContext, this->val$acc, $$new($SubjectDomainCombiner, this->val$subject));
	}
}

Subject$2::Subject$2() {
}

$Class* Subject$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$acc", "Ljava/security/AccessControlContext;", nullptr, $FINAL | $SYNTHETIC, $field(Subject$2, val$acc)},
		{"val$subject", "Ljavax/security/auth/Subject;", nullptr, $FINAL | $SYNTHETIC, $field(Subject$2, val$subject)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/security/auth/Subject;Ljava/security/AccessControlContext;)V", nullptr, 0, $method(Subject$2, init$, void, $Subject*, $AccessControlContext*)},
		{"run", "()Ljava/security/AccessControlContext;", nullptr, $PUBLIC, $virtualMethod(Subject$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.security.auth.Subject",
		"createContext",
		"(Ljavax/security/auth/Subject;Ljava/security/AccessControlContext;)Ljava/security/AccessControlContext;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.security.auth.Subject$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.security.auth.Subject$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/security/AccessControlContext;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.security.auth.Subject"
	};
	$loadClass(Subject$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Subject$2);
	});
	return class$;
}

$Class* Subject$2::class$ = nullptr;

		} // auth
	} // security
} // javax