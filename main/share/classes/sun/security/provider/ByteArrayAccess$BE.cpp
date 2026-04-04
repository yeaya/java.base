#include <sun/security/provider/ByteArrayAccess$BE.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/nio/ByteOrder.h>
#include <sun/security/provider/ByteArrayAccess.h>
#include <jcpp.h>

#undef BIG_ENDIAN
#undef INT_ARRAY
#undef LONG_ARRAY

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $ByteOrder = ::java::nio::ByteOrder;

namespace sun {
	namespace security {
		namespace provider {

$VarHandle* ByteArrayAccess$BE::INT_ARRAY = nullptr;
$VarHandle* ByteArrayAccess$BE::LONG_ARRAY = nullptr;

void ByteArrayAccess$BE::init$() {
}

void ByteArrayAccess$BE::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$init($ByteOrder);
	$assignStatic(ByteArrayAccess$BE::INT_ARRAY, $$nc($MethodHandles::byteArrayViewVarHandle($getClass($ints), $ByteOrder::BIG_ENDIAN))->withInvokeExactBehavior());
	$assignStatic(ByteArrayAccess$BE::LONG_ARRAY, $$nc($MethodHandles::byteArrayViewVarHandle($getClass($longs), $ByteOrder::BIG_ENDIAN))->withInvokeExactBehavior());
}

ByteArrayAccess$BE::ByteArrayAccess$BE() {
}

$Class* ByteArrayAccess$BE::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"INT_ARRAY", "Ljava/lang/invoke/VarHandle;", nullptr, $STATIC | $FINAL, $staticField(ByteArrayAccess$BE, INT_ARRAY)},
		{"LONG_ARRAY", "Ljava/lang/invoke/VarHandle;", nullptr, $STATIC | $FINAL, $staticField(ByteArrayAccess$BE, LONG_ARRAY)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ByteArrayAccess$BE, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.ByteArrayAccess$BE", "sun.security.provider.ByteArrayAccess", "BE", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.provider.ByteArrayAccess$BE",
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
		"sun.security.provider.ByteArrayAccess"
	};
	$loadClass(ByteArrayAccess$BE, name, initialize, &classInfo$$, ByteArrayAccess$BE::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ByteArrayAccess$BE);
	});
	return class$;
}

$Class* ByteArrayAccess$BE::class$ = nullptr;

		} // provider
	} // security
} // sun