#include <javax/security/auth/Subject$ClassSet$1.h>

#include <java/util/Iterator.h>
#include <javax/security/auth/Subject$ClassSet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Subject$ClassSet = ::javax::security::auth::Subject$ClassSet;

namespace javax {
	namespace security {
		namespace auth {

$FieldInfo _Subject$ClassSet$1_FieldInfo_[] = {
	{"this$1", "Ljavax/security/auth/Subject$ClassSet;", nullptr, $FINAL | $SYNTHETIC, $field(Subject$ClassSet$1, this$1)},
	{"val$iterator", "Ljava/util/Iterator;", nullptr, $FINAL | $SYNTHETIC, $field(Subject$ClassSet$1, val$iterator)},
	{}
};

$MethodInfo _Subject$ClassSet$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/security/auth/Subject$ClassSet;Ljava/util/Iterator;)V", nullptr, 0, $method(static_cast<void(Subject$ClassSet$1::*)($Subject$ClassSet*,$Iterator*)>(&Subject$ClassSet$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Subject$ClassSet$1_EnclosingMethodInfo_ = {
	"javax.security.auth.Subject$ClassSet",
	"populateSet",
	"()V"
};

$InnerClassInfo _Subject$ClassSet$1_InnerClassesInfo_[] = {
	{"javax.security.auth.Subject$ClassSet", "javax.security.auth.Subject", "ClassSet", $PRIVATE},
	{"javax.security.auth.Subject$ClassSet$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Subject$ClassSet$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.security.auth.Subject$ClassSet$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_Subject$ClassSet$1_FieldInfo_,
	_Subject$ClassSet$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_Subject$ClassSet$1_EnclosingMethodInfo_,
	_Subject$ClassSet$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.security.auth.Subject"
};

$Object* allocate$Subject$ClassSet$1($Class* clazz) {
	return $of($alloc(Subject$ClassSet$1));
}

void Subject$ClassSet$1::init$($Subject$ClassSet* this$1, $Iterator* val$iterator) {
	$set(this, this$1, this$1);
	$set(this, val$iterator, val$iterator);
}

$Object* Subject$ClassSet$1::run() {
	return $of($nc(this->val$iterator)->next());
}

Subject$ClassSet$1::Subject$ClassSet$1() {
}

$Class* Subject$ClassSet$1::load$($String* name, bool initialize) {
	$loadClass(Subject$ClassSet$1, name, initialize, &_Subject$ClassSet$1_ClassInfo_, allocate$Subject$ClassSet$1);
	return class$;
}

$Class* Subject$ClassSet$1::class$ = nullptr;

		} // auth
	} // security
} // javax