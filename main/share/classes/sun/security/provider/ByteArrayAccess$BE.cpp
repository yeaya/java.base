#include <sun/security/provider/ByteArrayAccess$BE.h>

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
using $ByteArrayAccess = ::sun::security::provider::ByteArrayAccess;

namespace sun {
	namespace security {
		namespace provider {

$FieldInfo _ByteArrayAccess$BE_FieldInfo_[] = {
	{"INT_ARRAY", "Ljava/lang/invoke/VarHandle;", nullptr, $STATIC | $FINAL, $staticField(ByteArrayAccess$BE, INT_ARRAY)},
	{"LONG_ARRAY", "Ljava/lang/invoke/VarHandle;", nullptr, $STATIC | $FINAL, $staticField(ByteArrayAccess$BE, LONG_ARRAY)},
	{}
};

$MethodInfo _ByteArrayAccess$BE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ByteArrayAccess$BE::*)()>(&ByteArrayAccess$BE::init$))},
	{}
};

$InnerClassInfo _ByteArrayAccess$BE_InnerClassesInfo_[] = {
	{"sun.security.provider.ByteArrayAccess$BE", "sun.security.provider.ByteArrayAccess", "BE", $STATIC | $FINAL},
	{}
};

$ClassInfo _ByteArrayAccess$BE_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.provider.ByteArrayAccess$BE",
	"java.lang.Object",
	nullptr,
	_ByteArrayAccess$BE_FieldInfo_,
	_ByteArrayAccess$BE_MethodInfo_,
	nullptr,
	nullptr,
	_ByteArrayAccess$BE_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.ByteArrayAccess"
};

$Object* allocate$ByteArrayAccess$BE($Class* clazz) {
	return $of($alloc(ByteArrayAccess$BE));
}

$VarHandle* ByteArrayAccess$BE::INT_ARRAY = nullptr;
$VarHandle* ByteArrayAccess$BE::LONG_ARRAY = nullptr;

void ByteArrayAccess$BE::init$() {
}

void clinit$ByteArrayAccess$BE($Class* class$) {
	$load($ints);
	$init($ByteOrder);
	$assignStatic(ByteArrayAccess$BE::INT_ARRAY, $nc($($MethodHandles::byteArrayViewVarHandle($getClass($ints), $ByteOrder::BIG_ENDIAN)))->withInvokeExactBehavior());
	$load($longs);
	$assignStatic(ByteArrayAccess$BE::LONG_ARRAY, $nc($($MethodHandles::byteArrayViewVarHandle($getClass($longs), $ByteOrder::BIG_ENDIAN)))->withInvokeExactBehavior());
}

ByteArrayAccess$BE::ByteArrayAccess$BE() {
}

$Class* ByteArrayAccess$BE::load$($String* name, bool initialize) {
	$loadClass(ByteArrayAccess$BE, name, initialize, &_ByteArrayAccess$BE_ClassInfo_, clinit$ByteArrayAccess$BE, allocate$ByteArrayAccess$BE);
	return class$;
}

$Class* ByteArrayAccess$BE::class$ = nullptr;

		} // provider
	} // security
} // sun