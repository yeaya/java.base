#include <jdk/internal/org/objectweb/asm/MethodVisitor.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/org/objectweb/asm/AnnotationVisitor.h>
#include <jdk/internal/org/objectweb/asm/Attribute.h>
#include <jdk/internal/org/objectweb/asm/ConstantDynamic.h>
#include <jdk/internal/org/objectweb/asm/Constants.h>
#include <jdk/internal/org/objectweb/asm/Handle.h>
#include <jdk/internal/org/objectweb/asm/Label.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/Type.h>
#include <jdk/internal/org/objectweb/asm/TypePath.h>
#include <jcpp.h>

#undef ASM4
#undef ASM5
#undef ASM6
#undef ASM7
#undef ASM8
#undef ASM9_EXPERIMENTAL
#undef INVOKEINTERFACE
#undef METHOD
#undef REQUIRES_ASM5
#undef SOURCE_DEPRECATED
#undef SOURCE_MASK

using $LabelArray = $Array<::jdk::internal::org::objectweb::asm$::Label>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $AnnotationVisitor = ::jdk::internal::org::objectweb::asm$::AnnotationVisitor;
using $Attribute = ::jdk::internal::org::objectweb::asm$::Attribute;
using $ConstantDynamic = ::jdk::internal::org::objectweb::asm$::ConstantDynamic;
using $Constants = ::jdk::internal::org::objectweb::asm$::Constants;
using $Handle = ::jdk::internal::org::objectweb::asm$::Handle;
using $Label = ::jdk::internal::org::objectweb::asm$::Label;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $Type = ::jdk::internal::org::objectweb::asm$::Type;
using $TypePath = ::jdk::internal::org::objectweb::asm$::TypePath;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {

$CompoundAttribute _MethodVisitor_MethodAnnotations_visitMethodInsn23[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _MethodVisitor_FieldInfo_[] = {
	{"REQUIRES_ASM5", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MethodVisitor, REQUIRES_ASM5)},
	{"api", "I", nullptr, $PROTECTED | $FINAL, $field(MethodVisitor, api)},
	{"mv", "Ljdk/internal/org/objectweb/asm/MethodVisitor;", nullptr, $PROTECTED, $field(MethodVisitor, mv)},
	{}
};

$MethodInfo _MethodVisitor_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(MethodVisitor::*)(int32_t)>(&MethodVisitor::init$))},
	{"<init>", "(ILjdk/internal/org/objectweb/asm/MethodVisitor;)V", nullptr, $PUBLIC, $method(static_cast<void(MethodVisitor::*)(int32_t,MethodVisitor*)>(&MethodVisitor::init$))},
	{"visitAnnotableParameterCount", "(IZ)V", nullptr, $PUBLIC},
	{"visitAnnotation", "(Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC},
	{"visitAnnotationDefault", "()Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC},
	{"visitAttribute", "(Ljdk/internal/org/objectweb/asm/Attribute;)V", nullptr, $PUBLIC},
	{"visitCode", "()V", nullptr, $PUBLIC},
	{"visitEnd", "()V", nullptr, $PUBLIC},
	{"visitFieldInsn", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"visitFrame", "(II[Ljava/lang/Object;I[Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"visitIincInsn", "(II)V", nullptr, $PUBLIC},
	{"visitInsn", "(I)V", nullptr, $PUBLIC},
	{"visitInsnAnnotation", "(ILjdk/internal/org/objectweb/asm/TypePath;Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC},
	{"visitIntInsn", "(II)V", nullptr, $PUBLIC},
	{"visitInvokeDynamicInsn", "(Ljava/lang/String;Ljava/lang/String;Ljdk/internal/org/objectweb/asm/Handle;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT},
	{"visitJumpInsn", "(ILjdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC},
	{"visitLabel", "(Ljdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC},
	{"visitLdcInsn", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"visitLineNumber", "(ILjdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC},
	{"visitLocalVariable", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljdk/internal/org/objectweb/asm/Label;Ljdk/internal/org/objectweb/asm/Label;I)V", nullptr, $PUBLIC},
	{"visitLocalVariableAnnotation", "(ILjdk/internal/org/objectweb/asm/TypePath;[Ljdk/internal/org/objectweb/asm/Label;[Ljdk/internal/org/objectweb/asm/Label;[ILjava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC},
	{"visitLookupSwitchInsn", "(Ljdk/internal/org/objectweb/asm/Label;[I[Ljdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC},
	{"visitMaxs", "(II)V", nullptr, $PUBLIC},
	{"visitMethodInsn", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _MethodVisitor_MethodAnnotations_visitMethodInsn23},
	{"visitMethodInsn", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PUBLIC},
	{"visitMultiANewArrayInsn", "(Ljava/lang/String;I)V", nullptr, $PUBLIC},
	{"visitParameter", "(Ljava/lang/String;I)V", nullptr, $PUBLIC},
	{"visitParameterAnnotation", "(ILjava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC},
	{"visitTableSwitchInsn", "(IILjdk/internal/org/objectweb/asm/Label;[Ljdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC | $TRANSIENT},
	{"visitTryCatchAnnotation", "(ILjdk/internal/org/objectweb/asm/TypePath;Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC},
	{"visitTryCatchBlock", "(Ljdk/internal/org/objectweb/asm/Label;Ljdk/internal/org/objectweb/asm/Label;Ljdk/internal/org/objectweb/asm/Label;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"visitTypeAnnotation", "(ILjdk/internal/org/objectweb/asm/TypePath;Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC},
	{"visitTypeInsn", "(ILjava/lang/String;)V", nullptr, $PUBLIC},
	{"visitVarInsn", "(II)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MethodVisitor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"jdk.internal.org.objectweb.asm.MethodVisitor",
	"java.lang.Object",
	nullptr,
	_MethodVisitor_FieldInfo_,
	_MethodVisitor_MethodInfo_
};

$Object* allocate$MethodVisitor($Class* clazz) {
	return $of($alloc(MethodVisitor));
}

$String* MethodVisitor::REQUIRES_ASM5 = nullptr;

void MethodVisitor::init$(int32_t api) {
	MethodVisitor::init$(api, nullptr);
}

void MethodVisitor::init$(int32_t api, MethodVisitor* methodVisitor) {
	if (api != $Opcodes::ASM8 && api != $Opcodes::ASM7 && api != $Opcodes::ASM6 && api != $Opcodes::ASM5 && api != $Opcodes::ASM4 && api != $Opcodes::ASM9_EXPERIMENTAL) {
		$throwNew($IllegalArgumentException, $$str({"Unsupported api "_s, $$str(api)}));
	}
	if (api == $Opcodes::ASM9_EXPERIMENTAL) {
		$Constants::checkAsmExperimental(this);
	}
	this->api = api;
	$set(this, mv, methodVisitor);
}

void MethodVisitor::visitParameter($String* name, int32_t access) {
	if (this->api < $Opcodes::ASM5) {
		$throwNew($UnsupportedOperationException, MethodVisitor::REQUIRES_ASM5);
	}
	if (this->mv != nullptr) {
		$nc(this->mv)->visitParameter(name, access);
	}
}

$AnnotationVisitor* MethodVisitor::visitAnnotationDefault() {
	if (this->mv != nullptr) {
		return $nc(this->mv)->visitAnnotationDefault();
	}
	return nullptr;
}

$AnnotationVisitor* MethodVisitor::visitAnnotation($String* descriptor, bool visible) {
	if (this->mv != nullptr) {
		return $nc(this->mv)->visitAnnotation(descriptor, visible);
	}
	return nullptr;
}

$AnnotationVisitor* MethodVisitor::visitTypeAnnotation(int32_t typeRef, $TypePath* typePath, $String* descriptor, bool visible) {
	if (this->api < $Opcodes::ASM5) {
		$throwNew($UnsupportedOperationException, MethodVisitor::REQUIRES_ASM5);
	}
	if (this->mv != nullptr) {
		return $nc(this->mv)->visitTypeAnnotation(typeRef, typePath, descriptor, visible);
	}
	return nullptr;
}

void MethodVisitor::visitAnnotableParameterCount(int32_t parameterCount, bool visible) {
	if (this->mv != nullptr) {
		$nc(this->mv)->visitAnnotableParameterCount(parameterCount, visible);
	}
}

$AnnotationVisitor* MethodVisitor::visitParameterAnnotation(int32_t parameter, $String* descriptor, bool visible) {
	if (this->mv != nullptr) {
		return $nc(this->mv)->visitParameterAnnotation(parameter, descriptor, visible);
	}
	return nullptr;
}

void MethodVisitor::visitAttribute($Attribute* attribute) {
	if (this->mv != nullptr) {
		$nc(this->mv)->visitAttribute(attribute);
	}
}

void MethodVisitor::visitCode() {
	if (this->mv != nullptr) {
		$nc(this->mv)->visitCode();
	}
}

void MethodVisitor::visitFrame(int32_t type, int32_t numLocal, $ObjectArray* local, int32_t numStack, $ObjectArray* stack) {
	if (this->mv != nullptr) {
		$nc(this->mv)->visitFrame(type, numLocal, local, numStack, stack);
	}
}

void MethodVisitor::visitInsn(int32_t opcode) {
	if (this->mv != nullptr) {
		$nc(this->mv)->visitInsn(opcode);
	}
}

void MethodVisitor::visitIntInsn(int32_t opcode, int32_t operand) {
	if (this->mv != nullptr) {
		$nc(this->mv)->visitIntInsn(opcode, operand);
	}
}

void MethodVisitor::visitVarInsn(int32_t opcode, int32_t var) {
	if (this->mv != nullptr) {
		$nc(this->mv)->visitVarInsn(opcode, var);
	}
}

void MethodVisitor::visitTypeInsn(int32_t opcode, $String* type) {
	if (this->mv != nullptr) {
		$nc(this->mv)->visitTypeInsn(opcode, type);
	}
}

void MethodVisitor::visitFieldInsn(int32_t opcode, $String* owner, $String* name, $String* descriptor) {
	if (this->mv != nullptr) {
		$nc(this->mv)->visitFieldInsn(opcode, owner, name, descriptor);
	}
}

void MethodVisitor::visitMethodInsn(int32_t opcode, $String* owner, $String* name, $String* descriptor) {
	int32_t opcodeAndSource = opcode | (this->api < $Opcodes::ASM5 ? $Opcodes::SOURCE_DEPRECATED : 0);
	visitMethodInsn(opcodeAndSource, owner, name, descriptor, opcode == $Opcodes::INVOKEINTERFACE);
}

void MethodVisitor::visitMethodInsn(int32_t opcode, $String* owner, $String* name, $String* descriptor, bool isInterface) {
	if (this->api < $Opcodes::ASM5 && ((int32_t)(opcode & (uint32_t)$Opcodes::SOURCE_DEPRECATED)) == 0) {
		if (isInterface != (opcode == $Opcodes::INVOKEINTERFACE)) {
			$throwNew($UnsupportedOperationException, "INVOKESPECIAL/STATIC on interfaces requires ASM5"_s);
		}
		visitMethodInsn(opcode, owner, name, descriptor);
		return;
	}
	if (this->mv != nullptr) {
		$nc(this->mv)->visitMethodInsn((int32_t)(opcode & (uint32_t)~$Opcodes::SOURCE_MASK), owner, name, descriptor, isInterface);
	}
}

void MethodVisitor::visitInvokeDynamicInsn($String* name, $String* descriptor, $Handle* bootstrapMethodHandle, $ObjectArray* bootstrapMethodArguments) {
	if (this->api < $Opcodes::ASM5) {
		$throwNew($UnsupportedOperationException, MethodVisitor::REQUIRES_ASM5);
	}
	if (this->mv != nullptr) {
		$nc(this->mv)->visitInvokeDynamicInsn(name, descriptor, bootstrapMethodHandle, bootstrapMethodArguments);
	}
}

void MethodVisitor::visitJumpInsn(int32_t opcode, $Label* label) {
	if (this->mv != nullptr) {
		$nc(this->mv)->visitJumpInsn(opcode, label);
	}
}

void MethodVisitor::visitLabel($Label* label) {
	if (this->mv != nullptr) {
		$nc(this->mv)->visitLabel(label);
	}
}

void MethodVisitor::visitLdcInsn(Object$* value) {
	if (this->api < $Opcodes::ASM5 && ($instanceOf($Handle, value) || ($instanceOf($Type, value) && $nc(($cast($Type, value)))->getSort() == $Type::METHOD))) {
		$throwNew($UnsupportedOperationException, MethodVisitor::REQUIRES_ASM5);
	}
	if (this->api < $Opcodes::ASM7 && $instanceOf($ConstantDynamic, value)) {
		$throwNew($UnsupportedOperationException, "This feature requires ASM7"_s);
	}
	if (this->mv != nullptr) {
		$nc(this->mv)->visitLdcInsn(value);
	}
}

void MethodVisitor::visitIincInsn(int32_t var, int32_t increment) {
	if (this->mv != nullptr) {
		$nc(this->mv)->visitIincInsn(var, increment);
	}
}

void MethodVisitor::visitTableSwitchInsn(int32_t min, int32_t max, $Label* dflt, $LabelArray* labels) {
	if (this->mv != nullptr) {
		$nc(this->mv)->visitTableSwitchInsn(min, max, dflt, labels);
	}
}

void MethodVisitor::visitLookupSwitchInsn($Label* dflt, $ints* keys, $LabelArray* labels) {
	if (this->mv != nullptr) {
		$nc(this->mv)->visitLookupSwitchInsn(dflt, keys, labels);
	}
}

void MethodVisitor::visitMultiANewArrayInsn($String* descriptor, int32_t numDimensions) {
	if (this->mv != nullptr) {
		$nc(this->mv)->visitMultiANewArrayInsn(descriptor, numDimensions);
	}
}

$AnnotationVisitor* MethodVisitor::visitInsnAnnotation(int32_t typeRef, $TypePath* typePath, $String* descriptor, bool visible) {
	if (this->api < $Opcodes::ASM5) {
		$throwNew($UnsupportedOperationException, MethodVisitor::REQUIRES_ASM5);
	}
	if (this->mv != nullptr) {
		return $nc(this->mv)->visitInsnAnnotation(typeRef, typePath, descriptor, visible);
	}
	return nullptr;
}

void MethodVisitor::visitTryCatchBlock($Label* start, $Label* end, $Label* handler, $String* type) {
	if (this->mv != nullptr) {
		$nc(this->mv)->visitTryCatchBlock(start, end, handler, type);
	}
}

$AnnotationVisitor* MethodVisitor::visitTryCatchAnnotation(int32_t typeRef, $TypePath* typePath, $String* descriptor, bool visible) {
	if (this->api < $Opcodes::ASM5) {
		$throwNew($UnsupportedOperationException, MethodVisitor::REQUIRES_ASM5);
	}
	if (this->mv != nullptr) {
		return $nc(this->mv)->visitTryCatchAnnotation(typeRef, typePath, descriptor, visible);
	}
	return nullptr;
}

void MethodVisitor::visitLocalVariable($String* name, $String* descriptor, $String* signature, $Label* start, $Label* end, int32_t index) {
	if (this->mv != nullptr) {
		$nc(this->mv)->visitLocalVariable(name, descriptor, signature, start, end, index);
	}
}

$AnnotationVisitor* MethodVisitor::visitLocalVariableAnnotation(int32_t typeRef, $TypePath* typePath, $LabelArray* start, $LabelArray* end, $ints* index, $String* descriptor, bool visible) {
	if (this->api < $Opcodes::ASM5) {
		$throwNew($UnsupportedOperationException, MethodVisitor::REQUIRES_ASM5);
	}
	if (this->mv != nullptr) {
		return $nc(this->mv)->visitLocalVariableAnnotation(typeRef, typePath, start, end, index, descriptor, visible);
	}
	return nullptr;
}

void MethodVisitor::visitLineNumber(int32_t line, $Label* start) {
	if (this->mv != nullptr) {
		$nc(this->mv)->visitLineNumber(line, start);
	}
}

void MethodVisitor::visitMaxs(int32_t maxStack, int32_t maxLocals) {
	if (this->mv != nullptr) {
		$nc(this->mv)->visitMaxs(maxStack, maxLocals);
	}
}

void MethodVisitor::visitEnd() {
	if (this->mv != nullptr) {
		$nc(this->mv)->visitEnd();
	}
}

MethodVisitor::MethodVisitor() {
}

void clinit$MethodVisitor($Class* class$) {
	$assignStatic(MethodVisitor::REQUIRES_ASM5, "This feature requires ASM5"_s);
}

$Class* MethodVisitor::load$($String* name, bool initialize) {
	$loadClass(MethodVisitor, name, initialize, &_MethodVisitor_ClassInfo_, clinit$MethodVisitor, allocate$MethodVisitor);
	return class$;
}

$Class* MethodVisitor::class$ = nullptr;

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk