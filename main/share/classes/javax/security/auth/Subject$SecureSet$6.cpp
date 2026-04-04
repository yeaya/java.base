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

void Subject$SecureSet$6::init$($Subject$SecureSet* this$0, $Iterator* val$e) {
	$set(this, this$0, this$0);
	$set(this, val$e, val$e);
}

$Object* Subject$SecureSet$6::run() {
	return $nc(this->val$e)->next();
}

Subject$SecureSet$6::Subject$SecureSet$6() {
}

$Class* Subject$SecureSet$6::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/security/auth/Subject$SecureSet;", nullptr, $FINAL | $SYNTHETIC, $field(Subject$SecureSet$6, this$0)},
		{"val$e", "Ljava/util/Iterator;", nullptr, $FINAL | $SYNTHETIC, $field(Subject$SecureSet$6, val$e)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/security/auth/Subject$SecureSet;Ljava/util/Iterator;)V", "()V", 0, $method(Subject$SecureSet$6, init$, void, $Subject$SecureSet*, $Iterator*)},
		{"run", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(Subject$SecureSet$6, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.security.auth.Subject$SecureSet",
		"clear",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.security.auth.Subject$SecureSet", "javax.security.auth.Subject", "SecureSet", $PRIVATE | $STATIC},
		{"javax.security.auth.Subject$SecureSet$6", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.security.auth.Subject$SecureSet$6",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<TE;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.security.auth.Subject"
	};
	$loadClass(Subject$SecureSet$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Subject$SecureSet$6);
	});
	return class$;
}

$Class* Subject$SecureSet$6::class$ = nullptr;

		} // auth
	} // security
} // javax