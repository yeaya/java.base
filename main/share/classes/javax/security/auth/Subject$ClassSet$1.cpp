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

void Subject$ClassSet$1::init$($Subject$ClassSet* this$1, $Iterator* val$iterator) {
	$set(this, this$1, this$1);
	$set(this, val$iterator, val$iterator);
}

$Object* Subject$ClassSet$1::run() {
	return $nc(this->val$iterator)->next();
}

Subject$ClassSet$1::Subject$ClassSet$1() {
}

$Class* Subject$ClassSet$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljavax/security/auth/Subject$ClassSet;", nullptr, $FINAL | $SYNTHETIC, $field(Subject$ClassSet$1, this$1)},
		{"val$iterator", "Ljava/util/Iterator;", nullptr, $FINAL | $SYNTHETIC, $field(Subject$ClassSet$1, val$iterator)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/security/auth/Subject$ClassSet;Ljava/util/Iterator;)V", nullptr, 0, $method(Subject$ClassSet$1, init$, void, $Subject$ClassSet*, $Iterator*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Subject$ClassSet$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.security.auth.Subject$ClassSet",
		"populateSet",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.security.auth.Subject$ClassSet", "javax.security.auth.Subject", "ClassSet", $PRIVATE},
		{"javax.security.auth.Subject$ClassSet$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.security.auth.Subject$ClassSet$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.security.auth.Subject"
	};
	$loadClass(Subject$ClassSet$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Subject$ClassSet$1);
	});
	return class$;
}

$Class* Subject$ClassSet$1::class$ = nullptr;

		} // auth
	} // security
} // javax