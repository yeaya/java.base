#include <jdk/internal/org/objectweb/asm/Label.h>

#include <java/lang/IllegalStateException.h>
#include <jdk/internal/org/objectweb/asm/ByteVector.h>
#include <jdk/internal/org/objectweb/asm/Constants.h>
#include <jdk/internal/org/objectweb/asm/Edge.h>
#include <jdk/internal/org/objectweb/asm/Frame.h>
#include <jdk/internal/org/objectweb/asm/MethodVisitor.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jcpp.h>

#undef ASM_IFNULL_OPCODE_DELTA
#undef ASM_OPCODE_DELTA
#undef EMPTY_LIST
#undef FLAG_DEBUG_ONLY
#undef FLAG_JUMP_TARGET
#undef FLAG_REACHABLE
#undef FLAG_RESOLVED
#undef FLAG_SUBROUTINE_CALLER
#undef FLAG_SUBROUTINE_END
#undef FLAG_SUBROUTINE_START
#undef FORWARD_REFERENCES_CAPACITY_INCREMENT
#undef FORWARD_REFERENCE_HANDLE_MASK
#undef FORWARD_REFERENCE_TYPE_MASK
#undef FORWARD_REFERENCE_TYPE_SHORT
#undef FORWARD_REFERENCE_TYPE_WIDE
#undef IFNULL
#undef LINE_NUMBERS_CAPACITY_INCREMENT
#undef MAX_VALUE
#undef MIN_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $ByteVector = ::jdk::internal::org::objectweb::asm$::ByteVector;
using $Constants = ::jdk::internal::org::objectweb::asm$::Constants;
using $Edge = ::jdk::internal::org::objectweb::asm$::Edge;
using $MethodVisitor = ::jdk::internal::org::objectweb::asm$::MethodVisitor;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {

$FieldInfo _Label_FieldInfo_[] = {
	{"FLAG_DEBUG_ONLY", "I", nullptr, $STATIC | $FINAL, $constField(Label, FLAG_DEBUG_ONLY)},
	{"FLAG_JUMP_TARGET", "I", nullptr, $STATIC | $FINAL, $constField(Label, FLAG_JUMP_TARGET)},
	{"FLAG_RESOLVED", "I", nullptr, $STATIC | $FINAL, $constField(Label, FLAG_RESOLVED)},
	{"FLAG_REACHABLE", "I", nullptr, $STATIC | $FINAL, $constField(Label, FLAG_REACHABLE)},
	{"FLAG_SUBROUTINE_CALLER", "I", nullptr, $STATIC | $FINAL, $constField(Label, FLAG_SUBROUTINE_CALLER)},
	{"FLAG_SUBROUTINE_START", "I", nullptr, $STATIC | $FINAL, $constField(Label, FLAG_SUBROUTINE_START)},
	{"FLAG_SUBROUTINE_END", "I", nullptr, $STATIC | $FINAL, $constField(Label, FLAG_SUBROUTINE_END)},
	{"LINE_NUMBERS_CAPACITY_INCREMENT", "I", nullptr, $STATIC | $FINAL, $constField(Label, LINE_NUMBERS_CAPACITY_INCREMENT)},
	{"FORWARD_REFERENCES_CAPACITY_INCREMENT", "I", nullptr, $STATIC | $FINAL, $constField(Label, FORWARD_REFERENCES_CAPACITY_INCREMENT)},
	{"FORWARD_REFERENCE_TYPE_MASK", "I", nullptr, $STATIC | $FINAL, $constField(Label, FORWARD_REFERENCE_TYPE_MASK)},
	{"FORWARD_REFERENCE_TYPE_SHORT", "I", nullptr, $STATIC | $FINAL, $constField(Label, FORWARD_REFERENCE_TYPE_SHORT)},
	{"FORWARD_REFERENCE_TYPE_WIDE", "I", nullptr, $STATIC | $FINAL, $constField(Label, FORWARD_REFERENCE_TYPE_WIDE)},
	{"FORWARD_REFERENCE_HANDLE_MASK", "I", nullptr, $STATIC | $FINAL, $constField(Label, FORWARD_REFERENCE_HANDLE_MASK)},
	{"EMPTY_LIST", "Ljdk/internal/org/objectweb/asm/Label;", nullptr, $STATIC | $FINAL, $staticField(Label, EMPTY_LIST)},
	{"info", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Label, info)},
	{"flags", "S", nullptr, 0, $field(Label, flags)},
	{"lineNumber", "S", nullptr, $PRIVATE, $field(Label, lineNumber)},
	{"otherLineNumbers", "[I", nullptr, $PRIVATE, $field(Label, otherLineNumbers)},
	{"bytecodeOffset", "I", nullptr, 0, $field(Label, bytecodeOffset)},
	{"forwardReferences", "[I", nullptr, $PRIVATE, $field(Label, forwardReferences)},
	{"inputStackSize", "S", nullptr, 0, $field(Label, inputStackSize)},
	{"outputStackSize", "S", nullptr, 0, $field(Label, outputStackSize)},
	{"outputStackMax", "S", nullptr, 0, $field(Label, outputStackMax)},
	{"subroutineId", "S", nullptr, 0, $field(Label, subroutineId)},
	{"frame", "Ljdk/internal/org/objectweb/asm/Frame;", nullptr, 0, $field(Label, frame)},
	{"nextBasicBlock", "Ljdk/internal/org/objectweb/asm/Label;", nullptr, 0, $field(Label, nextBasicBlock)},
	{"outgoingEdges", "Ljdk/internal/org/objectweb/asm/Edge;", nullptr, 0, $field(Label, outgoingEdges)},
	{"nextListElement", "Ljdk/internal/org/objectweb/asm/Label;", nullptr, 0, $field(Label, nextListElement)},
	{}
};

$MethodInfo _Label_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Label, init$, void)},
	{"accept", "(Ljdk/internal/org/objectweb/asm/MethodVisitor;Z)V", nullptr, $FINAL, $method(Label, accept, void, $MethodVisitor*, bool)},
	{"addForwardReference", "(III)V", nullptr, $PRIVATE, $method(Label, addForwardReference, void, int32_t, int32_t, int32_t)},
	{"addLineNumber", "(I)V", nullptr, $FINAL, $method(Label, addLineNumber, void, int32_t)},
	{"addSubroutineRetSuccessors", "(Ljdk/internal/org/objectweb/asm/Label;)V", nullptr, $FINAL, $method(Label, addSubroutineRetSuccessors, void, Label*)},
	{"getCanonicalInstance", "()Ljdk/internal/org/objectweb/asm/Label;", nullptr, $FINAL, $method(Label, getCanonicalInstance, Label*)},
	{"getOffset", "()I", nullptr, $PUBLIC, $virtualMethod(Label, getOffset, int32_t)},
	{"markSubroutine", "(S)V", nullptr, $FINAL, $method(Label, markSubroutine, void, int16_t)},
	{"pushSuccessors", "(Ljdk/internal/org/objectweb/asm/Label;)Ljdk/internal/org/objectweb/asm/Label;", nullptr, $PRIVATE, $method(Label, pushSuccessors, Label*, Label*)},
	{"put", "(Ljdk/internal/org/objectweb/asm/ByteVector;IZ)V", nullptr, $FINAL, $method(Label, put, void, $ByteVector*, int32_t, bool)},
	{"resolve", "([BI)Z", nullptr, $FINAL, $method(Label, resolve, bool, $bytes*, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Label, toString, $String*)},
	{}
};

$ClassInfo _Label_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.Label",
	"java.lang.Object",
	nullptr,
	_Label_FieldInfo_,
	_Label_MethodInfo_
};

$Object* allocate$Label($Class* clazz) {
	return $of($alloc(Label));
}

Label* Label::EMPTY_LIST = nullptr;

void Label::init$() {
}

int32_t Label::getOffset() {
	if (((int32_t)(this->flags & (uint32_t)Label::FLAG_RESOLVED)) == 0) {
		$throwNew($IllegalStateException, "Label offset position has not been resolved yet"_s);
	}
	return this->bytecodeOffset;
}

Label* Label::getCanonicalInstance() {
	return this->frame == nullptr ? this : $nc(this->frame)->owner;
}

void Label::addLineNumber(int32_t lineNumber) {
	if (this->lineNumber == 0) {
		this->lineNumber = (int16_t)lineNumber;
	} else {
		if (this->otherLineNumbers == nullptr) {
			$set(this, otherLineNumbers, $new($ints, Label::LINE_NUMBERS_CAPACITY_INCREMENT));
		}
		int32_t otherLineNumberIndex = ++(*$nc(this->otherLineNumbers))[0];
		if (otherLineNumberIndex >= $nc(this->otherLineNumbers)->length) {
			$var($ints, newLineNumbers, $new($ints, $nc(this->otherLineNumbers)->length + Label::LINE_NUMBERS_CAPACITY_INCREMENT));
			$System::arraycopy(this->otherLineNumbers, 0, newLineNumbers, 0, $nc(this->otherLineNumbers)->length);
			$set(this, otherLineNumbers, newLineNumbers);
		}
		$nc(this->otherLineNumbers)->set(otherLineNumberIndex, lineNumber);
	}
}

void Label::accept($MethodVisitor* methodVisitor, bool visitLineNumbers) {
	$nc(methodVisitor)->visitLabel(this);
	if (visitLineNumbers && this->lineNumber != 0) {
		methodVisitor->visitLineNumber((int32_t)(this->lineNumber & (uint32_t)0x0000FFFF), this);
		if (this->otherLineNumbers != nullptr) {
			for (int32_t i = 1; i <= $nc(this->otherLineNumbers)->get(0); ++i) {
				methodVisitor->visitLineNumber($nc(this->otherLineNumbers)->get(i), this);
			}
		}
	}
}

void Label::put($ByteVector* code, int32_t sourceInsnBytecodeOffset, bool wideReference) {
	if (((int32_t)(this->flags & (uint32_t)Label::FLAG_RESOLVED)) == 0) {
		if (wideReference) {
			addForwardReference(sourceInsnBytecodeOffset, Label::FORWARD_REFERENCE_TYPE_WIDE, $nc(code)->length);
			$nc(code)->putInt(-1);
		} else {
			addForwardReference(sourceInsnBytecodeOffset, Label::FORWARD_REFERENCE_TYPE_SHORT, $nc(code)->length);
			$nc(code)->putShort(-1);
		}
	} else if (wideReference) {
		$nc(code)->putInt(this->bytecodeOffset - sourceInsnBytecodeOffset);
	} else {
		$nc(code)->putShort(this->bytecodeOffset - sourceInsnBytecodeOffset);
	}
}

void Label::addForwardReference(int32_t sourceInsnBytecodeOffset, int32_t referenceType, int32_t referenceHandle) {
	if (this->forwardReferences == nullptr) {
		$set(this, forwardReferences, $new($ints, Label::FORWARD_REFERENCES_CAPACITY_INCREMENT));
	}
	int32_t lastElementIndex = $nc(this->forwardReferences)->get(0);
	if (lastElementIndex + 2 >= $nc(this->forwardReferences)->length) {
		$var($ints, newValues, $new($ints, $nc(this->forwardReferences)->length + Label::FORWARD_REFERENCES_CAPACITY_INCREMENT));
		$System::arraycopy(this->forwardReferences, 0, newValues, 0, $nc(this->forwardReferences)->length);
		$set(this, forwardReferences, newValues);
	}
	$nc(this->forwardReferences)->set(++lastElementIndex, sourceInsnBytecodeOffset);
	$nc(this->forwardReferences)->set(++lastElementIndex, referenceType | referenceHandle);
	$nc(this->forwardReferences)->set(0, lastElementIndex);
}

bool Label::resolve($bytes* code, int32_t bytecodeOffset) {
	this->flags |= Label::FLAG_RESOLVED;
	this->bytecodeOffset = bytecodeOffset;
	if (this->forwardReferences == nullptr) {
		return false;
	}
	bool hasAsmInstructions = false;
	for (int32_t i = $nc(this->forwardReferences)->get(0); i > 0; i -= 2) {
		int32_t sourceInsnBytecodeOffset = $nc(this->forwardReferences)->get(i - 1);
		int32_t reference = $nc(this->forwardReferences)->get(i);
		int32_t relativeOffset = bytecodeOffset - sourceInsnBytecodeOffset;
		int32_t handle = (int32_t)(reference & (uint32_t)Label::FORWARD_REFERENCE_HANDLE_MASK);
		if (((int32_t)(reference & (uint32_t)Label::FORWARD_REFERENCE_TYPE_MASK)) == Label::FORWARD_REFERENCE_TYPE_SHORT) {
			if (relativeOffset < $Short::MIN_VALUE || relativeOffset > $Short::MAX_VALUE) {
				int32_t opcode = (int32_t)($nc(code)->get(sourceInsnBytecodeOffset) & (uint32_t)255);
				if (opcode < $Opcodes::IFNULL) {
					code->set(sourceInsnBytecodeOffset, (int8_t)(opcode + $Constants::ASM_OPCODE_DELTA));
				} else {
					code->set(sourceInsnBytecodeOffset, (int8_t)(opcode + $Constants::ASM_IFNULL_OPCODE_DELTA));
				}
				hasAsmInstructions = true;
			}
			$nc(code)->set(handle++, (int8_t)((int32_t)((uint32_t)relativeOffset >> 8)));
			code->set(handle, (int8_t)relativeOffset);
		} else {
			$nc(code)->set(handle++, (int8_t)((int32_t)((uint32_t)relativeOffset >> 24)));
			code->set(handle++, (int8_t)((int32_t)((uint32_t)relativeOffset >> 16)));
			code->set(handle++, (int8_t)((int32_t)((uint32_t)relativeOffset >> 8)));
			code->set(handle, (int8_t)relativeOffset);
		}
	}
	return hasAsmInstructions;
}

void Label::markSubroutine(int16_t subroutineId) {
	$useLocalCurrentObjectStackCache();
	$var(Label, listOfBlocksToProcess, this);
	$set(listOfBlocksToProcess, nextListElement, Label::EMPTY_LIST);
	while (listOfBlocksToProcess != Label::EMPTY_LIST) {
		$var(Label, basicBlock, listOfBlocksToProcess);
		$assign(listOfBlocksToProcess, $nc(listOfBlocksToProcess)->nextListElement);
		$set($nc(basicBlock), nextListElement, nullptr);
		if (basicBlock->subroutineId == 0) {
			basicBlock->subroutineId = subroutineId;
			$assign(listOfBlocksToProcess, basicBlock->pushSuccessors(listOfBlocksToProcess));
		}
	}
}

void Label::addSubroutineRetSuccessors(Label* subroutineCaller) {
	$useLocalCurrentObjectStackCache();
	$var(Label, listOfProcessedBlocks, Label::EMPTY_LIST);
	$var(Label, listOfBlocksToProcess, this);
	$set(listOfBlocksToProcess, nextListElement, Label::EMPTY_LIST);
	while (listOfBlocksToProcess != Label::EMPTY_LIST) {
		$var(Label, basicBlock, listOfBlocksToProcess);
		$assign(listOfBlocksToProcess, $nc(basicBlock)->nextListElement);
		$set(basicBlock, nextListElement, listOfProcessedBlocks);
		$assign(listOfProcessedBlocks, basicBlock);
		if (((int32_t)(basicBlock->flags & (uint32_t)Label::FLAG_SUBROUTINE_END)) != 0 && basicBlock->subroutineId != $nc(subroutineCaller)->subroutineId) {
			$set(basicBlock, outgoingEdges, $new($Edge, basicBlock->outputStackSize, $nc(subroutineCaller->outgoingEdges)->successor, basicBlock->outgoingEdges));
		}
		$assign(listOfBlocksToProcess, basicBlock->pushSuccessors(listOfBlocksToProcess));
	}
	while (listOfProcessedBlocks != Label::EMPTY_LIST) {
		$var(Label, newListOfProcessedBlocks, $nc(listOfProcessedBlocks)->nextListElement);
		$set(listOfProcessedBlocks, nextListElement, nullptr);
		$assign(listOfProcessedBlocks, newListOfProcessedBlocks);
	}
}

Label* Label::pushSuccessors(Label* listOfLabelsToProcess) {
	$useLocalCurrentObjectStackCache();
	$var(Label, newListOfLabelsToProcess, listOfLabelsToProcess);
	$var($Edge, outgoingEdge, this->outgoingEdges);
	while (outgoingEdge != nullptr) {
		bool isJsrTarget = ((int32_t)(this->flags & (uint32_t)Label::FLAG_SUBROUTINE_CALLER)) != 0 && outgoingEdge == $nc(this->outgoingEdges)->nextEdge;
		if (!isJsrTarget && $nc(outgoingEdge->successor)->nextListElement == nullptr) {
			$set($nc(outgoingEdge->successor), nextListElement, newListOfLabelsToProcess);
			$assign(newListOfLabelsToProcess, outgoingEdge->successor);
		}
		$assign(outgoingEdge, outgoingEdge->nextEdge);
	}
	return newListOfLabelsToProcess;
}

$String* Label::toString() {
	return $str({"L"_s, $$str($System::identityHashCode(this))});
}

void clinit$Label($Class* class$) {
	$assignStatic(Label::EMPTY_LIST, $new(Label));
}

Label::Label() {
}

$Class* Label::load$($String* name, bool initialize) {
	$loadClass(Label, name, initialize, &_Label_ClassInfo_, clinit$Label, allocate$Label);
	return class$;
}

$Class* Label::class$ = nullptr;

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk