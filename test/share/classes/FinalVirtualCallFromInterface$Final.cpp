#include <FinalVirtualCallFromInterface$Final.h>

#include <FinalVirtualCallFromInterface.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _FinalVirtualCallFromInterface$Final_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(FinalVirtualCallFromInterface$Final, init$, void)},
	{"fm", "()V", nullptr, $PUBLIC | $FINAL, $method(FinalVirtualCallFromInterface$Final, fm, void)},
	{}
};

$InnerClassInfo _FinalVirtualCallFromInterface$Final_InnerClassesInfo_[] = {
	{"FinalVirtualCallFromInterface$Final", "FinalVirtualCallFromInterface", "Final", $STATIC},
	{}
};

$ClassInfo _FinalVirtualCallFromInterface$Final_ClassInfo_ = {
	$ACC_SUPER,
	"FinalVirtualCallFromInterface$Final",
	"java.lang.Object",
	nullptr,
	nullptr,
	_FinalVirtualCallFromInterface$Final_MethodInfo_,
	nullptr,
	nullptr,
	_FinalVirtualCallFromInterface$Final_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FinalVirtualCallFromInterface"
};

$Object* allocate$FinalVirtualCallFromInterface$Final($Class* clazz) {
	return $of($alloc(FinalVirtualCallFromInterface$Final));
}

void FinalVirtualCallFromInterface$Final::init$() {
}

void FinalVirtualCallFromInterface$Final::fm() {
}

FinalVirtualCallFromInterface$Final::FinalVirtualCallFromInterface$Final() {
}

$Class* FinalVirtualCallFromInterface$Final::load$($String* name, bool initialize) {
	$loadClass(FinalVirtualCallFromInterface$Final, name, initialize, &_FinalVirtualCallFromInterface$Final_ClassInfo_, allocate$FinalVirtualCallFromInterface$Final);
	return class$;
}

$Class* FinalVirtualCallFromInterface$Final::class$ = nullptr;