#include <jdk/internal/org/objectweb/asm/commons/StaticInitMerger.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/org/objectweb/asm/ClassVisitor.h>
#include <jdk/internal/org/objectweb/asm/MethodVisitor.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jcpp.h>

#undef ACC_PRIVATE
#undef ACC_STATIC
#undef ASM8
#undef INVOKESTATIC
#undef RETURN

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClassVisitor = ::jdk::internal::org::objectweb::asm$::ClassVisitor;
using $MethodVisitor = ::jdk::internal::org::objectweb::asm$::MethodVisitor;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace commons {

$FieldInfo _StaticInitMerger_FieldInfo_[] = {
	{"owner", "Ljava/lang/String;", nullptr, $PRIVATE, $field(StaticInitMerger, owner)},
	{"renamedClinitMethodPrefix", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(StaticInitMerger, renamedClinitMethodPrefix)},
	{"numClinitMethods", "I", nullptr, $PRIVATE, $field(StaticInitMerger, numClinitMethods)},
	{"mergedClinitVisitor", "Ljdk/internal/org/objectweb/asm/MethodVisitor;", nullptr, $PRIVATE, $field(StaticInitMerger, mergedClinitVisitor)},
	{}
};

$MethodInfo _StaticInitMerger_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljdk/internal/org/objectweb/asm/ClassVisitor;)V", nullptr, $PUBLIC, $method(static_cast<void(StaticInitMerger::*)($String*,$ClassVisitor*)>(&StaticInitMerger::init$))},
	{"<init>", "(ILjava/lang/String;Ljdk/internal/org/objectweb/asm/ClassVisitor;)V", nullptr, $PROTECTED, $method(static_cast<void(StaticInitMerger::*)(int32_t,$String*,$ClassVisitor*)>(&StaticInitMerger::init$))},
	{"visit", "(IILjava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"visitEnd", "()V", nullptr, $PUBLIC},
	{"visitMethod", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)Ljdk/internal/org/objectweb/asm/MethodVisitor;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _StaticInitMerger_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.commons.StaticInitMerger",
	"jdk.internal.org.objectweb.asm.ClassVisitor",
	nullptr,
	_StaticInitMerger_FieldInfo_,
	_StaticInitMerger_MethodInfo_
};

$Object* allocate$StaticInitMerger($Class* clazz) {
	return $of($alloc(StaticInitMerger));
}

void StaticInitMerger::init$($String* prefix, $ClassVisitor* classVisitor) {
	StaticInitMerger::init$($Opcodes::ASM8, prefix, classVisitor);
}

void StaticInitMerger::init$(int32_t api, $String* prefix, $ClassVisitor* classVisitor) {
	$ClassVisitor::init$(api, classVisitor);
	$set(this, renamedClinitMethodPrefix, prefix);
}

void StaticInitMerger::visit(int32_t version, int32_t access, $String* name, $String* signature, $String* superName, $StringArray* interfaces) {
	$ClassVisitor::visit(version, access, name, signature, superName, interfaces);
	$set(this, owner, name);
}

$MethodVisitor* StaticInitMerger::visitMethod(int32_t access, $String* name, $String* descriptor, $String* signature, $StringArray* exceptions) {
	$var($MethodVisitor, methodVisitor, nullptr);
	if ("<clinit>"_s->equals(name)) {
		int32_t newAccess = $Opcodes::ACC_PRIVATE + $Opcodes::ACC_STATIC;
		$var($String, var$0, this->renamedClinitMethodPrefix);
		$var($String, newName, $concat(var$0, $$str(this->numClinitMethods++)));
		$assign(methodVisitor, $ClassVisitor::visitMethod(newAccess, newName, descriptor, signature, exceptions));
		if (this->mergedClinitVisitor == nullptr) {
			$set(this, mergedClinitVisitor, $ClassVisitor::visitMethod(newAccess, name, descriptor, nullptr, nullptr));
		}
		$nc(this->mergedClinitVisitor)->visitMethodInsn($Opcodes::INVOKESTATIC, this->owner, newName, descriptor, false);
	} else {
		$assign(methodVisitor, $ClassVisitor::visitMethod(access, name, descriptor, signature, exceptions));
	}
	return methodVisitor;
}

void StaticInitMerger::visitEnd() {
	if (this->mergedClinitVisitor != nullptr) {
		$nc(this->mergedClinitVisitor)->visitInsn($Opcodes::RETURN);
		$nc(this->mergedClinitVisitor)->visitMaxs(0, 0);
	}
	$ClassVisitor::visitEnd();
}

StaticInitMerger::StaticInitMerger() {
}

$Class* StaticInitMerger::load$($String* name, bool initialize) {
	$loadClass(StaticInitMerger, name, initialize, &_StaticInitMerger_ClassInfo_, allocate$StaticInitMerger);
	return class$;
}

$Class* StaticInitMerger::class$ = nullptr;

					} // commons
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk