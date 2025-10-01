#include <java/lang/invoke/DirectMethodHandle$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/DirectMethodHandle.h>
#include <java/lang/invoke/LambdaForm.h>
#include <java/lang/invoke/MemberName.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DirectMethodHandle = ::java::lang::invoke::DirectMethodHandle;
using $LambdaForm = ::java::lang::invoke::LambdaForm;
using $MemberName = ::java::lang::invoke::MemberName;
using $Function = ::java::util::function::Function;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _DirectMethodHandle$1_FieldInfo_[] = {
	{"this$0", "Ljava/lang/invoke/DirectMethodHandle;", nullptr, $FINAL | $SYNTHETIC, $field(DirectMethodHandle$1, this$0)},
	{}
};

$MethodInfo _DirectMethodHandle$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/invoke/DirectMethodHandle;)V", nullptr, 0, $method(static_cast<void(DirectMethodHandle$1::*)($DirectMethodHandle*)>(&DirectMethodHandle$1::init$))},
	{"apply", "(Ljava/lang/invoke/LambdaForm;)Ljava/lang/invoke/LambdaForm;", nullptr, $PUBLIC},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _DirectMethodHandle$1_EnclosingMethodInfo_ = {
	"java.lang.invoke.DirectMethodHandle",
	"ensureInitialized",
	"()V"
};

$InnerClassInfo _DirectMethodHandle$1_InnerClassesInfo_[] = {
	{"java.lang.invoke.DirectMethodHandle$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DirectMethodHandle$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.DirectMethodHandle$1",
	"java.lang.Object",
	"java.util.function.Function",
	_DirectMethodHandle$1_FieldInfo_,
	_DirectMethodHandle$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/function/Function<Ljava/lang/invoke/LambdaForm;Ljava/lang/invoke/LambdaForm;>;",
	&_DirectMethodHandle$1_EnclosingMethodInfo_,
	_DirectMethodHandle$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.DirectMethodHandle"
};

$Object* allocate$DirectMethodHandle$1($Class* clazz) {
	return $of($alloc(DirectMethodHandle$1));
}

void DirectMethodHandle$1::init$($DirectMethodHandle* this$0) {
	$set(this, this$0, this$0);
}

$LambdaForm* DirectMethodHandle$1::apply($LambdaForm* oldForm) {
	return ($nc(this->this$0->member)->isField() ? $DirectMethodHandle::preparedFieldLambdaForm(this->this$0->member) : $DirectMethodHandle::preparedLambdaForm(this->this$0->member));
}

$Object* DirectMethodHandle$1::apply(Object$* oldForm) {
	return $of(this->apply($cast($LambdaForm, oldForm)));
}

DirectMethodHandle$1::DirectMethodHandle$1() {
}

$Class* DirectMethodHandle$1::load$($String* name, bool initialize) {
	$loadClass(DirectMethodHandle$1, name, initialize, &_DirectMethodHandle$1_ClassInfo_, allocate$DirectMethodHandle$1);
	return class$;
}

$Class* DirectMethodHandle$1::class$ = nullptr;

		} // invoke
	} // lang
} // java