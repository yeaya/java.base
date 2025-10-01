#include <SampleNest$DeepNest1$DeepNest2$DeepNest3.h>

#include <SampleNest$DeepNest1$DeepNest2.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $SampleNest$DeepNest1$DeepNest2 = ::SampleNest$DeepNest1$DeepNest2;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _SampleNest$DeepNest1$DeepNest2$DeepNest3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SampleNest$DeepNest1$DeepNest2$DeepNest3::*)()>(&SampleNest$DeepNest1$DeepNest2$DeepNest3::init$))},
	{}
};

$InnerClassInfo _SampleNest$DeepNest1$DeepNest2$DeepNest3_InnerClassesInfo_[] = {
	{"SampleNest$DeepNest1", "SampleNest", "DeepNest1", $STATIC},
	{"SampleNest$DeepNest1$DeepNest2", "SampleNest$DeepNest1", "DeepNest2", $STATIC},
	{"SampleNest$DeepNest1$DeepNest2$DeepNest3", "SampleNest$DeepNest1$DeepNest2", "DeepNest3", $STATIC},
	{}
};

$ClassInfo _SampleNest$DeepNest1$DeepNest2$DeepNest3_ClassInfo_ = {
	$ACC_SUPER,
	"SampleNest$DeepNest1$DeepNest2$DeepNest3",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SampleNest$DeepNest1$DeepNest2$DeepNest3_MethodInfo_,
	nullptr,
	nullptr,
	_SampleNest$DeepNest1$DeepNest2$DeepNest3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SampleNest"
};

$Object* allocate$SampleNest$DeepNest1$DeepNest2$DeepNest3($Class* clazz) {
	return $of($alloc(SampleNest$DeepNest1$DeepNest2$DeepNest3));
}

void SampleNest$DeepNest1$DeepNest2$DeepNest3::init$() {
}

SampleNest$DeepNest1$DeepNest2$DeepNest3::SampleNest$DeepNest1$DeepNest2$DeepNest3() {
}

$Class* SampleNest$DeepNest1$DeepNest2$DeepNest3::load$($String* name, bool initialize) {
	$loadClass(SampleNest$DeepNest1$DeepNest2$DeepNest3, name, initialize, &_SampleNest$DeepNest1$DeepNest2$DeepNest3_ClassInfo_, allocate$SampleNest$DeepNest1$DeepNest2$DeepNest3);
	return class$;
}

$Class* SampleNest$DeepNest1$DeepNest2$DeepNest3::class$ = nullptr;