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
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Subject = ::javax::security::auth::Subject;
using $SubjectDomainCombiner = ::javax::security::auth::SubjectDomainCombiner;
using $Debug = ::sun::security::util::Debug;

namespace javax {
	namespace security {
		namespace auth {

$FieldInfo _SubjectDomainCombiner$1_FieldInfo_[] = {
	{"this$0", "Ljavax/security/auth/SubjectDomainCombiner;", nullptr, $FINAL | $SYNTHETIC, $field(SubjectDomainCombiner$1, this$0)},
	{"val$s", "Ljavax/security/auth/Subject;", nullptr, $FINAL | $SYNTHETIC, $field(SubjectDomainCombiner$1, val$s)},
	{}
};

$MethodInfo _SubjectDomainCombiner$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/security/auth/SubjectDomainCombiner;Ljavax/security/auth/Subject;)V", "()V", 0, $method(static_cast<void(SubjectDomainCombiner$1::*)($SubjectDomainCombiner*,$Subject*)>(&SubjectDomainCombiner$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SubjectDomainCombiner$1_EnclosingMethodInfo_ = {
	"javax.security.auth.SubjectDomainCombiner",
	"combine",
	"([Ljava/security/ProtectionDomain;[Ljava/security/ProtectionDomain;)[Ljava/security/ProtectionDomain;"
};

$InnerClassInfo _SubjectDomainCombiner$1_InnerClassesInfo_[] = {
	{"javax.security.auth.SubjectDomainCombiner$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SubjectDomainCombiner$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.security.auth.SubjectDomainCombiner$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_SubjectDomainCombiner$1_FieldInfo_,
	_SubjectDomainCombiner$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_SubjectDomainCombiner$1_EnclosingMethodInfo_,
	_SubjectDomainCombiner$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.security.auth.SubjectDomainCombiner"
};

$Object* allocate$SubjectDomainCombiner$1($Class* clazz) {
	return $of($alloc(SubjectDomainCombiner$1));
}

void SubjectDomainCombiner$1::init$($SubjectDomainCombiner* this$0, $Subject* val$s) {
	$set(this, this$0, this$0);
	$set(this, val$s, val$s);
}

$Object* SubjectDomainCombiner$1::run() {
	$init($SubjectDomainCombiner);
	$nc($SubjectDomainCombiner::debug)->println($($nc(this->val$s)->toString()));
	return $of(nullptr);
}

SubjectDomainCombiner$1::SubjectDomainCombiner$1() {
}

$Class* SubjectDomainCombiner$1::load$($String* name, bool initialize) {
	$loadClass(SubjectDomainCombiner$1, name, initialize, &_SubjectDomainCombiner$1_ClassInfo_, allocate$SubjectDomainCombiner$1);
	return class$;
}

$Class* SubjectDomainCombiner$1::class$ = nullptr;

		} // auth
	} // security
} // javax