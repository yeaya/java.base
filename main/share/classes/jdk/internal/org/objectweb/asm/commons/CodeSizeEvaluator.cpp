#include <jdk/internal/org/objectweb/asm/commons/CodeSizeEvaluator.h>

#include <jdk/internal/org/objectweb/asm/ConstantDynamic.h>
#include <jdk/internal/org/objectweb/asm/Handle.h>
#include <jdk/internal/org/objectweb/asm/Label.h>
#include <jdk/internal/org/objectweb/asm/MethodVisitor.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jcpp.h>

#undef ASM5
#undef ASM8
#undef GOTO
#undef INVOKEINTERFACE
#undef JSR
#undef RET
#undef SIPUSH
#undef SOURCE_DEPRECATED
#undef SOURCE_MASK

using $LabelArray = $Array<::jdk::internal::org::objectweb::asm$::Label>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConstantDynamic = ::jdk::internal::org::objectweb::asm$::ConstantDynamic;
using $Handle = ::jdk::internal::org::objectweb::asm$::Handle;
using $Label = ::jdk::internal::org::objectweb::asm$::Label;
using $MethodVisitor = ::jdk::internal::org::objectweb::asm$::MethodVisitor;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace commons {

$FieldInfo _CodeSizeEvaluator_FieldInfo_[] = {
	{"minSize", "I", nullptr, $PRIVATE, $field(CodeSizeEvaluator, minSize)},
	{"maxSize", "I", nullptr, $PRIVATE, $field(CodeSizeEvaluator, maxSize)},
	{}
};

$MethodInfo _CodeSizeEvaluator_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljdk/internal/org/objectweb/asm/MethodVisitor;)V", nullptr, $PUBLIC, $method(CodeSizeEvaluator, init$, void, $MethodVisitor*)},
	{"<init>", "(ILjdk/internal/org/objectweb/asm/MethodVisitor;)V", nullptr, $PROTECTED, $method(CodeSizeEvaluator, init$, void, int32_t, $MethodVisitor*)},
	{"getMaxSize", "()I", nullptr, $PUBLIC, $virtualMethod(CodeSizeEvaluator, getMaxSize, int32_t)},
	{"getMinSize", "()I", nullptr, $PUBLIC, $virtualMethod(CodeSizeEvaluator, getMinSize, int32_t)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"visitFieldInsn", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(CodeSizeEvaluator, visitFieldInsn, void, int32_t, $String*, $String*, $String*)},
	{"visitIincInsn", "(II)V", nullptr, $PUBLIC, $virtualMethod(CodeSizeEvaluator, visitIincInsn, void, int32_t, int32_t)},
	{"visitInsn", "(I)V", nullptr, $PUBLIC, $virtualMethod(CodeSizeEvaluator, visitInsn, void, int32_t)},
	{"visitIntInsn", "(II)V", nullptr, $PUBLIC, $virtualMethod(CodeSizeEvaluator, visitIntInsn, void, int32_t, int32_t)},
	{"visitInvokeDynamicInsn", "(Ljava/lang/String;Ljava/lang/String;Ljdk/internal/org/objectweb/asm/Handle;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT, $virtualMethod(CodeSizeEvaluator, visitInvokeDynamicInsn, void, $String*, $String*, $Handle*, $ObjectArray*)},
	{"visitJumpInsn", "(ILjdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC, $virtualMethod(CodeSizeEvaluator, visitJumpInsn, void, int32_t, $Label*)},
	{"visitLdcInsn", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(CodeSizeEvaluator, visitLdcInsn, void, Object$*)},
	{"visitLookupSwitchInsn", "(Ljdk/internal/org/objectweb/asm/Label;[I[Ljdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC, $virtualMethod(CodeSizeEvaluator, visitLookupSwitchInsn, void, $Label*, $ints*, $LabelArray*)},
	{"visitMethodInsn", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(CodeSizeEvaluator, visitMethodInsn, void, int32_t, $String*, $String*, $String*, bool)},
	{"visitMultiANewArrayInsn", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $virtualMethod(CodeSizeEvaluator, visitMultiANewArrayInsn, void, $String*, int32_t)},
	{"visitTableSwitchInsn", "(IILjdk/internal/org/objectweb/asm/Label;[Ljdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC | $TRANSIENT, $virtualMethod(CodeSizeEvaluator, visitTableSwitchInsn, void, int32_t, int32_t, $Label*, $LabelArray*)},
	{"visitTypeInsn", "(ILjava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(CodeSizeEvaluator, visitTypeInsn, void, int32_t, $String*)},
	{"visitVarInsn", "(II)V", nullptr, $PUBLIC, $virtualMethod(CodeSizeEvaluator, visitVarInsn, void, int32_t, int32_t)},
	{}
};

$ClassInfo _CodeSizeEvaluator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.commons.CodeSizeEvaluator",
	"jdk.internal.org.objectweb.asm.MethodVisitor",
	"jdk.internal.org.objectweb.asm.Opcodes",
	_CodeSizeEvaluator_FieldInfo_,
	_CodeSizeEvaluator_MethodInfo_
};

$Object* allocate$CodeSizeEvaluator($Class* clazz) {
	return $of($alloc(CodeSizeEvaluator));
}

int32_t CodeSizeEvaluator::hashCode() {
	 return this->$MethodVisitor::hashCode();
}

bool CodeSizeEvaluator::equals(Object$* obj) {
	 return this->$MethodVisitor::equals(obj);
}

$Object* CodeSizeEvaluator::clone() {
	 return this->$MethodVisitor::clone();
}

$String* CodeSizeEvaluator::toString() {
	 return this->$MethodVisitor::toString();
}

void CodeSizeEvaluator::finalize() {
	this->$MethodVisitor::finalize();
}

void CodeSizeEvaluator::init$($MethodVisitor* methodVisitor) {
	CodeSizeEvaluator::init$($Opcodes::ASM8, methodVisitor);
}

void CodeSizeEvaluator::init$(int32_t api, $MethodVisitor* methodVisitor) {
	$MethodVisitor::init$(api, methodVisitor);
}

int32_t CodeSizeEvaluator::getMinSize() {
	return this->minSize;
}

int32_t CodeSizeEvaluator::getMaxSize() {
	return this->maxSize;
}

void CodeSizeEvaluator::visitInsn(int32_t opcode) {
	this->minSize += 1;
	this->maxSize += 1;
	$MethodVisitor::visitInsn(opcode);
}

void CodeSizeEvaluator::visitIntInsn(int32_t opcode, int32_t operand) {
	if (opcode == $Opcodes::SIPUSH) {
		this->minSize += 3;
		this->maxSize += 3;
	} else {
		this->minSize += 2;
		this->maxSize += 2;
	}
	$MethodVisitor::visitIntInsn(opcode, operand);
}

void CodeSizeEvaluator::visitVarInsn(int32_t opcode, int32_t var) {
	if (var < 4 && opcode != $Opcodes::RET) {
		this->minSize += 1;
		this->maxSize += 1;
	} else if (var >= 256) {
		this->minSize += 4;
		this->maxSize += 4;
	} else {
		this->minSize += 2;
		this->maxSize += 2;
	}
	$MethodVisitor::visitVarInsn(opcode, var);
}

void CodeSizeEvaluator::visitTypeInsn(int32_t opcode, $String* type) {
	this->minSize += 3;
	this->maxSize += 3;
	$MethodVisitor::visitTypeInsn(opcode, type);
}

void CodeSizeEvaluator::visitFieldInsn(int32_t opcode, $String* owner, $String* name, $String* descriptor) {
	this->minSize += 3;
	this->maxSize += 3;
	$MethodVisitor::visitFieldInsn(opcode, owner, name, descriptor);
}

void CodeSizeEvaluator::visitMethodInsn(int32_t opcodeAndSource, $String* owner, $String* name, $String* descriptor, bool isInterface) {
	if (this->api < $Opcodes::ASM5 && ((int32_t)(opcodeAndSource & (uint32_t)$Opcodes::SOURCE_DEPRECATED)) == 0) {
		$MethodVisitor::visitMethodInsn(opcodeAndSource, owner, name, descriptor, isInterface);
		return;
	}
	int32_t opcode = (int32_t)(opcodeAndSource & (uint32_t)~$Opcodes::SOURCE_MASK);
	if (opcode == $Opcodes::INVOKEINTERFACE) {
		this->minSize += 5;
		this->maxSize += 5;
	} else {
		this->minSize += 3;
		this->maxSize += 3;
	}
	$MethodVisitor::visitMethodInsn(opcodeAndSource, owner, name, descriptor, isInterface);
}

void CodeSizeEvaluator::visitInvokeDynamicInsn($String* name, $String* descriptor, $Handle* bootstrapMethodHandle, $ObjectArray* bootstrapMethodArguments) {
	this->minSize += 5;
	this->maxSize += 5;
	$MethodVisitor::visitInvokeDynamicInsn(name, descriptor, bootstrapMethodHandle, bootstrapMethodArguments);
}

void CodeSizeEvaluator::visitJumpInsn(int32_t opcode, $Label* label) {
	this->minSize += 3;
	if (opcode == $Opcodes::GOTO || opcode == $Opcodes::JSR) {
		this->maxSize += 5;
	} else {
		this->maxSize += 8;
	}
	$MethodVisitor::visitJumpInsn(opcode, label);
}

void CodeSizeEvaluator::visitLdcInsn(Object$* value) {
	if ($instanceOf($Long, value) || $instanceOf($Double, value) || ($instanceOf($ConstantDynamic, value) && $nc(($cast($ConstantDynamic, value)))->getSize() == 2)) {
		this->minSize += 3;
		this->maxSize += 3;
	} else {
		this->minSize += 2;
		this->maxSize += 3;
	}
	$MethodVisitor::visitLdcInsn(value);
}

void CodeSizeEvaluator::visitIincInsn(int32_t var, int32_t increment) {
	if (var > 255 || increment > 127 || increment < -128) {
		this->minSize += 6;
		this->maxSize += 6;
	} else {
		this->minSize += 3;
		this->maxSize += 3;
	}
	$MethodVisitor::visitIincInsn(var, increment);
}

void CodeSizeEvaluator::visitTableSwitchInsn(int32_t min, int32_t max, $Label* dflt, $LabelArray* labels) {
	this->minSize += 13 + $nc(labels)->length * 4;
	this->maxSize += 16 + labels->length * 4;
	$MethodVisitor::visitTableSwitchInsn(min, max, dflt, labels);
}

void CodeSizeEvaluator::visitLookupSwitchInsn($Label* dflt, $ints* keys, $LabelArray* labels) {
	this->minSize += 9 + $nc(keys)->length * 8;
	this->maxSize += 12 + keys->length * 8;
	$MethodVisitor::visitLookupSwitchInsn(dflt, keys, labels);
}

void CodeSizeEvaluator::visitMultiANewArrayInsn($String* descriptor, int32_t numDimensions) {
	this->minSize += 4;
	this->maxSize += 4;
	$MethodVisitor::visitMultiANewArrayInsn(descriptor, numDimensions);
}

CodeSizeEvaluator::CodeSizeEvaluator() {
}

$Class* CodeSizeEvaluator::load$($String* name, bool initialize) {
	$loadClass(CodeSizeEvaluator, name, initialize, &_CodeSizeEvaluator_ClassInfo_, allocate$CodeSizeEvaluator);
	return class$;
}

$Class* CodeSizeEvaluator::class$ = nullptr;

					} // commons
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk