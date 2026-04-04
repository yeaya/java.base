#include <javax/security/auth/SubjectDomainCombiner$1.h>
#include <javax/security/auth/Subject.h>
#include <javax/security/auth/SubjectDomainCombiner.h>
#include <sun/security/util/Debug.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Subject = ::javax::security::auth::Subject;
using $SubjectDomainCombiner = ::javax::security::auth::SubjectDomainCombiner;

namespace javax {
	namespace security {
		namespace auth {

void SubjectDomainCombiner$1::init$($SubjectDomainCombiner* this$0, $Subject* val$s) {
	$set(this, this$0, this$0);
	$set(this, val$s, val$s);
}

$Object* SubjectDomainCombiner$1::run() {
	$init($SubjectDomainCombiner);
	$nc($SubjectDomainCombiner::debug)->println($($nc(this->val$s)->toString()));
	return nullptr;
}

SubjectDomainCombiner$1::SubjectDomainCombiner$1() {
}

$Class* SubjectDomainCombiner$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/security/auth/SubjectDomainCombiner;", nullptr, $FINAL | $SYNTHETIC, $field(SubjectDomainCombiner$1, this$0)},
		{"val$s", "Ljavax/security/auth/Subject;", nullptr, $FINAL | $SYNTHETIC, $field(SubjectDomainCombiner$1, val$s)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/security/auth/SubjectDomainCombiner;Ljavax/security/auth/Subject;)V", "()V", 0, $method(SubjectDomainCombiner$1, init$, void, $SubjectDomainCombiner*, $Subject*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(SubjectDomainCombiner$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.security.auth.SubjectDomainCombiner",
		"combine",
		"([Ljava/security/ProtectionDomain;[Ljava/security/ProtectionDomain;)[Ljava/security/ProtectionDomain;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.security.auth.SubjectDomainCombiner$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.security.auth.SubjectDomainCombiner$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.security.auth.SubjectDomainCombiner"
	};
	$loadClass(SubjectDomainCombiner$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SubjectDomainCombiner$1);
	});
	return class$;
}

$Class* SubjectDomainCombiner$1::class$ = nullptr;

		} // auth
	} // security
} // javax