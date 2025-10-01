#include <ParameterizedOuter$ParameterizedInner.h>

#include <ParameterizedOuter.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ParameterizedOuter = ::ParameterizedOuter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _ParameterizedOuter$ParameterizedInner_FieldInfo_[] = {
	{"this$0", "LParameterizedOuter;", nullptr, $FINAL | $SYNTHETIC, $field(ParameterizedOuter$ParameterizedInner, this$0)},
	{}
};

$MethodInfo _ParameterizedOuter$ParameterizedInner_MethodInfo_[] = {
	{"<init>", "(LParameterizedOuter;)V", nullptr, 0, $method(static_cast<void(ParameterizedOuter$ParameterizedInner::*)($ParameterizedOuter*)>(&ParameterizedOuter$ParameterizedInner::init$))},
	{}
};

$InnerClassInfo _ParameterizedOuter$ParameterizedInner_InnerClassesInfo_[] = {
	{"ParameterizedOuter$ParameterizedInner", "ParameterizedOuter", "ParameterizedInner", 0},
	{}
};

$ClassInfo _ParameterizedOuter$ParameterizedInner_ClassInfo_ = {
	$ACC_SUPER,
	"ParameterizedOuter$ParameterizedInner",
	"java.lang.Object",
	nullptr,
	_ParameterizedOuter$ParameterizedInner_FieldInfo_,
	_ParameterizedOuter$ParameterizedInner_MethodInfo_,
	"<U:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_ParameterizedOuter$ParameterizedInner_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ParameterizedOuter"
};

$Object* allocate$ParameterizedOuter$ParameterizedInner($Class* clazz) {
	return $of($alloc(ParameterizedOuter$ParameterizedInner));
}

void ParameterizedOuter$ParameterizedInner::init$($ParameterizedOuter* this$0) {
	$set(this, this$0, this$0);
}

ParameterizedOuter$ParameterizedInner::ParameterizedOuter$ParameterizedInner() {
}

$Class* ParameterizedOuter$ParameterizedInner::load$($String* name, bool initialize) {
	$loadClass(ParameterizedOuter$ParameterizedInner, name, initialize, &_ParameterizedOuter$ParameterizedInner_ClassInfo_, allocate$ParameterizedOuter$ParameterizedInner);
	return class$;
}

$Class* ParameterizedOuter$ParameterizedInner::class$ = nullptr;