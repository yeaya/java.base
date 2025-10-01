#include <sun/security/provider/SubjectCodeSource$2.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/security/auth/Subject.h>
#include <sun/security/provider/SubjectCodeSource.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Subject = ::javax::security::auth::Subject;
using $SubjectCodeSource = ::sun::security::provider::SubjectCodeSource;

namespace sun {
	namespace security {
		namespace provider {

$FieldInfo _SubjectCodeSource$2_FieldInfo_[] = {
	{"this$0", "Lsun/security/provider/SubjectCodeSource;", nullptr, $FINAL | $SYNTHETIC, $field(SubjectCodeSource$2, this$0)},
	{"val$finalSubject", "Ljavax/security/auth/Subject;", nullptr, $FINAL | $SYNTHETIC, $field(SubjectCodeSource$2, val$finalSubject)},
	{}
};

$MethodInfo _SubjectCodeSource$2_MethodInfo_[] = {
	{"<init>", "(Lsun/security/provider/SubjectCodeSource;Ljavax/security/auth/Subject;)V", "()V", 0, $method(static_cast<void(SubjectCodeSource$2::*)($SubjectCodeSource*,$Subject*)>(&SubjectCodeSource$2::init$))},
	{"run", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SubjectCodeSource$2_EnclosingMethodInfo_ = {
	"sun.security.provider.SubjectCodeSource",
	"toString",
	"()Ljava/lang/String;"
};

$InnerClassInfo _SubjectCodeSource$2_InnerClassesInfo_[] = {
	{"sun.security.provider.SubjectCodeSource$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SubjectCodeSource$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.provider.SubjectCodeSource$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_SubjectCodeSource$2_FieldInfo_,
	_SubjectCodeSource$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
	&_SubjectCodeSource$2_EnclosingMethodInfo_,
	_SubjectCodeSource$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.SubjectCodeSource"
};

$Object* allocate$SubjectCodeSource$2($Class* clazz) {
	return $of($alloc(SubjectCodeSource$2));
}

void SubjectCodeSource$2::init$($SubjectCodeSource* this$0, $Subject* val$finalSubject) {
	$set(this, this$0, this$0);
	$set(this, val$finalSubject, val$finalSubject);
}

$Object* SubjectCodeSource$2::run() {
	return $of($nc(this->val$finalSubject)->toString());
}

SubjectCodeSource$2::SubjectCodeSource$2() {
}

$Class* SubjectCodeSource$2::load$($String* name, bool initialize) {
	$loadClass(SubjectCodeSource$2, name, initialize, &_SubjectCodeSource$2_ClassInfo_, allocate$SubjectCodeSource$2);
	return class$;
}

$Class* SubjectCodeSource$2::class$ = nullptr;

		} // provider
	} // security
} // sun