#include <javax/security/auth/Subject$SecureSet$4.h>

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

$FieldInfo _Subject$SecureSet$4_FieldInfo_[] = {
	{"this$0", "Ljavax/security/auth/Subject$SecureSet;", nullptr, $FINAL | $SYNTHETIC, $field(Subject$SecureSet$4, this$0)},
	{"val$e", "Ljava/util/Iterator;", nullptr, $FINAL | $SYNTHETIC, $field(Subject$SecureSet$4, val$e)},
	{}
};

$MethodInfo _Subject$SecureSet$4_MethodInfo_[] = {
	{"<init>", "(Ljavax/security/auth/Subject$SecureSet;Ljava/util/Iterator;)V", "()V", 0, $method(static_cast<void(Subject$SecureSet$4::*)($Subject$SecureSet*,$Iterator*)>(&Subject$SecureSet$4::init$))},
	{"run", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _Subject$SecureSet$4_EnclosingMethodInfo_ = {
	"javax.security.auth.Subject$SecureSet",
	"removeAll",
	"(Ljava/util/Collection;)Z"
};

$InnerClassInfo _Subject$SecureSet$4_InnerClassesInfo_[] = {
	{"javax.security.auth.Subject$SecureSet", "javax.security.auth.Subject", "SecureSet", $PRIVATE | $STATIC},
	{"javax.security.auth.Subject$SecureSet$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Subject$SecureSet$4_ClassInfo_ = {
	$ACC_SUPER,
	"javax.security.auth.Subject$SecureSet$4",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_Subject$SecureSet$4_FieldInfo_,
	_Subject$SecureSet$4_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<TE;>;",
	&_Subject$SecureSet$4_EnclosingMethodInfo_,
	_Subject$SecureSet$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.security.auth.Subject"
};

$Object* allocate$Subject$SecureSet$4($Class* clazz) {
	return $of($alloc(Subject$SecureSet$4));
}

void Subject$SecureSet$4::init$($Subject$SecureSet* this$0, $Iterator* val$e) {
	$set(this, this$0, this$0);
	$set(this, val$e, val$e);
}

$Object* Subject$SecureSet$4::run() {
	return $of($nc(this->val$e)->next());
}

Subject$SecureSet$4::Subject$SecureSet$4() {
}

$Class* Subject$SecureSet$4::load$($String* name, bool initialize) {
	$loadClass(Subject$SecureSet$4, name, initialize, &_Subject$SecureSet$4_ClassInfo_, allocate$Subject$SecureSet$4);
	return class$;
}

$Class* Subject$SecureSet$4::class$ = nullptr;

		} // auth
	} // security
} // javax