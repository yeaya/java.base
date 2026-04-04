#include <jdk/internal/org/objectweb/asm/MethodWriter.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Math.h>
#include <jdk/internal/org/objectweb/asm/AnnotationVisitor.h>
#include <jdk/internal/org/objectweb/asm/AnnotationWriter.h>
#include <jdk/internal/org/objectweb/asm/Attribute$Set.h>
#include <jdk/internal/org/objectweb/asm/Attribute.h>
#include <jdk/internal/org/objectweb/asm/ByteVector.h>
#include <jdk/internal/org/objectweb/asm/ClassReader.h>
#include <jdk/internal/org/objectweb/asm/Constants.h>
#include <jdk/internal/org/objectweb/asm/CurrentFrame.h>
#include <jdk/internal/org/objectweb/asm/Edge.h>
#include <jdk/internal/org/objectweb/asm/Frame.h>
#include <jdk/internal/org/objectweb/asm/Handle.h>
#include <jdk/internal/org/objectweb/asm/Handler.h>
#include <jdk/internal/org/objectweb/asm/Label.h>
#include <jdk/internal/org/objectweb/asm/MethodTooLargeException.h>
#include <jdk/internal/org/objectweb/asm/MethodVisitor.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/Symbol.h>
#include <jdk/internal/org/objectweb/asm/SymbolTable.h>
#include <jdk/internal/org/objectweb/asm/Type.h>
#include <jdk/internal/org/objectweb/asm/TypePath.h>
#include <jcpp.h>

#undef ACC_CONSTRUCTOR
#undef ACC_DEPRECATED
#undef ACC_STATIC
#undef ACC_SYNTHETIC
#undef ANNOTATION_DEFAULT
#undef APPEND_FRAME
#undef ASM8
#undef ASM_GOTO_W
#undef ATHROW
#undef CHOP_FRAME
#undef CODE
#undef COMPUTE_ALL_FRAMES
#undef COMPUTE_INSERTED_FRAMES
#undef COMPUTE_MAX_STACK_AND_LOCAL
#undef COMPUTE_MAX_STACK_AND_LOCAL_FROM_FRAMES
#undef COMPUTE_NOTHING
#undef CONSTANT_DOUBLE_TAG
#undef CONSTANT_DYNAMIC_TAG
#undef CONSTANT_LONG_TAG
#undef DLOAD
#undef DOUBLE
#undef DSTORE
#undef EMPTY_LIST
#undef EXCEPTION
#undef EXCEPTIONS
#undef FLAG_DEBUG_ONLY
#undef FLAG_JUMP_TARGET
#undef FLAG_REACHABLE
#undef FLAG_RESOLVED
#undef FLAG_SUBROUTINE_CALLER
#undef FLAG_SUBROUTINE_END
#undef FLAG_SUBROUTINE_START
#undef FULL_FRAME
#undef F_APPEND
#undef F_CHOP
#undef F_FULL
#undef F_NEW
#undef F_SAME
#undef F_SAME1
#undef GETFIELD
#undef GETSTATIC
#undef GOTO
#undef GOTO_W
#undef IFNULL
#undef IINC
#undef ILOAD
#undef ILOAD_0
#undef INVOKEDYNAMIC
#undef INVOKEINTERFACE
#undef INVOKESTATIC
#undef IRETURN
#undef ISTORE
#undef ISTORE_0
#undef ITEM_OBJECT
#undef ITEM_UNINITIALIZED
#undef JSR
#undef JSR_W
#undef JUMP
#undef LDC
#undef LDC2_W
#undef LDC_W
#undef LINE_NUMBER_TABLE
#undef LLOAD
#undef LOCAL_VARIABLE_TABLE
#undef LOCAL_VARIABLE_TYPE_TABLE
#undef LONG
#undef LOOKUPSWITCH
#undef LSTORE
#undef METHOD_PARAMETERS
#undef MIN_VALUE
#undef MULTIANEWARRAY
#undef NA
#undef NEW
#undef NEWARRAY
#undef NOP
#undef PUTFIELD
#undef PUTSTATIC
#undef RET
#undef RETURN
#undef RUNTIME_INVISIBLE_PARAMETER_ANNOTATIONS
#undef RUNTIME_INVISIBLE_TYPE_ANNOTATIONS
#undef RUNTIME_VISIBLE_PARAMETER_ANNOTATIONS
#undef RUNTIME_VISIBLE_TYPE_ANNOTATIONS
#undef SAME_FRAME
#undef SAME_FRAME_EXTENDED
#undef SAME_LOCALS_1_STACK_ITEM_FRAME
#undef SAME_LOCALS_1_STACK_ITEM_FRAME_EXTENDED
#undef SIPUSH
#undef STACK_MAP_TABLE
#undef STACK_SIZE_DELTA
#undef TABLESWITCH
#undef WIDE
#undef WIDE_JUMP_OPCODE_DELTA

using $AnnotationWriterArray = $Array<::jdk::internal::org::objectweb::asm$::AnnotationWriter>;
using $LabelArray = $Array<::jdk::internal::org::objectweb::asm$::Label>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $AnnotationVisitor = ::jdk::internal::org::objectweb::asm$::AnnotationVisitor;
using $AnnotationWriter = ::jdk::internal::org::objectweb::asm$::AnnotationWriter;
using $Attribute = ::jdk::internal::org::objectweb::asm$::Attribute;
using $Attribute$Set = ::jdk::internal::org::objectweb::asm$::Attribute$Set;
using $ByteVector = ::jdk::internal::org::objectweb::asm$::ByteVector;
using $ClassReader = ::jdk::internal::org::objectweb::asm$::ClassReader;
using $Constants = ::jdk::internal::org::objectweb::asm$::Constants;
using $CurrentFrame = ::jdk::internal::org::objectweb::asm$::CurrentFrame;
using $Edge = ::jdk::internal::org::objectweb::asm$::Edge;
using $Frame = ::jdk::internal::org::objectweb::asm$::Frame;
using $Handle = ::jdk::internal::org::objectweb::asm$::Handle;
using $Handler = ::jdk::internal::org::objectweb::asm$::Handler;
using $Label = ::jdk::internal::org::objectweb::asm$::Label;
using $MethodTooLargeException = ::jdk::internal::org::objectweb::asm$::MethodTooLargeException;
using $MethodVisitor = ::jdk::internal::org::objectweb::asm$::MethodVisitor;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $Symbol = ::jdk::internal::org::objectweb::asm$::Symbol;
using $SymbolTable = ::jdk::internal::org::objectweb::asm$::SymbolTable;
using $Type = ::jdk::internal::org::objectweb::asm$::Type;
using $TypePath = ::jdk::internal::org::objectweb::asm$::TypePath;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {

$ints* MethodWriter::STACK_SIZE_DELTA = nullptr;

void MethodWriter::init$($SymbolTable* symbolTable, int32_t access, $String* name, $String* descriptor, $String* signature, $StringArray* exceptions, int32_t compute) {
	$useLocalObjectStack();
	$MethodVisitor::init$($Opcodes::ASM8);
	$set(this, code, $new($ByteVector));
	$set(this, symbolTable, symbolTable);
	this->accessFlags = "<init>"_s->equals(name) ? access | $Constants::ACC_CONSTRUCTOR : access;
	this->nameIndex = $nc(symbolTable)->addConstantUtf8(name);
	$set(this, name, name);
	this->descriptorIndex = symbolTable->addConstantUtf8(descriptor);
	$set(this, descriptor, descriptor);
	this->signatureIndex = signature == nullptr ? 0 : symbolTable->addConstantUtf8(signature);
	if (exceptions != nullptr && exceptions->length > 0) {
		this->numberOfExceptions = exceptions->length;
		$set(this, exceptionIndexTable, $new($ints, this->numberOfExceptions));
		for (int32_t i = 0; i < this->numberOfExceptions; ++i) {
			this->exceptionIndexTable->set(i, $nc($(symbolTable->addConstantClass(exceptions->get(i))))->index);
		}
	} else {
		this->numberOfExceptions = 0;
		$set(this, exceptionIndexTable, nullptr);
	}
	this->compute = compute;
	if (compute != MethodWriter::COMPUTE_NOTHING) {
		int32_t argumentsSize = $Type::getArgumentsAndReturnSizes(descriptor) >> 2;
		if ((access & $Opcodes::ACC_STATIC) != 0) {
			--argumentsSize;
		}
		this->maxLocals = argumentsSize;
		this->currentLocals = argumentsSize;
		$set(this, firstBasicBlock, $new($Label));
		visitLabel(this->firstBasicBlock);
	}
}

bool MethodWriter::hasFrames() {
	return this->stackMapTableNumberOfEntries > 0;
}

bool MethodWriter::hasAsmInstructions() {
	return this->hasAsmInstructions$;
}

void MethodWriter::visitParameter($String* name, int32_t access) {
	if (this->parameters == nullptr) {
		$set(this, parameters, $new($ByteVector));
	}
	++this->parametersCount;
	$$nc($nc(this->parameters)->putShort((name == nullptr) ? 0 : $nc(this->symbolTable)->addConstantUtf8(name)))->putShort(access);
}

$AnnotationVisitor* MethodWriter::visitAnnotationDefault() {
	$set(this, defaultValue, $new($ByteVector));
	return $new($AnnotationWriter, this->symbolTable, false, this->defaultValue, nullptr);
}

$AnnotationVisitor* MethodWriter::visitAnnotation($String* descriptor, bool visible) {
	if (visible) {
		return $set(this, lastRuntimeVisibleAnnotation, $AnnotationWriter::create(this->symbolTable, descriptor, this->lastRuntimeVisibleAnnotation));
	} else {
		return $set(this, lastRuntimeInvisibleAnnotation, $AnnotationWriter::create(this->symbolTable, descriptor, this->lastRuntimeInvisibleAnnotation));
	}
}

$AnnotationVisitor* MethodWriter::visitTypeAnnotation(int32_t typeRef, $TypePath* typePath, $String* descriptor, bool visible) {
	if (visible) {
		return $set(this, lastRuntimeVisibleTypeAnnotation, $AnnotationWriter::create(this->symbolTable, typeRef, typePath, descriptor, this->lastRuntimeVisibleTypeAnnotation));
	} else {
		return $set(this, lastRuntimeInvisibleTypeAnnotation, $AnnotationWriter::create(this->symbolTable, typeRef, typePath, descriptor, this->lastRuntimeInvisibleTypeAnnotation));
	}
}

void MethodWriter::visitAnnotableParameterCount(int32_t parameterCount, bool visible) {
	if (visible) {
		this->visibleAnnotableParameterCount = parameterCount;
	} else {
		this->invisibleAnnotableParameterCount = parameterCount;
	}
}

$AnnotationVisitor* MethodWriter::visitParameterAnnotation(int32_t parameter, $String* annotationDescriptor, bool visible) {
	$useLocalObjectStack();
	if (visible) {
		if (this->lastRuntimeVisibleParameterAnnotations == nullptr) {
			$set(this, lastRuntimeVisibleParameterAnnotations, $new($AnnotationWriterArray, $nc($($Type::getArgumentTypes(this->descriptor)))->length));
		}
		return $nc(this->lastRuntimeVisibleParameterAnnotations)->set(parameter, $($AnnotationWriter::create(this->symbolTable, annotationDescriptor, $nc(this->lastRuntimeVisibleParameterAnnotations)->get(parameter))));
	} else {
		if (this->lastRuntimeInvisibleParameterAnnotations == nullptr) {
			$set(this, lastRuntimeInvisibleParameterAnnotations, $new($AnnotationWriterArray, $nc($($Type::getArgumentTypes(this->descriptor)))->length));
		}
		return $nc(this->lastRuntimeInvisibleParameterAnnotations)->set(parameter, $($AnnotationWriter::create(this->symbolTable, annotationDescriptor, $nc(this->lastRuntimeInvisibleParameterAnnotations)->get(parameter))));
	}
}

void MethodWriter::visitAttribute($Attribute* attribute) {
	if ($nc(attribute)->isCodeAttribute()) {
		$set(attribute, nextAttribute, this->firstCodeAttribute);
		$set(this, firstCodeAttribute, attribute);
	} else {
		$set(attribute, nextAttribute, this->firstAttribute);
		$set(this, firstAttribute, attribute);
	}
}

void MethodWriter::visitCode() {
}

void MethodWriter::visitFrame(int32_t type, int32_t numLocal, $ObjectArray* local, int32_t numStack, $ObjectArray* stack) {
	$useLocalObjectStack();
	if (this->compute == MethodWriter::COMPUTE_ALL_FRAMES) {
		return;
	}
	if (this->compute == MethodWriter::COMPUTE_INSERTED_FRAMES) {
		if ($nc(this->currentBasicBlock)->frame == nullptr) {
			$set(this->currentBasicBlock, frame, $new($CurrentFrame, this->currentBasicBlock));
			this->currentBasicBlock->frame->setInputFrameFromDescriptor(this->symbolTable, this->accessFlags, this->descriptor, numLocal);
			this->currentBasicBlock->frame->accept(this);
		} else {
			if (type == $Opcodes::F_NEW) {
				this->currentBasicBlock->frame->setInputFrameFromApiFormat(this->symbolTable, numLocal, local, numStack, stack);
			}
			this->currentBasicBlock->frame->accept(this);
		}
	} else if (type == $Opcodes::F_NEW) {
		if (this->previousFrame == nullptr) {
			int32_t argumentsSize = $Type::getArgumentsAndReturnSizes(this->descriptor) >> 2;
			$var($Frame, implicitFirstFrame, $new($Frame, $$new($Label)));
			implicitFirstFrame->setInputFrameFromDescriptor(this->symbolTable, this->accessFlags, this->descriptor, argumentsSize);
			implicitFirstFrame->accept(this);
		}
		this->currentLocals = numLocal;
		int32_t frameIndex = visitFrameStart(this->code->length, numLocal, numStack);
		for (int32_t i = 0; i < numLocal; ++i) {
			$nc(this->currentFrame)->set(frameIndex++, $Frame::getAbstractTypeFromApiFormat(this->symbolTable, $nc(local)->get(i)));
		}
		for (int32_t i = 0; i < numStack; ++i) {
			$nc(this->currentFrame)->set(frameIndex++, $Frame::getAbstractTypeFromApiFormat(this->symbolTable, $nc(stack)->get(i)));
		}
		visitFrameEnd();
	} else {
		if ($nc(this->symbolTable)->getMajorVersion() < $Opcodes::V1_6) {
			$throwNew($IllegalArgumentException, "Class versions V1_5 or less must use F_NEW frames."_s);
		}
		int32_t offsetDelta = 0;
		if (this->stackMapTableEntries == nullptr) {
			$set(this, stackMapTableEntries, $new($ByteVector));
			offsetDelta = this->code->length;
		} else {
			offsetDelta = this->code->length - this->previousFrameOffset - 1;
			if (offsetDelta < 0) {
				if (type == $Opcodes::F_SAME) {
					return;
				} else {
					$throwNew($IllegalStateException);
				}
			}
		}
		switch (type) {
		case $Opcodes::F_FULL:
			this->currentLocals = numLocal;
			$$nc($$nc($nc(this->stackMapTableEntries)->putByte($Frame::FULL_FRAME))->putShort(offsetDelta))->putShort(numLocal);
			for (int32_t i = 0; i < numLocal; ++i) {
				putFrameType($nc(local)->get(i));
			}
			this->stackMapTableEntries->putShort(numStack);
			for (int32_t i = 0; i < numStack; ++i) {
				putFrameType($nc(stack)->get(i));
			}
			break;
		case $Opcodes::F_APPEND:
			this->currentLocals += numLocal;
			$$nc($nc(this->stackMapTableEntries)->putByte($Frame::SAME_FRAME_EXTENDED + numLocal))->putShort(offsetDelta);
			for (int32_t i = 0; i < numLocal; ++i) {
				putFrameType($nc(local)->get(i));
			}
			break;
		case $Opcodes::F_CHOP:
			this->currentLocals -= numLocal;
			$$nc($nc(this->stackMapTableEntries)->putByte($Frame::SAME_FRAME_EXTENDED - numLocal))->putShort(offsetDelta);
			break;
		case $Opcodes::F_SAME:
			if (offsetDelta < 64) {
				$nc(this->stackMapTableEntries)->putByte(offsetDelta);
			} else {
				$$nc($nc(this->stackMapTableEntries)->putByte($Frame::SAME_FRAME_EXTENDED))->putShort(offsetDelta);
			}
			break;
		case $Opcodes::F_SAME1:
			if (offsetDelta < 64) {
				$nc(this->stackMapTableEntries)->putByte($Frame::SAME_LOCALS_1_STACK_ITEM_FRAME + offsetDelta);
			} else {
				$$nc($nc(this->stackMapTableEntries)->putByte($Frame::SAME_LOCALS_1_STACK_ITEM_FRAME_EXTENDED))->putShort(offsetDelta);
			}
			putFrameType($nc(stack)->get(0));
			break;
		default:
			$throwNew($IllegalArgumentException);
		}
		this->previousFrameOffset = this->code->length;
		++this->stackMapTableNumberOfEntries;
	}
	if (this->compute == MethodWriter::COMPUTE_MAX_STACK_AND_LOCAL_FROM_FRAMES) {
		this->relativeStackSize = numStack;
		for (int32_t i = 0; i < numStack; ++i) {
			$init($Opcodes);
			if ($equals($nc(stack)->get(i), $Opcodes::LONG) || $equals(stack->get(i), $Opcodes::DOUBLE)) {
				++this->relativeStackSize;
			}
		}
		if (this->relativeStackSize > this->maxRelativeStackSize) {
			this->maxRelativeStackSize = this->relativeStackSize;
		}
	}
	this->maxStack = $Math::max(this->maxStack, numStack);
	this->maxLocals = $Math::max(this->maxLocals, this->currentLocals);
}

void MethodWriter::visitInsn(int32_t opcode) {
	this->lastBytecodeOffset = this->code->length;
	this->code->putByte(opcode);
	if (this->currentBasicBlock != nullptr) {
		if (this->compute == MethodWriter::COMPUTE_ALL_FRAMES || this->compute == MethodWriter::COMPUTE_INSERTED_FRAMES) {
			$nc(this->currentBasicBlock->frame)->execute(opcode, 0, nullptr, nullptr);
		} else {
			int32_t size = this->relativeStackSize + MethodWriter::STACK_SIZE_DELTA->get(opcode);
			if (size > this->maxRelativeStackSize) {
				this->maxRelativeStackSize = size;
			}
			this->relativeStackSize = size;
		}
		if ((opcode >= $Opcodes::IRETURN && opcode <= $Opcodes::RETURN) || opcode == $Opcodes::ATHROW) {
			endCurrentBasicBlockWithNoSuccessor();
		}
	}
}

void MethodWriter::visitIntInsn(int32_t opcode, int32_t operand) {
	this->lastBytecodeOffset = this->code->length;
	if (opcode == $Opcodes::SIPUSH) {
		this->code->put12(opcode, operand);
	} else {
		this->code->put11(opcode, operand);
	}
	if (this->currentBasicBlock != nullptr) {
		if (this->compute == MethodWriter::COMPUTE_ALL_FRAMES || this->compute == MethodWriter::COMPUTE_INSERTED_FRAMES) {
			$nc(this->currentBasicBlock->frame)->execute(opcode, operand, nullptr, nullptr);
		} else if (opcode != $Opcodes::NEWARRAY) {
			int32_t size = this->relativeStackSize + 1;
			if (size > this->maxRelativeStackSize) {
				this->maxRelativeStackSize = size;
			}
			this->relativeStackSize = size;
		}
	}
}

void MethodWriter::visitVarInsn(int32_t opcode, int32_t var) {
	$useLocalObjectStack();
	this->lastBytecodeOffset = this->code->length;
	if (var < 4 && opcode != $Opcodes::RET) {
		int32_t optimizedOpcode = 0;
		if (opcode < $Opcodes::ISTORE) {
			optimizedOpcode = $Constants::ILOAD_0 + ((opcode - $Opcodes::ILOAD) << 2) + var;
		} else {
			optimizedOpcode = $Constants::ISTORE_0 + ((opcode - $Opcodes::ISTORE) << 2) + var;
		}
		this->code->putByte(optimizedOpcode);
	} else if (var >= 256) {
		$$nc(this->code->putByte($Constants::WIDE))->put12(opcode, var);
	} else {
		this->code->put11(opcode, var);
	}
	if (this->currentBasicBlock != nullptr) {
		if (this->compute == MethodWriter::COMPUTE_ALL_FRAMES || this->compute == MethodWriter::COMPUTE_INSERTED_FRAMES) {
			$nc(this->currentBasicBlock->frame)->execute(opcode, var, nullptr, nullptr);
		} else if (opcode == $Opcodes::RET) {
			this->currentBasicBlock->flags |= $Label::FLAG_SUBROUTINE_END;
			this->currentBasicBlock->outputStackSize = (int16_t)this->relativeStackSize;
			endCurrentBasicBlockWithNoSuccessor();
		} else {
			int32_t size = this->relativeStackSize + MethodWriter::STACK_SIZE_DELTA->get(opcode);
			if (size > this->maxRelativeStackSize) {
				this->maxRelativeStackSize = size;
			}
			this->relativeStackSize = size;
		}
	}
	if (this->compute != MethodWriter::COMPUTE_NOTHING) {
		int32_t currentMaxLocals = 0;
		if (opcode == $Opcodes::LLOAD || opcode == $Opcodes::DLOAD || opcode == $Opcodes::LSTORE || opcode == $Opcodes::DSTORE) {
			currentMaxLocals = var + 2;
		} else {
			currentMaxLocals = var + 1;
		}
		if (currentMaxLocals > this->maxLocals) {
			this->maxLocals = currentMaxLocals;
		}
	}
	if (opcode >= $Opcodes::ISTORE && this->compute == MethodWriter::COMPUTE_ALL_FRAMES && this->firstHandler != nullptr) {
		visitLabel($$new($Label));
	}
}

void MethodWriter::visitTypeInsn(int32_t opcode, $String* type) {
	this->lastBytecodeOffset = this->code->length;
	$var($Symbol, typeSymbol, $nc(this->symbolTable)->addConstantClass(type));
	this->code->put12(opcode, $nc(typeSymbol)->index);
	if (this->currentBasicBlock != nullptr) {
		if (this->compute == MethodWriter::COMPUTE_ALL_FRAMES || this->compute == MethodWriter::COMPUTE_INSERTED_FRAMES) {
			$nc(this->currentBasicBlock->frame)->execute(opcode, this->lastBytecodeOffset, typeSymbol, this->symbolTable);
		} else if (opcode == $Opcodes::NEW) {
			int32_t size = this->relativeStackSize + 1;
			if (size > this->maxRelativeStackSize) {
				this->maxRelativeStackSize = size;
			}
			this->relativeStackSize = size;
		}
	}
}

void MethodWriter::visitFieldInsn(int32_t opcode, $String* owner, $String* name, $String* descriptor) {
	this->lastBytecodeOffset = this->code->length;
	$var($Symbol, fieldrefSymbol, $nc(this->symbolTable)->addConstantFieldref(owner, name, descriptor));
	this->code->put12(opcode, $nc(fieldrefSymbol)->index);
	if (this->currentBasicBlock != nullptr) {
		if (this->compute == MethodWriter::COMPUTE_ALL_FRAMES || this->compute == MethodWriter::COMPUTE_INSERTED_FRAMES) {
			$nc(this->currentBasicBlock->frame)->execute(opcode, 0, fieldrefSymbol, this->symbolTable);
		} else {
			int32_t size = 0;
			char16_t firstDescChar = $nc(descriptor)->charAt(0);
			switch (opcode) {
			case $Opcodes::GETSTATIC:
				size = this->relativeStackSize + (firstDescChar == u'D' || firstDescChar == u'J' ? 2 : 1);
				break;
			case $Opcodes::PUTSTATIC:
				size = this->relativeStackSize + (firstDescChar == u'D' || firstDescChar == u'J' ? -2 : -1);
				break;
			case $Opcodes::GETFIELD:
				size = this->relativeStackSize + (firstDescChar == u'D' || firstDescChar == u'J' ? 1 : 0);
				break;
			case $Opcodes::PUTFIELD:
			default:
				size = this->relativeStackSize + (firstDescChar == u'D' || firstDescChar == u'J' ? -3 : -2);
				break;
			}
			if (size > this->maxRelativeStackSize) {
				this->maxRelativeStackSize = size;
			}
			this->relativeStackSize = size;
		}
	}
}

void MethodWriter::visitMethodInsn(int32_t opcode, $String* owner, $String* name, $String* descriptor, bool isInterface) {
	$useLocalObjectStack();
	this->lastBytecodeOffset = this->code->length;
	$var($Symbol, methodrefSymbol, $nc(this->symbolTable)->addConstantMethodref(owner, name, descriptor, isInterface));
	if (opcode == $Opcodes::INVOKEINTERFACE) {
		$$nc(this->code->put12($Opcodes::INVOKEINTERFACE, $nc(methodrefSymbol)->index))->put11($nc(methodrefSymbol)->getArgumentsAndReturnSizes() >> 2, 0);
	} else {
		this->code->put12(opcode, $nc(methodrefSymbol)->index);
	}
	if (this->currentBasicBlock != nullptr) {
		if (this->compute == MethodWriter::COMPUTE_ALL_FRAMES || this->compute == MethodWriter::COMPUTE_INSERTED_FRAMES) {
			$nc(this->currentBasicBlock->frame)->execute(opcode, 0, methodrefSymbol, this->symbolTable);
		} else {
			int32_t argumentsAndReturnSize = $nc(methodrefSymbol)->getArgumentsAndReturnSizes();
			int32_t stackSizeDelta = (argumentsAndReturnSize & 3) - (argumentsAndReturnSize >> 2);
			int32_t size = 0;
			if (opcode == $Opcodes::INVOKESTATIC) {
				size = this->relativeStackSize + stackSizeDelta + 1;
			} else {
				size = this->relativeStackSize + stackSizeDelta;
			}
			if (size > this->maxRelativeStackSize) {
				this->maxRelativeStackSize = size;
			}
			this->relativeStackSize = size;
		}
	}
}

void MethodWriter::visitInvokeDynamicInsn($String* name, $String* descriptor, $Handle* bootstrapMethodHandle, $ObjectArray* bootstrapMethodArguments) {
	this->lastBytecodeOffset = this->code->length;
	$var($Symbol, invokeDynamicSymbol, $nc(this->symbolTable)->addConstantInvokeDynamic(name, descriptor, bootstrapMethodHandle, bootstrapMethodArguments));
	this->code->put12($Opcodes::INVOKEDYNAMIC, $nc(invokeDynamicSymbol)->index);
	this->code->putShort(0);
	if (this->currentBasicBlock != nullptr) {
		if (this->compute == MethodWriter::COMPUTE_ALL_FRAMES || this->compute == MethodWriter::COMPUTE_INSERTED_FRAMES) {
			$nc(this->currentBasicBlock->frame)->execute($Opcodes::INVOKEDYNAMIC, 0, invokeDynamicSymbol, this->symbolTable);
		} else {
			int32_t argumentsAndReturnSize = invokeDynamicSymbol->getArgumentsAndReturnSizes();
			int32_t stackSizeDelta = (argumentsAndReturnSize & 3) - (argumentsAndReturnSize >> 2) + 1;
			int32_t size = this->relativeStackSize + stackSizeDelta;
			if (size > this->maxRelativeStackSize) {
				this->maxRelativeStackSize = size;
			}
			this->relativeStackSize = size;
		}
	}
}

void MethodWriter::visitJumpInsn(int32_t opcode, $Label* label) {
	$useLocalObjectStack();
	this->lastBytecodeOffset = this->code->length;
	int32_t baseOpcode = opcode >= $Constants::GOTO_W ? opcode - $Constants::WIDE_JUMP_OPCODE_DELTA : opcode;
	bool nextInsnIsJumpTarget = false;
	if (($nc(label)->flags & $Label::FLAG_RESOLVED) != 0 && label->bytecodeOffset - this->code->length < $Short::MIN_VALUE) {
		if (baseOpcode == $Opcodes::GOTO) {
			this->code->putByte($Constants::GOTO_W);
		} else if (baseOpcode == $Opcodes::JSR) {
			this->code->putByte($Constants::JSR_W);
		} else {
			this->code->putByte(baseOpcode >= $Opcodes::IFNULL ? baseOpcode ^ 1 : ((baseOpcode + 1) ^ 1) - 1);
			this->code->putShort(8);
			this->code->putByte($Constants::ASM_GOTO_W);
			this->hasAsmInstructions$ = true;
			nextInsnIsJumpTarget = true;
		}
		label->put(this->code, this->code->length - 1, true);
	} else if (baseOpcode != opcode) {
		this->code->putByte(opcode);
		label->put(this->code, this->code->length - 1, true);
	} else {
		this->code->putByte(baseOpcode);
		label->put(this->code, this->code->length - 1, false);
	}
	if (this->currentBasicBlock != nullptr) {
		$var($Label, nextBasicBlock, nullptr);
		if (this->compute == MethodWriter::COMPUTE_ALL_FRAMES) {
			$nc(this->currentBasicBlock->frame)->execute(baseOpcode, 0, nullptr, nullptr);
			$nc($(label->getCanonicalInstance()))->flags |= $Label::FLAG_JUMP_TARGET;
			addSuccessorToCurrentBasicBlock($Edge::JUMP, label);
			if (baseOpcode != $Opcodes::GOTO) {
				$assign(nextBasicBlock, $new($Label));
			}
		} else if (this->compute == MethodWriter::COMPUTE_INSERTED_FRAMES) {
			$nc(this->currentBasicBlock->frame)->execute(baseOpcode, 0, nullptr, nullptr);
		} else if (this->compute == MethodWriter::COMPUTE_MAX_STACK_AND_LOCAL_FROM_FRAMES) {
			this->relativeStackSize += MethodWriter::STACK_SIZE_DELTA->get(baseOpcode);
		} else if (baseOpcode == $Opcodes::JSR) {
			if ((label->flags & $Label::FLAG_SUBROUTINE_START) == 0) {
				label->flags |= $Label::FLAG_SUBROUTINE_START;
				this->hasSubroutines = true;
			}
			this->currentBasicBlock->flags |= $Label::FLAG_SUBROUTINE_CALLER;
			addSuccessorToCurrentBasicBlock(this->relativeStackSize + 1, label);
			$assign(nextBasicBlock, $new($Label));
		} else {
			this->relativeStackSize += MethodWriter::STACK_SIZE_DELTA->get(baseOpcode);
			addSuccessorToCurrentBasicBlock(this->relativeStackSize, label);
		}
		if (nextBasicBlock != nullptr) {
			if (nextInsnIsJumpTarget) {
				nextBasicBlock->flags |= $Label::FLAG_JUMP_TARGET;
			}
			visitLabel(nextBasicBlock);
		}
		if (baseOpcode == $Opcodes::GOTO) {
			endCurrentBasicBlockWithNoSuccessor();
		}
	}
}

void MethodWriter::visitLabel($Label* label) {
	this->hasAsmInstructions$ |= $nc(label)->resolve(this->code->data, this->code->length);
	if ((label->flags & $Label::FLAG_DEBUG_ONLY) != 0) {
		return;
	}
	if (this->compute == MethodWriter::COMPUTE_ALL_FRAMES) {
		if (this->currentBasicBlock != nullptr) {
			if (label->bytecodeOffset == this->currentBasicBlock->bytecodeOffset) {
				this->currentBasicBlock->flags |= (label->flags & $Label::FLAG_JUMP_TARGET);
				$set(label, frame, this->currentBasicBlock->frame);
				return;
			}
			addSuccessorToCurrentBasicBlock($Edge::JUMP, label);
		}
		if (this->lastBasicBlock != nullptr) {
			if (label->bytecodeOffset == this->lastBasicBlock->bytecodeOffset) {
				this->lastBasicBlock->flags |= (label->flags & $Label::FLAG_JUMP_TARGET);
				$set(label, frame, this->lastBasicBlock->frame);
				$set(this, currentBasicBlock, this->lastBasicBlock);
				return;
			}
			$set(this->lastBasicBlock, nextBasicBlock, label);
		}
		$set(this, lastBasicBlock, label);
		$set(this, currentBasicBlock, label);
		$set(label, frame, $new($Frame, label));
	} else if (this->compute == MethodWriter::COMPUTE_INSERTED_FRAMES) {
		if (this->currentBasicBlock == nullptr) {
			$set(this, currentBasicBlock, label);
		} else {
			$set($nc(this->currentBasicBlock->frame), owner, label);
		}
	} else if (this->compute == MethodWriter::COMPUTE_MAX_STACK_AND_LOCAL) {
		if (this->currentBasicBlock != nullptr) {
			this->currentBasicBlock->outputStackMax = (int16_t)this->maxRelativeStackSize;
			addSuccessorToCurrentBasicBlock(this->relativeStackSize, label);
		}
		$set(this, currentBasicBlock, label);
		this->relativeStackSize = 0;
		this->maxRelativeStackSize = 0;
		if (this->lastBasicBlock != nullptr) {
			$set(this->lastBasicBlock, nextBasicBlock, label);
		}
		$set(this, lastBasicBlock, label);
	} else if (this->compute == MethodWriter::COMPUTE_MAX_STACK_AND_LOCAL_FROM_FRAMES && this->currentBasicBlock == nullptr) {
		$set(this, currentBasicBlock, label);
	}
}

void MethodWriter::visitLdcInsn(Object$* value) {
	this->lastBytecodeOffset = this->code->length;
	$var($Symbol, constantSymbol, $nc(this->symbolTable)->addConstant(value));
	int32_t constantIndex = $nc(constantSymbol)->index;
	char16_t firstDescriptorChar = 0;
	bool isLongOrDouble = constantSymbol->tag == $Symbol::CONSTANT_LONG_TAG || constantSymbol->tag == $Symbol::CONSTANT_DOUBLE_TAG || (constantSymbol->tag == $Symbol::CONSTANT_DYNAMIC_TAG && ((firstDescriptorChar = $nc(constantSymbol->value)->charAt(0)) == u'J' || firstDescriptorChar == u'D'));
	if (isLongOrDouble) {
		this->code->put12($Constants::LDC2_W, constantIndex);
	} else if (constantIndex >= 256) {
		this->code->put12($Constants::LDC_W, constantIndex);
	} else {
		this->code->put11($Opcodes::LDC, constantIndex);
	}
	if (this->currentBasicBlock != nullptr) {
		if (this->compute == MethodWriter::COMPUTE_ALL_FRAMES || this->compute == MethodWriter::COMPUTE_INSERTED_FRAMES) {
			$nc(this->currentBasicBlock->frame)->execute($Opcodes::LDC, 0, constantSymbol, this->symbolTable);
		} else {
			int32_t size = this->relativeStackSize + (isLongOrDouble ? 2 : 1);
			if (size > this->maxRelativeStackSize) {
				this->maxRelativeStackSize = size;
			}
			this->relativeStackSize = size;
		}
	}
}

void MethodWriter::visitIincInsn(int32_t var, int32_t increment) {
	$useLocalObjectStack();
	this->lastBytecodeOffset = this->code->length;
	if ((var > 255) || (increment > 127) || (increment < -128)) {
		$$nc($$nc(this->code->putByte($Constants::WIDE))->put12($Opcodes::IINC, var))->putShort(increment);
	} else {
		$$nc(this->code->putByte($Opcodes::IINC))->put11(var, increment);
	}
	if (this->currentBasicBlock != nullptr && (this->compute == MethodWriter::COMPUTE_ALL_FRAMES || this->compute == MethodWriter::COMPUTE_INSERTED_FRAMES)) {
		$nc(this->currentBasicBlock->frame)->execute($Opcodes::IINC, var, nullptr, nullptr);
	}
	if (this->compute != MethodWriter::COMPUTE_NOTHING) {
		int32_t currentMaxLocals = var + 1;
		if (currentMaxLocals > this->maxLocals) {
			this->maxLocals = currentMaxLocals;
		}
	}
}

void MethodWriter::visitTableSwitchInsn(int32_t min, int32_t max, $Label* dflt, $LabelArray* labels) {
	$useLocalObjectStack();
	this->lastBytecodeOffset = this->code->length;
	$$nc(this->code->putByte($Opcodes::TABLESWITCH))->putByteArray(nullptr, 0, (4 - this->code->length % 4) % 4);
	$nc(dflt)->put(this->code, this->lastBytecodeOffset, true);
	$$nc(this->code->putInt(min))->putInt(max);
	{
		$var($LabelArray, arr$, labels);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Label, label, arr$->get(i$));
			{
				$nc(label)->put(this->code, this->lastBytecodeOffset, true);
			}
		}
	}
	visitSwitchInsn(dflt, labels);
}

void MethodWriter::visitLookupSwitchInsn($Label* dflt, $ints* keys, $LabelArray* labels) {
	this->lastBytecodeOffset = this->code->length;
	$$nc(this->code->putByte($Opcodes::LOOKUPSWITCH))->putByteArray(nullptr, 0, (4 - this->code->length % 4) % 4);
	$nc(dflt)->put(this->code, this->lastBytecodeOffset, true);
	this->code->putInt($nc(labels)->length);
	for (int32_t i = 0; i < labels->length; ++i) {
		this->code->putInt($nc(keys)->get(i));
		$nc(labels->get(i))->put(this->code, this->lastBytecodeOffset, true);
	}
	visitSwitchInsn(dflt, labels);
}

void MethodWriter::visitSwitchInsn($Label* dflt, $LabelArray* labels) {
	$useLocalObjectStack();
	if (this->currentBasicBlock != nullptr) {
		if (this->compute == MethodWriter::COMPUTE_ALL_FRAMES) {
			$nc(this->currentBasicBlock->frame)->execute($Opcodes::LOOKUPSWITCH, 0, nullptr, nullptr);
			addSuccessorToCurrentBasicBlock($Edge::JUMP, dflt);
			$nc($($nc(dflt)->getCanonicalInstance()))->flags |= $Label::FLAG_JUMP_TARGET;
			{
				$var($LabelArray, arr$, labels);
				for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
					$var($Label, label, arr$->get(i$));
					{
						addSuccessorToCurrentBasicBlock($Edge::JUMP, label);
						$nc($($nc(label)->getCanonicalInstance()))->flags |= $Label::FLAG_JUMP_TARGET;
					}
				}
			}
		} else if (this->compute == MethodWriter::COMPUTE_MAX_STACK_AND_LOCAL) {
			--this->relativeStackSize;
			addSuccessorToCurrentBasicBlock(this->relativeStackSize, dflt);
			{
				$var($LabelArray, arr$, labels);
				for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
					$var($Label, label, arr$->get(i$));
					{
						addSuccessorToCurrentBasicBlock(this->relativeStackSize, label);
					}
				}
			}
		}
		endCurrentBasicBlockWithNoSuccessor();
	}
}

void MethodWriter::visitMultiANewArrayInsn($String* descriptor, int32_t numDimensions) {
	$useLocalObjectStack();
	this->lastBytecodeOffset = this->code->length;
	$var($Symbol, descSymbol, $nc(this->symbolTable)->addConstantClass(descriptor));
	$$nc(this->code->put12($Opcodes::MULTIANEWARRAY, $nc(descSymbol)->index))->putByte(numDimensions);
	if (this->currentBasicBlock != nullptr) {
		if (this->compute == MethodWriter::COMPUTE_ALL_FRAMES || this->compute == MethodWriter::COMPUTE_INSERTED_FRAMES) {
			$nc(this->currentBasicBlock->frame)->execute($Opcodes::MULTIANEWARRAY, numDimensions, descSymbol, this->symbolTable);
		} else {
			this->relativeStackSize += 1 - numDimensions;
		}
	}
}

$AnnotationVisitor* MethodWriter::visitInsnAnnotation(int32_t typeRef, $TypePath* typePath, $String* descriptor, bool visible) {
	if (visible) {
		return $set(this, lastCodeRuntimeVisibleTypeAnnotation, $AnnotationWriter::create(this->symbolTable, (typeRef & (int32_t)0xff0000ff) | (this->lastBytecodeOffset << 8), typePath, descriptor, this->lastCodeRuntimeVisibleTypeAnnotation));
	} else {
		return $set(this, lastCodeRuntimeInvisibleTypeAnnotation, $AnnotationWriter::create(this->symbolTable, (typeRef & (int32_t)0xff0000ff) | (this->lastBytecodeOffset << 8), typePath, descriptor, this->lastCodeRuntimeInvisibleTypeAnnotation));
	}
}

void MethodWriter::visitTryCatchBlock($Label* start, $Label* end, $Label* handler, $String* type) {
	$useLocalObjectStack();
	$var($Handler, newHandler, $new($Handler, start, end, handler, type != nullptr ? $nc($($nc(this->symbolTable)->addConstantClass(type)))->index : 0, type));
	if (this->firstHandler == nullptr) {
		$set(this, firstHandler, newHandler);
	} else {
		$set($nc(this->lastHandler), nextHandler, newHandler);
	}
	$set(this, lastHandler, newHandler);
}

$AnnotationVisitor* MethodWriter::visitTryCatchAnnotation(int32_t typeRef, $TypePath* typePath, $String* descriptor, bool visible) {
	if (visible) {
		return $set(this, lastCodeRuntimeVisibleTypeAnnotation, $AnnotationWriter::create(this->symbolTable, typeRef, typePath, descriptor, this->lastCodeRuntimeVisibleTypeAnnotation));
	} else {
		return $set(this, lastCodeRuntimeInvisibleTypeAnnotation, $AnnotationWriter::create(this->symbolTable, typeRef, typePath, descriptor, this->lastCodeRuntimeInvisibleTypeAnnotation));
	}
}

void MethodWriter::visitLocalVariable($String* name, $String* descriptor, $String* signature, $Label* start, $Label* end, int32_t index) {
	$useLocalObjectStack();
	if (signature != nullptr) {
		if (this->localVariableTypeTable == nullptr) {
			$set(this, localVariableTypeTable, $new($ByteVector));
		}
		++this->localVariableTypeTableLength;
		$$nc($$nc($$nc($$nc($nc(this->localVariableTypeTable)->putShort($nc(start)->bytecodeOffset))->putShort($nc(end)->bytecodeOffset - $nc(start)->bytecodeOffset))->putShort($nc(this->symbolTable)->addConstantUtf8(name)))->putShort($nc(this->symbolTable)->addConstantUtf8(signature)))->putShort(index);
	}
	if (this->localVariableTable == nullptr) {
		$set(this, localVariableTable, $new($ByteVector));
	}
	++this->localVariableTableLength;
	$$nc($$nc($$nc($$nc($nc(this->localVariableTable)->putShort($nc(start)->bytecodeOffset))->putShort($nc(end)->bytecodeOffset - $nc(start)->bytecodeOffset))->putShort($nc(this->symbolTable)->addConstantUtf8(name)))->putShort($nc(this->symbolTable)->addConstantUtf8(descriptor)))->putShort(index);
	if (this->compute != MethodWriter::COMPUTE_NOTHING) {
		char16_t firstDescChar = $nc(descriptor)->charAt(0);
		int32_t currentMaxLocals = index + (firstDescChar == u'J' || firstDescChar == u'D' ? 2 : 1);
		if (currentMaxLocals > this->maxLocals) {
			this->maxLocals = currentMaxLocals;
		}
	}
}

$AnnotationVisitor* MethodWriter::visitLocalVariableAnnotation(int32_t typeRef, $TypePath* typePath, $LabelArray* start, $LabelArray* end, $ints* index, $String* descriptor, bool visible) {
	$useLocalObjectStack();
	$var($ByteVector, typeAnnotation, $new($ByteVector));
	$$nc(typeAnnotation->putByte((int32_t)((uint32_t)typeRef >> 24)))->putShort($nc(start)->length);
	for (int32_t i = 0; i < start->length; ++i) {
		$$nc($$nc(typeAnnotation->putShort($nc(start->get(i))->bytecodeOffset))->putShort($nc($nc(end)->get(i))->bytecodeOffset - $nc(start->get(i))->bytecodeOffset))->putShort($nc(index)->get(i));
	}
	$TypePath::put(typePath, typeAnnotation);
	$$nc(typeAnnotation->putShort($nc(this->symbolTable)->addConstantUtf8(descriptor)))->putShort(0);
	if (visible) {
		return $set(this, lastCodeRuntimeVisibleTypeAnnotation, $new($AnnotationWriter, this->symbolTable, true, typeAnnotation, this->lastCodeRuntimeVisibleTypeAnnotation));
	} else {
		return $set(this, lastCodeRuntimeInvisibleTypeAnnotation, $new($AnnotationWriter, this->symbolTable, true, typeAnnotation, this->lastCodeRuntimeInvisibleTypeAnnotation));
	}
}

void MethodWriter::visitLineNumber(int32_t line, $Label* start) {
	if (this->lineNumberTable == nullptr) {
		$set(this, lineNumberTable, $new($ByteVector));
	}
	++this->lineNumberTableLength;
	$nc(this->lineNumberTable)->putShort($nc(start)->bytecodeOffset);
	this->lineNumberTable->putShort(line);
}

void MethodWriter::visitMaxs(int32_t maxStack, int32_t maxLocals) {
	if (this->compute == MethodWriter::COMPUTE_ALL_FRAMES) {
		computeAllFrames();
	} else if (this->compute == MethodWriter::COMPUTE_MAX_STACK_AND_LOCAL) {
		computeMaxStackAndLocal();
	} else if (this->compute == MethodWriter::COMPUTE_MAX_STACK_AND_LOCAL_FROM_FRAMES) {
		this->maxStack = this->maxRelativeStackSize;
	} else {
		this->maxStack = maxStack;
		this->maxLocals = maxLocals;
	}
}

void MethodWriter::computeAllFrames() {
	$useLocalObjectStack();
	$var($Handler, handler, this->firstHandler);
	while (handler != nullptr) {
		$var($String, catchTypeDescriptor, handler->catchTypeDescriptor == nullptr ? "java/lang/Throwable"_s : handler->catchTypeDescriptor);
		int32_t catchType = $Frame::getAbstractTypeFromInternalName(this->symbolTable, catchTypeDescriptor);
		$var($Label, handlerBlock, $nc(handler->handlerPc)->getCanonicalInstance());
		$nc(handlerBlock)->flags |= $Label::FLAG_JUMP_TARGET;
		$var($Label, handlerRangeBlock, $nc(handler->startPc)->getCanonicalInstance());
		$var($Label, handlerRangeEnd, $nc(handler->endPc)->getCanonicalInstance());
		while (handlerRangeBlock != handlerRangeEnd) {
			$set($nc(handlerRangeBlock), outgoingEdges, $new($Edge, catchType, handlerBlock, $nc(handlerRangeBlock)->outgoingEdges));
			$assign(handlerRangeBlock, handlerRangeBlock->nextBasicBlock);
		}
		$assign(handler, handler->nextHandler);
	}
	$var($Frame, firstFrame, $nc(this->firstBasicBlock)->frame);
	$nc(firstFrame)->setInputFrameFromDescriptor(this->symbolTable, this->accessFlags, this->descriptor, this->maxLocals);
	firstFrame->accept(this);
	$var($Label, listOfBlocksToProcess, this->firstBasicBlock);
	$set($nc(listOfBlocksToProcess), nextListElement, $Label::EMPTY_LIST);
	int32_t maxStackSize = 0;
	while (listOfBlocksToProcess != $Label::EMPTY_LIST) {
		$var($Label, basicBlock, listOfBlocksToProcess);
		$assign(listOfBlocksToProcess, $nc(listOfBlocksToProcess)->nextListElement);
		$set($nc(basicBlock), nextListElement, nullptr);
		basicBlock->flags |= $Label::FLAG_REACHABLE;
		int32_t maxBlockStackSize = $nc(basicBlock->frame)->getInputStackSize() + basicBlock->outputStackMax;
		if (maxBlockStackSize > maxStackSize) {
			maxStackSize = maxBlockStackSize;
		}
		$var($Edge, outgoingEdge, basicBlock->outgoingEdges);
		while (outgoingEdge != nullptr) {
			$var($Label, successorBlock, $nc(outgoingEdge->successor)->getCanonicalInstance());
			bool successorBlockChanged = basicBlock->frame->merge(this->symbolTable, $nc(successorBlock)->frame, outgoingEdge->info);
			if (successorBlockChanged && successorBlock->nextListElement == nullptr) {
				$set(successorBlock, nextListElement, listOfBlocksToProcess);
				$assign(listOfBlocksToProcess, successorBlock);
			}
			$assign(outgoingEdge, outgoingEdge->nextEdge);
		}
	}
	$var($Label, basicBlock, this->firstBasicBlock);
	while (basicBlock != nullptr) {
		if ((basicBlock->flags & ($Label::FLAG_JUMP_TARGET | $Label::FLAG_REACHABLE)) == ($Label::FLAG_JUMP_TARGET | $Label::FLAG_REACHABLE)) {
			$nc(basicBlock->frame)->accept(this);
		}
		if ((basicBlock->flags & $Label::FLAG_REACHABLE) == 0) {
			$var($Label, nextBasicBlock, basicBlock->nextBasicBlock);
			int32_t startOffset = basicBlock->bytecodeOffset;
			int32_t endOffset = (nextBasicBlock == nullptr ? this->code->length : nextBasicBlock->bytecodeOffset) - 1;
			if (endOffset >= startOffset) {
				for (int32_t i = startOffset; i < endOffset; ++i) {
					$nc(this->code->data)->set(i, (int8_t)$Opcodes::NOP);
				}
				$nc(this->code->data)->set(endOffset, (int8_t)$Opcodes::ATHROW);
				int32_t frameIndex = visitFrameStart(startOffset, 0, 1);
				$nc(this->currentFrame)->set(frameIndex, $Frame::getAbstractTypeFromInternalName(this->symbolTable, "java/lang/Throwable"_s));
				visitFrameEnd();
				$set(this, firstHandler, $Handler::removeRange(this->firstHandler, basicBlock, nextBasicBlock));
				maxStackSize = $Math::max(maxStackSize, 1);
			}
		}
		$assign(basicBlock, basicBlock->nextBasicBlock);
	}
	this->maxStack = maxStackSize;
}

void MethodWriter::computeMaxStackAndLocal() {
	$useLocalObjectStack();
	$var($Handler, handler, this->firstHandler);
	while (handler != nullptr) {
		$var($Label, handlerBlock, handler->handlerPc);
		$var($Label, handlerRangeBlock, handler->startPc);
		$var($Label, handlerRangeEnd, handler->endPc);
		while (handlerRangeBlock != handlerRangeEnd) {
			if (($nc(handlerRangeBlock)->flags & $Label::FLAG_SUBROUTINE_CALLER) == 0) {
				$set(handlerRangeBlock, outgoingEdges, $new($Edge, $Edge::EXCEPTION, handlerBlock, handlerRangeBlock->outgoingEdges));
			} else {
				$set($nc($nc(handlerRangeBlock->outgoingEdges)->nextEdge), nextEdge, $new($Edge, $Edge::EXCEPTION, handlerBlock, $nc($nc(handlerRangeBlock->outgoingEdges)->nextEdge)->nextEdge));
			}
			$assign(handlerRangeBlock, handlerRangeBlock->nextBasicBlock);
		}
		$assign(handler, handler->nextHandler);
	}
	if (this->hasSubroutines) {
		int16_t numSubroutines = 1;
		$nc(this->firstBasicBlock)->markSubroutine(numSubroutines);
		for (int16_t currentSubroutine = 1; currentSubroutine <= numSubroutines; ++currentSubroutine) {
			$var($Label, basicBlock, this->firstBasicBlock);
			while (basicBlock != nullptr) {
				if ((basicBlock->flags & $Label::FLAG_SUBROUTINE_CALLER) != 0 && basicBlock->subroutineId == currentSubroutine) {
					$var($Label, jsrTarget, $nc($nc(basicBlock->outgoingEdges)->nextEdge)->successor);
					if ($nc(jsrTarget)->subroutineId == 0) {
						jsrTarget->markSubroutine(++numSubroutines);
					}
				}
				$assign(basicBlock, basicBlock->nextBasicBlock);
			}
		}
		$var($Label, basicBlock, this->firstBasicBlock);
		while (basicBlock != nullptr) {
			if ((basicBlock->flags & $Label::FLAG_SUBROUTINE_CALLER) != 0) {
				$var($Label, subroutine, $nc($nc(basicBlock->outgoingEdges)->nextEdge)->successor);
				$nc(subroutine)->addSubroutineRetSuccessors(basicBlock);
			}
			$assign(basicBlock, basicBlock->nextBasicBlock);
		}
	}
	$var($Label, listOfBlocksToProcess, this->firstBasicBlock);
	$init($Label);
	$set($nc(listOfBlocksToProcess), nextListElement, $Label::EMPTY_LIST);
	int32_t maxStackSize = this->maxStack;
	while (listOfBlocksToProcess != $Label::EMPTY_LIST) {
		$var($Label, basicBlock, listOfBlocksToProcess);
		$assign(listOfBlocksToProcess, $nc(listOfBlocksToProcess)->nextListElement);
		int32_t inputStackTop = $nc(basicBlock)->inputStackSize;
		int32_t maxBlockStackSize = inputStackTop + basicBlock->outputStackMax;
		if (maxBlockStackSize > maxStackSize) {
			maxStackSize = maxBlockStackSize;
		}
		$var($Edge, outgoingEdge, basicBlock->outgoingEdges);
		if ((basicBlock->flags & $Label::FLAG_SUBROUTINE_CALLER) != 0) {
			$assign(outgoingEdge, $nc(outgoingEdge)->nextEdge);
		}
		while (outgoingEdge != nullptr) {
			$var($Label, successorBlock, outgoingEdge->successor);
			if ($nc(successorBlock)->nextListElement == nullptr) {
				successorBlock->inputStackSize = (int16_t)(outgoingEdge->info == $Edge::EXCEPTION ? 1 : inputStackTop + outgoingEdge->info);
				$set(successorBlock, nextListElement, listOfBlocksToProcess);
				$assign(listOfBlocksToProcess, successorBlock);
			}
			$assign(outgoingEdge, outgoingEdge->nextEdge);
		}
	}
	this->maxStack = maxStackSize;
}

void MethodWriter::visitEnd() {
}

void MethodWriter::addSuccessorToCurrentBasicBlock(int32_t info, $Label* successor) {
	$set($nc(this->currentBasicBlock), outgoingEdges, $new($Edge, info, successor, $nc(this->currentBasicBlock)->outgoingEdges));
}

void MethodWriter::endCurrentBasicBlockWithNoSuccessor() {
	if (this->compute == MethodWriter::COMPUTE_ALL_FRAMES) {
		$var($Label, nextBasicBlock, $new($Label));
		$set(nextBasicBlock, frame, $new($Frame, nextBasicBlock));
		nextBasicBlock->resolve(this->code->data, this->code->length);
		$set($nc(this->lastBasicBlock), nextBasicBlock, nextBasicBlock);
		$set(this, lastBasicBlock, nextBasicBlock);
		$set(this, currentBasicBlock, nullptr);
	} else if (this->compute == MethodWriter::COMPUTE_MAX_STACK_AND_LOCAL) {
		$nc(this->currentBasicBlock)->outputStackMax = (int16_t)this->maxRelativeStackSize;
		$set(this, currentBasicBlock, nullptr);
	}
}

int32_t MethodWriter::visitFrameStart(int32_t offset, int32_t numLocal, int32_t numStack) {
	int32_t frameLength = 3 + numLocal + numStack;
	if (this->currentFrame == nullptr || this->currentFrame->length < frameLength) {
		$set(this, currentFrame, $new($ints, frameLength));
	}
	$nc(this->currentFrame)->set(0, offset);
	this->currentFrame->set(1, numLocal);
	this->currentFrame->set(2, numStack);
	return 3;
}

void MethodWriter::visitAbstractType(int32_t frameIndex, int32_t abstractType) {
	$nc(this->currentFrame)->set(frameIndex, abstractType);
}

void MethodWriter::visitFrameEnd() {
	if (this->previousFrame != nullptr) {
		if (this->stackMapTableEntries == nullptr) {
			$set(this, stackMapTableEntries, $new($ByteVector));
		}
		putFrame();
		++this->stackMapTableNumberOfEntries;
	}
	$set(this, previousFrame, this->currentFrame);
	$set(this, currentFrame, nullptr);
}

void MethodWriter::putFrame() {
	$useLocalObjectStack();
	int32_t numLocal = $nc(this->currentFrame)->get(1);
	int32_t numStack = this->currentFrame->get(2);
	if ($nc(this->symbolTable)->getMajorVersion() < $Opcodes::V1_6) {
		$$nc($nc(this->stackMapTableEntries)->putShort(this->currentFrame->get(0)))->putShort(numLocal);
		putAbstractTypes(3, 3 + numLocal);
		this->stackMapTableEntries->putShort(numStack);
		putAbstractTypes(3 + numLocal, 3 + numLocal + numStack);
		return;
	}
	int32_t offsetDelta = this->stackMapTableNumberOfEntries == 0 ? this->currentFrame->get(0) : this->currentFrame->get(0) - $nc(this->previousFrame)->get(0) - 1;
	int32_t previousNumlocal = $nc(this->previousFrame)->get(1);
	int32_t numLocalDelta = numLocal - previousNumlocal;
	int32_t type = $Frame::FULL_FRAME;
	if (numStack == 0) {
		switch (numLocalDelta) {
		case -3:
		case -2:
		case -1:
			type = $Frame::CHOP_FRAME;
			break;
		case 0:
			type = offsetDelta < 64 ? $Frame::SAME_FRAME : $Frame::SAME_FRAME_EXTENDED;
			break;
		case 1:
		case 2:
		case 3:
			type = $Frame::APPEND_FRAME;
			break;
		default:
			break;
		}
	} else if (numLocalDelta == 0 && numStack == 1) {
		type = offsetDelta < 63 ? $Frame::SAME_LOCALS_1_STACK_ITEM_FRAME : $Frame::SAME_LOCALS_1_STACK_ITEM_FRAME_EXTENDED;
	}
	if (type != $Frame::FULL_FRAME) {
		int32_t frameIndex = 3;
		for (int32_t i = 0; i < previousNumlocal && i < numLocal; ++i) {
			if (this->currentFrame->get(frameIndex) != this->previousFrame->get(frameIndex)) {
				type = $Frame::FULL_FRAME;
				break;
			}
			++frameIndex;
		}
	}
	switch (type) {
	case $Frame::SAME_FRAME:
		$nc(this->stackMapTableEntries)->putByte(offsetDelta);
		break;
	case $Frame::SAME_LOCALS_1_STACK_ITEM_FRAME:
		$nc(this->stackMapTableEntries)->putByte($Frame::SAME_LOCALS_1_STACK_ITEM_FRAME + offsetDelta);
		putAbstractTypes(3 + numLocal, 4 + numLocal);
		break;
	case $Frame::SAME_LOCALS_1_STACK_ITEM_FRAME_EXTENDED:
		$$nc($nc(this->stackMapTableEntries)->putByte($Frame::SAME_LOCALS_1_STACK_ITEM_FRAME_EXTENDED))->putShort(offsetDelta);
		putAbstractTypes(3 + numLocal, 4 + numLocal);
		break;
	case $Frame::SAME_FRAME_EXTENDED:
		$$nc($nc(this->stackMapTableEntries)->putByte($Frame::SAME_FRAME_EXTENDED))->putShort(offsetDelta);
		break;
	case $Frame::CHOP_FRAME:
		$$nc($nc(this->stackMapTableEntries)->putByte($Frame::SAME_FRAME_EXTENDED + numLocalDelta))->putShort(offsetDelta);
		break;
	case $Frame::APPEND_FRAME:
		$$nc($nc(this->stackMapTableEntries)->putByte($Frame::SAME_FRAME_EXTENDED + numLocalDelta))->putShort(offsetDelta);
		putAbstractTypes(3 + previousNumlocal, 3 + numLocal);
		break;
	case $Frame::FULL_FRAME:
	default:
		$$nc($$nc($nc(this->stackMapTableEntries)->putByte($Frame::FULL_FRAME))->putShort(offsetDelta))->putShort(numLocal);
		putAbstractTypes(3, 3 + numLocal);
		this->stackMapTableEntries->putShort(numStack);
		putAbstractTypes(3 + numLocal, 3 + numLocal + numStack);
		break;
	}
}

void MethodWriter::putAbstractTypes(int32_t start, int32_t end) {
	for (int32_t i = start; i < end; ++i) {
		$Frame::putAbstractType(this->symbolTable, $nc(this->currentFrame)->get(i), this->stackMapTableEntries);
	}
}

void MethodWriter::putFrameType(Object$* type) {
	$useLocalObjectStack();
	if ($instanceOf($Integer, type)) {
		$nc(this->stackMapTableEntries)->putByte($cast($Integer, type)->intValue());
	} else if ($instanceOf($String, type)) {
		$$nc($nc(this->stackMapTableEntries)->putByte($Frame::ITEM_OBJECT))->putShort($nc($($nc(this->symbolTable)->addConstantClass($cast($String, type))))->index);
	} else {
		$$nc($nc(this->stackMapTableEntries)->putByte($Frame::ITEM_UNINITIALIZED))->putShort($nc($cast($Label, type))->bytecodeOffset);
	}
}

bool MethodWriter::canCopyMethodAttributes($ClassReader* source, bool hasSyntheticAttribute, bool hasDeprecatedAttribute, int32_t descriptorIndex, int32_t signatureIndex, int32_t exceptionsOffset) {
	if (source != $nc(this->symbolTable)->getSource() || descriptorIndex != this->descriptorIndex || signatureIndex != this->signatureIndex || hasDeprecatedAttribute != ((this->accessFlags & $Opcodes::ACC_DEPRECATED) != 0)) {
		return false;
	}
	bool needSyntheticAttribute = this->symbolTable->getMajorVersion() < $Opcodes::V1_5 && (this->accessFlags & $Opcodes::ACC_SYNTHETIC) != 0;
	if (hasSyntheticAttribute != needSyntheticAttribute) {
		return false;
	}
	if (exceptionsOffset == 0) {
		if (this->numberOfExceptions != 0) {
			return false;
		}
	} else if ($nc(source)->readUnsignedShort(exceptionsOffset) == this->numberOfExceptions) {
		int32_t currentExceptionOffset = exceptionsOffset + 2;
		for (int32_t i = 0; i < this->numberOfExceptions; ++i) {
			if (source->readUnsignedShort(currentExceptionOffset) != $nc(this->exceptionIndexTable)->get(i)) {
				return false;
			}
			currentExceptionOffset += 2;
		}
	}
	return true;
}

void MethodWriter::setMethodAttributesSource(int32_t methodInfoOffset, int32_t methodInfoLength) {
	this->sourceOffset = methodInfoOffset + 6;
	this->sourceLength = methodInfoLength - 6;
}

int32_t MethodWriter::computeMethodInfoSize() {
	if (this->sourceOffset != 0) {
		return 6 + this->sourceLength;
	}
	int32_t size = 8;
	if (this->code->length > 0) {
		if (this->code->length > 0x0000ffff) {
			$throwNew($MethodTooLargeException, $($nc(this->symbolTable)->getClassName()), this->name, this->descriptor, this->code->length);
		}
		$init($Constants);
		$nc(this->symbolTable)->addConstantUtf8($Constants::CODE);
		size += 16 + this->code->length + $Handler::getExceptionTableSize(this->firstHandler);
		if (this->stackMapTableEntries != nullptr) {
			bool useStackMapTable = this->symbolTable->getMajorVersion() >= $Opcodes::V1_6;
			this->symbolTable->addConstantUtf8(useStackMapTable ? $Constants::STACK_MAP_TABLE : "StackMap"_s);
			size += 8 + this->stackMapTableEntries->length;
		}
		if (this->lineNumberTable != nullptr) {
			this->symbolTable->addConstantUtf8($Constants::LINE_NUMBER_TABLE);
			size += 8 + this->lineNumberTable->length;
		}
		if (this->localVariableTable != nullptr) {
			this->symbolTable->addConstantUtf8($Constants::LOCAL_VARIABLE_TABLE);
			size += 8 + this->localVariableTable->length;
		}
		if (this->localVariableTypeTable != nullptr) {
			this->symbolTable->addConstantUtf8($Constants::LOCAL_VARIABLE_TYPE_TABLE);
			size += 8 + this->localVariableTypeTable->length;
		}
		if (this->lastCodeRuntimeVisibleTypeAnnotation != nullptr) {
			size += this->lastCodeRuntimeVisibleTypeAnnotation->computeAnnotationsSize($Constants::RUNTIME_VISIBLE_TYPE_ANNOTATIONS);
		}
		if (this->lastCodeRuntimeInvisibleTypeAnnotation != nullptr) {
			size += this->lastCodeRuntimeInvisibleTypeAnnotation->computeAnnotationsSize($Constants::RUNTIME_INVISIBLE_TYPE_ANNOTATIONS);
		}
		if (this->firstCodeAttribute != nullptr) {
			size += this->firstCodeAttribute->computeAttributesSize(this->symbolTable, this->code->data, this->code->length, this->maxStack, this->maxLocals);
		}
	}
	if (this->numberOfExceptions > 0) {
		$init($Constants);
		$nc(this->symbolTable)->addConstantUtf8($Constants::EXCEPTIONS);
		size += 8 + 2 * this->numberOfExceptions;
	}
	size += $Attribute::computeAttributesSize(this->symbolTable, this->accessFlags, this->signatureIndex);
	size += $AnnotationWriter::computeAnnotationsSize(this->lastRuntimeVisibleAnnotation, this->lastRuntimeInvisibleAnnotation, this->lastRuntimeVisibleTypeAnnotation, this->lastRuntimeInvisibleTypeAnnotation);
	if (this->lastRuntimeVisibleParameterAnnotations != nullptr) {
		$init($Constants);
		size += $AnnotationWriter::computeParameterAnnotationsSize($Constants::RUNTIME_VISIBLE_PARAMETER_ANNOTATIONS, this->lastRuntimeVisibleParameterAnnotations, this->visibleAnnotableParameterCount == 0 ? this->lastRuntimeVisibleParameterAnnotations->length : this->visibleAnnotableParameterCount);
	}
	if (this->lastRuntimeInvisibleParameterAnnotations != nullptr) {
		$init($Constants);
		size += $AnnotationWriter::computeParameterAnnotationsSize($Constants::RUNTIME_INVISIBLE_PARAMETER_ANNOTATIONS, this->lastRuntimeInvisibleParameterAnnotations, this->invisibleAnnotableParameterCount == 0 ? this->lastRuntimeInvisibleParameterAnnotations->length : this->invisibleAnnotableParameterCount);
	}
	if (this->defaultValue != nullptr) {
		$init($Constants);
		$nc(this->symbolTable)->addConstantUtf8($Constants::ANNOTATION_DEFAULT);
		size += 6 + this->defaultValue->length;
	}
	if (this->parameters != nullptr) {
		$init($Constants);
		$nc(this->symbolTable)->addConstantUtf8($Constants::METHOD_PARAMETERS);
		size += 7 + this->parameters->length;
	}
	if (this->firstAttribute != nullptr) {
		size += this->firstAttribute->computeAttributesSize(this->symbolTable);
	}
	return size;
}

void MethodWriter::putMethodInfo($ByteVector* output) {
	$useLocalObjectStack();
	bool useSyntheticAttribute = $nc(this->symbolTable)->getMajorVersion() < $Opcodes::V1_5;
	int32_t mask = useSyntheticAttribute ? $Opcodes::ACC_SYNTHETIC : 0;
	$$nc($$nc($nc(output)->putShort(this->accessFlags & ~mask))->putShort(this->nameIndex))->putShort(this->descriptorIndex);
	if (this->sourceOffset != 0) {
		output->putByteArray($nc($(this->symbolTable->getSource()))->classFileBuffer, this->sourceOffset, this->sourceLength);
		return;
	}
	int32_t attributeCount = 0;
	if (this->code->length > 0) {
		++attributeCount;
	}
	if (this->numberOfExceptions > 0) {
		++attributeCount;
	}
	if ((this->accessFlags & $Opcodes::ACC_SYNTHETIC) != 0 && useSyntheticAttribute) {
		++attributeCount;
	}
	if (this->signatureIndex != 0) {
		++attributeCount;
	}
	if ((this->accessFlags & $Opcodes::ACC_DEPRECATED) != 0) {
		++attributeCount;
	}
	if (this->lastRuntimeVisibleAnnotation != nullptr) {
		++attributeCount;
	}
	if (this->lastRuntimeInvisibleAnnotation != nullptr) {
		++attributeCount;
	}
	if (this->lastRuntimeVisibleParameterAnnotations != nullptr) {
		++attributeCount;
	}
	if (this->lastRuntimeInvisibleParameterAnnotations != nullptr) {
		++attributeCount;
	}
	if (this->lastRuntimeVisibleTypeAnnotation != nullptr) {
		++attributeCount;
	}
	if (this->lastRuntimeInvisibleTypeAnnotation != nullptr) {
		++attributeCount;
	}
	if (this->defaultValue != nullptr) {
		++attributeCount;
	}
	if (this->parameters != nullptr) {
		++attributeCount;
	}
	if (this->firstAttribute != nullptr) {
		attributeCount += this->firstAttribute->getAttributeCount();
	}
	output->putShort(attributeCount);
	if (this->code->length > 0) {
		int32_t size = 10 + this->code->length + $Handler::getExceptionTableSize(this->firstHandler);
		int32_t codeAttributeCount = 0;
		if (this->stackMapTableEntries != nullptr) {
			size += 8 + this->stackMapTableEntries->length;
			++codeAttributeCount;
		}
		if (this->lineNumberTable != nullptr) {
			size += 8 + this->lineNumberTable->length;
			++codeAttributeCount;
		}
		if (this->localVariableTable != nullptr) {
			size += 8 + this->localVariableTable->length;
			++codeAttributeCount;
		}
		if (this->localVariableTypeTable != nullptr) {
			size += 8 + this->localVariableTypeTable->length;
			++codeAttributeCount;
		}
		if (this->lastCodeRuntimeVisibleTypeAnnotation != nullptr) {
			$init($Constants);
			size += this->lastCodeRuntimeVisibleTypeAnnotation->computeAnnotationsSize($Constants::RUNTIME_VISIBLE_TYPE_ANNOTATIONS);
			++codeAttributeCount;
		}
		if (this->lastCodeRuntimeInvisibleTypeAnnotation != nullptr) {
			$init($Constants);
			size += this->lastCodeRuntimeInvisibleTypeAnnotation->computeAnnotationsSize($Constants::RUNTIME_INVISIBLE_TYPE_ANNOTATIONS);
			++codeAttributeCount;
		}
		if (this->firstCodeAttribute != nullptr) {
			size += this->firstCodeAttribute->computeAttributesSize(this->symbolTable, this->code->data, this->code->length, this->maxStack, this->maxLocals);
			codeAttributeCount += this->firstCodeAttribute->getAttributeCount();
		}
		$init($Constants);
		$$nc($$nc($$nc($$nc($$nc(output->putShort(this->symbolTable->addConstantUtf8($Constants::CODE)))->putInt(size))->putShort(this->maxStack))->putShort(this->maxLocals))->putInt(this->code->length))->putByteArray(this->code->data, 0, this->code->length);
		$Handler::putExceptionTable(this->firstHandler, output);
		output->putShort(codeAttributeCount);
		if (this->stackMapTableEntries != nullptr) {
			bool useStackMapTable = this->symbolTable->getMajorVersion() >= $Opcodes::V1_6;
			$$nc($$nc($$nc(output->putShort(this->symbolTable->addConstantUtf8(useStackMapTable ? $Constants::STACK_MAP_TABLE : "StackMap"_s)))->putInt(2 + this->stackMapTableEntries->length))->putShort(this->stackMapTableNumberOfEntries))->putByteArray(this->stackMapTableEntries->data, 0, this->stackMapTableEntries->length);
		}
		if (this->lineNumberTable != nullptr) {
			$$nc($$nc($$nc(output->putShort(this->symbolTable->addConstantUtf8($Constants::LINE_NUMBER_TABLE)))->putInt(2 + this->lineNumberTable->length))->putShort(this->lineNumberTableLength))->putByteArray(this->lineNumberTable->data, 0, this->lineNumberTable->length);
		}
		if (this->localVariableTable != nullptr) {
			$$nc($$nc($$nc(output->putShort(this->symbolTable->addConstantUtf8($Constants::LOCAL_VARIABLE_TABLE)))->putInt(2 + this->localVariableTable->length))->putShort(this->localVariableTableLength))->putByteArray(this->localVariableTable->data, 0, this->localVariableTable->length);
		}
		if (this->localVariableTypeTable != nullptr) {
			$$nc($$nc($$nc(output->putShort(this->symbolTable->addConstantUtf8($Constants::LOCAL_VARIABLE_TYPE_TABLE)))->putInt(2 + this->localVariableTypeTable->length))->putShort(this->localVariableTypeTableLength))->putByteArray(this->localVariableTypeTable->data, 0, this->localVariableTypeTable->length);
		}
		if (this->lastCodeRuntimeVisibleTypeAnnotation != nullptr) {
			this->lastCodeRuntimeVisibleTypeAnnotation->putAnnotations(this->symbolTable->addConstantUtf8($Constants::RUNTIME_VISIBLE_TYPE_ANNOTATIONS), output);
		}
		if (this->lastCodeRuntimeInvisibleTypeAnnotation != nullptr) {
			this->lastCodeRuntimeInvisibleTypeAnnotation->putAnnotations(this->symbolTable->addConstantUtf8($Constants::RUNTIME_INVISIBLE_TYPE_ANNOTATIONS), output);
		}
		if (this->firstCodeAttribute != nullptr) {
			this->firstCodeAttribute->putAttributes(this->symbolTable, this->code->data, this->code->length, this->maxStack, this->maxLocals, output);
		}
	}
	if (this->numberOfExceptions > 0) {
		$init($Constants);
		$$nc($$nc(output->putShort(this->symbolTable->addConstantUtf8($Constants::EXCEPTIONS)))->putInt(2 + 2 * this->numberOfExceptions))->putShort(this->numberOfExceptions);
		{
			$var($ints, arr$, this->exceptionIndexTable);
			for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
				int32_t exceptionIndex = arr$->get(i$);
				{
					output->putShort(exceptionIndex);
				}
			}
		}
	}
	$Attribute::putAttributes(this->symbolTable, this->accessFlags, this->signatureIndex, output);
	$AnnotationWriter::putAnnotations(this->symbolTable, this->lastRuntimeVisibleAnnotation, this->lastRuntimeInvisibleAnnotation, this->lastRuntimeVisibleTypeAnnotation, this->lastRuntimeInvisibleTypeAnnotation, output);
	if (this->lastRuntimeVisibleParameterAnnotations != nullptr) {
		$init($Constants);
		$AnnotationWriter::putParameterAnnotations(this->symbolTable->addConstantUtf8($Constants::RUNTIME_VISIBLE_PARAMETER_ANNOTATIONS), this->lastRuntimeVisibleParameterAnnotations, this->visibleAnnotableParameterCount == 0 ? this->lastRuntimeVisibleParameterAnnotations->length : this->visibleAnnotableParameterCount, output);
	}
	if (this->lastRuntimeInvisibleParameterAnnotations != nullptr) {
		$init($Constants);
		$AnnotationWriter::putParameterAnnotations(this->symbolTable->addConstantUtf8($Constants::RUNTIME_INVISIBLE_PARAMETER_ANNOTATIONS), this->lastRuntimeInvisibleParameterAnnotations, this->invisibleAnnotableParameterCount == 0 ? this->lastRuntimeInvisibleParameterAnnotations->length : this->invisibleAnnotableParameterCount, output);
	}
	if (this->defaultValue != nullptr) {
		$init($Constants);
		$$nc($$nc(output->putShort(this->symbolTable->addConstantUtf8($Constants::ANNOTATION_DEFAULT)))->putInt(this->defaultValue->length))->putByteArray(this->defaultValue->data, 0, this->defaultValue->length);
	}
	if (this->parameters != nullptr) {
		$init($Constants);
		$$nc($$nc($$nc(output->putShort(this->symbolTable->addConstantUtf8($Constants::METHOD_PARAMETERS)))->putInt(1 + this->parameters->length))->putByte(this->parametersCount))->putByteArray(this->parameters->data, 0, this->parameters->length);
	}
	if (this->firstAttribute != nullptr) {
		this->firstAttribute->putAttributes(this->symbolTable, output);
	}
}

void MethodWriter::collectAttributePrototypes($Attribute$Set* attributePrototypes) {
	$nc(attributePrototypes)->addAttributes(this->firstAttribute);
	attributePrototypes->addAttributes(this->firstCodeAttribute);
}

void MethodWriter::clinit$($Class* clazz) {
	$assignStatic(MethodWriter::STACK_SIZE_DELTA, $new($ints, {
		0,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		2,
		2,
		1,
		1,
		1,
		2,
		2,
		1,
		1,
		1,
		MethodWriter::NA,
		MethodWriter::NA,
		1,
		2,
		1,
		2,
		1,
		MethodWriter::NA,
		MethodWriter::NA,
		MethodWriter::NA,
		MethodWriter::NA,
		MethodWriter::NA,
		MethodWriter::NA,
		MethodWriter::NA,
		MethodWriter::NA,
		MethodWriter::NA,
		MethodWriter::NA,
		MethodWriter::NA,
		MethodWriter::NA,
		MethodWriter::NA,
		MethodWriter::NA,
		MethodWriter::NA,
		MethodWriter::NA,
		MethodWriter::NA,
		MethodWriter::NA,
		MethodWriter::NA,
		MethodWriter::NA,
		-1,
		0,
		-1,
		0,
		-1,
		-1,
		-1,
		-1,
		-1,
		-2,
		-1,
		-2,
		-1,
		MethodWriter::NA,
		MethodWriter::NA,
		MethodWriter::NA,
		MethodWriter::NA,
		MethodWriter::NA,
		MethodWriter::NA,
		MethodWriter::NA,
		MethodWriter::NA,
		MethodWriter::NA,
		MethodWriter::NA,
		MethodWriter::NA,
		MethodWriter::NA,
		MethodWriter::NA,
		MethodWriter::NA,
		MethodWriter::NA,
		MethodWriter::NA,
		MethodWriter::NA,
		MethodWriter::NA,
		MethodWriter::NA,
		MethodWriter::NA,
		-3,
		-4,
		-3,
		-4,
		-3,
		-3,
		-3,
		-3,
		-1,
		-2,
		1,
		1,
		1,
		2,
		2,
		2,
		0,
		-1,
		-2,
		-1,
		-2,
		-1,
		-2,
		-1,
		-2,
		-1,
		-2,
		-1,
		-2,
		-1,
		-2,
		-1,
		-2,
		-1,
		-2,
		-1,
		-2,
		0,
		0,
		0,
		0,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-2,
		-1,
		-2,
		-1,
		-2,
		0,
		1,
		0,
		1,
		-1,
		-1,
		0,
		0,
		1,
		1,
		-1,
		0,
		-1,
		0,
		0,
		0,
		-3,
		-1,
		-1,
		-3,
		-3,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-2,
		-2,
		-2,
		-2,
		-2,
		-2,
		-2,
		-2,
		0,
		1,
		0,
		-1,
		-1,
		-1,
		-2,
		-1,
		-2,
		-1,
		0,
		MethodWriter::NA,
		MethodWriter::NA,
		MethodWriter::NA,
		MethodWriter::NA,
		MethodWriter::NA,
		MethodWriter::NA,
		MethodWriter::NA,
		MethodWriter::NA,
		MethodWriter::NA,
		1,
		0,
		0,
		0,
		MethodWriter::NA,
		0,
		0,
		-1,
		-1,
		MethodWriter::NA,
		MethodWriter::NA,
		-1,
		-1,
		MethodWriter::NA,
		MethodWriter::NA
	}));
}

MethodWriter::MethodWriter() {
}

$Class* MethodWriter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"COMPUTE_NOTHING", "I", nullptr, $STATIC | $FINAL, $constField(MethodWriter, COMPUTE_NOTHING)},
		{"COMPUTE_MAX_STACK_AND_LOCAL", "I", nullptr, $STATIC | $FINAL, $constField(MethodWriter, COMPUTE_MAX_STACK_AND_LOCAL)},
		{"COMPUTE_MAX_STACK_AND_LOCAL_FROM_FRAMES", "I", nullptr, $STATIC | $FINAL, $constField(MethodWriter, COMPUTE_MAX_STACK_AND_LOCAL_FROM_FRAMES)},
		{"COMPUTE_INSERTED_FRAMES", "I", nullptr, $STATIC | $FINAL, $constField(MethodWriter, COMPUTE_INSERTED_FRAMES)},
		{"COMPUTE_ALL_FRAMES", "I", nullptr, $STATIC | $FINAL, $constField(MethodWriter, COMPUTE_ALL_FRAMES)},
		{"NA", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MethodWriter, NA)},
		{"STACK_SIZE_DELTA", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MethodWriter, STACK_SIZE_DELTA)},
		{"symbolTable", "Ljdk/internal/org/objectweb/asm/SymbolTable;", nullptr, $PRIVATE | $FINAL, $field(MethodWriter, symbolTable)},
		{"accessFlags", "I", nullptr, $PRIVATE | $FINAL, $field(MethodWriter, accessFlags)},
		{"nameIndex", "I", nullptr, $PRIVATE | $FINAL, $field(MethodWriter, nameIndex)},
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(MethodWriter, name)},
		{"descriptorIndex", "I", nullptr, $PRIVATE | $FINAL, $field(MethodWriter, descriptorIndex)},
		{"descriptor", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(MethodWriter, descriptor)},
		{"maxStack", "I", nullptr, $PRIVATE, $field(MethodWriter, maxStack)},
		{"maxLocals", "I", nullptr, $PRIVATE, $field(MethodWriter, maxLocals)},
		{"code", "Ljdk/internal/org/objectweb/asm/ByteVector;", nullptr, $PRIVATE | $FINAL, $field(MethodWriter, code)},
		{"firstHandler", "Ljdk/internal/org/objectweb/asm/Handler;", nullptr, $PRIVATE, $field(MethodWriter, firstHandler)},
		{"lastHandler", "Ljdk/internal/org/objectweb/asm/Handler;", nullptr, $PRIVATE, $field(MethodWriter, lastHandler)},
		{"lineNumberTableLength", "I", nullptr, $PRIVATE, $field(MethodWriter, lineNumberTableLength)},
		{"lineNumberTable", "Ljdk/internal/org/objectweb/asm/ByteVector;", nullptr, $PRIVATE, $field(MethodWriter, lineNumberTable)},
		{"localVariableTableLength", "I", nullptr, $PRIVATE, $field(MethodWriter, localVariableTableLength)},
		{"localVariableTable", "Ljdk/internal/org/objectweb/asm/ByteVector;", nullptr, $PRIVATE, $field(MethodWriter, localVariableTable)},
		{"localVariableTypeTableLength", "I", nullptr, $PRIVATE, $field(MethodWriter, localVariableTypeTableLength)},
		{"localVariableTypeTable", "Ljdk/internal/org/objectweb/asm/ByteVector;", nullptr, $PRIVATE, $field(MethodWriter, localVariableTypeTable)},
		{"stackMapTableNumberOfEntries", "I", nullptr, $PRIVATE, $field(MethodWriter, stackMapTableNumberOfEntries)},
		{"stackMapTableEntries", "Ljdk/internal/org/objectweb/asm/ByteVector;", nullptr, $PRIVATE, $field(MethodWriter, stackMapTableEntries)},
		{"lastCodeRuntimeVisibleTypeAnnotation", "Ljdk/internal/org/objectweb/asm/AnnotationWriter;", nullptr, $PRIVATE, $field(MethodWriter, lastCodeRuntimeVisibleTypeAnnotation)},
		{"lastCodeRuntimeInvisibleTypeAnnotation", "Ljdk/internal/org/objectweb/asm/AnnotationWriter;", nullptr, $PRIVATE, $field(MethodWriter, lastCodeRuntimeInvisibleTypeAnnotation)},
		{"firstCodeAttribute", "Ljdk/internal/org/objectweb/asm/Attribute;", nullptr, $PRIVATE, $field(MethodWriter, firstCodeAttribute)},
		{"numberOfExceptions", "I", nullptr, $PRIVATE | $FINAL, $field(MethodWriter, numberOfExceptions)},
		{"exceptionIndexTable", "[I", nullptr, $PRIVATE | $FINAL, $field(MethodWriter, exceptionIndexTable)},
		{"signatureIndex", "I", nullptr, $PRIVATE | $FINAL, $field(MethodWriter, signatureIndex)},
		{"lastRuntimeVisibleAnnotation", "Ljdk/internal/org/objectweb/asm/AnnotationWriter;", nullptr, $PRIVATE, $field(MethodWriter, lastRuntimeVisibleAnnotation)},
		{"lastRuntimeInvisibleAnnotation", "Ljdk/internal/org/objectweb/asm/AnnotationWriter;", nullptr, $PRIVATE, $field(MethodWriter, lastRuntimeInvisibleAnnotation)},
		{"visibleAnnotableParameterCount", "I", nullptr, $PRIVATE, $field(MethodWriter, visibleAnnotableParameterCount)},
		{"lastRuntimeVisibleParameterAnnotations", "[Ljdk/internal/org/objectweb/asm/AnnotationWriter;", nullptr, $PRIVATE, $field(MethodWriter, lastRuntimeVisibleParameterAnnotations)},
		{"invisibleAnnotableParameterCount", "I", nullptr, $PRIVATE, $field(MethodWriter, invisibleAnnotableParameterCount)},
		{"lastRuntimeInvisibleParameterAnnotations", "[Ljdk/internal/org/objectweb/asm/AnnotationWriter;", nullptr, $PRIVATE, $field(MethodWriter, lastRuntimeInvisibleParameterAnnotations)},
		{"lastRuntimeVisibleTypeAnnotation", "Ljdk/internal/org/objectweb/asm/AnnotationWriter;", nullptr, $PRIVATE, $field(MethodWriter, lastRuntimeVisibleTypeAnnotation)},
		{"lastRuntimeInvisibleTypeAnnotation", "Ljdk/internal/org/objectweb/asm/AnnotationWriter;", nullptr, $PRIVATE, $field(MethodWriter, lastRuntimeInvisibleTypeAnnotation)},
		{"defaultValue", "Ljdk/internal/org/objectweb/asm/ByteVector;", nullptr, $PRIVATE, $field(MethodWriter, defaultValue)},
		{"parametersCount", "I", nullptr, $PRIVATE, $field(MethodWriter, parametersCount)},
		{"parameters", "Ljdk/internal/org/objectweb/asm/ByteVector;", nullptr, $PRIVATE, $field(MethodWriter, parameters)},
		{"firstAttribute", "Ljdk/internal/org/objectweb/asm/Attribute;", nullptr, $PRIVATE, $field(MethodWriter, firstAttribute)},
		{"compute", "I", nullptr, $PRIVATE | $FINAL, $field(MethodWriter, compute)},
		{"firstBasicBlock", "Ljdk/internal/org/objectweb/asm/Label;", nullptr, $PRIVATE, $field(MethodWriter, firstBasicBlock)},
		{"lastBasicBlock", "Ljdk/internal/org/objectweb/asm/Label;", nullptr, $PRIVATE, $field(MethodWriter, lastBasicBlock)},
		{"currentBasicBlock", "Ljdk/internal/org/objectweb/asm/Label;", nullptr, $PRIVATE, $field(MethodWriter, currentBasicBlock)},
		{"relativeStackSize", "I", nullptr, $PRIVATE, $field(MethodWriter, relativeStackSize)},
		{"maxRelativeStackSize", "I", nullptr, $PRIVATE, $field(MethodWriter, maxRelativeStackSize)},
		{"currentLocals", "I", nullptr, $PRIVATE, $field(MethodWriter, currentLocals)},
		{"previousFrameOffset", "I", nullptr, $PRIVATE, $field(MethodWriter, previousFrameOffset)},
		{"previousFrame", "[I", nullptr, $PRIVATE, $field(MethodWriter, previousFrame)},
		{"currentFrame", "[I", nullptr, $PRIVATE, $field(MethodWriter, currentFrame)},
		{"hasSubroutines", "Z", nullptr, $PRIVATE, $field(MethodWriter, hasSubroutines)},
		{"hasAsmInstructions", "Z", nullptr, $PRIVATE, $field(MethodWriter, hasAsmInstructions$)},
		{"lastBytecodeOffset", "I", nullptr, $PRIVATE, $field(MethodWriter, lastBytecodeOffset)},
		{"sourceOffset", "I", nullptr, $PRIVATE, $field(MethodWriter, sourceOffset)},
		{"sourceLength", "I", nullptr, $PRIVATE, $field(MethodWriter, sourceLength)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/org/objectweb/asm/SymbolTable;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;I)V", nullptr, 0, $method(MethodWriter, init$, void, $SymbolTable*, int32_t, $String*, $String*, $String*, $StringArray*, int32_t)},
		{"addSuccessorToCurrentBasicBlock", "(ILjdk/internal/org/objectweb/asm/Label;)V", nullptr, $PRIVATE, $method(MethodWriter, addSuccessorToCurrentBasicBlock, void, int32_t, $Label*)},
		{"canCopyMethodAttributes", "(Ljdk/internal/org/objectweb/asm/ClassReader;ZZIII)Z", nullptr, 0, $method(MethodWriter, canCopyMethodAttributes, bool, $ClassReader*, bool, bool, int32_t, int32_t, int32_t)},
		{"collectAttributePrototypes", "(Ljdk/internal/org/objectweb/asm/Attribute$Set;)V", nullptr, $FINAL, $method(MethodWriter, collectAttributePrototypes, void, $Attribute$Set*)},
		{"computeAllFrames", "()V", nullptr, $PRIVATE, $method(MethodWriter, computeAllFrames, void)},
		{"computeMaxStackAndLocal", "()V", nullptr, $PRIVATE, $method(MethodWriter, computeMaxStackAndLocal, void)},
		{"computeMethodInfoSize", "()I", nullptr, 0, $method(MethodWriter, computeMethodInfoSize, int32_t)},
		{"endCurrentBasicBlockWithNoSuccessor", "()V", nullptr, $PRIVATE, $method(MethodWriter, endCurrentBasicBlockWithNoSuccessor, void)},
		{"hasAsmInstructions", "()Z", nullptr, 0, $method(MethodWriter, hasAsmInstructions, bool)},
		{"hasFrames", "()Z", nullptr, 0, $method(MethodWriter, hasFrames, bool)},
		{"putAbstractTypes", "(II)V", nullptr, $PRIVATE, $method(MethodWriter, putAbstractTypes, void, int32_t, int32_t)},
		{"putFrame", "()V", nullptr, $PRIVATE, $method(MethodWriter, putFrame, void)},
		{"putFrameType", "(Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(MethodWriter, putFrameType, void, Object$*)},
		{"putMethodInfo", "(Ljdk/internal/org/objectweb/asm/ByteVector;)V", nullptr, 0, $method(MethodWriter, putMethodInfo, void, $ByteVector*)},
		{"setMethodAttributesSource", "(II)V", nullptr, 0, $method(MethodWriter, setMethodAttributesSource, void, int32_t, int32_t)},
		{"visitAbstractType", "(II)V", nullptr, 0, $method(MethodWriter, visitAbstractType, void, int32_t, int32_t)},
		{"visitAnnotableParameterCount", "(IZ)V", nullptr, $PUBLIC, $virtualMethod(MethodWriter, visitAnnotableParameterCount, void, int32_t, bool)},
		{"visitAnnotation", "(Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC, $virtualMethod(MethodWriter, visitAnnotation, $AnnotationVisitor*, $String*, bool)},
		{"visitAnnotationDefault", "()Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC, $virtualMethod(MethodWriter, visitAnnotationDefault, $AnnotationVisitor*)},
		{"visitAttribute", "(Ljdk/internal/org/objectweb/asm/Attribute;)V", nullptr, $PUBLIC, $virtualMethod(MethodWriter, visitAttribute, void, $Attribute*)},
		{"visitCode", "()V", nullptr, $PUBLIC, $virtualMethod(MethodWriter, visitCode, void)},
		{"visitEnd", "()V", nullptr, $PUBLIC, $virtualMethod(MethodWriter, visitEnd, void)},
		{"visitFieldInsn", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(MethodWriter, visitFieldInsn, void, int32_t, $String*, $String*, $String*)},
		{"visitFrame", "(II[Ljava/lang/Object;I[Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(MethodWriter, visitFrame, void, int32_t, int32_t, $ObjectArray*, int32_t, $ObjectArray*)},
		{"visitFrameEnd", "()V", nullptr, 0, $method(MethodWriter, visitFrameEnd, void)},
		{"visitFrameStart", "(III)I", nullptr, 0, $method(MethodWriter, visitFrameStart, int32_t, int32_t, int32_t, int32_t)},
		{"visitIincInsn", "(II)V", nullptr, $PUBLIC, $virtualMethod(MethodWriter, visitIincInsn, void, int32_t, int32_t)},
		{"visitInsn", "(I)V", nullptr, $PUBLIC, $virtualMethod(MethodWriter, visitInsn, void, int32_t)},
		{"visitInsnAnnotation", "(ILjdk/internal/org/objectweb/asm/TypePath;Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC, $virtualMethod(MethodWriter, visitInsnAnnotation, $AnnotationVisitor*, int32_t, $TypePath*, $String*, bool)},
		{"visitIntInsn", "(II)V", nullptr, $PUBLIC, $virtualMethod(MethodWriter, visitIntInsn, void, int32_t, int32_t)},
		{"visitInvokeDynamicInsn", "(Ljava/lang/String;Ljava/lang/String;Ljdk/internal/org/objectweb/asm/Handle;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT, $virtualMethod(MethodWriter, visitInvokeDynamicInsn, void, $String*, $String*, $Handle*, $ObjectArray*)},
		{"visitJumpInsn", "(ILjdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC, $virtualMethod(MethodWriter, visitJumpInsn, void, int32_t, $Label*)},
		{"visitLabel", "(Ljdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC, $virtualMethod(MethodWriter, visitLabel, void, $Label*)},
		{"visitLdcInsn", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(MethodWriter, visitLdcInsn, void, Object$*)},
		{"visitLineNumber", "(ILjdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC, $virtualMethod(MethodWriter, visitLineNumber, void, int32_t, $Label*)},
		{"visitLocalVariable", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljdk/internal/org/objectweb/asm/Label;Ljdk/internal/org/objectweb/asm/Label;I)V", nullptr, $PUBLIC, $virtualMethod(MethodWriter, visitLocalVariable, void, $String*, $String*, $String*, $Label*, $Label*, int32_t)},
		{"visitLocalVariableAnnotation", "(ILjdk/internal/org/objectweb/asm/TypePath;[Ljdk/internal/org/objectweb/asm/Label;[Ljdk/internal/org/objectweb/asm/Label;[ILjava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC, $virtualMethod(MethodWriter, visitLocalVariableAnnotation, $AnnotationVisitor*, int32_t, $TypePath*, $LabelArray*, $LabelArray*, $ints*, $String*, bool)},
		{"visitLookupSwitchInsn", "(Ljdk/internal/org/objectweb/asm/Label;[I[Ljdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC, $virtualMethod(MethodWriter, visitLookupSwitchInsn, void, $Label*, $ints*, $LabelArray*)},
		{"visitMaxs", "(II)V", nullptr, $PUBLIC, $virtualMethod(MethodWriter, visitMaxs, void, int32_t, int32_t)},
		{"visitMethodInsn", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(MethodWriter, visitMethodInsn, void, int32_t, $String*, $String*, $String*, bool)},
		{"visitMultiANewArrayInsn", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $virtualMethod(MethodWriter, visitMultiANewArrayInsn, void, $String*, int32_t)},
		{"visitParameter", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $virtualMethod(MethodWriter, visitParameter, void, $String*, int32_t)},
		{"visitParameterAnnotation", "(ILjava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC, $virtualMethod(MethodWriter, visitParameterAnnotation, $AnnotationVisitor*, int32_t, $String*, bool)},
		{"visitSwitchInsn", "(Ljdk/internal/org/objectweb/asm/Label;[Ljdk/internal/org/objectweb/asm/Label;)V", nullptr, $PRIVATE, $method(MethodWriter, visitSwitchInsn, void, $Label*, $LabelArray*)},
		{"visitTableSwitchInsn", "(IILjdk/internal/org/objectweb/asm/Label;[Ljdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC | $TRANSIENT, $virtualMethod(MethodWriter, visitTableSwitchInsn, void, int32_t, int32_t, $Label*, $LabelArray*)},
		{"visitTryCatchAnnotation", "(ILjdk/internal/org/objectweb/asm/TypePath;Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC, $virtualMethod(MethodWriter, visitTryCatchAnnotation, $AnnotationVisitor*, int32_t, $TypePath*, $String*, bool)},
		{"visitTryCatchBlock", "(Ljdk/internal/org/objectweb/asm/Label;Ljdk/internal/org/objectweb/asm/Label;Ljdk/internal/org/objectweb/asm/Label;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(MethodWriter, visitTryCatchBlock, void, $Label*, $Label*, $Label*, $String*)},
		{"visitTypeAnnotation", "(ILjdk/internal/org/objectweb/asm/TypePath;Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC, $virtualMethod(MethodWriter, visitTypeAnnotation, $AnnotationVisitor*, int32_t, $TypePath*, $String*, bool)},
		{"visitTypeInsn", "(ILjava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(MethodWriter, visitTypeInsn, void, int32_t, $String*)},
		{"visitVarInsn", "(II)V", nullptr, $PUBLIC, $virtualMethod(MethodWriter, visitVarInsn, void, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.org.objectweb.asm.MethodWriter",
		"jdk.internal.org.objectweb.asm.MethodVisitor",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MethodWriter, name, initialize, &classInfo$$, MethodWriter::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MethodWriter);
	});
	return class$;
}

$Class* MethodWriter::class$ = nullptr;

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk