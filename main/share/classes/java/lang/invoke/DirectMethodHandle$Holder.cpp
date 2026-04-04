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

void DirectMethodHandle$Holder::init$($DirectMethodHandle* this$0) {
	$set(this, this$0, this$0);
}

DirectMethodHandle$Holder::DirectMethodHandle$Holder() {
}

$Class* DirectMethodHandle$Holder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/lang/invoke/DirectMethodHandle;", nullptr, $FINAL | $SYNTHETIC, $field(DirectMethodHandle$Holder, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/invoke/DirectMethodHandle;)V", nullptr, 0, $method(DirectMethodHandle$Holder, init$, void, $DirectMethodHandle*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.DirectMethodHandle$Holder", "java.lang.invoke.DirectMethodHandle", "Holder", $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.DirectMethodHandle$Holder",
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
		"java.lang.invoke.DirectMethodHandle"
	};
	$loadClass(DirectMethodHandle$Holder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DirectMethodHandle$Holder);
	});
	return class$;
}

$Class* DirectMethodHandle$Holder::class$ = nullptr;

		} // invoke
	} // lang
} // java