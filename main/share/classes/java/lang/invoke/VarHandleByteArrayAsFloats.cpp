#include <java/lang/invoke/VarHandleByteArrayAsFloats.h>

#include <java/lang/invoke/VarHandleByteArrayBase.h>
#include <jdk/internal/access/JavaNioAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jdk/internal/misc/ScopedMemoryAccess.h>
#include <jcpp.h>

#undef ALIGN
#undef BE
#undef NIO_ACCESS
#undef SCOPED_MEMORY_ACCESS

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $VarHandleByteArrayBase = ::java::lang::invoke::VarHandleByteArrayBase;
using $JavaNioAccess = ::jdk::internal::access::JavaNioAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $ScopedMemoryAccess = ::jdk::internal::misc::ScopedMemoryAccess;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _VarHandleByteArrayAsFloats_MethodAnnotations_convEndian1[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsFloats_MethodAnnotations_convEndian2[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleByteArrayAsFloats_FieldInfo_[] = {
	{"NIO_ACCESS", "Ljdk/internal/access/JavaNioAccess;", nullptr, $STATIC | $FINAL, $staticField(VarHandleByteArrayAsFloats, NIO_ACCESS)},
	{"ALIGN", "I", nullptr, $STATIC | $FINAL, $constField(VarHandleByteArrayAsFloats, ALIGN)},
	{"SCOPED_MEMORY_ACCESS", "Ljdk/internal/misc/ScopedMemoryAccess;", nullptr, $STATIC | $FINAL, $staticField(VarHandleByteArrayAsFloats, SCOPED_MEMORY_ACCESS)},
	{}
};

$MethodInfo _VarHandleByteArrayAsFloats_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(VarHandleByteArrayAsFloats, init$, void)},
	{"convEndian", "(ZF)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsFloats, convEndian, int32_t, bool, float), nullptr, nullptr, _VarHandleByteArrayAsFloats_MethodAnnotations_convEndian1},
	{"convEndian", "(ZI)F", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsFloats, convEndian, float, bool, int32_t), nullptr, nullptr, _VarHandleByteArrayAsFloats_MethodAnnotations_convEndian2},
	{}
};

$InnerClassInfo _VarHandleByteArrayAsFloats_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleByteArrayAsFloats$ByteBufferHandle", "java.lang.invoke.VarHandleByteArrayAsFloats", "ByteBufferHandle", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleByteArrayAsFloats$ArrayHandle", "java.lang.invoke.VarHandleByteArrayAsFloats", "ArrayHandle", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleByteArrayAsFloats$ByteArrayViewVarHandle", "java.lang.invoke.VarHandleByteArrayAsFloats", "ByteArrayViewVarHandle", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _VarHandleByteArrayAsFloats_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandleByteArrayAsFloats",
	"java.lang.invoke.VarHandleByteArrayBase",
	nullptr,
	_VarHandleByteArrayAsFloats_FieldInfo_,
	_VarHandleByteArrayAsFloats_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleByteArrayAsFloats_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleByteArrayAsFloats$ByteBufferHandle,java.lang.invoke.VarHandleByteArrayAsFloats$ArrayHandle,java.lang.invoke.VarHandleByteArrayAsFloats$ByteArrayViewVarHandle"
};

$Object* allocate$VarHandleByteArrayAsFloats($Class* clazz) {
	return $of($alloc(VarHandleByteArrayAsFloats));
}

$JavaNioAccess* VarHandleByteArrayAsFloats::NIO_ACCESS = nullptr;
$ScopedMemoryAccess* VarHandleByteArrayAsFloats::SCOPED_MEMORY_ACCESS = nullptr;

void VarHandleByteArrayAsFloats::init$() {
	$VarHandleByteArrayBase::init$();
}

int32_t VarHandleByteArrayAsFloats::convEndian(bool big, float v) {
	$init(VarHandleByteArrayAsFloats);
	int32_t rv = $Float::floatToRawIntBits(v);
	$init($VarHandleByteArrayBase);
	return big == $VarHandleByteArrayBase::BE ? rv : $Integer::reverseBytes(rv);
}

float VarHandleByteArrayAsFloats::convEndian(bool big, int32_t rv) {
	$init(VarHandleByteArrayAsFloats);
	$init($VarHandleByteArrayBase);
	rv = big == $VarHandleByteArrayBase::BE ? rv : $Integer::reverseBytes(rv);
	return $Float::intBitsToFloat(rv);
}

void clinit$VarHandleByteArrayAsFloats($Class* class$) {
	$assignStatic(VarHandleByteArrayAsFloats::NIO_ACCESS, $SharedSecrets::getJavaNioAccess());
	$assignStatic(VarHandleByteArrayAsFloats::SCOPED_MEMORY_ACCESS, $ScopedMemoryAccess::getScopedMemoryAccess());
}

VarHandleByteArrayAsFloats::VarHandleByteArrayAsFloats() {
}

$Class* VarHandleByteArrayAsFloats::load$($String* name, bool initialize) {
	$loadClass(VarHandleByteArrayAsFloats, name, initialize, &_VarHandleByteArrayAsFloats_ClassInfo_, clinit$VarHandleByteArrayAsFloats, allocate$VarHandleByteArrayAsFloats);
	return class$;
}

$Class* VarHandleByteArrayAsFloats::class$ = nullptr;

		} // invoke
	} // lang
} // java