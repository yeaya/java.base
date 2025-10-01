#include <sun/security/rsa/SunRsaSign$1.h>

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
#include <sun/security/rsa/SunRsaSign.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Iterator = ::java::util::Iterator;
using $SunRsaSign = ::sun::security::rsa::SunRsaSign;

namespace sun {
	namespace security {
		namespace rsa {

$FieldInfo _SunRsaSign$1_FieldInfo_[] = {
	{"this$0", "Lsun/security/rsa/SunRsaSign;", nullptr, $FINAL | $SYNTHETIC, $field(SunRsaSign$1, this$0)},
	{"val$serviceIter", "Ljava/util/Iterator;", nullptr, $FINAL | $SYNTHETIC, $field(SunRsaSign$1, val$serviceIter)},
	{}
};

$MethodInfo _SunRsaSign$1_MethodInfo_[] = {
	{"<init>", "(Lsun/security/rsa/SunRsaSign;Ljava/util/Iterator;)V", "()V", 0, $method(static_cast<void(SunRsaSign$1::*)($SunRsaSign*,$Iterator*)>(&SunRsaSign$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SunRsaSign$1_EnclosingMethodInfo_ = {
	"sun.security.rsa.SunRsaSign",
	"<init>",
	"()V"
};

$InnerClassInfo _SunRsaSign$1_InnerClassesInfo_[] = {
	{"sun.security.rsa.SunRsaSign$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SunRsaSign$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.rsa.SunRsaSign$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_SunRsaSign$1_FieldInfo_,
	_SunRsaSign$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_SunRsaSign$1_EnclosingMethodInfo_,
	_SunRsaSign$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.rsa.SunRsaSign"
};

$Object* allocate$SunRsaSign$1($Class* clazz) {
	return $of($alloc(SunRsaSign$1));
}

void SunRsaSign$1::init$($SunRsaSign* this$0, $Iterator* val$serviceIter) {
	$set(this, this$0, this$0);
	$set(this, val$serviceIter, val$serviceIter);
}

$Object* SunRsaSign$1::run() {
	this->this$0->putEntries(this->val$serviceIter);
	return $of(nullptr);
}

SunRsaSign$1::SunRsaSign$1() {
}

$Class* SunRsaSign$1::load$($String* name, bool initialize) {
	$loadClass(SunRsaSign$1, name, initialize, &_SunRsaSign$1_ClassInfo_, allocate$SunRsaSign$1);
	return class$;
}

$Class* SunRsaSign$1::class$ = nullptr;

		} // rsa
	} // security
} // sun