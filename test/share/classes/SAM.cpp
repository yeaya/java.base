#include <SAM.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef SAM

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _SAM_MethodInfo_[] = {
	{"m", "()Ljava/lang/Object;", "()TP1;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SAM_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"SAM",
	nullptr,
	nullptr,
	nullptr,
	_SAM_MethodInfo_,
	"<P1:Ljava/lang/Object;>Ljava/lang/Object;"
};

$Object* allocate$SAM($Class* clazz) {
	return $of($alloc(SAM));
}

$Class* SAM::load$($String* name, bool initialize) {
	$loadClass(SAM, name, initialize, &_SAM_ClassInfo_, allocate$SAM);
	return class$;
}

$Class* SAM::class$ = nullptr;