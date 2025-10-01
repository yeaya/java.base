#include <jdk/internal/loader/Loader$2.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <jdk/internal/loader/Loader.h>
#include <jdk/internal/loader/URLClassPath.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $Loader = ::jdk::internal::loader::Loader;
using $URLClassPath = ::jdk::internal::loader::URLClassPath;

namespace jdk {
	namespace internal {
		namespace loader {

$FieldInfo _Loader$2_FieldInfo_[] = {
	{"this$0", "Ljdk/internal/loader/Loader;", nullptr, $FINAL | $SYNTHETIC, $field(Loader$2, this$0)},
	{"val$urlToCheck", "Ljava/net/URL;", nullptr, $FINAL | $SYNTHETIC, $field(Loader$2, val$urlToCheck)},
	{}
};

$MethodInfo _Loader$2_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/loader/Loader;Ljava/net/URL;)V", "()V", 0, $method(static_cast<void(Loader$2::*)($Loader*,$URL*)>(&Loader$2::init$))},
	{"run", "()Ljava/net/URL;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _Loader$2_EnclosingMethodInfo_ = {
	"jdk.internal.loader.Loader",
	"findResource",
	"(Ljava/lang/String;Ljava/lang/String;)Ljava/net/URL;"
};

$InnerClassInfo _Loader$2_InnerClassesInfo_[] = {
	{"jdk.internal.loader.Loader$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Loader$2_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.loader.Loader$2",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_Loader$2_FieldInfo_,
	_Loader$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/net/URL;>;",
	&_Loader$2_EnclosingMethodInfo_,
	_Loader$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.loader.Loader"
};

$Object* allocate$Loader$2($Class* clazz) {
	return $of($alloc(Loader$2));
}

void Loader$2::init$($Loader* this$0, $URL* val$urlToCheck) {
	$set(this, this$0, this$0);
	$set(this, val$urlToCheck, val$urlToCheck);
}

$Object* Loader$2::run() {
	return $of($URLClassPath::checkURL(this->val$urlToCheck));
}

Loader$2::Loader$2() {
}

$Class* Loader$2::load$($String* name, bool initialize) {
	$loadClass(Loader$2, name, initialize, &_Loader$2_ClassInfo_, allocate$Loader$2);
	return class$;
}

$Class* Loader$2::class$ = nullptr;

		} // loader
	} // internal
} // jdk