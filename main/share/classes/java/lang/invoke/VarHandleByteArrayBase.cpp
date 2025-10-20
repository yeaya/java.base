#include <java/lang/invoke/VarHandleByteArrayBase.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/Buffer.h>
#include <java/nio/ByteBuffer.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef BE
#undef BUFFER_ADDRESS
#undef BUFFER_LIMIT
#undef BYTE_BUFFER_HB
#undef BYTE_BUFFER_IS_READ_ONLY
#undef UNSAFE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _VarHandleByteArrayBase_FieldInfo_[] = {
	{"BUFFER_ADDRESS", "J", nullptr, $STATIC | $FINAL, $staticField(VarHandleByteArrayBase, BUFFER_ADDRESS)},
	{"BUFFER_LIMIT", "J", nullptr, $STATIC | $FINAL, $staticField(VarHandleByteArrayBase, BUFFER_LIMIT)},
	{"BYTE_BUFFER_HB", "J", nullptr, $STATIC | $FINAL, $staticField(VarHandleByteArrayBase, BYTE_BUFFER_HB)},
	{"BYTE_BUFFER_IS_READ_ONLY", "J", nullptr, $STATIC | $FINAL, $staticField(VarHandleByteArrayBase, BYTE_BUFFER_IS_READ_ONLY)},
	{"BE", "Z", nullptr, $STATIC | $FINAL, $staticField(VarHandleByteArrayBase, BE)},
	{}
};

$MethodInfo _VarHandleByteArrayBase_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(VarHandleByteArrayBase::*)()>(&VarHandleByteArrayBase::init$))},
	{"newIllegalStateExceptionForMisalignedAccess", "(I)Ljava/lang/IllegalStateException;", nullptr, $STATIC, $method(static_cast<$IllegalStateException*(*)(int32_t)>(&VarHandleByteArrayBase::newIllegalStateExceptionForMisalignedAccess))},
	{}
};

$ClassInfo _VarHandleByteArrayBase_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.lang.invoke.VarHandleByteArrayBase",
	"java.lang.Object",
	nullptr,
	_VarHandleByteArrayBase_FieldInfo_,
	_VarHandleByteArrayBase_MethodInfo_
};

$Object* allocate$VarHandleByteArrayBase($Class* clazz) {
	return $of($alloc(VarHandleByteArrayBase));
}

int64_t VarHandleByteArrayBase::BUFFER_ADDRESS = 0;
int64_t VarHandleByteArrayBase::BUFFER_LIMIT = 0;
int64_t VarHandleByteArrayBase::BYTE_BUFFER_HB = 0;
int64_t VarHandleByteArrayBase::BYTE_BUFFER_IS_READ_ONLY = 0;
bool VarHandleByteArrayBase::BE = false;

void VarHandleByteArrayBase::init$() {
}

$IllegalStateException* VarHandleByteArrayBase::newIllegalStateExceptionForMisalignedAccess(int32_t index) {
	$init(VarHandleByteArrayBase);
	$useLocalCurrentObjectStackCache();
	return $new($IllegalStateException, $$str({"Misaligned access at index: "_s, $$str(index)}));
}

void clinit$VarHandleByteArrayBase($Class* class$) {
	$init($MethodHandleStatics);
	$load($Buffer);
	VarHandleByteArrayBase::BUFFER_ADDRESS = $nc($MethodHandleStatics::UNSAFE)->objectFieldOffset($Buffer::class$, "address"_s);
	VarHandleByteArrayBase::BUFFER_LIMIT = $nc($MethodHandleStatics::UNSAFE)->objectFieldOffset($Buffer::class$, "limit"_s);
	$load($ByteBuffer);
	VarHandleByteArrayBase::BYTE_BUFFER_HB = $nc($MethodHandleStatics::UNSAFE)->objectFieldOffset($ByteBuffer::class$, "hb"_s);
	VarHandleByteArrayBase::BYTE_BUFFER_IS_READ_ONLY = $nc($MethodHandleStatics::UNSAFE)->objectFieldOffset($ByteBuffer::class$, "isReadOnly"_s);
	VarHandleByteArrayBase::BE = $nc($MethodHandleStatics::UNSAFE)->isBigEndian();
}

VarHandleByteArrayBase::VarHandleByteArrayBase() {
}

$Class* VarHandleByteArrayBase::load$($String* name, bool initialize) {
	$loadClass(VarHandleByteArrayBase, name, initialize, &_VarHandleByteArrayBase_ClassInfo_, clinit$VarHandleByteArrayBase, allocate$VarHandleByteArrayBase);
	return class$;
}

$Class* VarHandleByteArrayBase::class$ = nullptr;

		} // invoke
	} // lang
} // java