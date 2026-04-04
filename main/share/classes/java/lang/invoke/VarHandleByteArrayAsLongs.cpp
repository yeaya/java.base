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

void VarHandleByteArrayAsLongs::clinit$($Class* clazz) {
	$assignStatic(VarHandleByteArrayAsLongs::NIO_ACCESS, $SharedSecrets::getJavaNioAccess());
	$assignStatic(VarHandleByteArrayAsLongs::SCOPED_MEMORY_ACCESS, $ScopedMemoryAccess::getScopedMemoryAccess());
}

VarHandleByteArrayAsLongs::VarHandleByteArrayAsLongs() {
}

$Class* VarHandleByteArrayAsLongs::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NIO_ACCESS", "Ljdk/internal/access/JavaNioAccess;", nullptr, $STATIC | $FINAL, $staticField(VarHandleByteArrayAsLongs, NIO_ACCESS)},
		{"ALIGN", "I", nullptr, $STATIC | $FINAL, $constField(VarHandleByteArrayAsLongs, ALIGN)},
		{"SCOPED_MEMORY_ACCESS", "Ljdk/internal/misc/ScopedMemoryAccess;", nullptr, $STATIC | $FINAL, $staticField(VarHandleByteArrayAsLongs, SCOPED_MEMORY_ACCESS)},
		{}
	};
	$CompoundAttribute convEndianmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(VarHandleByteArrayAsLongs, init$, void)},
		{"convEndian", "(ZJ)J", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsLongs, convEndian, int64_t, bool, int64_t), nullptr, nullptr, convEndianmethodAnnotations$$},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleByteArrayAsLongs$ByteBufferHandle", "java.lang.invoke.VarHandleByteArrayAsLongs", "ByteBufferHandle", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleByteArrayAsLongs$ArrayHandle", "java.lang.invoke.VarHandleByteArrayAsLongs", "ArrayHandle", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleByteArrayAsLongs$ByteArrayViewVarHandle", "java.lang.invoke.VarHandleByteArrayAsLongs", "ByteArrayViewVarHandle", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.VarHandleByteArrayAsLongs",
		"java.lang.invoke.VarHandleByteArrayBase",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.lang.invoke.VarHandleByteArrayAsLongs$ByteBufferHandle,java.lang.invoke.VarHandleByteArrayAsLongs$ArrayHandle,java.lang.invoke.VarHandleByteArrayAsLongs$ByteArrayViewVarHandle"
	};
	$loadClass(VarHandleByteArrayAsLongs, name, initialize, &classInfo$$, VarHandleByteArrayAsLongs::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleByteArrayAsLongs);
	});
	return class$;
}

$Class* VarHandleByteArrayAsLongs::class$ = nullptr;

		} // invoke
	} // lang
} // java