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

void VarHandleByteArrayAsShorts::clinit$($Class* clazz) {
	$assignStatic(VarHandleByteArrayAsShorts::NIO_ACCESS, $SharedSecrets::getJavaNioAccess());
	$assignStatic(VarHandleByteArrayAsShorts::SCOPED_MEMORY_ACCESS, $ScopedMemoryAccess::getScopedMemoryAccess());
}

VarHandleByteArrayAsShorts::VarHandleByteArrayAsShorts() {
}

$Class* VarHandleByteArrayAsShorts::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NIO_ACCESS", "Ljdk/internal/access/JavaNioAccess;", nullptr, $STATIC | $FINAL, $staticField(VarHandleByteArrayAsShorts, NIO_ACCESS)},
		{"ALIGN", "I", nullptr, $STATIC | $FINAL, $constField(VarHandleByteArrayAsShorts, ALIGN)},
		{"SCOPED_MEMORY_ACCESS", "Ljdk/internal/misc/ScopedMemoryAccess;", nullptr, $STATIC | $FINAL, $staticField(VarHandleByteArrayAsShorts, SCOPED_MEMORY_ACCESS)},
		{}
	};
	$CompoundAttribute convEndianmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(VarHandleByteArrayAsShorts, init$, void)},
		{"convEndian", "(ZS)S", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsShorts, convEndian, int16_t, bool, int16_t), nullptr, nullptr, convEndianmethodAnnotations$$},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleByteArrayAsShorts$ByteBufferHandle", "java.lang.invoke.VarHandleByteArrayAsShorts", "ByteBufferHandle", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleByteArrayAsShorts$ArrayHandle", "java.lang.invoke.VarHandleByteArrayAsShorts", "ArrayHandle", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleByteArrayAsShorts$ByteArrayViewVarHandle", "java.lang.invoke.VarHandleByteArrayAsShorts", "ByteArrayViewVarHandle", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.VarHandleByteArrayAsShorts",
		"java.lang.invoke.VarHandleByteArrayBase",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.lang.invoke.VarHandleByteArrayAsShorts$ByteBufferHandle,java.lang.invoke.VarHandleByteArrayAsShorts$ArrayHandle,java.lang.invoke.VarHandleByteArrayAsShorts$ByteArrayViewVarHandle"
	};
	$loadClass(VarHandleByteArrayAsShorts, name, initialize, &classInfo$$, VarHandleByteArrayAsShorts::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleByteArrayAsShorts);
	});
	return class$;
}

$Class* VarHandleByteArrayAsShorts::class$ = nullptr;

		} // invoke
	} // lang
} // java