#include <sun/security/provider/ByteArrayAccess$LE.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/nio/ByteOrder.h>
#include <sun/security/provider/ByteArrayAccess.h>
#include <jcpp.h>

#undef INT_ARRAY
#undef LITTLE_ENDIAN
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

$VarHandle* ByteArrayAccess$LE::INT_ARRAY = nullptr;
$VarHandle* ByteArrayAccess$LE::LONG_ARRAY = nullptr;

void ByteArrayAccess$LE::init$() {
}

void ByteArrayAccess$LE::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$init($ByteOrder);
	$assignStatic(ByteArrayAccess$LE::INT_ARRAY, $$nc($MethodHandles::byteArrayViewVarHandle($getClass($ints), $ByteOrder::LITTLE_ENDIAN))->withInvokeExactBehavior());
	$assignStatic(ByteArrayAccess$LE::LONG_ARRAY, $$nc($MethodHandles::byteArrayViewVarHandle($getClass($longs), $ByteOrder::LITTLE_ENDIAN))->withInvokeExactBehavior());
}

ByteArrayAccess$LE::ByteArrayAccess$LE() {
}

$Class* ByteArrayAccess$LE::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"INT_ARRAY", "Ljava/lang/invoke/VarHandle;", nullptr, $STATIC | $FINAL, $staticField(ByteArrayAccess$LE, INT_ARRAY)},
		{"LONG_ARRAY", "Ljava/lang/invoke/VarHandle;", nullptr, $STATIC | $FINAL, $staticField(ByteArrayAccess$LE, LONG_ARRAY)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ByteArrayAccess$LE, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.ByteArrayAccess$LE", "sun.security.provider.ByteArrayAccess", "LE", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.provider.ByteArrayAccess$LE",
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
	$loadClass(ByteArrayAccess$LE, name, initialize, &classInfo$$, ByteArrayAccess$LE::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ByteArrayAccess$LE);
	});
	return class$;
}

$Class* ByteArrayAccess$LE::class$ = nullptr;

		} // provider
	} // security
} // sun