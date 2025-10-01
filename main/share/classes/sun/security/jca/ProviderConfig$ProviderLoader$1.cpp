#include <sun/security/jca/ProviderConfig$ProviderLoader$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/Provider.h>
#include <sun/security/jca/ProviderConfig$ProviderLoader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $Provider = ::java::security::Provider;
using $ProviderConfig$ProviderLoader = ::sun::security::jca::ProviderConfig$ProviderLoader;

namespace sun {
	namespace security {
		namespace jca {

$FieldInfo _ProviderConfig$ProviderLoader$1_FieldInfo_[] = {
	{"this$0", "Lsun/security/jca/ProviderConfig$ProviderLoader;", nullptr, $FINAL | $SYNTHETIC, $field(ProviderConfig$ProviderLoader$1, this$0)},
	{"val$provClass", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(ProviderConfig$ProviderLoader$1, val$provClass)},
	{}
};

$MethodInfo _ProviderConfig$ProviderLoader$1_MethodInfo_[] = {
	{"<init>", "(Lsun/security/jca/ProviderConfig$ProviderLoader;Ljava/lang/Class;)V", "()V", 0, $method(static_cast<void(ProviderConfig$ProviderLoader$1::*)($ProviderConfig$ProviderLoader*,$Class*)>(&ProviderConfig$ProviderLoader$1::init$))},
	{"run", "()Ljava/security/Provider;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _ProviderConfig$ProviderLoader$1_EnclosingMethodInfo_ = {
	"sun.security.jca.ProviderConfig$ProviderLoader",
	"legacyLoad",
	"(Ljava/lang/String;)Ljava/security/Provider;"
};

$InnerClassInfo _ProviderConfig$ProviderLoader$1_InnerClassesInfo_[] = {
	{"sun.security.jca.ProviderConfig$ProviderLoader", "sun.security.jca.ProviderConfig", "ProviderLoader", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.jca.ProviderConfig$ProviderLoader$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ProviderConfig$ProviderLoader$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.jca.ProviderConfig$ProviderLoader$1",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_ProviderConfig$ProviderLoader$1_FieldInfo_,
	_ProviderConfig$ProviderLoader$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/security/Provider;>;",
	&_ProviderConfig$ProviderLoader$1_EnclosingMethodInfo_,
	_ProviderConfig$ProviderLoader$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.jca.ProviderConfig"
};

$Object* allocate$ProviderConfig$ProviderLoader$1($Class* clazz) {
	return $of($alloc(ProviderConfig$ProviderLoader$1));
}

void ProviderConfig$ProviderLoader$1::init$($ProviderConfig$ProviderLoader* this$0, $Class* val$provClass) {
	$set(this, this$0, this$0);
	$set(this, val$provClass, val$provClass);
}

$Object* ProviderConfig$ProviderLoader$1::run() {
	$beforeCallerSensitive();
	return $of($cast($Provider, $nc(this->val$provClass)->newInstance()));
}

ProviderConfig$ProviderLoader$1::ProviderConfig$ProviderLoader$1() {
}

$Class* ProviderConfig$ProviderLoader$1::load$($String* name, bool initialize) {
	$loadClass(ProviderConfig$ProviderLoader$1, name, initialize, &_ProviderConfig$ProviderLoader$1_ClassInfo_, allocate$ProviderConfig$ProviderLoader$1);
	return class$;
}

$Class* ProviderConfig$ProviderLoader$1::class$ = nullptr;

		} // jca
	} // security
} // sun