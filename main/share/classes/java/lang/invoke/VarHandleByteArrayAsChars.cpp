#include <java/lang/invoke/VarHandleByteArrayAsChars.h>
#include <java/lang/invoke/VarHandleByteArrayBase.h>
#include <jdk/internal/access/JavaNioAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jdk/internal/misc/ScopedMemoryAccess.h>
#include <jcpp.h>

#undef ALIGN
#undef BE
#undef NIO_ACCESS
#undef SCOPED_MEMORY_ACCESS

using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $VarHandleByteArrayBase = ::java::lang::invoke::VarHandleByteArrayBase;
using $JavaNioAccess = ::jdk::internal::access::JavaNioAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $ScopedMemoryAccess = ::jdk::internal::misc::ScopedMemoryAccess;

namespace java {
	namespace lang {
		namespace invoke {

$JavaNioAccess* VarHandleByteArrayAsChars::NIO_ACCESS = nullptr;
$ScopedMemoryAccess* VarHandleByteArrayAsChars::SCOPED_MEMORY_ACCESS = nullptr;

void VarHandleByteArrayAsChars::init$() {
	$VarHandleByteArrayBase::init$();
}

char16_t VarHandleByteArrayAsChars::convEndian(bool big, char16_t n) {
	$init(VarHandleByteArrayAsChars);
	$init($VarHandleByteArrayBase);
	return big == $VarHandleByteArrayBase::BE ? n : $Character::reverseBytes(n);
}

void VarHandleByteArrayAsChars::clinit$($Class* clazz) {
	$assignStatic(VarHandleByteArrayAsChars::NIO_ACCESS, $SharedSecrets::getJavaNioAccess());
	$assignStatic(VarHandleByteArrayAsChars::SCOPED_MEMORY_ACCESS, $ScopedMemoryAccess::getScopedMemoryAccess());
}

VarHandleByteArrayAsChars::VarHandleByteArrayAsChars() {
}

$Class* VarHandleByteArrayAsChars::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NIO_ACCESS", "Ljdk/internal/access/JavaNioAccess;", nullptr, $STATIC | $FINAL, $staticField(VarHandleByteArrayAsChars, NIO_ACCESS)},
		{"ALIGN", "I", nullptr, $STATIC | $FINAL, $constField(VarHandleByteArrayAsChars, ALIGN)},
		{"SCOPED_MEMORY_ACCESS", "Ljdk/internal/misc/ScopedMemoryAccess;", nullptr, $STATIC | $FINAL, $staticField(VarHandleByteArrayAsChars, SCOPED_MEMORY_ACCESS)},
		{}
	};
	$CompoundAttribute convEndianmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(VarHandleByteArrayAsChars, init$, void)},
		{"convEndian", "(ZC)C", nullptr, $STATIC, $staticMethod(VarHandleByteArrayAsChars, convEndian, char16_t, bool, char16_t), nullptr, nullptr, convEndianmethodAnnotations$$},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleByteArrayAsChars$ByteBufferHandle", "java.lang.invoke.VarHandleByteArrayAsChars", "ByteBufferHandle", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleByteArrayAsChars$ArrayHandle", "java.lang.invoke.VarHandleByteArrayAsChars", "ArrayHandle", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleByteArrayAsChars$ByteArrayViewVarHandle", "java.lang.invoke.VarHandleByteArrayAsChars", "ByteArrayViewVarHandle", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.VarHandleByteArrayAsChars",
		"java.lang.invoke.VarHandleByteArrayBase",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.lang.invoke.VarHandleByteArrayAsChars$ByteBufferHandle,java.lang.invoke.VarHandleByteArrayAsChars$ArrayHandle,java.lang.invoke.VarHandleByteArrayAsChars$ByteArrayViewVarHandle"
	};
	$loadClass(VarHandleByteArrayAsChars, name, initialize, &classInfo$$, VarHandleByteArrayAsChars::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleByteArrayAsChars);
	});
	return class$;
}

$Class* VarHandleByteArrayAsChars::class$ = nullptr;

		} // invoke
	} // lang
} // java