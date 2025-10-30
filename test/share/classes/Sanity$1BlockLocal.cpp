#include <Sanity$1BlockLocal.h>

#include <Sanity.h>
#include <jcpp.h>

using $Sanity = ::Sanity;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Sanity$1BlockLocal_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Sanity$1BlockLocal::*)()>(&Sanity$1BlockLocal::init$))},
	{}
};

$EnclosingMethodInfo _Sanity$1BlockLocal_EnclosingMethodInfo_ = {
	"Sanity",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _Sanity$1BlockLocal_InnerClassesInfo_[] = {
	{"Sanity$1BlockLocal", nullptr, "BlockLocal", 0},
	{}
};

$ClassInfo _Sanity$1BlockLocal_ClassInfo_ = {
	$ACC_SUPER,
	"Sanity$1BlockLocal",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Sanity$1BlockLocal_MethodInfo_,
	nullptr,
	&_Sanity$1BlockLocal_EnclosingMethodInfo_,
	_Sanity$1BlockLocal_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Sanity"
};

$Object* allocate$Sanity$1BlockLocal($Class* clazz) {
	return $of($alloc(Sanity$1BlockLocal));
}

void Sanity$1BlockLocal::init$() {
}

Sanity$1BlockLocal::Sanity$1BlockLocal() {
}

$Class* Sanity$1BlockLocal::load$($String* name, bool initialize) {
	$loadClass(Sanity$1BlockLocal, name, initialize, &_Sanity$1BlockLocal_ClassInfo_, allocate$Sanity$1BlockLocal);
	return class$;
}

$Class* Sanity$1BlockLocal::class$ = nullptr;