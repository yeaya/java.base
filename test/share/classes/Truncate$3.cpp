#include <Truncate$3.h>

#include <Truncate.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/Callable.h>
#include <jcpp.h>

using $Truncate = ::Truncate;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Callable = ::java::util::concurrent::Callable;

$FieldInfo _Truncate$3_FieldInfo_[] = {
	{"val$c", "Ljava/util/concurrent/Callable;", nullptr, $FINAL | $SYNTHETIC, $field(Truncate$3, val$c)},
	{}
};

$MethodInfo _Truncate$3_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/Callable;)V", "()V", 0, $method(static_cast<void(Truncate$3::*)($Callable*)>(&Truncate$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Truncate$3_EnclosingMethodInfo_ = {
	"Truncate",
	"execute",
	"(Ljava/util/concurrent/Callable;)V"
};

$InnerClassInfo _Truncate$3_InnerClassesInfo_[] = {
	{"Truncate$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Truncate$3_ClassInfo_ = {
	$ACC_SUPER,
	"Truncate$3",
	"java.lang.Object",
	"java.lang.Runnable",
	_Truncate$3_FieldInfo_,
	_Truncate$3_MethodInfo_,
	nullptr,
	&_Truncate$3_EnclosingMethodInfo_,
	_Truncate$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Truncate"
};

$Object* allocate$Truncate$3($Class* clazz) {
	return $of($alloc(Truncate$3));
}

void Truncate$3::init$($Callable* val$c) {
	$set(this, val$c, val$c);
}

void Truncate$3::run() {
	try {
		$var($Object, ignore, $nc(this->val$c)->call());
	} catch ($Exception&) {
		$catch();
	}
}

Truncate$3::Truncate$3() {
}

$Class* Truncate$3::load$($String* name, bool initialize) {
	$loadClass(Truncate$3, name, initialize, &_Truncate$3_ClassInfo_, allocate$Truncate$3);
	return class$;
}

$Class* Truncate$3::class$ = nullptr;