#include <FinalVirtualCallFromInterface$Final.h>

#include <FinalVirtualCallFromInterface.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $FinalVirtualCallFromInterface = ::FinalVirtualCallFromInterface;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _FinalVirtualCallFromInterface$Final_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FinalVirtualCallFromInterface$Final::*)()>(&FinalVirtualCallFromInterface$Final::init$))},
	{"fm", "()V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(FinalVirtualCallFromInterface$Final::*)()>(&FinalVirtualCallFromInterface$Final::fm))},
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