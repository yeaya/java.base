#include <javax/security/auth/Subject$SecureSet$5.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Iterator.h>
#include <javax/security/auth/Subject$SecureSet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Iterator = ::java::util::Iterator;
using $Subject$SecureSet = ::javax::security::auth::Subject$SecureSet;

namespace javax {
	namespace security {
		namespace auth {

$FieldInfo _Subject$SecureSet$5_FieldInfo_[] = {
	{"this$0", "Ljavax/security/auth/Subject$SecureSet;", nullptr, $FINAL | $SYNTHETIC, $field(Subject$SecureSet$5, this$0)},
	{"val$e", "Ljava/util/Iterator;", nullptr, $FINAL | $SYNTHETIC, $field(Subject$SecureSet$5, val$e)},
	{}
};

$MethodInfo _Subject$SecureSet$5_MethodInfo_[] = {
	{"<init>", "(Ljavax/security/auth/Subject$SecureSet;Ljava/util/Iterator;)V", "()V", 0, $method(static_cast<void(Subject$SecureSet$5::*)($Subject$SecureSet*,$Iterator*)>(&Subject$SecureSet$5::init$))},
	{"run", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _Subject$SecureSet$5_EnclosingMethodInfo_ = {
	"javax.security.auth.Subject$SecureSet",
	"retainAll",
	"(Ljava/util/Collection;)Z"
};

$InnerClassInfo _Subject$SecureSet$5_InnerClassesInfo_[] = {
	{"javax.security.auth.Subject$SecureSet", "javax.security.auth.Subject", "SecureSet", $PRIVATE | $STATIC},
	{"javax.security.auth.Subject$SecureSet$5", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Subject$SecureSet$5_ClassInfo_ = {
	$ACC_SUPER,
	"javax.security.auth.Subject$SecureSet$5",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_Subject$SecureSet$5_FieldInfo_,
	_Subject$SecureSet$5_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<TE;>;",
	&_Subject$SecureSet$5_EnclosingMethodInfo_,
	_Subject$SecureSet$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.security.auth.Subject"
};

$Object* allocate$Subject$SecureSet$5($Class* clazz) {
	return $of($alloc(Subject$SecureSet$5));
}

void Subject$SecureSet$5::init$($Subject$SecureSet* this$0, $Iterator* val$e) {
	$set(this, this$0, this$0);
	$set(this, val$e, val$e);
}

$Object* Subject$SecureSet$5::run() {
	return $of($nc(this->val$e)->next());
}

Subject$SecureSet$5::Subject$SecureSet$5() {
}

$Class* Subject$SecureSet$5::load$($String* name, bool initialize) {
	$loadClass(Subject$SecureSet$5, name, initialize, &_Subject$SecureSet$5_ClassInfo_, allocate$Subject$SecureSet$5);
	return class$;
}

$Class* Subject$SecureSet$5::class$ = nullptr;

		} // auth
	} // security
} // javax