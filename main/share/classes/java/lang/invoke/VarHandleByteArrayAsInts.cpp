#include <java/lang/invoke/VarHandleByteArrayAsInts.h>

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
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $VarHandleByteArrayBase = ::java::lang::invoke::VarHandleByteArrayBase;
using $JavaNioAccess = ::jdk::internal::access::JavaNioAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $ScopedMemoryAccess = ::jdk::internal::misc::ScopedMemoryAccess;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _VarHandleByteArrayAsInts_MethodAnnotations_convEndian1[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleByteArrayAsInts_FieldInfo_[] = {
	{"NIO_ACCESS", "Ljdk/internal/access/JavaNioAccess;", nullptr, $STATIC | $FINAL, $staticField(VarHandleByteArrayAsInts, NIO_ACCESS)},
	{"ALIGN", "I", nullptr, $STATIC | $FINAL, $constField(VarHandleByteArrayAsInts, ALIGN)},
	{"SCOPED_MEMORY_ACCESS", "Ljdk/internal/misc/ScopedMemoryAccess;", nullptr, $STATIC | $FINAL, $staticField(VarHandleByteArrayAsInts, SCOPED_MEMORY_ACCESS)},
	{}
};

$MethodInfo _VarHandleByteArrayAsInts_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(VarHandleByteArrayAsInts::*)()>(&VarHandleByteArrayAsInts::init$))},
	{"convEndian", "(ZI)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(bool,int32_t)>(&VarHandleByteArrayAsInts::convEndian)), nullptr, nullptr, _VarHandleByteArrayAsInts_MethodAnnotations_convEndian1},
	{}
};

$InnerClassInfo _VarHandleByteArrayAsInts_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleByteArrayAsInts$ByteBufferHandle", "java.lang.invoke.VarHandleByteArrayAsInts", "ByteBufferHandle", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleByteArrayAsInts$ArrayHandle", "java.lang.invoke.VarHandleByteArrayAsInts", "ArrayHandle", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleByteArrayAsInts$ByteArrayViewVarHandle", "java.lang.invoke.VarHandleByteArrayAsInts", "ByteArrayViewVarHandle", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _VarHandleByteArrayAsInts_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandleByteArrayAsInts",
	"java.lang.invoke.VarHandleByteArrayBase",
	nullptr,
	_VarHandleByteArrayAsInts_FieldInfo_,
	_VarHandleByteArrayAsInts_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleByteArrayAsInts_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleByteArrayAsInts$ByteBufferHandle,java.lang.invoke.VarHandleByteArrayAsInts$ArrayHandle,java.lang.invoke.VarHandleByteArrayAsInts$ByteArrayViewVarHandle"
};

$Object* allocate$VarHandleByteArrayAsInts($Class* clazz) {
	return $of($alloc(VarHandleByteArrayAsInts));
}

$JavaNioAccess* VarHandleByteArrayAsInts::NIO_ACCESS = nullptr;
$ScopedMemoryAccess* VarHandleByteArrayAsInts::SCOPED_MEMORY_ACCESS = nullptr;

void VarHandleByteArrayAsInts::init$() {
	$VarHandleByteArrayBase::init$();
}

int32_t VarHandleByteArrayAsInts::convEndian(bool big, int32_t n) {
	$init(VarHandleByteArrayAsInts);
	$init($VarHandleByteArrayBase);
	return big == $VarHandleByteArrayBase::BE ? n : $Integer::reverseBytes(n);
}

void clinit$VarHandleByteArrayAsInts($Class* class$) {
	$assignStatic(VarHandleByteArrayAsInts::NIO_ACCESS, $SharedSecrets::getJavaNioAccess());
	$assignStatic(VarHandleByteArrayAsInts::SCOPED_MEMORY_ACCESS, $ScopedMemoryAccess::getScopedMemoryAccess());
}

VarHandleByteArrayAsInts::VarHandleByteArrayAsInts() {
}

$Class* VarHandleByteArrayAsInts::load$($String* name, bool initialize) {
	$loadClass(VarHandleByteArrayAsInts, name, initialize, &_VarHandleByteArrayAsInts_ClassInfo_, clinit$VarHandleByteArrayAsInts, allocate$VarHandleByteArrayAsInts);
	return class$;
}

$Class* VarHandleByteArrayAsInts::class$ = nullptr;

		} // invoke
	} // lang
} // java