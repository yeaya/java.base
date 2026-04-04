#include <com/sun/crypto/provider/SunJCE$1.h>
#include <com/sun/crypto/provider/SunJCE.h>
#include <jcpp.h>

using $SunJCE = ::com::sun::crypto::provider::SunJCE;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

void SunJCE$1::init$($SunJCE* this$0) {
	$set(this, this$0, this$0);
}

$Object* SunJCE$1::run() {
	this->this$0->putEntries();
	return nullptr;
}

SunJCE$1::SunJCE$1() {
}

$Class* SunJCE$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/crypto/provider/SunJCE;", nullptr, $FINAL | $SYNTHETIC, $field(SunJCE$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/crypto/provider/SunJCE;)V", nullptr, 0, $method(SunJCE$1, init$, void, $SunJCE*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(SunJCE$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.crypto.provider.SunJCE",
		"<init>",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.crypto.provider.SunJCE$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.crypto.provider.SunJCE$1",
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
		"com.sun.crypto.provider.SunJCE"
	};
	$loadClass(SunJCE$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SunJCE$1);
	});
	return class$;
}

$Class* SunJCE$1::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com