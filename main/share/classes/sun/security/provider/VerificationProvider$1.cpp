#include <sun/security/provider/VerificationProvider$1.h>

#include <java/util/Iterator.h>
#include <sun/security/provider/VerificationProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Iterator = ::java::util::Iterator;
using $VerificationProvider = ::sun::security::provider::VerificationProvider;

namespace sun {
	namespace security {
		namespace provider {

$FieldInfo _VerificationProvider$1_FieldInfo_[] = {
	{"this$0", "Lsun/security/provider/VerificationProvider;", nullptr, $FINAL | $SYNTHETIC, $field(VerificationProvider$1, this$0)},
	{"val$rsaIter", "Ljava/util/Iterator;", nullptr, $FINAL | $SYNTHETIC, $field(VerificationProvider$1, val$rsaIter)},
	{"val$sunIter", "Ljava/util/Iterator;", nullptr, $FINAL | $SYNTHETIC, $field(VerificationProvider$1, val$sunIter)},
	{}
};

$MethodInfo _VerificationProvider$1_MethodInfo_[] = {
	{"<init>", "(Lsun/security/provider/VerificationProvider;Ljava/util/Iterator;Ljava/util/Iterator;)V", "()V", 0, $method(static_cast<void(VerificationProvider$1::*)($VerificationProvider*,$Iterator*,$Iterator*)>(&VerificationProvider$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _VerificationProvider$1_EnclosingMethodInfo_ = {
	"sun.security.provider.VerificationProvider",
	"<init>",
	"()V"
};

$InnerClassInfo _VerificationProvider$1_InnerClassesInfo_[] = {
	{"sun.security.provider.VerificationProvider$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _VerificationProvider$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.provider.VerificationProvider$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_VerificationProvider$1_FieldInfo_,
	_VerificationProvider$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_VerificationProvider$1_EnclosingMethodInfo_,
	_VerificationProvider$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.VerificationProvider"
};

$Object* allocate$VerificationProvider$1($Class* clazz) {
	return $of($alloc(VerificationProvider$1));
}

void VerificationProvider$1::init$($VerificationProvider* this$0, $Iterator* val$sunIter, $Iterator* val$rsaIter) {
	$set(this, this$0, this$0);
	$set(this, val$sunIter, val$sunIter);
	$set(this, val$rsaIter, val$rsaIter);
}

$Object* VerificationProvider$1::run() {
	this->this$0->putEntries(this->val$sunIter);
	this->this$0->putEntries(this->val$rsaIter);
	return $of(nullptr);
}

VerificationProvider$1::VerificationProvider$1() {
}

$Class* VerificationProvider$1::load$($String* name, bool initialize) {
	$loadClass(VerificationProvider$1, name, initialize, &_VerificationProvider$1_ClassInfo_, allocate$VerificationProvider$1);
	return class$;
}

$Class* VerificationProvider$1::class$ = nullptr;

		} // provider
	} // security
} // sun