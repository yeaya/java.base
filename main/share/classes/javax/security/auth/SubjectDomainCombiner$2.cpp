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

$FieldInfo _SubjectDomainCombiner$2_FieldInfo_[] = {
	{"val$pd", "Ljava/security/ProtectionDomain;", nullptr, $FINAL | $SYNTHETIC, $field(SubjectDomainCombiner$2, val$pd)},
	{}
};

$MethodInfo _SubjectDomainCombiner$2_MethodInfo_[] = {
	{"<init>", "(Ljava/security/ProtectionDomain;)V", "()V", 0, $method(static_cast<void(SubjectDomainCombiner$2::*)($ProtectionDomain*)>(&SubjectDomainCombiner$2::init$))},
	{"run", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SubjectDomainCombiner$2_EnclosingMethodInfo_ = {
	"javax.security.auth.SubjectDomainCombiner",
	"printDomain",
	"(Ljava/security/ProtectionDomain;)Ljava/lang/String;"
};

$InnerClassInfo _SubjectDomainCombiner$2_InnerClassesInfo_[] = {
	{"javax.security.auth.SubjectDomainCombiner$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SubjectDomainCombiner$2_ClassInfo_ = {
	$ACC_SUPER,
	"javax.security.auth.SubjectDomainCombiner$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_SubjectDomainCombiner$2_FieldInfo_,
	_SubjectDomainCombiner$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
	&_SubjectDomainCombiner$2_EnclosingMethodInfo_,
	_SubjectDomainCombiner$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.security.auth.SubjectDomainCombiner"
};

$Object* allocate$SubjectDomainCombiner$2($Class* clazz) {
	return $of($alloc(SubjectDomainCombiner$2));
}

void SubjectDomainCombiner$2::init$($ProtectionDomain* val$pd) {
	$set(this, val$pd, val$pd);
}

$Object* SubjectDomainCombiner$2::run() {
	return $of($nc(this->val$pd)->toString());
}

SubjectDomainCombiner$2::SubjectDomainCombiner$2() {
}

$Class* SubjectDomainCombiner$2::load$($String* name, bool initialize) {
	$loadClass(SubjectDomainCombiner$2, name, initialize, &_SubjectDomainCombiner$2_ClassInfo_, allocate$SubjectDomainCombiner$2);
	return class$;
}

$Class* SubjectDomainCombiner$2::class$ = nullptr;

		} // auth
	} // security
} // javax