#include <java/lang/invoke/VarHandleByteArrayAsLongs.h>

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
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $VarHandleByteArrayBase = ::java::lang::invoke::VarHandleByteArrayBase;
using $JavaNioAccess = ::jdk::internal::access::JavaNioAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $ScopedMemoryAccess = ::jdk::internal::misc::ScopedMemoryAccess;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _VarHandleByteArrayAsLongs_MethodAnnotations_convEndian1[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleByteArrayAsLongs_FieldInfo_[] = {
	{"NIO_ACCESS", "Ljdk/internal/access/JavaNioAccess;", nullptr, $STATIC | $FINAL, $staticField(VarHandleByteArrayAsLongs, NIO_ACCESS)},
	{"ALIGN", "I", nullptr, $STATIC | $FINAL, $constField(VarHandleByteArrayAsLongs, ALIGN)},
	{"SCOPED_MEMORY_ACCESS", "Ljdk/internal/misc/ScopedMemoryAccess;", nullptr, $STATIC | $FINAL, $staticField(VarHandleByteArrayAsLongs, SCOPED_MEMORY_ACCESS)},
	{}
};

$MethodInfo _VarHandleByteArrayAsLongs_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(VarHandleByteArrayAsLongs::*)()>(&VarHandleByteArrayAsLongs::init$))},
	{"convEndian", "(ZJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(bool,int64_t)>(&VarHandleByteArrayAsLongs::convEndian)), nullptr, nullptr, _VarHandleByteArrayAsLongs_MethodAnnotations_convEndian1},
	{}
};

$InnerClassInfo _VarHandleByteArrayAsLongs_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleByteArrayAsLongs$ByteBufferHandle", "java.lang.invoke.VarHandleByteArrayAsLongs", "ByteBufferHandle", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleByteArrayAsLongs$ArrayHandle", "java.lang.invoke.VarHandleByteArrayAsLongs", "ArrayHandle", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleByteArrayAsLongs$ByteArrayViewVarHandle", "java.lang.invoke.VarHandleByteArrayAsLongs", "ByteArrayViewVarHandle", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _VarHandleByteArrayAsLongs_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandleByteArrayAsLongs",
	"java.lang.invoke.VarHandleByteArrayBase",
	nullptr,
	_VarHandleByteArrayAsLongs_FieldInfo_,
	_VarHandleByteArrayAsLongs_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleByteArrayAsLongs_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleByteArrayAsLongs$ByteBufferHandle,java.lang.invoke.VarHandleByteArrayAsLongs$ArrayHandle,java.lang.invoke.VarHandleByteArrayAsLongs$ByteArrayViewVarHandle"
};

$Object* allocate$VarHandleByteArrayAsLongs($Class* clazz) {
	return $of($alloc(VarHandleByteArrayAsLongs));
}

$JavaNioAccess* VarHandleByteArrayAsLongs::NIO_ACCESS = nullptr;
$ScopedMemoryAccess* VarHandleByteArrayAsLongs::SCOPED_MEMORY_ACCESS = nullptr;

void VarHandleByteArrayAsLongs::init$() {
	$VarHandleByteArrayBase::init$();
}

int64_t VarHandleByteArrayAsLongs::convEndian(bool big, int64_t n) {
	$init(VarHandleByteArrayAsLongs);
	$init($VarHandleByteArrayBase);
	return big == $VarHandleByteArrayBase::BE ? n : $Long::reverseBytes(n);
}

void clinit$VarHandleByteArrayAsLongs($Class* class$) {
	$assignStatic(VarHandleByteArrayAsLongs::NIO_ACCESS, $SharedSecrets::getJavaNioAccess());
	$assignStatic(VarHandleByteArrayAsLongs::SCOPED_MEMORY_ACCESS, $ScopedMemoryAccess::getScopedMemoryAccess());
}

VarHandleByteArrayAsLongs::VarHandleByteArrayAsLongs() {
}

$Class* VarHandleByteArrayAsLongs::load$($String* name, bool initialize) {
	$loadClass(VarHandleByteArrayAsLongs, name, initialize, &_VarHandleByteArrayAsLongs_ClassInfo_, clinit$VarHandleByteArrayAsLongs, allocate$VarHandleByteArrayAsLongs);
	return class$;
}

$Class* VarHandleByteArrayAsLongs::class$ = nullptr;

		} // invoke
	} // lang
} // java