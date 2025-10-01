#include <TransferTo$Thrower.h>

#include <TransferTo.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $TransferTo = ::TransferTo;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _TransferTo$Thrower_MethodInfo_[] = {
	{"run", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{}
};

$InnerClassInfo _TransferTo$Thrower_InnerClassesInfo_[] = {
	{"TransferTo$Thrower", "TransferTo", "Thrower", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _TransferTo$Thrower_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"TransferTo$Thrower",
	nullptr,
	nullptr,
	nullptr,
	_TransferTo$Thrower_MethodInfo_,
	nullptr,
	nullptr,
	_TransferTo$Thrower_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TransferTo"
};

$Object* allocate$TransferTo$Thrower($Class* clazz) {
	return $of($alloc(TransferTo$Thrower));
}

$Class* TransferTo$Thrower::load$($String* name, bool initialize) {
	$loadClass(TransferTo$Thrower, name, initialize, &_TransferTo$Thrower_ClassInfo_, allocate$TransferTo$Thrower);
	return class$;
}

$Class* TransferTo$Thrower::class$ = nullptr;