#include <sun/security/provider/ByteArrayAccess$LE.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $ByteArrayAccess = ::sun::security::provider::ByteArrayAccess;

namespace sun {
	namespace security {
		namespace provider {

$FieldInfo _ByteArrayAccess$LE_FieldInfo_[] = {
	{"INT_ARRAY", "Ljava/lang/invoke/VarHandle;", nullptr, $STATIC | $FINAL, $staticField(ByteArrayAccess$LE, INT_ARRAY)},
	{"LONG_ARRAY", "Ljava/lang/invoke/VarHandle;", nullptr, $STATIC | $FINAL, $staticField(ByteArrayAccess$LE, LONG_ARRAY)},
	{}
};

$MethodInfo _ByteArrayAccess$LE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ByteArrayAccess$LE::*)()>(&ByteArrayAccess$LE::init$))},
	{}
};

$InnerClassInfo _ByteArrayAccess$LE_InnerClassesInfo_[] = {
	{"sun.security.provider.ByteArrayAccess$LE", "sun.security.provider.ByteArrayAccess", "LE", $STATIC | $FINAL},
	{}
};

$ClassInfo _ByteArrayAccess$LE_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.provider.ByteArrayAccess$LE",
	"java.lang.Object",
	nullptr,
	_ByteArrayAccess$LE_FieldInfo_,
	_ByteArrayAccess$LE_MethodInfo_,
	nullptr,
	nullptr,
	_ByteArrayAccess$LE_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.ByteArrayAccess"
};

$Object* allocate$ByteArrayAccess$LE($Class* clazz) {
	return $of($alloc(ByteArrayAccess$LE));
}

$VarHandle* ByteArrayAccess$LE::INT_ARRAY = nullptr;
$VarHandle* ByteArrayAccess$LE::LONG_ARRAY = nullptr;

void ByteArrayAccess$LE::init$() {
}

void clinit$ByteArrayAccess$LE($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$load($ints);
	$init($ByteOrder);
	$assignStatic(ByteArrayAccess$LE::INT_ARRAY, $nc($($MethodHandles::byteArrayViewVarHandle($getClass($ints), $ByteOrder::LITTLE_ENDIAN)))->withInvokeExactBehavior());
	$load($longs);
	$assignStatic(ByteArrayAccess$LE::LONG_ARRAY, $nc($($MethodHandles::byteArrayViewVarHandle($getClass($longs), $ByteOrder::LITTLE_ENDIAN)))->withInvokeExactBehavior());
}

ByteArrayAccess$LE::ByteArrayAccess$LE() {
}

$Class* ByteArrayAccess$LE::load$($String* name, bool initialize) {
	$loadClass(ByteArrayAccess$LE, name, initialize, &_ByteArrayAccess$LE_ClassInfo_, clinit$ByteArrayAccess$LE, allocate$ByteArrayAccess$LE);
	return class$;
}

$Class* ByteArrayAccess$LE::class$ = nullptr;

		} // provider
	} // security
} // sun