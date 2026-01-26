#include <java/lang/invoke/Invokers$Holder.h>

#include <java/lang/invoke/Invokers.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Invokers = ::java::lang::invoke::Invokers;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _Invokers$Holder_FieldInfo_[] = {
	{"this$0", "Ljava/lang/invoke/Invokers;", nullptr, $FINAL | $SYNTHETIC, $field(Invokers$Holder, this$0)},
	{}
};

$MethodInfo _Invokers$Holder_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/invoke/Invokers;)V", nullptr, 0, $method(Invokers$Holder, init$, void, $Invokers*)},
	{}
};

$InnerClassInfo _Invokers$Holder_InnerClassesInfo_[] = {
	{"java.lang.invoke.Invokers$Holder", "java.lang.invoke.Invokers", "Holder", $FINAL},
	{}
};

$ClassInfo _Invokers$Holder_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.Invokers$Holder",
	"java.lang.Object",
	nullptr,
	_Invokers$Holder_FieldInfo_,
	_Invokers$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_Invokers$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.Invokers"
};

$Object* allocate$Invokers$Holder($Class* clazz) {
	return $of($alloc(Invokers$Holder));
}

void Invokers$Holder::init$($Invokers* this$0) {
	$set(this, this$0, this$0);
}

Invokers$Holder::Invokers$Holder() {
}

$Class* Invokers$Holder::load$($String* name, bool initialize) {
	$loadClass(Invokers$Holder, name, initialize, &_Invokers$Holder_ClassInfo_, allocate$Invokers$Holder);
	return class$;
}

$Class* Invokers$Holder::class$ = nullptr;

		} // invoke
	} // lang
} // java