#include <java/lang/invoke/VarHandleByteArrayAsShorts.h>

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
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $VarHandleByteArrayBase = ::java::lang::invoke::VarHandleByteArrayBase;
using $JavaNioAccess = ::jdk::internal::access::JavaNioAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $ScopedMemoryAccess = ::jdk::internal::misc::ScopedMemoryAccess;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _VarHandleByteArrayAsShorts_MethodAnnotations_convEndian1[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleByteArrayAsShorts_FieldInfo_[] = {
	{"NIO_ACCESS", "Ljdk/internal/access/JavaNioAccess;", nullptr, $STATIC | $FINAL, $staticField(VarHandleByteArrayAsShorts, NIO_ACCESS)},
	{"ALIGN", "I", nullptr, $STATIC | $FINAL, $constField(VarHandleByteArrayAsShorts, ALIGN)},
	{"SCOPED_MEMORY_ACCESS", "Ljdk/internal/misc/ScopedMemoryAccess;", nullptr, $STATIC | $FINAL, $staticField(VarHandleByteArrayAsShorts, SCOPED_MEMORY_ACCESS)},
	{}
};

$MethodInfo _VarHandleByteArrayAsShorts_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(VarHandleByteArrayAsShorts::*)()>(&VarHandleByteArrayAsShorts::init$))},
	{"convEndian", "(ZS)S", nullptr, $STATIC, $method(static_cast<int16_t(*)(bool,int16_t)>(&VarHandleByteArrayAsShorts::convEndian)), nullptr, nullptr, _VarHandleByteArrayAsShorts_MethodAnnotations_convEndian1},
	{}
};

$InnerClassInfo _VarHandleByteArrayAsShorts_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleByteArrayAsShorts$ByteBufferHandle", "java.lang.invoke.VarHandleByteArrayAsShorts", "ByteBufferHandle", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleByteArrayAsShorts$ArrayHandle", "java.lang.invoke.VarHandleByteArrayAsShorts", "ArrayHandle", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleByteArrayAsShorts$ByteArrayViewVarHandle", "java.lang.invoke.VarHandleByteArrayAsShorts", "ByteArrayViewVarHandle", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _VarHandleByteArrayAsShorts_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandleByteArrayAsShorts",
	"java.lang.invoke.VarHandleByteArrayBase",
	nullptr,
	_VarHandleByteArrayAsShorts_FieldInfo_,
	_VarHandleByteArrayAsShorts_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleByteArrayAsShorts_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleByteArrayAsShorts$ByteBufferHandle,java.lang.invoke.VarHandleByteArrayAsShorts$ArrayHandle,java.lang.invoke.VarHandleByteArrayAsShorts$ByteArrayViewVarHandle"
};

$Object* allocate$VarHandleByteArrayAsShorts($Class* clazz) {
	return $of($alloc(VarHandleByteArrayAsShorts));
}

$JavaNioAccess* VarHandleByteArrayAsShorts::NIO_ACCESS = nullptr;
$ScopedMemoryAccess* VarHandleByteArrayAsShorts::SCOPED_MEMORY_ACCESS = nullptr;

void VarHandleByteArrayAsShorts::init$() {
	$VarHandleByteArrayBase::init$();
}

int16_t VarHandleByteArrayAsShorts::convEndian(bool big, int16_t n) {
	$init(VarHandleByteArrayAsShorts);
	$init($VarHandleByteArrayBase);
	return big == $VarHandleByteArrayBase::BE ? n : $Short::reverseBytes(n);
}

void clinit$VarHandleByteArrayAsShorts($Class* class$) {
	$assignStatic(VarHandleByteArrayAsShorts::NIO_ACCESS, $SharedSecrets::getJavaNioAccess());
	$assignStatic(VarHandleByteArrayAsShorts::SCOPED_MEMORY_ACCESS, $ScopedMemoryAccess::getScopedMemoryAccess());
}

VarHandleByteArrayAsShorts::VarHandleByteArrayAsShorts() {
}

$Class* VarHandleByteArrayAsShorts::load$($String* name, bool initialize) {
	$loadClass(VarHandleByteArrayAsShorts, name, initialize, &_VarHandleByteArrayAsShorts_ClassInfo_, clinit$VarHandleByteArrayAsShorts, allocate$VarHandleByteArrayAsShorts);
	return class$;
}

$Class* VarHandleByteArrayAsShorts::class$ = nullptr;

		} // invoke
	} // lang
} // java