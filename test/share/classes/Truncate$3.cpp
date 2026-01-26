#include <Truncate$3.h>

#include <Truncate.h>
#include <java/util/concurrent/Callable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Callable = ::java::util::concurrent::Callable;

$FieldInfo _Truncate$3_FieldInfo_[] = {
	{"val$c", "Ljava/util/concurrent/Callable;", nullptr, $FINAL | $SYNTHETIC, $field(Truncate$3, val$c)},
	{}
};

$MethodInfo _Truncate$3_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/Callable;)V", "()V", 0, $method(Truncate$3, init$, void, $Callable*)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Truncate$3, run, void)},
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
	} catch ($Exception& ignore) {
	}
}

Truncate$3::Truncate$3() {
}

$Class* Truncate$3::load$($String* name, bool initialize) {
	$loadClass(Truncate$3, name, initialize, &_Truncate$3_ClassInfo_, allocate$Truncate$3);
	return class$;
}

$Class* Truncate$3::class$ = nullptr;