#include <Sanity$1.h>

#include <Sanity.h>
#include <jcpp.h>

using $Sanity = ::Sanity;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Sanity$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Sanity$1::*)()>(&Sanity$1::init$))},
	{}
};

$EnclosingMethodInfo _Sanity$1_EnclosingMethodInfo_ = {
	"Sanity",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _Sanity$1_InnerClassesInfo_[] = {
	{"Sanity$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Sanity$1_ClassInfo_ = {
	$ACC_SUPER,
	"Sanity$1",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Sanity$1_MethodInfo_,
	nullptr,
	&_Sanity$1_EnclosingMethodInfo_,
	_Sanity$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Sanity"
};

$Object* allocate$Sanity$1($Class* clazz) {
	return $of($alloc(Sanity$1));
}

void Sanity$1::init$() {
}

Sanity$1::Sanity$1() {
}

$Class* Sanity$1::load$($String* name, bool initialize) {
	$loadClass(Sanity$1, name, initialize, &_Sanity$1_ClassInfo_, allocate$Sanity$1);
	return class$;
}

$Class* Sanity$1::class$ = nullptr;