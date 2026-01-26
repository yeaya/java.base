#include <FinalVirtualCallFromInterface.h>

#include <FinalVirtualCallFromInterface$FinalUser.h>
#include <jcpp.h>

using $FinalVirtualCallFromInterface$FinalUser = ::FinalVirtualCallFromInterface$FinalUser;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _FinalVirtualCallFromInterface_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FinalVirtualCallFromInterface, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(FinalVirtualCallFromInterface, main, void, $StringArray*), "java.lang.Throwable"},
	{}
};

$InnerClassInfo _FinalVirtualCallFromInterface_InnerClassesInfo_[] = {
	{"FinalVirtualCallFromInterface$FinalUser", "FinalVirtualCallFromInterface", "FinalUser", $STATIC | $INTERFACE | $ABSTRACT},
	{"FinalVirtualCallFromInterface$Final", "FinalVirtualCallFromInterface", "Final", $STATIC},
	{}
};

$ClassInfo _FinalVirtualCallFromInterface_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"FinalVirtualCallFromInterface",
	"java.lang.Object",
	nullptr,
	nullptr,
	_FinalVirtualCallFromInterface_MethodInfo_,
	nullptr,
	nullptr,
	_FinalVirtualCallFromInterface_InnerClassesInfo_,
	nullptr,
	nullptr,
	"FinalVirtualCallFromInterface$FinalUser,FinalVirtualCallFromInterface$Final"
};

$Object* allocate$FinalVirtualCallFromInterface($Class* clazz) {
	return $of($alloc(FinalVirtualCallFromInterface));
}

void FinalVirtualCallFromInterface::init$() {
}

void FinalVirtualCallFromInterface::main($StringArray* args) {
	$FinalVirtualCallFromInterface$FinalUser::test();
}

FinalVirtualCallFromInterface::FinalVirtualCallFromInterface() {
}

$Class* FinalVirtualCallFromInterface::load$($String* name, bool initialize) {
	$loadClass(FinalVirtualCallFromInterface, name, initialize, &_FinalVirtualCallFromInterface_ClassInfo_, allocate$FinalVirtualCallFromInterface);
	return class$;
}

$Class* FinalVirtualCallFromInterface::class$ = nullptr;