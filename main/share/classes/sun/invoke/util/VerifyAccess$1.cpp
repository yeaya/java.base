#include <sun/invoke/util/VerifyAccess$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/LinkageError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/invoke/util/VerifyAccess.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $LinkageError = ::java::lang::LinkageError;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $VerifyAccess = ::sun::invoke::util::VerifyAccess;

namespace sun {
	namespace invoke {
		namespace util {

$FieldInfo _VerifyAccess$1_FieldInfo_[] = {
	{"val$refcLoader", "Ljava/lang/ClassLoader;", nullptr, $FINAL | $SYNTHETIC, $field(VerifyAccess$1, val$refcLoader)},
	{"val$name", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(VerifyAccess$1, val$name)},
	{}
};

$MethodInfo _VerifyAccess$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/ClassLoader;)V", nullptr, 0, $method(static_cast<void(VerifyAccess$1::*)($String*,$ClassLoader*)>(&VerifyAccess$1::init$))},
	{"run", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _VerifyAccess$1_EnclosingMethodInfo_ = {
	"sun.invoke.util.VerifyAccess",
	"isTypeVisible",
	"(Ljava/lang/Class;Ljava/lang/Class;)Z"
};

$InnerClassInfo _VerifyAccess$1_InnerClassesInfo_[] = {
	{"sun.invoke.util.VerifyAccess$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _VerifyAccess$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.invoke.util.VerifyAccess$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_VerifyAccess$1_FieldInfo_,
	_VerifyAccess$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Class<*>;>;",
	&_VerifyAccess$1_EnclosingMethodInfo_,
	_VerifyAccess$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.invoke.util.VerifyAccess"
};

$Object* allocate$VerifyAccess$1($Class* clazz) {
	return $of($alloc(VerifyAccess$1));
}

void VerifyAccess$1::init$($String* val$name, $ClassLoader* val$refcLoader) {
	$set(this, val$name, val$name);
	$set(this, val$refcLoader, val$refcLoader);
}

$Object* VerifyAccess$1::run() {
	$beforeCallerSensitive();
	try {
		return $of($Class::forName(this->val$name, false, this->val$refcLoader));
	} catch ($ClassNotFoundException&) {
		$var($Throwable, e, $catch());
		return $of(nullptr);
	} catch ($LinkageError&) {
		$var($Throwable, e, $catch());
		return $of(nullptr);
	}
	$shouldNotReachHere();
}

VerifyAccess$1::VerifyAccess$1() {
}

$Class* VerifyAccess$1::load$($String* name, bool initialize) {
	$loadClass(VerifyAccess$1, name, initialize, &_VerifyAccess$1_ClassInfo_, allocate$VerifyAccess$1);
	return class$;
}

$Class* VerifyAccess$1::class$ = nullptr;

		} // util
	} // invoke
} // sun