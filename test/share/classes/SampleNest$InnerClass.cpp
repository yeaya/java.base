#include <SampleNest$InnerClass.h>

#include <SampleNest.h>
#include <jcpp.h>

using $SampleNest = ::SampleNest;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _SampleNest$InnerClass_FieldInfo_[] = {
	{"this$0", "LSampleNest;", nullptr, $FINAL | $SYNTHETIC, $field(SampleNest$InnerClass, this$0)},
	{}
};

$MethodInfo _SampleNest$InnerClass_MethodInfo_[] = {
	{"<init>", "(LSampleNest;)V", nullptr, 0, $method(SampleNest$InnerClass, init$, void, $SampleNest*)},
	{}
};

$InnerClassInfo _SampleNest$InnerClass_InnerClassesInfo_[] = {
	{"SampleNest$InnerClass", "SampleNest", "InnerClass", 0},
	{}
};

$ClassInfo _SampleNest$InnerClass_ClassInfo_ = {
	$ACC_SUPER,
	"SampleNest$InnerClass",
	"java.lang.Object",
	nullptr,
	_SampleNest$InnerClass_FieldInfo_,
	_SampleNest$InnerClass_MethodInfo_,
	nullptr,
	nullptr,
	_SampleNest$InnerClass_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SampleNest"
};

$Object* allocate$SampleNest$InnerClass($Class* clazz) {
	return $of($alloc(SampleNest$InnerClass));
}

void SampleNest$InnerClass::init$($SampleNest* this$0) {
	$set(this, this$0, this$0);
}

SampleNest$InnerClass::SampleNest$InnerClass() {
}

$Class* SampleNest$InnerClass::load$($String* name, bool initialize) {
	$loadClass(SampleNest$InnerClass, name, initialize, &_SampleNest$InnerClass_ClassInfo_, allocate$SampleNest$InnerClass);
	return class$;
}

$Class* SampleNest$InnerClass::class$ = nullptr;