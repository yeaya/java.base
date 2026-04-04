#include <sun/security/provider/Sun$1.h>
#include <java/util/Iterator.h>
#include <sun/security/provider/Sun.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Sun = ::sun::security::provider::Sun;

namespace sun {
	namespace security {
		namespace provider {

void Sun$1::init$($Sun* this$0, $Iterator* val$serviceIter) {
	$set(this, this$0, this$0);
	$set(this, val$serviceIter, val$serviceIter);
}

$Object* Sun$1::run() {
	this->this$0->putEntries(this->val$serviceIter);
	return nullptr;
}

Sun$1::Sun$1() {
}

$Class* Sun$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/security/provider/Sun;", nullptr, $FINAL | $SYNTHETIC, $field(Sun$1, this$0)},
		{"val$serviceIter", "Ljava/util/Iterator;", nullptr, $FINAL | $SYNTHETIC, $field(Sun$1, val$serviceIter)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/provider/Sun;Ljava/util/Iterator;)V", "()V", 0, $method(Sun$1, init$, void, $Sun*, $Iterator*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(Sun$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.provider.Sun",
		"<init>",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.Sun$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.provider.Sun$1",
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
		"sun.security.provider.Sun"
	};
	$loadClass(Sun$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Sun$1);
	});
	return class$;
}

$Class* Sun$1::class$ = nullptr;

		} // provider
	} // security
} // sun