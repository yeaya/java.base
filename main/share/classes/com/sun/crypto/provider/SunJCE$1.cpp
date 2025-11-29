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

$FieldInfo _SunJCE$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/crypto/provider/SunJCE;", nullptr, $FINAL | $SYNTHETIC, $field(SunJCE$1, this$0)},
	{}
};

$MethodInfo _SunJCE$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/crypto/provider/SunJCE;)V", nullptr, 0, $method(static_cast<void(SunJCE$1::*)($SunJCE*)>(&SunJCE$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SunJCE$1_EnclosingMethodInfo_ = {
	"com.sun.crypto.provider.SunJCE",
	"<init>",
	"()V"
};

$InnerClassInfo _SunJCE$1_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.SunJCE$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SunJCE$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.crypto.provider.SunJCE$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_SunJCE$1_FieldInfo_,
	_SunJCE$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_SunJCE$1_EnclosingMethodInfo_,
	_SunJCE$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.SunJCE"
};

$Object* allocate$SunJCE$1($Class* clazz) {
	return $of($alloc(SunJCE$1));
}

void SunJCE$1::init$($SunJCE* this$0) {
	$set(this, this$0, this$0);
}

$Object* SunJCE$1::run() {
	this->this$0->putEntries();
	return $of(nullptr);
}

SunJCE$1::SunJCE$1() {
}

$Class* SunJCE$1::load$($String* name, bool initialize) {
	$loadClass(SunJCE$1, name, initialize, &_SunJCE$1_ClassInfo_, allocate$SunJCE$1);
	return class$;
}

$Class* SunJCE$1::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com