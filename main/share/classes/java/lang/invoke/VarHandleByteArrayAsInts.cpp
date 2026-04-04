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

void VarHandleByteArrayAsInts::clinit$($Class* clazz) {
	$assignStatic(VarHandleByteArrayAsInts::NIO_ACCESS, $SharedSecrets::getJavaNioAccess());
	$assignStatic(VarHandleByteArrayAsInts::SCOPED_MEMORY_ACCESS, $ScopedMemoryAccess::getScopedMemoryAccess());
}

VarHandleByteArrayAsInts::VarHandleByteArrayAsInts() {
}

$Class* VarHandleByteArrayAsInts::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NIO_ACCESS", "Ljdk/internal/access/JavaNioAccess;", nullptr, $STATIC | $FINAL, $staticField(VarHandleByteArrayAsInts, NIO_ACCESS)},
		{"ALIGN", "I", nullptr, $STATIC | $FINAL, $constField(VarHandleByteArrayAsInts, ALIGN)},
		{"SCOPED_MEMORY_ACCESS", "Ljdk/internal/misc/ScopedMemoryAccess;", nullptr, $STATIC | $FINAL, $staticField(VarHandleByteArrayAsInts, SCOPED_MEMORY_ACCESS)},
		{}
	};
	$CompoundAttribute convEndianmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(VarHandleByteArrayAsInts, init$, void)},
		{"convEndian", "(ZI)I", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsInts, convEndian, int32_t, bool, int32_t), nullptr, nullptr, convEndianmethodAnnotations$$},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleByteArrayAsInts$ByteBufferHandle", "java.lang.invoke.VarHandleByteArrayAsInts", "ByteBufferHandle", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleByteArrayAsInts$ArrayHandle", "java.lang.invoke.VarHandleByteArrayAsInts", "ArrayHandle", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleByteArrayAsInts$ByteArrayViewVarHandle", "java.lang.invoke.VarHandleByteArrayAsInts", "ByteArrayViewVarHandle", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.VarHandleByteArrayAsInts",
		"java.lang.invoke.VarHandleByteArrayBase",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.lang.invoke.VarHandleByteArrayAsInts$ByteBufferHandle,java.lang.invoke.VarHandleByteArrayAsInts$ArrayHandle,java.lang.invoke.VarHandleByteArrayAsInts$ByteArrayViewVarHandle"
	};
	$loadClass(VarHandleByteArrayAsInts, name, initialize, &classInfo$$, VarHandleByteArrayAsInts::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleByteArrayAsInts);
	});
	return class$;
}

$Class* VarHandleByteArrayAsInts::class$ = nullptr;

		} // invoke
	} // lang
} // java