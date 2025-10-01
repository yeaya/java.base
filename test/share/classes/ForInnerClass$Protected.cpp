#include <ForInnerClass$Protected.h>

#include <ForInnerClass.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ForInnerClass = ::ForInnerClass;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _ForInnerClass$Protected_FieldInfo_[] = {
	{"this$0", "LForInnerClass;", nullptr, $FINAL | $SYNTHETIC, $field(ForInnerClass$Protected, this$0)},
	{}
};

$MethodInfo _ForInnerClass$Protected_MethodInfo_[] = {
	{"<init>", "(LForInnerClass;)V", nullptr, $PROTECTED, $method(static_cast<void(ForInnerClass$Protected::*)($ForInnerClass*)>(&ForInnerClass$Protected::init$))},
	{}
};

$InnerClassInfo _ForInnerClass$Protected_InnerClassesInfo_[] = {
	{"ForInnerClass$Protected", "ForInnerClass", "Protected", $PROTECTED},
	{}
};

$ClassInfo _ForInnerClass$Protected_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ForInnerClass$Protected",
	"java.lang.Object",
	nullptr,
	_ForInnerClass$Protected_FieldInfo_,
	_ForInnerClass$Protected_MethodInfo_,
	nullptr,
	nullptr,
	_ForInnerClass$Protected_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ForInnerClass"
};

$Object* allocate$ForInnerClass$Protected($Class* clazz) {
	return $of($alloc(ForInnerClass$Protected));
}

void ForInnerClass$Protected::init$($ForInnerClass* this$0) {
	$set(this, this$0, this$0);
}

ForInnerClass$Protected::ForInnerClass$Protected() {
}

$Class* ForInnerClass$Protected::load$($String* name, bool initialize) {
	$loadClass(ForInnerClass$Protected, name, initialize, &_ForInnerClass$Protected_ClassInfo_, allocate$ForInnerClass$Protected);
	return class$;
}

$Class* ForInnerClass$Protected::class$ = nullptr;