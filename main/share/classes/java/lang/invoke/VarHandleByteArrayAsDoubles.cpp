#include <java/lang/invoke/VarHandleByteArrayAsDoubles.h>

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
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $VarHandleByteArrayBase = ::java::lang::invoke::VarHandleByteArrayBase;
using $JavaNioAccess = ::jdk::internal::access::JavaNioAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $ScopedMemoryAccess = ::jdk::internal::misc::ScopedMemoryAccess;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _VarHandleByteArrayAsDoubles_MethodAnnotations_convEndian1[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleByteArrayAsDoubles_MethodAnnotations_convEndian2[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleByteArrayAsDoubles_FieldInfo_[] = {
	{"NIO_ACCESS", "Ljdk/internal/access/JavaNioAccess;", nullptr, $STATIC | $FINAL, $staticField(VarHandleByteArrayAsDoubles, NIO_ACCESS)},
	{"ALIGN", "I", nullptr, $STATIC | $FINAL, $constField(VarHandleByteArrayAsDoubles, ALIGN)},
	{"SCOPED_MEMORY_ACCESS", "Ljdk/internal/misc/ScopedMemoryAccess;", nullptr, $STATIC | $FINAL, $staticField(VarHandleByteArrayAsDoubles, SCOPED_MEMORY_ACCESS)},
	{}
};

$MethodInfo _VarHandleByteArrayAsDoubles_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(VarHandleByteArrayAsDoubles::*)()>(&VarHandleByteArrayAsDoubles::init$))},
	{"convEndian", "(ZD)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(bool,double)>(&VarHandleByteArrayAsDoubles::convEndian)), nullptr, nullptr, _VarHandleByteArrayAsDoubles_MethodAnnotations_convEndian1},
	{"convEndian", "(ZJ)D", nullptr, $STATIC, $method(static_cast<double(*)(bool,int64_t)>(&VarHandleByteArrayAsDoubles::convEndian)), nullptr, nullptr, _VarHandleByteArrayAsDoubles_MethodAnnotations_convEndian2},
	{}
};

$InnerClassInfo _VarHandleByteArrayAsDoubles_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleByteArrayAsDoubles$ByteBufferHandle", "java.lang.invoke.VarHandleByteArrayAsDoubles", "ByteBufferHandle", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleByteArrayAsDoubles$ArrayHandle", "java.lang.invoke.VarHandleByteArrayAsDoubles", "ArrayHandle", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle", "java.lang.invoke.VarHandleByteArrayAsDoubles", "ByteArrayViewVarHandle", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _VarHandleByteArrayAsDoubles_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandleByteArrayAsDoubles",
	"java.lang.invoke.VarHandleByteArrayBase",
	nullptr,
	_VarHandleByteArrayAsDoubles_FieldInfo_,
	_VarHandleByteArrayAsDoubles_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleByteArrayAsDoubles_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleByteArrayAsDoubles$ByteBufferHandle,java.lang.invoke.VarHandleByteArrayAsDoubles$ArrayHandle,java.lang.invoke.VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle"
};

$Object* allocate$VarHandleByteArrayAsDoubles($Class* clazz) {
	return $of($alloc(VarHandleByteArrayAsDoubles));
}

$JavaNioAccess* VarHandleByteArrayAsDoubles::NIO_ACCESS = nullptr;
$ScopedMemoryAccess* VarHandleByteArrayAsDoubles::SCOPED_MEMORY_ACCESS = nullptr;

void VarHandleByteArrayAsDoubles::init$() {
	$VarHandleByteArrayBase::init$();
}

int64_t VarHandleByteArrayAsDoubles::convEndian(bool big, double v) {
	$init(VarHandleByteArrayAsDoubles);
	int64_t rv = $Double::doubleToRawLongBits(v);
	$init($VarHandleByteArrayBase);
	return big == $VarHandleByteArrayBase::BE ? rv : $Long::reverseBytes(rv);
}

double VarHandleByteArrayAsDoubles::convEndian(bool big, int64_t rv) {
	$init(VarHandleByteArrayAsDoubles);
	$init($VarHandleByteArrayBase);
	rv = big == $VarHandleByteArrayBase::BE ? rv : $Long::reverseBytes(rv);
	return $Double::longBitsToDouble(rv);
}

void clinit$VarHandleByteArrayAsDoubles($Class* class$) {
	$assignStatic(VarHandleByteArrayAsDoubles::NIO_ACCESS, $SharedSecrets::getJavaNioAccess());
	$assignStatic(VarHandleByteArrayAsDoubles::SCOPED_MEMORY_ACCESS, $ScopedMemoryAccess::getScopedMemoryAccess());
}

VarHandleByteArrayAsDoubles::VarHandleByteArrayAsDoubles() {
}

$Class* VarHandleByteArrayAsDoubles::load$($String* name, bool initialize) {
	$loadClass(VarHandleByteArrayAsDoubles, name, initialize, &_VarHandleByteArrayAsDoubles_ClassInfo_, clinit$VarHandleByteArrayAsDoubles, allocate$VarHandleByteArrayAsDoubles);
	return class$;
}

$Class* VarHandleByteArrayAsDoubles::class$ = nullptr;

		} // invoke
	} // lang
} // java