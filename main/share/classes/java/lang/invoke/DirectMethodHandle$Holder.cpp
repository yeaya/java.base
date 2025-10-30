#include <java/lang/invoke/DirectMethodHandle$Holder.h>

#include <java/lang/invoke/DirectMethodHandle.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DirectMethodHandle = ::java::lang::invoke::DirectMethodHandle;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _DirectMethodHandle$Holder_FieldInfo_[] = {
	{"this$0", "Ljava/lang/invoke/DirectMethodHandle;", nullptr, $FINAL | $SYNTHETIC, $field(DirectMethodHandle$Holder, this$0)},
	{}
};

$MethodInfo _DirectMethodHandle$Holder_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/invoke/DirectMethodHandle;)V", nullptr, 0, $method(static_cast<void(DirectMethodHandle$Holder::*)($DirectMethodHandle*)>(&DirectMethodHandle$Holder::init$))},
	{}
};

$InnerClassInfo _DirectMethodHandle$Holder_InnerClassesInfo_[] = {
	{"java.lang.invoke.DirectMethodHandle$Holder", "java.lang.invoke.DirectMethodHandle", "Holder", $FINAL},
	{}
};

$ClassInfo _DirectMethodHandle$Holder_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.DirectMethodHandle$Holder",
	"java.lang.Object",
	nullptr,
	_DirectMethodHandle$Holder_FieldInfo_,
	_DirectMethodHandle$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_DirectMethodHandle$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.DirectMethodHandle"
};

$Object* allocate$DirectMethodHandle$Holder($Class* clazz) {
	return $of($alloc(DirectMethodHandle$Holder));
}

void DirectMethodHandle$Holder::init$($DirectMethodHandle* this$0) {
	$set(this, this$0, this$0);
}

DirectMethodHandle$Holder::DirectMethodHandle$Holder() {
}

$Class* DirectMethodHandle$Holder::load$($String* name, bool initialize) {
	$loadClass(DirectMethodHandle$Holder, name, initialize, &_DirectMethodHandle$Holder_ClassInfo_, allocate$DirectMethodHandle$Holder);
	return class$;
}

$Class* DirectMethodHandle$Holder::class$ = nullptr;

		} // invoke
	} // lang
} // java