#include <javax/security/auth/Subject$SecureSet$6.h>

#include <java/util/Iterator.h>
#include <javax/security/auth/Subject$SecureSet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Subject$SecureSet = ::javax::security::auth::Subject$SecureSet;

namespace javax {
	namespace security {
		namespace auth {

$FieldInfo _Subject$SecureSet$6_FieldInfo_[] = {
	{"this$0", "Ljavax/security/auth/Subject$SecureSet;", nullptr, $FINAL | $SYNTHETIC, $field(Subject$SecureSet$6, this$0)},
	{"val$e", "Ljava/util/Iterator;", nullptr, $FINAL | $SYNTHETIC, $field(Subject$SecureSet$6, val$e)},
	{}
};

$MethodInfo _Subject$SecureSet$6_MethodInfo_[] = {
	{"<init>", "(Ljavax/security/auth/Subject$SecureSet;Ljava/util/Iterator;)V", "()V", 0, $method(static_cast<void(Subject$SecureSet$6::*)($Subject$SecureSet*,$Iterator*)>(&Subject$SecureSet$6::init$))},
	{"run", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _Subject$SecureSet$6_EnclosingMethodInfo_ = {
	"javax.security.auth.Subject$SecureSet",
	"clear",
	"()V"
};

$InnerClassInfo _Subject$SecureSet$6_InnerClassesInfo_[] = {
	{"javax.security.auth.Subject$SecureSet", "javax.security.auth.Subject", "SecureSet", $PRIVATE | $STATIC},
	{"javax.security.auth.Subject$SecureSet$6", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Subject$SecureSet$6_ClassInfo_ = {
	$ACC_SUPER,
	"javax.security.auth.Subject$SecureSet$6",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_Subject$SecureSet$6_FieldInfo_,
	_Subject$SecureSet$6_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<TE;>;",
	&_Subject$SecureSet$6_EnclosingMethodInfo_,
	_Subject$SecureSet$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.security.auth.Subject"
};

$Object* allocate$Subject$SecureSet$6($Class* clazz) {
	return $of($alloc(Subject$SecureSet$6));
}

void Subject$SecureSet$6::init$($Subject$SecureSet* this$0, $Iterator* val$e) {
	$set(this, this$0, this$0);
	$set(this, val$e, val$e);
}

$Object* Subject$SecureSet$6::run() {
	return $of($nc(this->val$e)->next());
}

Subject$SecureSet$6::Subject$SecureSet$6() {
}

$Class* Subject$SecureSet$6::load$($String* name, bool initialize) {
	$loadClass(Subject$SecureSet$6, name, initialize, &_Subject$SecureSet$6_ClassInfo_, allocate$Subject$SecureSet$6);
	return class$;
}

$Class* Subject$SecureSet$6::class$ = nullptr;

		} // auth
	} // security
} // javax