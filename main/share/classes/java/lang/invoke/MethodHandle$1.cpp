#include <java/lang/invoke/MethodHandle$1.h>

#include <java/lang/invoke/LambdaForm.h>
#include <java/lang/invoke/MethodHandle.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LambdaForm = ::java::lang::invoke::LambdaForm;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Function = ::java::util::function::Function;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _MethodHandle$1_FieldInfo_[] = {
	{"this$0", "Ljava/lang/invoke/MethodHandle;", nullptr, $FINAL | $SYNTHETIC, $field(MethodHandle$1, this$0)},
	{}
};

$MethodInfo _MethodHandle$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/invoke/MethodHandle;)V", nullptr, 0, $method(static_cast<void(MethodHandle$1::*)($MethodHandle*)>(&MethodHandle$1::init$))},
	{"apply", "(Ljava/lang/invoke/LambdaForm;)Ljava/lang/invoke/LambdaForm;", nullptr, $PUBLIC},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _MethodHandle$1_EnclosingMethodInfo_ = {
	"java.lang.invoke.MethodHandle",
	"customize",
	"()V"
};

$InnerClassInfo _MethodHandle$1_InnerClassesInfo_[] = {
	{"java.lang.invoke.MethodHandle$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MethodHandle$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.MethodHandle$1",
	"java.lang.Object",
	"java.util.function.Function",
	_MethodHandle$1_FieldInfo_,
	_MethodHandle$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/function/Function<Ljava/lang/invoke/LambdaForm;Ljava/lang/invoke/LambdaForm;>;",
	&_MethodHandle$1_EnclosingMethodInfo_,
	_MethodHandle$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.MethodHandle"
};

$Object* allocate$MethodHandle$1($Class* clazz) {
	return $of($alloc(MethodHandle$1));
}

void MethodHandle$1::init$($MethodHandle* this$0) {
	$set(this, this$0, this$0);
}

$LambdaForm* MethodHandle$1::apply($LambdaForm* oldForm) {
	return $nc(oldForm)->customize(this->this$0);
}

$Object* MethodHandle$1::apply(Object$* oldForm) {
	return $of(this->apply($cast($LambdaForm, oldForm)));
}

MethodHandle$1::MethodHandle$1() {
}

$Class* MethodHandle$1::load$($String* name, bool initialize) {
	$loadClass(MethodHandle$1, name, initialize, &_MethodHandle$1_ClassInfo_, allocate$MethodHandle$1);
	return class$;
}

$Class* MethodHandle$1::class$ = nullptr;

		} // invoke
	} // lang
} // java