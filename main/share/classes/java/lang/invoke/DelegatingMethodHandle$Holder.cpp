#include <java/lang/invoke/DelegatingMethodHandle$Holder.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/DelegatingMethodHandle.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DelegatingMethodHandle = ::java::lang::invoke::DelegatingMethodHandle;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _DelegatingMethodHandle$Holder_FieldInfo_[] = {
	{"this$0", "Ljava/lang/invoke/DelegatingMethodHandle;", nullptr, $FINAL | $SYNTHETIC, $field(DelegatingMethodHandle$Holder, this$0)},
	{}
};

$MethodInfo _DelegatingMethodHandle$Holder_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/invoke/DelegatingMethodHandle;)V", nullptr, 0, $method(static_cast<void(DelegatingMethodHandle$Holder::*)($DelegatingMethodHandle*)>(&DelegatingMethodHandle$Holder::init$))},
	{}
};

$InnerClassInfo _DelegatingMethodHandle$Holder_InnerClassesInfo_[] = {
	{"java.lang.invoke.DelegatingMethodHandle$Holder", "java.lang.invoke.DelegatingMethodHandle", "Holder", $FINAL},
	{}
};

$ClassInfo _DelegatingMethodHandle$Holder_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.DelegatingMethodHandle$Holder",
	"java.lang.Object",
	nullptr,
	_DelegatingMethodHandle$Holder_FieldInfo_,
	_DelegatingMethodHandle$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_DelegatingMethodHandle$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.DelegatingMethodHandle"
};

$Object* allocate$DelegatingMethodHandle$Holder($Class* clazz) {
	return $of($alloc(DelegatingMethodHandle$Holder));
}

void DelegatingMethodHandle$Holder::init$($DelegatingMethodHandle* this$0) {
	$set(this, this$0, this$0);
}

DelegatingMethodHandle$Holder::DelegatingMethodHandle$Holder() {
}

$Class* DelegatingMethodHandle$Holder::load$($String* name, bool initialize) {
	$loadClass(DelegatingMethodHandle$Holder, name, initialize, &_DelegatingMethodHandle$Holder_ClassInfo_, allocate$DelegatingMethodHandle$Holder);
	return class$;
}

$Class* DelegatingMethodHandle$Holder::class$ = nullptr;

		} // invoke
	} // lang
} // java