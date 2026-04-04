#include <jdk/internal/org/objectweb/asm/tree/MethodNode.h>
#include <java/lang/IllegalStateException.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <jdk/internal/org/objectweb/asm/AnnotationVisitor.h>
#include <jdk/internal/org/objectweb/asm/Attribute.h>
#include <jdk/internal/org/objectweb/asm/ClassVisitor.h>
#include <jdk/internal/org/objectweb/asm/ConstantDynamic.h>
#include <jdk/internal/org/objectweb/asm/Handle.h>
#include <jdk/internal/org/objectweb/asm/Label.h>
#include <jdk/internal/org/objectweb/asm/MethodVisitor.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/Type.h>
#include <jdk/internal/org/objectweb/asm/TypePath.h>
#include <jdk/internal/org/objectweb/asm/tree/AbstractInsnNode.h>
#include <jdk/internal/org/objectweb/asm/tree/AnnotationNode.h>
#include <jdk/internal/org/objectweb/asm/tree/FieldInsnNode.h>
#include <jdk/internal/org/objectweb/asm/tree/FrameNode.h>
#include <jdk/internal/org/objectweb/asm/tree/IincInsnNode.h>
#include <jdk/internal/org/objectweb/asm/tree/InsnList.h>
#include <jdk/internal/org/objectweb/asm/tree/InsnNode.h>
#include <jdk/internal/org/objectweb/asm/tree/IntInsnNode.h>
#include <jdk/internal/org/objectweb/asm/tree/InvokeDynamicInsnNode.h>
#include <jdk/internal/org/objectweb/asm/tree/JumpInsnNode.h>
#include <jdk/internal/org/objectweb/asm/tree/LabelNode.h>
#include <jdk/internal/org/objectweb/asm/tree/LdcInsnNode.h>
#include <jdk/internal/org/objectweb/asm/tree/LineNumberNode.h>
#include <jdk/internal/org/objectweb/asm/tree/LocalVariableAnnotationNode.h>
#include <jdk/internal/org/objectweb/asm/tree/LocalVariableNode.h>
#include <jdk/internal/org/objectweb/asm/tree/LookupSwitchInsnNode.h>
#include <jdk/internal/org/objectweb/asm/tree/MethodInsnNode.h>
#include <jdk/internal/org/objectweb/asm/tree/MethodNode$1.h>
#include <jdk/internal/org/objectweb/asm/tree/MultiANewArrayInsnNode.h>
#include <jdk/internal/org/objectweb/asm/tree/ParameterNode.h>
#include <jdk/internal/org/objectweb/asm/tree/TableSwitchInsnNode.h>
#include <jdk/internal/org/objectweb/asm/tree/TryCatchBlockNode.h>
#include <jdk/internal/org/objectweb/asm/tree/TypeAnnotationNode.h>
#include <jdk/internal/org/objectweb/asm/tree/TypeInsnNode.h>
#include <jdk/internal/org/objectweb/asm/tree/UnsupportedClassVersionException.h>
#include <jdk/internal/org/objectweb/asm/tree/Util.h>
#include <jdk/internal/org/objectweb/asm/tree/VarInsnNode.h>
#include <jcpp.h>

#undef ACC_ABSTRACT
#undef ASM4
#undef ASM5
#undef ASM7
#undef ASM8
#undef INVOKEINTERFACE
#undef METHOD
#undef SOURCE_DEPRECATED
#undef SOURCE_MASK

using $ListArray = $Array<::java::util::List>;
using $LabelArray = $Array<::jdk::internal::org::objectweb::asm$::Label>;
using $LabelNodeArray = $Array<::jdk::internal::org::objectweb::asm$::tree::LabelNode>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $AnnotationVisitor = ::jdk::internal::org::objectweb::asm$::AnnotationVisitor;
using $Attribute = ::jdk::internal::org::objectweb::asm$::Attribute;
using $ClassVisitor = ::jdk::internal::org::objectweb::asm$::ClassVisitor;
using $ConstantDynamic = ::jdk::internal::org::objectweb::asm$::ConstantDynamic;
using $Handle = ::jdk::internal::org::objectweb::asm$::Handle;
using $Label = ::jdk::internal::org::objectweb::asm$::Label;
using $MethodVisitor = ::jdk::internal::org::objectweb::asm$::MethodVisitor;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $Type = ::jdk::internal::org::objectweb::asm$::Type;
using $TypePath = ::jdk::internal::org::objectweb::asm$::TypePath;
using $AbstractInsnNode = ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode;
using $AnnotationNode = ::jdk::internal::org::objectweb::asm$::tree::AnnotationNode;
using $FieldInsnNode = ::jdk::internal::org::objectweb::asm$::tree::FieldInsnNode;
using $FrameNode = ::jdk::internal::org::objectweb::asm$::tree::FrameNode;
using $IincInsnNode = ::jdk::internal::org::objectweb::asm$::tree::IincInsnNode;
using $InsnList = ::jdk::internal::org::objectweb::asm$::tree::InsnList;
using $InsnNode = ::jdk::internal::org::objectweb::asm$::tree::InsnNode;
using $IntInsnNode = ::jdk::internal::org::objectweb::asm$::tree::IntInsnNode;
using $InvokeDynamicInsnNode = ::jdk::internal::org::objectweb::asm$::tree::InvokeDynamicInsnNode;
using $JumpInsnNode = ::jdk::internal::org::objectweb::asm$::tree::JumpInsnNode;
using $LabelNode = ::jdk::internal::org::objectweb::asm$::tree::LabelNode;
using $LdcInsnNode = ::jdk::internal::org::objectweb::asm$::tree::LdcInsnNode;
using $LineNumberNode = ::jdk::internal::org::objectweb::asm$::tree::LineNumberNode;
using $LocalVariableAnnotationNode = ::jdk::internal::org::objectweb::asm$::tree::LocalVariableAnnotationNode;
using $LocalVariableNode = ::jdk::internal::org::objectweb::asm$::tree::LocalVariableNode;
using $LookupSwitchInsnNode = ::jdk::internal::org::objectweb::asm$::tree::LookupSwitchInsnNode;
using $MethodInsnNode = ::jdk::internal::org::objectweb::asm$::tree::MethodInsnNode;
using $MethodNode$1 = ::jdk::internal::org::objectweb::asm$::tree::MethodNode$1;
using $MultiANewArrayInsnNode = ::jdk::internal::org::objectweb::asm$::tree::MultiANewArrayInsnNode;
using $ParameterNode = ::jdk::internal::org::objectweb::asm$::tree::ParameterNode;
using $TableSwitchInsnNode = ::jdk::internal::org::objectweb::asm$::tree::TableSwitchInsnNode;
using $TryCatchBlockNode = ::jdk::internal::org::objectweb::asm$::tree::TryCatchBlockNode;
using $TypeAnnotationNode = ::jdk::internal::org::objectweb::asm$::tree::TypeAnnotationNode;
using $TypeInsnNode = ::jdk::internal::org::objectweb::asm$::tree::TypeInsnNode;
using $UnsupportedClassVersionException = ::jdk::internal::org::objectweb::asm$::tree::UnsupportedClassVersionException;
using $Util = ::jdk::internal::org::objectweb::asm$::tree::Util;
using $VarInsnNode = ::jdk::internal::org::objectweb::asm$::tree::VarInsnNode;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace tree {

void MethodNode::init$() {
	MethodNode::init$($Opcodes::ASM8);
	if ($of(this)->getClass() != MethodNode::class$) {
		$throwNew($IllegalStateException);
	}
}

void MethodNode::init$(int32_t api) {
	$MethodVisitor::init$(api);
	$set(this, instructions, $new($InsnList));
}

void MethodNode::init$(int32_t access, $String* name, $String* descriptor, $String* signature, $StringArray* exceptions) {
	MethodNode::init$($Opcodes::ASM8, access, name, descriptor, signature, exceptions);
	if ($of(this)->getClass() != MethodNode::class$) {
		$throwNew($IllegalStateException);
	}
}

void MethodNode::init$(int32_t api, int32_t access, $String* name, $String* descriptor, $String* signature, $StringArray* exceptions) {
	$MethodVisitor::init$(api);
	this->access = access;
	$set(this, name, name);
	$set(this, desc, descriptor);
	$set(this, signature, signature);
	$set(this, exceptions, $Util::asArrayList(exceptions));
	if ((access & $Opcodes::ACC_ABSTRACT) == 0) {
		$set(this, localVariables, $new($ArrayList, 5));
	}
	$set(this, tryCatchBlocks, $new($ArrayList));
	$set(this, instructions, $new($InsnList));
}

void MethodNode::visitParameter($String* name, int32_t access) {
	if (this->parameters == nullptr) {
		$set(this, parameters, $new($ArrayList, 5));
	}
	$nc(this->parameters)->add($$new($ParameterNode, name, access));
}

$AnnotationVisitor* MethodNode::visitAnnotationDefault() {
	return $new($AnnotationNode, $$new($MethodNode$1, this, 0));
}

$AnnotationVisitor* MethodNode::visitAnnotation($String* descriptor, bool visible) {
	$var($AnnotationNode, annotation, $new($AnnotationNode, descriptor));
	if (visible) {
		$set(this, visibleAnnotations, $Util::add(this->visibleAnnotations, annotation));
	} else {
		$set(this, invisibleAnnotations, $Util::add(this->invisibleAnnotations, annotation));
	}
	return annotation;
}

$AnnotationVisitor* MethodNode::visitTypeAnnotation(int32_t typeRef, $TypePath* typePath, $String* descriptor, bool visible) {
	$var($TypeAnnotationNode, typeAnnotation, $new($TypeAnnotationNode, typeRef, typePath, descriptor));
	if (visible) {
		$set(this, visibleTypeAnnotations, $Util::add(this->visibleTypeAnnotations, typeAnnotation));
	} else {
		$set(this, invisibleTypeAnnotations, $Util::add(this->invisibleTypeAnnotations, typeAnnotation));
	}
	return typeAnnotation;
}

void MethodNode::visitAnnotableParameterCount(int32_t parameterCount, bool visible) {
	if (visible) {
		this->visibleAnnotableParameterCount = parameterCount;
	} else {
		this->invisibleAnnotableParameterCount = parameterCount;
	}
}

$AnnotationVisitor* MethodNode::visitParameterAnnotation(int32_t parameter, $String* descriptor, bool visible) {
	$useLocalObjectStack();
	$var($AnnotationNode, annotation, $new($AnnotationNode, descriptor));
	if (visible) {
		if (this->visibleParameterAnnotations == nullptr) {
			int32_t params = $nc($($Type::getArgumentTypes(this->desc)))->length;
			$set(this, visibleParameterAnnotations, $new($ListArray, params));
		}
		$nc(this->visibleParameterAnnotations)->set(parameter, $($Util::add($nc(this->visibleParameterAnnotations)->get(parameter), annotation)));
	} else {
		if (this->invisibleParameterAnnotations == nullptr) {
			int32_t params = $nc($($Type::getArgumentTypes(this->desc)))->length;
			$set(this, invisibleParameterAnnotations, $new($ListArray, params));
		}
		$nc(this->invisibleParameterAnnotations)->set(parameter, $($Util::add($nc(this->invisibleParameterAnnotations)->get(parameter), annotation)));
	}
	return annotation;
}

void MethodNode::visitAttribute($Attribute* attribute) {
	$set(this, attrs, $Util::add(this->attrs, attribute));
}

void MethodNode::visitCode() {
}

void MethodNode::visitFrame(int32_t type, int32_t numLocal, $ObjectArray* local, int32_t numStack, $ObjectArray* stack) {
	$useLocalObjectStack();
	$var($ObjectArray, var$0, local == nullptr ? ($ObjectArray*)nullptr : getLabelNodes(local));
	$nc(this->instructions)->add($$new($FrameNode, type, numLocal, var$0, numStack, stack == nullptr ? ($ObjectArray*)nullptr : $(getLabelNodes(stack))));
}

void MethodNode::visitInsn(int32_t opcode) {
	$nc(this->instructions)->add($$new($InsnNode, opcode));
}

void MethodNode::visitIntInsn(int32_t opcode, int32_t operand) {
	$nc(this->instructions)->add($$new($IntInsnNode, opcode, operand));
}

void MethodNode::visitVarInsn(int32_t opcode, int32_t var) {
	$nc(this->instructions)->add($$new($VarInsnNode, opcode, var));
}

void MethodNode::visitTypeInsn(int32_t opcode, $String* type) {
	$nc(this->instructions)->add($$new($TypeInsnNode, opcode, type));
}

void MethodNode::visitFieldInsn(int32_t opcode, $String* owner, $String* name, $String* descriptor) {
	$nc(this->instructions)->add($$new($FieldInsnNode, opcode, owner, name, descriptor));
}

void MethodNode::visitMethodInsn(int32_t opcodeAndSource, $String* owner, $String* name, $String* descriptor, bool isInterface) {
	if (this->api < $Opcodes::ASM5 && (opcodeAndSource & $Opcodes::SOURCE_DEPRECATED) == 0) {
		$MethodVisitor::visitMethodInsn(opcodeAndSource, owner, name, descriptor, isInterface);
		return;
	}
	int32_t opcode = opcodeAndSource & ~$Opcodes::SOURCE_MASK;
	$nc(this->instructions)->add($$new($MethodInsnNode, opcode, owner, name, descriptor, isInterface));
}

void MethodNode::visitInvokeDynamicInsn($String* name, $String* descriptor, $Handle* bootstrapMethodHandle, $ObjectArray* bootstrapMethodArguments) {
	$nc(this->instructions)->add($$new($InvokeDynamicInsnNode, name, descriptor, bootstrapMethodHandle, bootstrapMethodArguments));
}

void MethodNode::visitJumpInsn(int32_t opcode, $Label* label) {
	$useLocalObjectStack();
	$nc(this->instructions)->add($$new($JumpInsnNode, opcode, $(getLabelNode(label))));
}

void MethodNode::visitLabel($Label* label) {
	$nc(this->instructions)->add($(getLabelNode(label)));
}

void MethodNode::visitLdcInsn(Object$* value) {
	$nc(this->instructions)->add($$new($LdcInsnNode, value));
}

void MethodNode::visitIincInsn(int32_t var, int32_t increment) {
	$nc(this->instructions)->add($$new($IincInsnNode, var, increment));
}

void MethodNode::visitTableSwitchInsn(int32_t min, int32_t max, $Label* dflt, $LabelArray* labels) {
	$useLocalObjectStack();
	$var($LabelNode, var$0, getLabelNode(dflt));
	$nc(this->instructions)->add($$new($TableSwitchInsnNode, min, max, var$0, $(getLabelNodes(labels))));
}

void MethodNode::visitLookupSwitchInsn($Label* dflt, $ints* keys, $LabelArray* labels) {
	$useLocalObjectStack();
	$var($LabelNode, var$0, getLabelNode(dflt));
	$nc(this->instructions)->add($$new($LookupSwitchInsnNode, var$0, keys, $(getLabelNodes(labels))));
}

void MethodNode::visitMultiANewArrayInsn($String* descriptor, int32_t numDimensions) {
	$nc(this->instructions)->add($$new($MultiANewArrayInsnNode, descriptor, numDimensions));
}

$AnnotationVisitor* MethodNode::visitInsnAnnotation(int32_t typeRef, $TypePath* typePath, $String* descriptor, bool visible) {
	$useLocalObjectStack();
	$var($AbstractInsnNode, currentInsn, $nc(this->instructions)->getLast());
	while ($nc(currentInsn)->getOpcode() == -1) {
		$assign(currentInsn, currentInsn->getPrevious());
	}
	$var($TypeAnnotationNode, typeAnnotation, $new($TypeAnnotationNode, typeRef, typePath, descriptor));
	if (visible) {
		$set($nc(currentInsn), visibleTypeAnnotations, $Util::add($nc(currentInsn)->visibleTypeAnnotations, typeAnnotation));
	} else {
		$set($nc(currentInsn), invisibleTypeAnnotations, $Util::add($nc(currentInsn)->invisibleTypeAnnotations, typeAnnotation));
	}
	return typeAnnotation;
}

void MethodNode::visitTryCatchBlock($Label* start, $Label* end, $Label* handler, $String* type) {
	$useLocalObjectStack();
	$var($LabelNode, var$0, getLabelNode(start));
	$var($LabelNode, var$1, getLabelNode(end));
	$var($TryCatchBlockNode, tryCatchBlock, $new($TryCatchBlockNode, var$0, var$1, $(getLabelNode(handler)), type));
	$set(this, tryCatchBlocks, $Util::add(this->tryCatchBlocks, tryCatchBlock));
}

$AnnotationVisitor* MethodNode::visitTryCatchAnnotation(int32_t typeRef, $TypePath* typePath, $String* descriptor, bool visible) {
	$useLocalObjectStack();
	$var($TryCatchBlockNode, tryCatchBlock, $cast($TryCatchBlockNode, $nc(this->tryCatchBlocks)->get((typeRef & 0x00ffff00) >> 8)));
	$var($TypeAnnotationNode, typeAnnotation, $new($TypeAnnotationNode, typeRef, typePath, descriptor));
	if (visible) {
		$set($nc(tryCatchBlock), visibleTypeAnnotations, $Util::add($nc(tryCatchBlock)->visibleTypeAnnotations, typeAnnotation));
	} else {
		$set($nc(tryCatchBlock), invisibleTypeAnnotations, $Util::add($nc(tryCatchBlock)->invisibleTypeAnnotations, typeAnnotation));
	}
	return typeAnnotation;
}

void MethodNode::visitLocalVariable($String* name, $String* descriptor, $String* signature, $Label* start, $Label* end, int32_t index) {
	$useLocalObjectStack();
	$var($LabelNode, var$0, getLabelNode(start));
	$var($LocalVariableNode, localVariable, $new($LocalVariableNode, name, descriptor, signature, var$0, $(getLabelNode(end)), index));
	$set(this, localVariables, $Util::add(this->localVariables, localVariable));
}

$AnnotationVisitor* MethodNode::visitLocalVariableAnnotation(int32_t typeRef, $TypePath* typePath, $LabelArray* start, $LabelArray* end, $ints* index, $String* descriptor, bool visible) {
	$useLocalObjectStack();
	$var($LabelNodeArray, var$0, getLabelNodes(start));
	$var($LocalVariableAnnotationNode, localVariableAnnotation, $new($LocalVariableAnnotationNode, typeRef, typePath, var$0, $(getLabelNodes(end)), index, descriptor));
	if (visible) {
		$set(this, visibleLocalVariableAnnotations, $Util::add(this->visibleLocalVariableAnnotations, localVariableAnnotation));
	} else {
		$set(this, invisibleLocalVariableAnnotations, $Util::add(this->invisibleLocalVariableAnnotations, localVariableAnnotation));
	}
	return localVariableAnnotation;
}

void MethodNode::visitLineNumber(int32_t line, $Label* start) {
	$useLocalObjectStack();
	$nc(this->instructions)->add($$new($LineNumberNode, line, $(getLabelNode(start))));
}

void MethodNode::visitMaxs(int32_t maxStack, int32_t maxLocals) {
	this->maxStack = maxStack;
	this->maxLocals = maxLocals;
}

void MethodNode::visitEnd() {
}

$LabelNode* MethodNode::getLabelNode($Label* label) {
	if (!($instanceOf($LabelNode, $nc(label)->info))) {
		$set(label, info, $new($LabelNode));
	}
	return $cast($LabelNode, label->info);
}

$LabelNodeArray* MethodNode::getLabelNodes($LabelArray* labels) {
	$useLocalObjectStack();
	$var($LabelNodeArray, labelNodes, $new($LabelNodeArray, $nc(labels)->length));
	for (int32_t i = 0, n = labels->length; i < n; ++i) {
		labelNodes->set(i, $(getLabelNode(labels->get(i))));
	}
	return labelNodes;
}

$ObjectArray* MethodNode::getLabelNodes($ObjectArray* objects) {
	$useLocalObjectStack();
	$var($ObjectArray, labelNodes, $new($ObjectArray, $nc(objects)->length));
	for (int32_t i = 0, n = objects->length; i < n; ++i) {
		$var($Object, o, objects->get(i));
		if ($instanceOf($Label, o)) {
			$assign(o, getLabelNode($cast($Label, o)));
		}
		labelNodes->set(i, o);
	}
	return labelNodes;
}

void MethodNode::check(int32_t api) {
	$useLocalObjectStack();
	if (api == $Opcodes::ASM4) {
		if (this->parameters != nullptr && !this->parameters->isEmpty()) {
			$throwNew($UnsupportedClassVersionException);
		}
		if (this->visibleTypeAnnotations != nullptr && !this->visibleTypeAnnotations->isEmpty()) {
			$throwNew($UnsupportedClassVersionException);
		}
		if (this->invisibleTypeAnnotations != nullptr && !this->invisibleTypeAnnotations->isEmpty()) {
			$throwNew($UnsupportedClassVersionException);
		}
		if (this->tryCatchBlocks != nullptr) {
			for (int32_t i = this->tryCatchBlocks->size() - 1; i >= 0; --i) {
				$var($TryCatchBlockNode, tryCatchBlock, $cast($TryCatchBlockNode, this->tryCatchBlocks->get(i)));
				if ($nc(tryCatchBlock)->visibleTypeAnnotations != nullptr && !tryCatchBlock->visibleTypeAnnotations->isEmpty()) {
					$throwNew($UnsupportedClassVersionException);
				}
				if (tryCatchBlock->invisibleTypeAnnotations != nullptr && !tryCatchBlock->invisibleTypeAnnotations->isEmpty()) {
					$throwNew($UnsupportedClassVersionException);
				}
			}
		}
		for (int32_t i = $nc(this->instructions)->size() - 1; i >= 0; --i) {
			$var($AbstractInsnNode, insn, this->instructions->get(i));
			if ($nc(insn)->visibleTypeAnnotations != nullptr && !insn->visibleTypeAnnotations->isEmpty()) {
				$throwNew($UnsupportedClassVersionException);
			}
			if (insn->invisibleTypeAnnotations != nullptr && !insn->invisibleTypeAnnotations->isEmpty()) {
				$throwNew($UnsupportedClassVersionException);
			}
			if ($instanceOf($MethodInsnNode, insn)) {
				bool isInterface = $cast($MethodInsnNode, insn)->itf;
				if (isInterface != (insn->opcode == $Opcodes::INVOKEINTERFACE)) {
					$throwNew($UnsupportedClassVersionException);
				}
			} else if ($instanceOf($LdcInsnNode, insn)) {
				$var($Object, value, $cast($LdcInsnNode, insn)->cst);
				if ($instanceOf($Handle, value) || ($instanceOf($Type, value) && $cast($Type, value)->getSort() == $Type::METHOD)) {
					$throwNew($UnsupportedClassVersionException);
				}
			}
		}
		if (this->visibleLocalVariableAnnotations != nullptr && !this->visibleLocalVariableAnnotations->isEmpty()) {
			$throwNew($UnsupportedClassVersionException);
		}
		if (this->invisibleLocalVariableAnnotations != nullptr && !this->invisibleLocalVariableAnnotations->isEmpty()) {
			$throwNew($UnsupportedClassVersionException);
		}
	}
	if (api < $Opcodes::ASM7) {
		for (int32_t i = $nc(this->instructions)->size() - 1; i >= 0; --i) {
			$var($AbstractInsnNode, insn, this->instructions->get(i));
			if ($instanceOf($LdcInsnNode, insn)) {
				$var($Object, value, $cast($LdcInsnNode, insn)->cst);
				if ($instanceOf($ConstantDynamic, value)) {
					$throwNew($UnsupportedClassVersionException);
				}
			}
		}
	}
}

void MethodNode::accept($ClassVisitor* classVisitor) {
	$useLocalObjectStack();
	$var($StringArray, exceptionsArray, this->exceptions == nullptr ? ($StringArray*)nullptr : $cast($StringArray, this->exceptions->toArray($$new($StringArray, 0))));
	$var($MethodVisitor, methodVisitor, $nc(classVisitor)->visitMethod(this->access, this->name, this->desc, this->signature, exceptionsArray));
	if (methodVisitor != nullptr) {
		accept(methodVisitor);
	}
}

void MethodNode::accept($MethodVisitor* methodVisitor) {
	$useLocalObjectStack();
	if (this->parameters != nullptr) {
		for (int32_t i = 0, n = this->parameters->size(); i < n; ++i) {
			$$sure($ParameterNode, this->parameters->get(i))->accept(methodVisitor);
		}
	}
	if (this->annotationDefault != nullptr) {
		$var($AnnotationVisitor, annotationVisitor, $nc(methodVisitor)->visitAnnotationDefault());
		$AnnotationNode::accept(annotationVisitor, nullptr, this->annotationDefault);
		if (annotationVisitor != nullptr) {
			annotationVisitor->visitEnd();
		}
	}
	if (this->visibleAnnotations != nullptr) {
		for (int32_t i = 0, n = this->visibleAnnotations->size(); i < n; ++i) {
			$var($AnnotationNode, annotation, $cast($AnnotationNode, this->visibleAnnotations->get(i)));
			$nc(annotation)->accept($($nc(methodVisitor)->visitAnnotation($nc(annotation)->desc, true)));
		}
	}
	if (this->invisibleAnnotations != nullptr) {
		for (int32_t i = 0, n = this->invisibleAnnotations->size(); i < n; ++i) {
			$var($AnnotationNode, annotation, $cast($AnnotationNode, this->invisibleAnnotations->get(i)));
			$nc(annotation)->accept($($nc(methodVisitor)->visitAnnotation($nc(annotation)->desc, false)));
		}
	}
	if (this->visibleTypeAnnotations != nullptr) {
		for (int32_t i = 0, n = this->visibleTypeAnnotations->size(); i < n; ++i) {
			$var($TypeAnnotationNode, typeAnnotation, $cast($TypeAnnotationNode, this->visibleTypeAnnotations->get(i)));
			$nc(typeAnnotation)->accept($($nc(methodVisitor)->visitTypeAnnotation($nc(typeAnnotation)->typeRef, $nc(typeAnnotation)->typePath, $nc(typeAnnotation)->desc, true)));
		}
	}
	if (this->invisibleTypeAnnotations != nullptr) {
		for (int32_t i = 0, n = this->invisibleTypeAnnotations->size(); i < n; ++i) {
			$var($TypeAnnotationNode, typeAnnotation, $cast($TypeAnnotationNode, this->invisibleTypeAnnotations->get(i)));
			$nc(typeAnnotation)->accept($($nc(methodVisitor)->visitTypeAnnotation($nc(typeAnnotation)->typeRef, $nc(typeAnnotation)->typePath, $nc(typeAnnotation)->desc, false)));
		}
	}
	if (this->visibleAnnotableParameterCount > 0) {
		$nc(methodVisitor)->visitAnnotableParameterCount(this->visibleAnnotableParameterCount, true);
	}
	if (this->visibleParameterAnnotations != nullptr) {
		for (int32_t i = 0, n = this->visibleParameterAnnotations->length; i < n; ++i) {
			$var($List, parameterAnnotations, this->visibleParameterAnnotations->get(i));
			if (parameterAnnotations == nullptr) {
				continue;
			}
			for (int32_t j = 0, m = $nc(parameterAnnotations)->size(); j < m; ++j) {
				$var($AnnotationNode, annotation, $cast($AnnotationNode, parameterAnnotations->get(j)));
				$nc(annotation)->accept($($nc(methodVisitor)->visitParameterAnnotation(i, $nc(annotation)->desc, true)));
			}
		}
	}
	if (this->invisibleAnnotableParameterCount > 0) {
		$nc(methodVisitor)->visitAnnotableParameterCount(this->invisibleAnnotableParameterCount, false);
	}
	if (this->invisibleParameterAnnotations != nullptr) {
		for (int32_t i = 0, n = this->invisibleParameterAnnotations->length; i < n; ++i) {
			$var($List, parameterAnnotations, this->invisibleParameterAnnotations->get(i));
			if (parameterAnnotations == nullptr) {
				continue;
			}
			for (int32_t j = 0, m = $nc(parameterAnnotations)->size(); j < m; ++j) {
				$var($AnnotationNode, annotation, $cast($AnnotationNode, parameterAnnotations->get(j)));
				$nc(annotation)->accept($($nc(methodVisitor)->visitParameterAnnotation(i, $nc(annotation)->desc, false)));
			}
		}
	}
	if (this->visited) {
		$nc(this->instructions)->resetLabels();
	}
	if (this->attrs != nullptr) {
		for (int32_t i = 0, n = this->attrs->size(); i < n; ++i) {
			$nc(methodVisitor)->visitAttribute($$cast($Attribute, this->attrs->get(i)));
		}
	}
	if ($nc(this->instructions)->size() > 0) {
		$nc(methodVisitor)->visitCode();
		if (this->tryCatchBlocks != nullptr) {
			for (int32_t i = 0, n = this->tryCatchBlocks->size(); i < n; ++i) {
				$$sure($TryCatchBlockNode, this->tryCatchBlocks->get(i))->updateIndex(i);
				$$sure($TryCatchBlockNode, this->tryCatchBlocks->get(i))->accept(methodVisitor);
			}
		}
		this->instructions->accept(methodVisitor);
		if (this->localVariables != nullptr) {
			for (int32_t i = 0, n = this->localVariables->size(); i < n; ++i) {
				$$sure($LocalVariableNode, this->localVariables->get(i))->accept(methodVisitor);
			}
		}
		if (this->visibleLocalVariableAnnotations != nullptr) {
			for (int32_t i = 0, n = this->visibleLocalVariableAnnotations->size(); i < n; ++i) {
				$$sure($LocalVariableAnnotationNode, this->visibleLocalVariableAnnotations->get(i))->accept(methodVisitor, true);
			}
		}
		if (this->invisibleLocalVariableAnnotations != nullptr) {
			for (int32_t i = 0, n = this->invisibleLocalVariableAnnotations->size(); i < n; ++i) {
				$$sure($LocalVariableAnnotationNode, this->invisibleLocalVariableAnnotations->get(i))->accept(methodVisitor, false);
			}
		}
		methodVisitor->visitMaxs(this->maxStack, this->maxLocals);
		this->visited = true;
	}
	$nc(methodVisitor)->visitEnd();
}

MethodNode::MethodNode() {
}

$Class* MethodNode::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"access", "I", nullptr, $PUBLIC, $field(MethodNode, access)},
		{"name", "Ljava/lang/String;", nullptr, $PUBLIC, $field(MethodNode, name)},
		{"desc", "Ljava/lang/String;", nullptr, $PUBLIC, $field(MethodNode, desc)},
		{"signature", "Ljava/lang/String;", nullptr, $PUBLIC, $field(MethodNode, signature)},
		{"exceptions", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PUBLIC, $field(MethodNode, exceptions)},
		{"parameters", "Ljava/util/List;", "Ljava/util/List<Ljdk/internal/org/objectweb/asm/tree/ParameterNode;>;", $PUBLIC, $field(MethodNode, parameters)},
		{"visibleAnnotations", "Ljava/util/List;", "Ljava/util/List<Ljdk/internal/org/objectweb/asm/tree/AnnotationNode;>;", $PUBLIC, $field(MethodNode, visibleAnnotations)},
		{"invisibleAnnotations", "Ljava/util/List;", "Ljava/util/List<Ljdk/internal/org/objectweb/asm/tree/AnnotationNode;>;", $PUBLIC, $field(MethodNode, invisibleAnnotations)},
		{"visibleTypeAnnotations", "Ljava/util/List;", "Ljava/util/List<Ljdk/internal/org/objectweb/asm/tree/TypeAnnotationNode;>;", $PUBLIC, $field(MethodNode, visibleTypeAnnotations)},
		{"invisibleTypeAnnotations", "Ljava/util/List;", "Ljava/util/List<Ljdk/internal/org/objectweb/asm/tree/TypeAnnotationNode;>;", $PUBLIC, $field(MethodNode, invisibleTypeAnnotations)},
		{"attrs", "Ljava/util/List;", "Ljava/util/List<Ljdk/internal/org/objectweb/asm/Attribute;>;", $PUBLIC, $field(MethodNode, attrs)},
		{"annotationDefault", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(MethodNode, annotationDefault)},
		{"visibleAnnotableParameterCount", "I", nullptr, $PUBLIC, $field(MethodNode, visibleAnnotableParameterCount)},
		{"visibleParameterAnnotations", "[Ljava/util/List;", "[Ljava/util/List<Ljdk/internal/org/objectweb/asm/tree/AnnotationNode;>;", $PUBLIC, $field(MethodNode, visibleParameterAnnotations)},
		{"invisibleAnnotableParameterCount", "I", nullptr, $PUBLIC, $field(MethodNode, invisibleAnnotableParameterCount)},
		{"invisibleParameterAnnotations", "[Ljava/util/List;", "[Ljava/util/List<Ljdk/internal/org/objectweb/asm/tree/AnnotationNode;>;", $PUBLIC, $field(MethodNode, invisibleParameterAnnotations)},
		{"instructions", "Ljdk/internal/org/objectweb/asm/tree/InsnList;", nullptr, $PUBLIC, $field(MethodNode, instructions)},
		{"tryCatchBlocks", "Ljava/util/List;", "Ljava/util/List<Ljdk/internal/org/objectweb/asm/tree/TryCatchBlockNode;>;", $PUBLIC, $field(MethodNode, tryCatchBlocks)},
		{"maxStack", "I", nullptr, $PUBLIC, $field(MethodNode, maxStack)},
		{"maxLocals", "I", nullptr, $PUBLIC, $field(MethodNode, maxLocals)},
		{"localVariables", "Ljava/util/List;", "Ljava/util/List<Ljdk/internal/org/objectweb/asm/tree/LocalVariableNode;>;", $PUBLIC, $field(MethodNode, localVariables)},
		{"visibleLocalVariableAnnotations", "Ljava/util/List;", "Ljava/util/List<Ljdk/internal/org/objectweb/asm/tree/LocalVariableAnnotationNode;>;", $PUBLIC, $field(MethodNode, visibleLocalVariableAnnotations)},
		{"invisibleLocalVariableAnnotations", "Ljava/util/List;", "Ljava/util/List<Ljdk/internal/org/objectweb/asm/tree/LocalVariableAnnotationNode;>;", $PUBLIC, $field(MethodNode, invisibleLocalVariableAnnotations)},
		{"visited", "Z", nullptr, $PRIVATE, $field(MethodNode, visited)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MethodNode, init$, void)},
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(MethodNode, init$, void, int32_t)},
		{"<init>", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PUBLIC, $method(MethodNode, init$, void, int32_t, $String*, $String*, $String*, $StringArray*)},
		{"<init>", "(IILjava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PUBLIC, $method(MethodNode, init$, void, int32_t, int32_t, $String*, $String*, $String*, $StringArray*)},
		{"accept", "(Ljdk/internal/org/objectweb/asm/ClassVisitor;)V", nullptr, $PUBLIC, $virtualMethod(MethodNode, accept, void, $ClassVisitor*)},
		{"accept", "(Ljdk/internal/org/objectweb/asm/MethodVisitor;)V", nullptr, $PUBLIC, $virtualMethod(MethodNode, accept, void, $MethodVisitor*)},
		{"check", "(I)V", nullptr, $PUBLIC, $virtualMethod(MethodNode, check, void, int32_t)},
		{"getLabelNode", "(Ljdk/internal/org/objectweb/asm/Label;)Ljdk/internal/org/objectweb/asm/tree/LabelNode;", nullptr, $PROTECTED, $virtualMethod(MethodNode, getLabelNode, $LabelNode*, $Label*)},
		{"getLabelNodes", "([Ljdk/internal/org/objectweb/asm/Label;)[Ljdk/internal/org/objectweb/asm/tree/LabelNode;", nullptr, $PRIVATE, $method(MethodNode, getLabelNodes, $LabelNodeArray*, $LabelArray*)},
		{"getLabelNodes", "([Ljava/lang/Object;)[Ljava/lang/Object;", nullptr, $PRIVATE, $method(MethodNode, getLabelNodes, $ObjectArray*, $ObjectArray*)},
		{"visitAnnotableParameterCount", "(IZ)V", nullptr, $PUBLIC, $virtualMethod(MethodNode, visitAnnotableParameterCount, void, int32_t, bool)},
		{"visitAnnotation", "(Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC, $virtualMethod(MethodNode, visitAnnotation, $AnnotationVisitor*, $String*, bool)},
		{"visitAnnotationDefault", "()Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC, $virtualMethod(MethodNode, visitAnnotationDefault, $AnnotationVisitor*)},
		{"visitAttribute", "(Ljdk/internal/org/objectweb/asm/Attribute;)V", nullptr, $PUBLIC, $virtualMethod(MethodNode, visitAttribute, void, $Attribute*)},
		{"visitCode", "()V", nullptr, $PUBLIC, $virtualMethod(MethodNode, visitCode, void)},
		{"visitEnd", "()V", nullptr, $PUBLIC, $virtualMethod(MethodNode, visitEnd, void)},
		{"visitFieldInsn", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(MethodNode, visitFieldInsn, void, int32_t, $String*, $String*, $String*)},
		{"visitFrame", "(II[Ljava/lang/Object;I[Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(MethodNode, visitFrame, void, int32_t, int32_t, $ObjectArray*, int32_t, $ObjectArray*)},
		{"visitIincInsn", "(II)V", nullptr, $PUBLIC, $virtualMethod(MethodNode, visitIincInsn, void, int32_t, int32_t)},
		{"visitInsn", "(I)V", nullptr, $PUBLIC, $virtualMethod(MethodNode, visitInsn, void, int32_t)},
		{"visitInsnAnnotation", "(ILjdk/internal/org/objectweb/asm/TypePath;Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC, $virtualMethod(MethodNode, visitInsnAnnotation, $AnnotationVisitor*, int32_t, $TypePath*, $String*, bool)},
		{"visitIntInsn", "(II)V", nullptr, $PUBLIC, $virtualMethod(MethodNode, visitIntInsn, void, int32_t, int32_t)},
		{"visitInvokeDynamicInsn", "(Ljava/lang/String;Ljava/lang/String;Ljdk/internal/org/objectweb/asm/Handle;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT, $virtualMethod(MethodNode, visitInvokeDynamicInsn, void, $String*, $String*, $Handle*, $ObjectArray*)},
		{"visitJumpInsn", "(ILjdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC, $virtualMethod(MethodNode, visitJumpInsn, void, int32_t, $Label*)},
		{"visitLabel", "(Ljdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC, $virtualMethod(MethodNode, visitLabel, void, $Label*)},
		{"visitLdcInsn", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(MethodNode, visitLdcInsn, void, Object$*)},
		{"visitLineNumber", "(ILjdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC, $virtualMethod(MethodNode, visitLineNumber, void, int32_t, $Label*)},
		{"visitLocalVariable", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljdk/internal/org/objectweb/asm/Label;Ljdk/internal/org/objectweb/asm/Label;I)V", nullptr, $PUBLIC, $virtualMethod(MethodNode, visitLocalVariable, void, $String*, $String*, $String*, $Label*, $Label*, int32_t)},
		{"visitLocalVariableAnnotation", "(ILjdk/internal/org/objectweb/asm/TypePath;[Ljdk/internal/org/objectweb/asm/Label;[Ljdk/internal/org/objectweb/asm/Label;[ILjava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC, $virtualMethod(MethodNode, visitLocalVariableAnnotation, $AnnotationVisitor*, int32_t, $TypePath*, $LabelArray*, $LabelArray*, $ints*, $String*, bool)},
		{"visitLookupSwitchInsn", "(Ljdk/internal/org/objectweb/asm/Label;[I[Ljdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC, $virtualMethod(MethodNode, visitLookupSwitchInsn, void, $Label*, $ints*, $LabelArray*)},
		{"visitMaxs", "(II)V", nullptr, $PUBLIC, $virtualMethod(MethodNode, visitMaxs, void, int32_t, int32_t)},
		{"visitMethodInsn", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(MethodNode, visitMethodInsn, void, int32_t, $String*, $String*, $String*, bool)},
		{"visitMultiANewArrayInsn", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $virtualMethod(MethodNode, visitMultiANewArrayInsn, void, $String*, int32_t)},
		{"visitParameter", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $virtualMethod(MethodNode, visitParameter, void, $String*, int32_t)},
		{"visitParameterAnnotation", "(ILjava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC, $virtualMethod(MethodNode, visitParameterAnnotation, $AnnotationVisitor*, int32_t, $String*, bool)},
		{"visitTableSwitchInsn", "(IILjdk/internal/org/objectweb/asm/Label;[Ljdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC | $TRANSIENT, $virtualMethod(MethodNode, visitTableSwitchInsn, void, int32_t, int32_t, $Label*, $LabelArray*)},
		{"visitTryCatchAnnotation", "(ILjdk/internal/org/objectweb/asm/TypePath;Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC, $virtualMethod(MethodNode, visitTryCatchAnnotation, $AnnotationVisitor*, int32_t, $TypePath*, $String*, bool)},
		{"visitTryCatchBlock", "(Ljdk/internal/org/objectweb/asm/Label;Ljdk/internal/org/objectweb/asm/Label;Ljdk/internal/org/objectweb/asm/Label;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(MethodNode, visitTryCatchBlock, void, $Label*, $Label*, $Label*, $String*)},
		{"visitTypeAnnotation", "(ILjdk/internal/org/objectweb/asm/TypePath;Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC, $virtualMethod(MethodNode, visitTypeAnnotation, $AnnotationVisitor*, int32_t, $TypePath*, $String*, bool)},
		{"visitTypeInsn", "(ILjava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(MethodNode, visitTypeInsn, void, int32_t, $String*)},
		{"visitVarInsn", "(II)V", nullptr, $PUBLIC, $virtualMethod(MethodNode, visitVarInsn, void, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.org.objectweb.asm.tree.MethodNode$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.org.objectweb.asm.tree.MethodNode",
		"jdk.internal.org.objectweb.asm.MethodVisitor",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"jdk.internal.org.objectweb.asm.tree.MethodNode$1"
	};
	$loadClass(MethodNode, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MethodNode);
	});
	return class$;
}

$Class* MethodNode::class$ = nullptr;

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk