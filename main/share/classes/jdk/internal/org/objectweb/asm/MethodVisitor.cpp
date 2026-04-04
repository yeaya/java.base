#include <jdk/internal/org/objectweb/asm/MethodVisitor.h>
#include <java/lang/UnsupportedOperationException.h>
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

$String* MethodVisitor::REQUIRES_ASM5 = nullptr;

void MethodVisitor::init$(int32_t api) {
	MethodVisitor::init$(api, nullptr);
}

void MethodVisitor::init$(int32_t api, MethodVisitor* methodVisitor) {
	$useLocalObjectStack();
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
		this->mv->visitParameter(name, access);
	}
}

$AnnotationVisitor* MethodVisitor::visitAnnotationDefault() {
	if (this->mv != nullptr) {
		return this->mv->visitAnnotationDefault();
	}
	return nullptr;
}

$AnnotationVisitor* MethodVisitor::visitAnnotation($String* descriptor, bool visible) {
	if (this->mv != nullptr) {
		return this->mv->visitAnnotation(descriptor, visible);
	}
	return nullptr;
}

$AnnotationVisitor* MethodVisitor::visitTypeAnnotation(int32_t typeRef, $TypePath* typePath, $String* descriptor, bool visible) {
	if (this->api < $Opcodes::ASM5) {
		$throwNew($UnsupportedOperationException, MethodVisitor::REQUIRES_ASM5);
	}
	if (this->mv != nullptr) {
		return this->mv->visitTypeAnnotation(typeRef, typePath, descriptor, visible);
	}
	return nullptr;
}

void MethodVisitor::visitAnnotableParameterCount(int32_t parameterCount, bool visible) {
	if (this->mv != nullptr) {
		this->mv->visitAnnotableParameterCount(parameterCount, visible);
	}
}

$AnnotationVisitor* MethodVisitor::visitParameterAnnotation(int32_t parameter, $String* descriptor, bool visible) {
	if (this->mv != nullptr) {
		return this->mv->visitParameterAnnotation(parameter, descriptor, visible);
	}
	return nullptr;
}

void MethodVisitor::visitAttribute($Attribute* attribute) {
	if (this->mv != nullptr) {
		this->mv->visitAttribute(attribute);
	}
}

void MethodVisitor::visitCode() {
	if (this->mv != nullptr) {
		this->mv->visitCode();
	}
}

void MethodVisitor::visitFrame(int32_t type, int32_t numLocal, $ObjectArray* local, int32_t numStack, $ObjectArray* stack) {
	if (this->mv != nullptr) {
		this->mv->visitFrame(type, numLocal, local, numStack, stack);
	}
}

void MethodVisitor::visitInsn(int32_t opcode) {
	if (this->mv != nullptr) {
		this->mv->visitInsn(opcode);
	}
}

void MethodVisitor::visitIntInsn(int32_t opcode, int32_t operand) {
	if (this->mv != nullptr) {
		this->mv->visitIntInsn(opcode, operand);
	}
}

void MethodVisitor::visitVarInsn(int32_t opcode, int32_t var) {
	if (this->mv != nullptr) {
		this->mv->visitVarInsn(opcode, var);
	}
}

void MethodVisitor::visitTypeInsn(int32_t opcode, $String* type) {
	if (this->mv != nullptr) {
		this->mv->visitTypeInsn(opcode, type);
	}
}

void MethodVisitor::visitFieldInsn(int32_t opcode, $String* owner, $String* name, $String* descriptor) {
	if (this->mv != nullptr) {
		this->mv->visitFieldInsn(opcode, owner, name, descriptor);
	}
}

void MethodVisitor::visitMethodInsn(int32_t opcode, $String* owner, $String* name, $String* descriptor) {
	int32_t opcodeAndSource = opcode | (this->api < $Opcodes::ASM5 ? $Opcodes::SOURCE_DEPRECATED : 0);
	visitMethodInsn(opcodeAndSource, owner, name, descriptor, opcode == $Opcodes::INVOKEINTERFACE);
}

void MethodVisitor::visitMethodInsn(int32_t opcode, $String* owner, $String* name, $String* descriptor, bool isInterface) {
	if (this->api < $Opcodes::ASM5 && (opcode & $Opcodes::SOURCE_DEPRECATED) == 0) {
		if (isInterface != (opcode == $Opcodes::INVOKEINTERFACE)) {
			$throwNew($UnsupportedOperationException, "INVOKESPECIAL/STATIC on interfaces requires ASM5"_s);
		}
		visitMethodInsn(opcode, owner, name, descriptor);
		return;
	}
	if (this->mv != nullptr) {
		this->mv->visitMethodInsn(opcode & ~$Opcodes::SOURCE_MASK, owner, name, descriptor, isInterface);
	}
}

void MethodVisitor::visitInvokeDynamicInsn($String* name, $String* descriptor, $Handle* bootstrapMethodHandle, $ObjectArray* bootstrapMethodArguments) {
	if (this->api < $Opcodes::ASM5) {
		$throwNew($UnsupportedOperationException, MethodVisitor::REQUIRES_ASM5);
	}
	if (this->mv != nullptr) {
		this->mv->visitInvokeDynamicInsn(name, descriptor, bootstrapMethodHandle, bootstrapMethodArguments);
	}
}

void MethodVisitor::visitJumpInsn(int32_t opcode, $Label* label) {
	if (this->mv != nullptr) {
		this->mv->visitJumpInsn(opcode, label);
	}
}

void MethodVisitor::visitLabel($Label* label) {
	if (this->mv != nullptr) {
		this->mv->visitLabel(label);
	}
}

void MethodVisitor::visitLdcInsn(Object$* value) {
	if (this->api < $Opcodes::ASM5 && ($instanceOf($Handle, value) || ($instanceOf($Type, value) && $cast($Type, value)->getSort() == $Type::METHOD))) {
		$throwNew($UnsupportedOperationException, MethodVisitor::REQUIRES_ASM5);
	}
	if (this->api < $Opcodes::ASM7 && $instanceOf($ConstantDynamic, value)) {
		$throwNew($UnsupportedOperationException, "This feature requires ASM7"_s);
	}
	if (this->mv != nullptr) {
		this->mv->visitLdcInsn(value);
	}
}

void MethodVisitor::visitIincInsn(int32_t var, int32_t increment) {
	if (this->mv != nullptr) {
		this->mv->visitIincInsn(var, increment);
	}
}

void MethodVisitor::visitTableSwitchInsn(int32_t min, int32_t max, $Label* dflt, $LabelArray* labels) {
	if (this->mv != nullptr) {
		this->mv->visitTableSwitchInsn(min, max, dflt, labels);
	}
}

void MethodVisitor::visitLookupSwitchInsn($Label* dflt, $ints* keys, $LabelArray* labels) {
	if (this->mv != nullptr) {
		this->mv->visitLookupSwitchInsn(dflt, keys, labels);
	}
}

void MethodVisitor::visitMultiANewArrayInsn($String* descriptor, int32_t numDimensions) {
	if (this->mv != nullptr) {
		this->mv->visitMultiANewArrayInsn(descriptor, numDimensions);
	}
}

$AnnotationVisitor* MethodVisitor::visitInsnAnnotation(int32_t typeRef, $TypePath* typePath, $String* descriptor, bool visible) {
	if (this->api < $Opcodes::ASM5) {
		$throwNew($UnsupportedOperationException, MethodVisitor::REQUIRES_ASM5);
	}
	if (this->mv != nullptr) {
		return this->mv->visitInsnAnnotation(typeRef, typePath, descriptor, visible);
	}
	return nullptr;
}

void MethodVisitor::visitTryCatchBlock($Label* start, $Label* end, $Label* handler, $String* type) {
	if (this->mv != nullptr) {
		this->mv->visitTryCatchBlock(start, end, handler, type);
	}
}

$AnnotationVisitor* MethodVisitor::visitTryCatchAnnotation(int32_t typeRef, $TypePath* typePath, $String* descriptor, bool visible) {
	if (this->api < $Opcodes::ASM5) {
		$throwNew($UnsupportedOperationException, MethodVisitor::REQUIRES_ASM5);
	}
	if (this->mv != nullptr) {
		return this->mv->visitTryCatchAnnotation(typeRef, typePath, descriptor, visible);
	}
	return nullptr;
}

void MethodVisitor::visitLocalVariable($String* name, $String* descriptor, $String* signature, $Label* start, $Label* end, int32_t index) {
	if (this->mv != nullptr) {
		this->mv->visitLocalVariable(name, descriptor, signature, start, end, index);
	}
}

$AnnotationVisitor* MethodVisitor::visitLocalVariableAnnotation(int32_t typeRef, $TypePath* typePath, $LabelArray* start, $LabelArray* end, $ints* index, $String* descriptor, bool visible) {
	if (this->api < $Opcodes::ASM5) {
		$throwNew($UnsupportedOperationException, MethodVisitor::REQUIRES_ASM5);
	}
	if (this->mv != nullptr) {
		return this->mv->visitLocalVariableAnnotation(typeRef, typePath, start, end, index, descriptor, visible);
	}
	return nullptr;
}

void MethodVisitor::visitLineNumber(int32_t line, $Label* start) {
	if (this->mv != nullptr) {
		this->mv->visitLineNumber(line, start);
	}
}

void MethodVisitor::visitMaxs(int32_t maxStack, int32_t maxLocals) {
	if (this->mv != nullptr) {
		this->mv->visitMaxs(maxStack, maxLocals);
	}
}

void MethodVisitor::visitEnd() {
	if (this->mv != nullptr) {
		this->mv->visitEnd();
	}
}

MethodVisitor::MethodVisitor() {
}

void MethodVisitor::clinit$($Class* clazz) {
	$assignStatic(MethodVisitor::REQUIRES_ASM5, "This feature requires ASM5"_s);
}

$Class* MethodVisitor::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"REQUIRES_ASM5", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MethodVisitor, REQUIRES_ASM5)},
		{"api", "I", nullptr, $PROTECTED | $FINAL, $field(MethodVisitor, api)},
		{"mv", "Ljdk/internal/org/objectweb/asm/MethodVisitor;", nullptr, $PROTECTED, $field(MethodVisitor, mv)},
		{}
	};
	$CompoundAttribute visitMethodInsnmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(MethodVisitor, init$, void, int32_t)},
		{"<init>", "(ILjdk/internal/org/objectweb/asm/MethodVisitor;)V", nullptr, $PUBLIC, $method(MethodVisitor, init$, void, int32_t, MethodVisitor*)},
		{"visitAnnotableParameterCount", "(IZ)V", nullptr, $PUBLIC, $virtualMethod(MethodVisitor, visitAnnotableParameterCount, void, int32_t, bool)},
		{"visitAnnotation", "(Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC, $virtualMethod(MethodVisitor, visitAnnotation, $AnnotationVisitor*, $String*, bool)},
		{"visitAnnotationDefault", "()Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC, $virtualMethod(MethodVisitor, visitAnnotationDefault, $AnnotationVisitor*)},
		{"visitAttribute", "(Ljdk/internal/org/objectweb/asm/Attribute;)V", nullptr, $PUBLIC, $virtualMethod(MethodVisitor, visitAttribute, void, $Attribute*)},
		{"visitCode", "()V", nullptr, $PUBLIC, $virtualMethod(MethodVisitor, visitCode, void)},
		{"visitEnd", "()V", nullptr, $PUBLIC, $virtualMethod(MethodVisitor, visitEnd, void)},
		{"visitFieldInsn", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(MethodVisitor, visitFieldInsn, void, int32_t, $String*, $String*, $String*)},
		{"visitFrame", "(II[Ljava/lang/Object;I[Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(MethodVisitor, visitFrame, void, int32_t, int32_t, $ObjectArray*, int32_t, $ObjectArray*)},
		{"visitIincInsn", "(II)V", nullptr, $PUBLIC, $virtualMethod(MethodVisitor, visitIincInsn, void, int32_t, int32_t)},
		{"visitInsn", "(I)V", nullptr, $PUBLIC, $virtualMethod(MethodVisitor, visitInsn, void, int32_t)},
		{"visitInsnAnnotation", "(ILjdk/internal/org/objectweb/asm/TypePath;Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC, $virtualMethod(MethodVisitor, visitInsnAnnotation, $AnnotationVisitor*, int32_t, $TypePath*, $String*, bool)},
		{"visitIntInsn", "(II)V", nullptr, $PUBLIC, $virtualMethod(MethodVisitor, visitIntInsn, void, int32_t, int32_t)},
		{"visitInvokeDynamicInsn", "(Ljava/lang/String;Ljava/lang/String;Ljdk/internal/org/objectweb/asm/Handle;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT, $virtualMethod(MethodVisitor, visitInvokeDynamicInsn, void, $String*, $String*, $Handle*, $ObjectArray*)},
		{"visitJumpInsn", "(ILjdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC, $virtualMethod(MethodVisitor, visitJumpInsn, void, int32_t, $Label*)},
		{"visitLabel", "(Ljdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC, $virtualMethod(MethodVisitor, visitLabel, void, $Label*)},
		{"visitLdcInsn", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(MethodVisitor, visitLdcInsn, void, Object$*)},
		{"visitLineNumber", "(ILjdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC, $virtualMethod(MethodVisitor, visitLineNumber, void, int32_t, $Label*)},
		{"visitLocalVariable", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljdk/internal/org/objectweb/asm/Label;Ljdk/internal/org/objectweb/asm/Label;I)V", nullptr, $PUBLIC, $virtualMethod(MethodVisitor, visitLocalVariable, void, $String*, $String*, $String*, $Label*, $Label*, int32_t)},
		{"visitLocalVariableAnnotation", "(ILjdk/internal/org/objectweb/asm/TypePath;[Ljdk/internal/org/objectweb/asm/Label;[Ljdk/internal/org/objectweb/asm/Label;[ILjava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC, $virtualMethod(MethodVisitor, visitLocalVariableAnnotation, $AnnotationVisitor*, int32_t, $TypePath*, $LabelArray*, $LabelArray*, $ints*, $String*, bool)},
		{"visitLookupSwitchInsn", "(Ljdk/internal/org/objectweb/asm/Label;[I[Ljdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC, $virtualMethod(MethodVisitor, visitLookupSwitchInsn, void, $Label*, $ints*, $LabelArray*)},
		{"visitMaxs", "(II)V", nullptr, $PUBLIC, $virtualMethod(MethodVisitor, visitMaxs, void, int32_t, int32_t)},
		{"visitMethodInsn", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(MethodVisitor, visitMethodInsn, void, int32_t, $String*, $String*, $String*), nullptr, nullptr, visitMethodInsnmethodAnnotations$$},
		{"visitMethodInsn", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(MethodVisitor, visitMethodInsn, void, int32_t, $String*, $String*, $String*, bool)},
		{"visitMultiANewArrayInsn", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $virtualMethod(MethodVisitor, visitMultiANewArrayInsn, void, $String*, int32_t)},
		{"visitParameter", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $virtualMethod(MethodVisitor, visitParameter, void, $String*, int32_t)},
		{"visitParameterAnnotation", "(ILjava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC, $virtualMethod(MethodVisitor, visitParameterAnnotation, $AnnotationVisitor*, int32_t, $String*, bool)},
		{"visitTableSwitchInsn", "(IILjdk/internal/org/objectweb/asm/Label;[Ljdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC | $TRANSIENT, $virtualMethod(MethodVisitor, visitTableSwitchInsn, void, int32_t, int32_t, $Label*, $LabelArray*)},
		{"visitTryCatchAnnotation", "(ILjdk/internal/org/objectweb/asm/TypePath;Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC, $virtualMethod(MethodVisitor, visitTryCatchAnnotation, $AnnotationVisitor*, int32_t, $TypePath*, $String*, bool)},
		{"visitTryCatchBlock", "(Ljdk/internal/org/objectweb/asm/Label;Ljdk/internal/org/objectweb/asm/Label;Ljdk/internal/org/objectweb/asm/Label;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(MethodVisitor, visitTryCatchBlock, void, $Label*, $Label*, $Label*, $String*)},
		{"visitTypeAnnotation", "(ILjdk/internal/org/objectweb/asm/TypePath;Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC, $virtualMethod(MethodVisitor, visitTypeAnnotation, $AnnotationVisitor*, int32_t, $TypePath*, $String*, bool)},
		{"visitTypeInsn", "(ILjava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(MethodVisitor, visitTypeInsn, void, int32_t, $String*)},
		{"visitVarInsn", "(II)V", nullptr, $PUBLIC, $virtualMethod(MethodVisitor, visitVarInsn, void, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"jdk.internal.org.objectweb.asm.MethodVisitor",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MethodVisitor, name, initialize, &classInfo$$, MethodVisitor::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MethodVisitor);
	});
	return class$;
}

$Class* MethodVisitor::class$ = nullptr;

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk