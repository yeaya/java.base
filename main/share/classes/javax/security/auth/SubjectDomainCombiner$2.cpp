#include <javax/security/auth/SubjectDomainCombiner$2.h>
#include <java/security/ProtectionDomain.h>
#include <javax/security/auth/SubjectDomainCombiner.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProtectionDomain = ::java::security::ProtectionDomain;

namespace javax {
	namespace security {
		namespace auth {

void SubjectDomainCombiner$2::init$($ProtectionDomain* val$pd) {
	$set(this, val$pd, val$pd);
}

$Object* SubjectDomainCombiner$2::run() {
	return $of($nc(this->val$pd)->toString());
}

SubjectDomainCombiner$2::SubjectDomainCombiner$2() {
}

$Class* SubjectDomainCombiner$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$pd", "Ljava/security/ProtectionDomain;", nullptr, $FINAL | $SYNTHETIC, $field(SubjectDomainCombiner$2, val$pd)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/security/ProtectionDomain;)V", "()V", 0, $method(SubjectDomainCombiner$2, init$, void, $ProtectionDomain*)},
		{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SubjectDomainCombiner$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.security.auth.SubjectDomainCombiner",
		"printDomain",
		"(Ljava/security/ProtectionDomain;)Ljava/lang/String;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.security.auth.SubjectDomainCombiner$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.security.auth.SubjectDomainCombiner$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.security.auth.SubjectDomainCombiner"
	};
	$loadClass(SubjectDomainCombiner$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SubjectDomainCombiner$2);
	});
	return class$;
}

$Class* SubjectDomainCombiner$2::class$ = nullptr;

		} // auth
	} // security
} // javax