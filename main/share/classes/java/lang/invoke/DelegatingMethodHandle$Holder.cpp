#include <java/lang/invoke/DelegatingMethodHandle$Holder.h>
#include <java/lang/invoke/DelegatingMethodHandle.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DelegatingMethodHandle = ::java::lang::invoke::DelegatingMethodHandle;

namespace java {
	namespace lang {
		namespace invoke {

void DelegatingMethodHandle$Holder::init$($DelegatingMethodHandle* this$0) {
	$set(this, this$0, this$0);
}

DelegatingMethodHandle$Holder::DelegatingMethodHandle$Holder() {
}

$Class* DelegatingMethodHandle$Holder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/lang/invoke/DelegatingMethodHandle;", nullptr, $FINAL | $SYNTHETIC, $field(DelegatingMethodHandle$Holder, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/invoke/DelegatingMethodHandle;)V", nullptr, 0, $method(DelegatingMethodHandle$Holder, init$, void, $DelegatingMethodHandle*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.DelegatingMethodHandle$Holder", "java.lang.invoke.DelegatingMethodHandle", "Holder", $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.DelegatingMethodHandle$Holder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.invoke.DelegatingMethodHandle"
	};
	$loadClass(DelegatingMethodHandle$Holder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DelegatingMethodHandle$Holder);
	});
	return class$;
}

$Class* DelegatingMethodHandle$Holder::class$ = nullptr;

		} // invoke
	} // lang
} // java