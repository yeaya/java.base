#include <java/lang/invoke/LambdaForm$Holder.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/LambdaForm.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LambdaForm = ::java::lang::invoke::LambdaForm;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _LambdaForm$Holder_FieldInfo_[] = {
	{"this$0", "Ljava/lang/invoke/LambdaForm;", nullptr, $FINAL | $SYNTHETIC, $field(LambdaForm$Holder, this$0)},
	{}
};

$MethodInfo _LambdaForm$Holder_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/invoke/LambdaForm;)V", nullptr, 0, $method(static_cast<void(LambdaForm$Holder::*)($LambdaForm*)>(&LambdaForm$Holder::init$))},
	{}
};

$InnerClassInfo _LambdaForm$Holder_InnerClassesInfo_[] = {
	{"java.lang.invoke.LambdaForm$Holder", "java.lang.invoke.LambdaForm", "Holder", $FINAL},
	{}
};

$ClassInfo _LambdaForm$Holder_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.LambdaForm$Holder",
	"java.lang.Object",
	nullptr,
	_LambdaForm$Holder_FieldInfo_,
	_LambdaForm$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_LambdaForm$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.LambdaForm"
};

$Object* allocate$LambdaForm$Holder($Class* clazz) {
	return $of($alloc(LambdaForm$Holder));
}

void LambdaForm$Holder::init$($LambdaForm* this$0) {
	$set(this, this$0, this$0);
}

LambdaForm$Holder::LambdaForm$Holder() {
}

$Class* LambdaForm$Holder::load$($String* name, bool initialize) {
	$loadClass(LambdaForm$Holder, name, initialize, &_LambdaForm$Holder_ClassInfo_, allocate$LambdaForm$Holder);
	return class$;
}

$Class* LambdaForm$Holder::class$ = nullptr;

		} // invoke
	} // lang
} // java