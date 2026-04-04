#include <sun/security/rsa/SunRsaSign$1.h>
#include <java/util/Iterator.h>
#include <sun/security/rsa/SunRsaSign.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $SunRsaSign = ::sun::security::rsa::SunRsaSign;

namespace sun {
	namespace security {
		namespace rsa {

void SunRsaSign$1::init$($SunRsaSign* this$0, $Iterator* val$serviceIter) {
	$set(this, this$0, this$0);
	$set(this, val$serviceIter, val$serviceIter);
}

$Object* SunRsaSign$1::run() {
	this->this$0->putEntries(this->val$serviceIter);
	return nullptr;
}

SunRsaSign$1::SunRsaSign$1() {
}

$Class* SunRsaSign$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/security/rsa/SunRsaSign;", nullptr, $FINAL | $SYNTHETIC, $field(SunRsaSign$1, this$0)},
		{"val$serviceIter", "Ljava/util/Iterator;", nullptr, $FINAL | $SYNTHETIC, $field(SunRsaSign$1, val$serviceIter)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/rsa/SunRsaSign;Ljava/util/Iterator;)V", "()V", 0, $method(SunRsaSign$1, init$, void, $SunRsaSign*, $Iterator*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(SunRsaSign$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.rsa.SunRsaSign",
		"<init>",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.rsa.SunRsaSign$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.rsa.SunRsaSign$1",
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
		"sun.security.rsa.SunRsaSign"
	};
	$loadClass(SunRsaSign$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SunRsaSign$1);
	});
	return class$;
}

$Class* SunRsaSign$1::class$ = nullptr;

		} // rsa
	} // security
} // sun