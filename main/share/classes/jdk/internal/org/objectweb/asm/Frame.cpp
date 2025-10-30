#include <jdk/internal/org/objectweb/asm/Frame.h>

#include <java/lang/AssertionError.h>
#include <java/lang/Math.h>
#include <jdk/internal/org/objectweb/asm/ByteVector.h>
#include <jdk/internal/org/objectweb/asm/Constants.h>
#include <jdk/internal/org/objectweb/asm/Label.h>
#include <jdk/internal/org/objectweb/asm/MethodWriter.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/Symbol.h>
#include <jdk/internal/org/objectweb/asm/SymbolTable.h>
#include <jdk/internal/org/objectweb/asm/Type.h>
#include <jcpp.h>

#undef AALOAD
#undef AASTORE
#undef ACC_CONSTRUCTOR
#undef ACC_STATIC
#undef ACONST_NULL
#undef ALOAD
#undef ANEWARRAY
#undef APPEND_FRAME
#undef ARETURN
#undef ARRAYLENGTH
#undef ARRAY_OF
#undef ASTORE
#undef ATHROW
#undef BALOAD
#undef BASTORE
#undef BIPUSH
#undef BOOLEAN
#undef BYTE
#undef CALOAD
#undef CASTORE
#undef CHAR
#undef CHECKCAST
#undef CHOP_FRAME
#undef CONSTANT_CLASS_TAG
#undef CONSTANT_DOUBLE_TAG
#undef CONSTANT_DYNAMIC_TAG
#undef CONSTANT_FLOAT_TAG
#undef CONSTANT_INTEGER_TAG
#undef CONSTANT_KIND
#undef CONSTANT_LONG_TAG
#undef CONSTANT_METHOD_HANDLE_TAG
#undef CONSTANT_METHOD_TYPE_TAG
#undef CONSTANT_STRING_TAG
#undef D2F
#undef D2I
#undef D2L
#undef DADD
#undef DALOAD
#undef DASTORE
#undef DCMPG
#undef DCMPL
#undef DCONST_0
#undef DCONST_1
#undef DDIV
#undef DIM_MASK
#undef DIM_SHIFT
#undef DIM_SIZE
#undef DLOAD
#undef DMUL
#undef DNEG
#undef DOUBLE
#undef DREM
#undef DRETURN
#undef DSTORE
#undef DSUB
#undef DUP
#undef DUP2
#undef DUP2_X1
#undef DUP2_X2
#undef DUP_X1
#undef DUP_X2
#undef ELEMENT_OF
#undef F2D
#undef F2I
#undef F2L
#undef FADD
#undef FALOAD
#undef FASTORE
#undef FCMPG
#undef FCMPL
#undef FCONST_0
#undef FCONST_1
#undef FCONST_2
#undef FDIV
#undef FLAGS_SHIFT
#undef FLAGS_SIZE
#undef FLOAD
#undef FLOAT
#undef FMUL
#undef FNEG
#undef FREM
#undef FRETURN
#undef FSTORE
#undef FSUB
#undef FULL_FRAME
#undef GETFIELD
#undef GETSTATIC
#undef GOTO
#undef I2B
#undef I2C
#undef I2D
#undef I2F
#undef I2L
#undef I2S
#undef IADD
#undef IALOAD
#undef IAND
#undef IASTORE
#undef ICONST_0
#undef ICONST_1
#undef ICONST_2
#undef ICONST_3
#undef ICONST_4
#undef ICONST_5
#undef ICONST_M1
#undef IDIV
#undef IFEQ
#undef IFGE
#undef IFGT
#undef IFLE
#undef IFLT
#undef IFNE
#undef IFNONNULL
#undef IFNULL
#undef IF_ACMPEQ
#undef IF_ACMPNE
#undef IF_ICMPEQ
#undef IF_ICMPGE
#undef IF_ICMPGT
#undef IF_ICMPLE
#undef IF_ICMPLT
#undef IF_ICMPNE
#undef IINC
#undef ILOAD
#undef IMUL
#undef INEG
#undef INSTANCEOF
#undef INTEGER
#undef INVOKEDYNAMIC
#undef INVOKEINTERFACE
#undef INVOKESPECIAL
#undef INVOKESTATIC
#undef INVOKEVIRTUAL
#undef IOR
#undef IREM
#undef IRETURN
#undef ISHL
#undef ISHR
#undef ISTORE
#undef ISUB
#undef ITEM_ASM_BOOLEAN
#undef ITEM_ASM_BYTE
#undef ITEM_ASM_CHAR
#undef ITEM_ASM_SHORT
#undef ITEM_DOUBLE
#undef ITEM_FLOAT
#undef ITEM_INTEGER
#undef ITEM_LONG
#undef ITEM_NULL
#undef ITEM_OBJECT
#undef ITEM_TOP
#undef ITEM_UNINITIALIZED
#undef ITEM_UNINITIALIZED_THIS
#undef IUSHR
#undef IXOR
#undef JSR
#undef KIND_MASK
#undef KIND_SHIFT
#undef KIND_SIZE
#undef L2D
#undef L2F
#undef L2I
#undef LADD
#undef LALOAD
#undef LAND
#undef LASTORE
#undef LCMP
#undef LCONST_0
#undef LCONST_1
#undef LDC
#undef LDIV
#undef LLOAD
#undef LMUL
#undef LNEG
#undef LOCAL_KIND
#undef LONG
#undef LOOKUPSWITCH
#undef LOR
#undef LREM
#undef LRETURN
#undef LSHL
#undef LSHR
#undef LSTORE
#undef LSUB
#undef LUSHR
#undef LXOR
#undef MONITORENTER
#undef MONITOREXIT
#undef MULTIANEWARRAY
#undef NEW
#undef NEWARRAY
#undef NOP
#undef NULL
#undef POP
#undef POP2
#undef PUTFIELD
#undef PUTSTATIC
#undef REFERENCE_KIND
#undef RESERVED
#undef RET
#undef RETURN
#undef SALOAD
#undef SAME_FRAME
#undef SAME_FRAME_EXTENDED
#undef SAME_LOCALS_1_STACK_ITEM_FRAME
#undef SAME_LOCALS_1_STACK_ITEM_FRAME_EXTENDED
#undef SASTORE
#undef SHORT
#undef SIPUSH
#undef STACK_KIND
#undef SWAP
#undef TABLESWITCH
#undef TOP
#undef TOP_IF_LONG_OR_DOUBLE_FLAG
#undef T_BOOLEAN
#undef T_BYTE
#undef T_CHAR
#undef T_DOUBLE
#undef T_FLOAT
#undef T_INT
#undef T_LONG
#undef T_SHORT
#undef UNINITIALIZED_KIND
#undef UNINITIALIZED_THIS
#undef VALUE_MASK
#undef VALUE_SIZE

using $TypeArray = $Array<::jdk::internal::org::objectweb::asm$::Type>;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteVector = ::jdk::internal::org::objectweb::asm$::ByteVector;
using $Constants = ::jdk::internal::org::objectweb::asm$::Constants;
using $Label = ::jdk::internal::org::objectweb::asm$::Label;
using $MethodWriter = ::jdk::internal::org::objectweb::asm$::MethodWriter;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $Symbol = ::jdk::internal::org::objectweb::asm$::Symbol;
using $SymbolTable = ::jdk::internal::org::objectweb::asm$::SymbolTable;
using $Type = ::jdk::internal::org::objectweb::asm$::Type;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {

$FieldInfo _Frame_FieldInfo_[] = {
	{"SAME_FRAME", "I", nullptr, $STATIC | $FINAL, $constField(Frame, SAME_FRAME)},
	{"SAME_LOCALS_1_STACK_ITEM_FRAME", "I", nullptr, $STATIC | $FINAL, $constField(Frame, SAME_LOCALS_1_STACK_ITEM_FRAME)},
	{"RESERVED", "I", nullptr, $STATIC | $FINAL, $constField(Frame, RESERVED)},
	{"SAME_LOCALS_1_STACK_ITEM_FRAME_EXTENDED", "I", nullptr, $STATIC | $FINAL, $constField(Frame, SAME_LOCALS_1_STACK_ITEM_FRAME_EXTENDED)},
	{"CHOP_FRAME", "I", nullptr, $STATIC | $FINAL, $constField(Frame, CHOP_FRAME)},
	{"SAME_FRAME_EXTENDED", "I", nullptr, $STATIC | $FINAL, $constField(Frame, SAME_FRAME_EXTENDED)},
	{"APPEND_FRAME", "I", nullptr, $STATIC | $FINAL, $constField(Frame, APPEND_FRAME)},
	{"FULL_FRAME", "I", nullptr, $STATIC | $FINAL, $constField(Frame, FULL_FRAME)},
	{"ITEM_TOP", "I", nullptr, $STATIC | $FINAL, $constField(Frame, ITEM_TOP)},
	{"ITEM_INTEGER", "I", nullptr, $STATIC | $FINAL, $constField(Frame, ITEM_INTEGER)},
	{"ITEM_FLOAT", "I", nullptr, $STATIC | $FINAL, $constField(Frame, ITEM_FLOAT)},
	{"ITEM_DOUBLE", "I", nullptr, $STATIC | $FINAL, $constField(Frame, ITEM_DOUBLE)},
	{"ITEM_LONG", "I", nullptr, $STATIC | $FINAL, $constField(Frame, ITEM_LONG)},
	{"ITEM_NULL", "I", nullptr, $STATIC | $FINAL, $constField(Frame, ITEM_NULL)},
	{"ITEM_UNINITIALIZED_THIS", "I", nullptr, $STATIC | $FINAL, $constField(Frame, ITEM_UNINITIALIZED_THIS)},
	{"ITEM_OBJECT", "I", nullptr, $STATIC | $FINAL, $constField(Frame, ITEM_OBJECT)},
	{"ITEM_UNINITIALIZED", "I", nullptr, $STATIC | $FINAL, $constField(Frame, ITEM_UNINITIALIZED)},
	{"ITEM_ASM_BOOLEAN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Frame, ITEM_ASM_BOOLEAN)},
	{"ITEM_ASM_BYTE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Frame, ITEM_ASM_BYTE)},
	{"ITEM_ASM_CHAR", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Frame, ITEM_ASM_CHAR)},
	{"ITEM_ASM_SHORT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Frame, ITEM_ASM_SHORT)},
	{"DIM_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Frame, DIM_SIZE)},
	{"KIND_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Frame, KIND_SIZE)},
	{"FLAGS_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Frame, FLAGS_SIZE)},
	{"VALUE_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Frame, VALUE_SIZE)},
	{"DIM_SHIFT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Frame, DIM_SHIFT)},
	{"KIND_SHIFT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Frame, KIND_SHIFT)},
	{"FLAGS_SHIFT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Frame, FLAGS_SHIFT)},
	{"DIM_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Frame, DIM_MASK)},
	{"KIND_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Frame, KIND_MASK)},
	{"VALUE_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Frame, VALUE_MASK)},
	{"ARRAY_OF", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Frame, ARRAY_OF)},
	{"ELEMENT_OF", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Frame, ELEMENT_OF)},
	{"CONSTANT_KIND", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Frame, CONSTANT_KIND)},
	{"REFERENCE_KIND", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Frame, REFERENCE_KIND)},
	{"UNINITIALIZED_KIND", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Frame, UNINITIALIZED_KIND)},
	{"LOCAL_KIND", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Frame, LOCAL_KIND)},
	{"STACK_KIND", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Frame, STACK_KIND)},
	{"TOP_IF_LONG_OR_DOUBLE_FLAG", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Frame, TOP_IF_LONG_OR_DOUBLE_FLAG)},
	{"TOP", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Frame, TOP)},
	{"BOOLEAN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Frame, BOOLEAN)},
	{"BYTE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Frame, BYTE)},
	{"CHAR", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Frame, CHAR)},
	{"SHORT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Frame, SHORT)},
	{"INTEGER", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Frame, INTEGER)},
	{"FLOAT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Frame, FLOAT)},
	{"LONG", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Frame, LONG)},
	{"DOUBLE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Frame, DOUBLE)},
	{"NULL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Frame, NULL)},
	{"UNINITIALIZED_THIS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Frame, UNINITIALIZED_THIS)},
	{"owner", "Ljdk/internal/org/objectweb/asm/Label;", nullptr, 0, $field(Frame, owner)},
	{"inputLocals", "[I", nullptr, $PRIVATE, $field(Frame, inputLocals)},
	{"inputStack", "[I", nullptr, $PRIVATE, $field(Frame, inputStack)},
	{"outputLocals", "[I", nullptr, $PRIVATE, $field(Frame, outputLocals)},
	{"outputStack", "[I", nullptr, $PRIVATE, $field(Frame, outputStack)},
	{"outputStackStart", "S", nullptr, $PRIVATE, $field(Frame, outputStackStart)},
	{"outputStackTop", "S", nullptr, $PRIVATE, $field(Frame, outputStackTop)},
	{"initializationCount", "I", nullptr, $PRIVATE, $field(Frame, initializationCount)},
	{"initializations", "[I", nullptr, $PRIVATE, $field(Frame, initializations)},
	{}
};

$MethodInfo _Frame_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/org/objectweb/asm/Label;)V", nullptr, 0, $method(static_cast<void(Frame::*)($Label*)>(&Frame::init$))},
	{"accept", "(Ljdk/internal/org/objectweb/asm/MethodWriter;)V", nullptr, $FINAL, $method(static_cast<void(Frame::*)($MethodWriter*)>(&Frame::accept))},
	{"addInitializedType", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(Frame::*)(int32_t)>(&Frame::addInitializedType))},
	{"copyFrom", "(Ljdk/internal/org/objectweb/asm/Frame;)V", nullptr, $FINAL, $method(static_cast<void(Frame::*)(Frame*)>(&Frame::copyFrom))},
	{"execute", "(IILjdk/internal/org/objectweb/asm/Symbol;Ljdk/internal/org/objectweb/asm/SymbolTable;)V", nullptr, 0},
	{"getAbstractTypeFromApiFormat", "(Ljdk/internal/org/objectweb/asm/SymbolTable;Ljava/lang/Object;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($SymbolTable*,Object$*)>(&Frame::getAbstractTypeFromApiFormat))},
	{"getAbstractTypeFromDescriptor", "(Ljdk/internal/org/objectweb/asm/SymbolTable;Ljava/lang/String;I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($SymbolTable*,$String*,int32_t)>(&Frame::getAbstractTypeFromDescriptor))},
	{"getAbstractTypeFromInternalName", "(Ljdk/internal/org/objectweb/asm/SymbolTable;Ljava/lang/String;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($SymbolTable*,$String*)>(&Frame::getAbstractTypeFromInternalName))},
	{"getConcreteOutputType", "(II)I", nullptr, $PRIVATE, $method(static_cast<int32_t(Frame::*)(int32_t,int32_t)>(&Frame::getConcreteOutputType))},
	{"getInitializedType", "(Ljdk/internal/org/objectweb/asm/SymbolTable;I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(Frame::*)($SymbolTable*,int32_t)>(&Frame::getInitializedType))},
	{"getInputStackSize", "()I", nullptr, $FINAL, $method(static_cast<int32_t(Frame::*)()>(&Frame::getInputStackSize))},
	{"getLocal", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(Frame::*)(int32_t)>(&Frame::getLocal))},
	{"merge", "(Ljdk/internal/org/objectweb/asm/SymbolTable;Ljdk/internal/org/objectweb/asm/Frame;I)Z", nullptr, $FINAL, $method(static_cast<bool(Frame::*)($SymbolTable*,Frame*,int32_t)>(&Frame::merge))},
	{"merge", "(Ljdk/internal/org/objectweb/asm/SymbolTable;I[II)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($SymbolTable*,int32_t,$ints*,int32_t)>(&Frame::merge))},
	{"pop", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(Frame::*)()>(&Frame::pop))},
	{"pop", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(Frame::*)(int32_t)>(&Frame::pop))},
	{"pop", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(Frame::*)($String*)>(&Frame::pop))},
	{"push", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(Frame::*)(int32_t)>(&Frame::push))},
	{"push", "(Ljdk/internal/org/objectweb/asm/SymbolTable;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(Frame::*)($SymbolTable*,$String*)>(&Frame::push))},
	{"putAbstractType", "(Ljdk/internal/org/objectweb/asm/SymbolTable;ILjdk/internal/org/objectweb/asm/ByteVector;)V", nullptr, $STATIC, $method(static_cast<void(*)($SymbolTable*,int32_t,$ByteVector*)>(&Frame::putAbstractType))},
	{"setInputFrameFromApiFormat", "(Ljdk/internal/org/objectweb/asm/SymbolTable;I[Ljava/lang/Object;I[Ljava/lang/Object;)V", nullptr, $FINAL, $method(static_cast<void(Frame::*)($SymbolTable*,int32_t,$ObjectArray*,int32_t,$ObjectArray*)>(&Frame::setInputFrameFromApiFormat))},
	{"setInputFrameFromDescriptor", "(Ljdk/internal/org/objectweb/asm/SymbolTable;ILjava/lang/String;I)V", nullptr, $FINAL, $method(static_cast<void(Frame::*)($SymbolTable*,int32_t,$String*,int32_t)>(&Frame::setInputFrameFromDescriptor))},
	{"setLocal", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(Frame::*)(int32_t,int32_t)>(&Frame::setLocal))},
	{}
};

$ClassInfo _Frame_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.org.objectweb.asm.Frame",
	"java.lang.Object",
	nullptr,
	_Frame_FieldInfo_,
	_Frame_MethodInfo_
};

$Object* allocate$Frame($Class* clazz) {
	return $of($alloc(Frame));
}

void Frame::init$($Label* owner) {
	$set(this, owner, owner);
}

void Frame::copyFrom(Frame* frame) {
	$set(this, inputLocals, $nc(frame)->inputLocals);
	$set(this, inputStack, frame->inputStack);
	this->outputStackStart = (int16_t)0;
	$set(this, outputLocals, frame->outputLocals);
	$set(this, outputStack, frame->outputStack);
	this->outputStackTop = frame->outputStackTop;
	this->initializationCount = frame->initializationCount;
	$set(this, initializations, frame->initializations);
}

int32_t Frame::getAbstractTypeFromApiFormat($SymbolTable* symbolTable, Object$* type) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($Integer, type)) {
		return Frame::CONSTANT_KIND | $nc(($cast($Integer, type)))->intValue();
	} else if ($instanceOf($String, type)) {
		$var($String, descriptor, $nc($($Type::getObjectType($cast($String, type))))->getDescriptor());
		return getAbstractTypeFromDescriptor(symbolTable, descriptor, 0);
	} else {
		return Frame::UNINITIALIZED_KIND | $nc(symbolTable)->addUninitializedType(""_s, $nc(($cast($Label, type)))->bytecodeOffset);
	}
}

int32_t Frame::getAbstractTypeFromInternalName($SymbolTable* symbolTable, $String* internalName) {
	return Frame::REFERENCE_KIND | $nc(symbolTable)->addType(internalName);
}

int32_t Frame::getAbstractTypeFromDescriptor($SymbolTable* symbolTable, $String* buffer, int32_t offset) {
	$var($String, internalName, nullptr);
	{
		int32_t elementDescriptorOffset = 0;
		int32_t typeValue = 0;
		switch ($nc(buffer)->charAt(offset)) {
		case u'V':
			{
				return 0;
			}
		case u'Z':
			{}
		case u'C':
			{}
		case u'B':
			{}
		case u'S':
			{}
		case u'I':
			{
				return Frame::INTEGER;
			}
		case u'F':
			{
				return Frame::FLOAT;
			}
		case u'J':
			{
				return Frame::LONG;
			}
		case u'D':
			{
				return Frame::DOUBLE;
			}
		case u'L':
			{
				$assign(internalName, buffer->substring(offset + 1, buffer->length() - 1));
				return Frame::REFERENCE_KIND | $nc(symbolTable)->addType(internalName);
			}
		case u'[':
			{
				elementDescriptorOffset = offset + 1;
				while (buffer->charAt(elementDescriptorOffset) == u'[') {
					++elementDescriptorOffset;
				}
				switch (buffer->charAt(elementDescriptorOffset)) {
				case u'Z':
					{
						typeValue = Frame::BOOLEAN;
						break;
					}
				case u'C':
					{
						typeValue = Frame::CHAR;
						break;
					}
				case u'B':
					{
						typeValue = Frame::BYTE;
						break;
					}
				case u'S':
					{
						typeValue = Frame::SHORT;
						break;
					}
				case u'I':
					{
						typeValue = Frame::INTEGER;
						break;
					}
				case u'F':
					{
						typeValue = Frame::FLOAT;
						break;
					}
				case u'J':
					{
						typeValue = Frame::LONG;
						break;
					}
				case u'D':
					{
						typeValue = Frame::DOUBLE;
						break;
					}
				case u'L':
					{
						$assign(internalName, buffer->substring(elementDescriptorOffset + 1, buffer->length() - 1));
						typeValue = Frame::REFERENCE_KIND | $nc(symbolTable)->addType(internalName);
						break;
					}
				default:
					{
						$throwNew($IllegalArgumentException);
					}
				}
				return ($sl(elementDescriptorOffset - offset, Frame::DIM_SHIFT)) | typeValue;
			}
		default:
			{
				$throwNew($IllegalArgumentException);
			}
		}
	}
}

void Frame::setInputFrameFromDescriptor($SymbolTable* symbolTable, int32_t access, $String* descriptor, int32_t maxLocals) {
	$useLocalCurrentObjectStackCache();
	$set(this, inputLocals, $new($ints, maxLocals));
	$set(this, inputStack, $new($ints, 0));
	int32_t inputLocalIndex = 0;
	if (((int32_t)(access & (uint32_t)$Opcodes::ACC_STATIC)) == 0) {
		if (((int32_t)(access & (uint32_t)$Constants::ACC_CONSTRUCTOR)) == 0) {
			$nc(this->inputLocals)->set(inputLocalIndex++, Frame::REFERENCE_KIND | $nc(symbolTable)->addType($(symbolTable->getClassName())));
		} else {
			$nc(this->inputLocals)->set(inputLocalIndex++, Frame::UNINITIALIZED_THIS);
		}
	}
	{
		$var($TypeArray, arr$, $Type::getArgumentTypes(descriptor));
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Type, argumentType, arr$->get(i$));
			{
				int32_t abstractType = getAbstractTypeFromDescriptor(symbolTable, $($nc(argumentType)->getDescriptor()), 0);
				$nc(this->inputLocals)->set(inputLocalIndex++, abstractType);
				if (abstractType == Frame::LONG || abstractType == Frame::DOUBLE) {
					$nc(this->inputLocals)->set(inputLocalIndex++, Frame::TOP);
				}
			}
		}
	}
	while (inputLocalIndex < maxLocals) {
		$nc(this->inputLocals)->set(inputLocalIndex++, Frame::TOP);
	}
}

void Frame::setInputFrameFromApiFormat($SymbolTable* symbolTable, int32_t numLocal, $ObjectArray* local, int32_t numStack, $ObjectArray* stack) {
	int32_t inputLocalIndex = 0;
	for (int32_t i = 0; i < numLocal; ++i) {
		$nc(this->inputLocals)->set(inputLocalIndex++, getAbstractTypeFromApiFormat(symbolTable, $nc(local)->get(i)));
		$init($Opcodes);
		if ($equals($nc(local)->get(i), $Opcodes::LONG) || $equals($nc(local)->get(i), $Opcodes::DOUBLE)) {
			$nc(this->inputLocals)->set(inputLocalIndex++, Frame::TOP);
		}
	}
	while (inputLocalIndex < $nc(this->inputLocals)->length) {
		$nc(this->inputLocals)->set(inputLocalIndex++, Frame::TOP);
	}
	int32_t numStackTop = 0;
	for (int32_t i = 0; i < numStack; ++i) {
		$init($Opcodes);
		if ($equals($nc(stack)->get(i), $Opcodes::LONG) || $equals($nc(stack)->get(i), $Opcodes::DOUBLE)) {
			++numStackTop;
		}
	}
	$set(this, inputStack, $new($ints, numStack + numStackTop));
	int32_t inputStackIndex = 0;
	for (int32_t i = 0; i < numStack; ++i) {
		$nc(this->inputStack)->set(inputStackIndex++, getAbstractTypeFromApiFormat(symbolTable, $nc(stack)->get(i)));
		$init($Opcodes);
		if ($equals($nc(stack)->get(i), $Opcodes::LONG) || $equals($nc(stack)->get(i), $Opcodes::DOUBLE)) {
			$nc(this->inputStack)->set(inputStackIndex++, Frame::TOP);
		}
	}
	this->outputStackTop = (int16_t)0;
	this->initializationCount = 0;
}

int32_t Frame::getInputStackSize() {
	return $nc(this->inputStack)->length;
}

int32_t Frame::getLocal(int32_t localIndex) {
	if (this->outputLocals == nullptr || localIndex >= $nc(this->outputLocals)->length) {
		return Frame::LOCAL_KIND | localIndex;
	} else {
		int32_t abstractType = $nc(this->outputLocals)->get(localIndex);
		if (abstractType == 0) {
			abstractType = ($nc(this->outputLocals)->set(localIndex, Frame::LOCAL_KIND | localIndex));
		}
		return abstractType;
	}
}

void Frame::setLocal(int32_t localIndex, int32_t abstractType) {
	if (this->outputLocals == nullptr) {
		$set(this, outputLocals, $new($ints, 10));
	}
	int32_t outputLocalsLength = $nc(this->outputLocals)->length;
	if (localIndex >= outputLocalsLength) {
		$var($ints, newOutputLocals, $new($ints, $Math::max(localIndex + 1, 2 * outputLocalsLength)));
		$System::arraycopy(this->outputLocals, 0, newOutputLocals, 0, outputLocalsLength);
		$set(this, outputLocals, newOutputLocals);
	}
	$nc(this->outputLocals)->set(localIndex, abstractType);
}

void Frame::push(int32_t abstractType) {
	if (this->outputStack == nullptr) {
		$set(this, outputStack, $new($ints, 10));
	}
	int32_t outputStackLength = $nc(this->outputStack)->length;
	if (this->outputStackTop >= outputStackLength) {
		$var($ints, newOutputStack, $new($ints, $Math::max(this->outputStackTop + 1, 2 * outputStackLength)));
		$System::arraycopy(this->outputStack, 0, newOutputStack, 0, outputStackLength);
		$set(this, outputStack, newOutputStack);
	}
	$nc(this->outputStack)->set(this->outputStackTop++, abstractType);
	int16_t outputStackSize = (int16_t)(this->outputStackStart + this->outputStackTop);
	if (outputStackSize > $nc(this->owner)->outputStackMax) {
		$nc(this->owner)->outputStackMax = outputStackSize;
	}
}

void Frame::push($SymbolTable* symbolTable, $String* descriptor) {
	int32_t typeDescriptorOffset = $nc(descriptor)->charAt(0) == u'(' ? $Type::getReturnTypeOffset(descriptor) : 0;
	int32_t abstractType = getAbstractTypeFromDescriptor(symbolTable, descriptor, typeDescriptorOffset);
	if (abstractType != 0) {
		push(abstractType);
		if (abstractType == Frame::LONG || abstractType == Frame::DOUBLE) {
			push(Frame::TOP);
		}
	}
}

int32_t Frame::pop() {
	if (this->outputStackTop > 0) {
		return $nc(this->outputStack)->get(--this->outputStackTop);
	} else {
		return Frame::STACK_KIND | -((int32_t)(--this->outputStackStart));
	}
}

void Frame::pop(int32_t elements) {
	if (this->outputStackTop >= elements) {
		this->outputStackTop -= elements;
	} else {
		this->outputStackStart -= elements - this->outputStackTop;
		this->outputStackTop = (int16_t)0;
	}
}

void Frame::pop($String* descriptor) {
	char16_t firstDescriptorChar = $nc(descriptor)->charAt(0);
	if (firstDescriptorChar == u'(') {
		pop(($Type::getArgumentsAndReturnSizes(descriptor) >> 2) - 1);
	} else if (firstDescriptorChar == u'J' || firstDescriptorChar == u'D') {
		pop(2);
	} else {
		pop(1);
	}
}

void Frame::addInitializedType(int32_t abstractType) {
	if (this->initializations == nullptr) {
		$set(this, initializations, $new($ints, 2));
	}
	int32_t initializationsLength = $nc(this->initializations)->length;
	if (this->initializationCount >= initializationsLength) {
		$var($ints, newInitializations, $new($ints, $Math::max(this->initializationCount + 1, 2 * initializationsLength)));
		$System::arraycopy(this->initializations, 0, newInitializations, 0, initializationsLength);
		$set(this, initializations, newInitializations);
	}
	$nc(this->initializations)->set(this->initializationCount++, abstractType);
}

int32_t Frame::getInitializedType($SymbolTable* symbolTable, int32_t abstractType) {
	$useLocalCurrentObjectStackCache();
	if (abstractType == Frame::UNINITIALIZED_THIS || ((int32_t)(abstractType & (uint32_t)(Frame::DIM_MASK | Frame::KIND_MASK))) == Frame::UNINITIALIZED_KIND) {
		for (int32_t i = 0; i < this->initializationCount; ++i) {
			int32_t initializedType = $nc(this->initializations)->get(i);
			int32_t dim = (int32_t)(initializedType & (uint32_t)Frame::DIM_MASK);
			int32_t kind = (int32_t)(initializedType & (uint32_t)Frame::KIND_MASK);
			int32_t value = (int32_t)(initializedType & (uint32_t)Frame::VALUE_MASK);
			if (kind == Frame::LOCAL_KIND) {
				initializedType = dim + $nc(this->inputLocals)->get(value);
			} else if (kind == Frame::STACK_KIND) {
				initializedType = dim + $nc(this->inputStack)->get($nc(this->inputStack)->length - value);
			}
			if (abstractType == initializedType) {
				if (abstractType == Frame::UNINITIALIZED_THIS) {
					return Frame::REFERENCE_KIND | $nc(symbolTable)->addType($(symbolTable->getClassName()));
				} else {
					return Frame::REFERENCE_KIND | $nc(symbolTable)->addType($nc($(symbolTable->getType((int32_t)(abstractType & (uint32_t)Frame::VALUE_MASK))))->value);
				}
			}
		}
	}
	return abstractType;
}

void Frame::execute(int32_t opcode, int32_t arg, $Symbol* argSymbol, $SymbolTable* symbolTable) {
	$useLocalCurrentObjectStackCache();
	int32_t abstractType1 = 0;
	int32_t abstractType2 = 0;
	int32_t abstractType3 = 0;
	int32_t abstractType4 = 0;
	{
		$var($String, arrayElementType, nullptr)
		$var($String, castType, nullptr)
		switch (opcode) {
		case $Opcodes::NOP:
			{}
		case $Opcodes::INEG:
			{}
		case $Opcodes::LNEG:
			{}
		case $Opcodes::FNEG:
			{}
		case $Opcodes::DNEG:
			{}
		case $Opcodes::I2B:
			{}
		case $Opcodes::I2C:
			{}
		case $Opcodes::I2S:
			{}
		case $Opcodes::GOTO:
			{}
		case $Opcodes::RETURN:
			{
				break;
			}
		case $Opcodes::ACONST_NULL:
			{
				push(Frame::NULL);
				break;
			}
		case $Opcodes::ICONST_M1:
			{}
		case $Opcodes::ICONST_0:
			{}
		case $Opcodes::ICONST_1:
			{}
		case $Opcodes::ICONST_2:
			{}
		case $Opcodes::ICONST_3:
			{}
		case $Opcodes::ICONST_4:
			{}
		case $Opcodes::ICONST_5:
			{}
		case $Opcodes::BIPUSH:
			{}
		case $Opcodes::SIPUSH:
			{}
		case $Opcodes::ILOAD:
			{
				push(Frame::INTEGER);
				break;
			}
		case $Opcodes::LCONST_0:
			{}
		case $Opcodes::LCONST_1:
			{}
		case $Opcodes::LLOAD:
			{
				push(Frame::LONG);
				push(Frame::TOP);
				break;
			}
		case $Opcodes::FCONST_0:
			{}
		case $Opcodes::FCONST_1:
			{}
		case $Opcodes::FCONST_2:
			{}
		case $Opcodes::FLOAD:
			{
				push(Frame::FLOAT);
				break;
			}
		case $Opcodes::DCONST_0:
			{}
		case $Opcodes::DCONST_1:
			{}
		case $Opcodes::DLOAD:
			{
				push(Frame::DOUBLE);
				push(Frame::TOP);
				break;
			}
		case $Opcodes::LDC:
			{
				switch ($nc(argSymbol)->tag) {
				case $Symbol::CONSTANT_INTEGER_TAG:
					{
						push(Frame::INTEGER);
						break;
					}
				case $Symbol::CONSTANT_LONG_TAG:
					{
						push(Frame::LONG);
						push(Frame::TOP);
						break;
					}
				case $Symbol::CONSTANT_FLOAT_TAG:
					{
						push(Frame::FLOAT);
						break;
					}
				case $Symbol::CONSTANT_DOUBLE_TAG:
					{
						push(Frame::DOUBLE);
						push(Frame::TOP);
						break;
					}
				case $Symbol::CONSTANT_CLASS_TAG:
					{
						push(Frame::REFERENCE_KIND | $nc(symbolTable)->addType("java/lang/Class"_s));
						break;
					}
				case $Symbol::CONSTANT_STRING_TAG:
					{
						push(Frame::REFERENCE_KIND | $nc(symbolTable)->addType("java/lang/String"_s));
						break;
					}
				case $Symbol::CONSTANT_METHOD_TYPE_TAG:
					{
						push(Frame::REFERENCE_KIND | $nc(symbolTable)->addType("java/lang/invoke/MethodType"_s));
						break;
					}
				case $Symbol::CONSTANT_METHOD_HANDLE_TAG:
					{
						push(Frame::REFERENCE_KIND | $nc(symbolTable)->addType("java/lang/invoke/MethodHandle"_s));
						break;
					}
				case $Symbol::CONSTANT_DYNAMIC_TAG:
					{
						push(symbolTable, argSymbol->value);
						break;
					}
				default:
					{
						$throwNew($AssertionError);
					}
				}
				break;
			}
		case $Opcodes::ALOAD:
			{
				push(getLocal(arg));
				break;
			}
		case $Opcodes::LALOAD:
			{}
		case $Opcodes::D2L:
			{
				pop(2);
				push(Frame::LONG);
				push(Frame::TOP);
				break;
			}
		case $Opcodes::DALOAD:
			{}
		case $Opcodes::L2D:
			{
				pop(2);
				push(Frame::DOUBLE);
				push(Frame::TOP);
				break;
			}
		case $Opcodes::AALOAD:
			{
				pop(1);
				abstractType1 = pop();
				push(abstractType1 == Frame::NULL ? abstractType1 : Frame::ELEMENT_OF + abstractType1);
				break;
			}
		case $Opcodes::ISTORE:
			{}
		case $Opcodes::FSTORE:
			{}
		case $Opcodes::ASTORE:
			{
				abstractType1 = pop();
				setLocal(arg, abstractType1);
				if (arg > 0) {
					int32_t previousLocalType = getLocal(arg - 1);
					if (previousLocalType == Frame::LONG || previousLocalType == Frame::DOUBLE) {
						setLocal(arg - 1, Frame::TOP);
					} else if (((int32_t)(previousLocalType & (uint32_t)Frame::KIND_MASK)) == Frame::LOCAL_KIND || ((int32_t)(previousLocalType & (uint32_t)Frame::KIND_MASK)) == Frame::STACK_KIND) {
						setLocal(arg - 1, previousLocalType | Frame::TOP_IF_LONG_OR_DOUBLE_FLAG);
					}
				}
				break;
			}
		case $Opcodes::LSTORE:
			{}
		case $Opcodes::DSTORE:
			{
				pop(1);
				abstractType1 = pop();
				setLocal(arg, abstractType1);
				setLocal(arg + 1, Frame::TOP);
				if (arg > 0) {
					int32_t previousLocalType = getLocal(arg - 1);
					if (previousLocalType == Frame::LONG || previousLocalType == Frame::DOUBLE) {
						setLocal(arg - 1, Frame::TOP);
					} else if (((int32_t)(previousLocalType & (uint32_t)Frame::KIND_MASK)) == Frame::LOCAL_KIND || ((int32_t)(previousLocalType & (uint32_t)Frame::KIND_MASK)) == Frame::STACK_KIND) {
						setLocal(arg - 1, previousLocalType | Frame::TOP_IF_LONG_OR_DOUBLE_FLAG);
					}
				}
				break;
			}
		case $Opcodes::IASTORE:
			{}
		case $Opcodes::BASTORE:
			{}
		case $Opcodes::CASTORE:
			{}
		case $Opcodes::SASTORE:
			{}
		case $Opcodes::FASTORE:
			{}
		case $Opcodes::AASTORE:
			{
				pop(3);
				break;
			}
		case $Opcodes::LASTORE:
			{}
		case $Opcodes::DASTORE:
			{
				pop(4);
				break;
			}
		case $Opcodes::POP:
			{}
		case $Opcodes::IFEQ:
			{}
		case $Opcodes::IFNE:
			{}
		case $Opcodes::IFLT:
			{}
		case $Opcodes::IFGE:
			{}
		case $Opcodes::IFGT:
			{}
		case $Opcodes::IFLE:
			{}
		case $Opcodes::IRETURN:
			{}
		case $Opcodes::FRETURN:
			{}
		case $Opcodes::ARETURN:
			{}
		case $Opcodes::TABLESWITCH:
			{}
		case $Opcodes::LOOKUPSWITCH:
			{}
		case $Opcodes::ATHROW:
			{}
		case $Opcodes::MONITORENTER:
			{}
		case $Opcodes::MONITOREXIT:
			{}
		case $Opcodes::IFNULL:
			{}
		case $Opcodes::IFNONNULL:
			{
				pop(1);
				break;
			}
		case $Opcodes::POP2:
			{}
		case $Opcodes::IF_ICMPEQ:
			{}
		case $Opcodes::IF_ICMPNE:
			{}
		case $Opcodes::IF_ICMPLT:
			{}
		case $Opcodes::IF_ICMPGE:
			{}
		case $Opcodes::IF_ICMPGT:
			{}
		case $Opcodes::IF_ICMPLE:
			{}
		case $Opcodes::IF_ACMPEQ:
			{}
		case $Opcodes::IF_ACMPNE:
			{}
		case $Opcodes::LRETURN:
			{}
		case $Opcodes::DRETURN:
			{
				pop(2);
				break;
			}
		case $Opcodes::DUP:
			{
				abstractType1 = pop();
				push(abstractType1);
				push(abstractType1);
				break;
			}
		case $Opcodes::DUP_X1:
			{
				abstractType1 = pop();
				abstractType2 = pop();
				push(abstractType1);
				push(abstractType2);
				push(abstractType1);
				break;
			}
		case $Opcodes::DUP_X2:
			{
				abstractType1 = pop();
				abstractType2 = pop();
				abstractType3 = pop();
				push(abstractType1);
				push(abstractType3);
				push(abstractType2);
				push(abstractType1);
				break;
			}
		case $Opcodes::DUP2:
			{
				abstractType1 = pop();
				abstractType2 = pop();
				push(abstractType2);
				push(abstractType1);
				push(abstractType2);
				push(abstractType1);
				break;
			}
		case $Opcodes::DUP2_X1:
			{
				abstractType1 = pop();
				abstractType2 = pop();
				abstractType3 = pop();
				push(abstractType2);
				push(abstractType1);
				push(abstractType3);
				push(abstractType2);
				push(abstractType1);
				break;
			}
		case $Opcodes::DUP2_X2:
			{
				abstractType1 = pop();
				abstractType2 = pop();
				abstractType3 = pop();
				abstractType4 = pop();
				push(abstractType2);
				push(abstractType1);
				push(abstractType4);
				push(abstractType3);
				push(abstractType2);
				push(abstractType1);
				break;
			}
		case $Opcodes::SWAP:
			{
				abstractType1 = pop();
				abstractType2 = pop();
				push(abstractType1);
				push(abstractType2);
				break;
			}
		case $Opcodes::IALOAD:
			{}
		case $Opcodes::BALOAD:
			{}
		case $Opcodes::CALOAD:
			{}
		case $Opcodes::SALOAD:
			{}
		case $Opcodes::IADD:
			{}
		case $Opcodes::ISUB:
			{}
		case $Opcodes::IMUL:
			{}
		case $Opcodes::IDIV:
			{}
		case $Opcodes::IREM:
			{}
		case $Opcodes::IAND:
			{}
		case $Opcodes::IOR:
			{}
		case $Opcodes::IXOR:
			{}
		case $Opcodes::ISHL:
			{}
		case $Opcodes::ISHR:
			{}
		case $Opcodes::IUSHR:
			{}
		case $Opcodes::L2I:
			{}
		case $Opcodes::D2I:
			{}
		case $Opcodes::FCMPL:
			{}
		case $Opcodes::FCMPG:
			{
				pop(2);
				push(Frame::INTEGER);
				break;
			}
		case $Opcodes::LADD:
			{}
		case $Opcodes::LSUB:
			{}
		case $Opcodes::LMUL:
			{}
		case $Opcodes::LDIV:
			{}
		case $Opcodes::LREM:
			{}
		case $Opcodes::LAND:
			{}
		case $Opcodes::LOR:
			{}
		case $Opcodes::LXOR:
			{
				pop(4);
				push(Frame::LONG);
				push(Frame::TOP);
				break;
			}
		case $Opcodes::FALOAD:
			{}
		case $Opcodes::FADD:
			{}
		case $Opcodes::FSUB:
			{}
		case $Opcodes::FMUL:
			{}
		case $Opcodes::FDIV:
			{}
		case $Opcodes::FREM:
			{}
		case $Opcodes::L2F:
			{}
		case $Opcodes::D2F:
			{
				pop(2);
				push(Frame::FLOAT);
				break;
			}
		case $Opcodes::DADD:
			{}
		case $Opcodes::DSUB:
			{}
		case $Opcodes::DMUL:
			{}
		case $Opcodes::DDIV:
			{}
		case $Opcodes::DREM:
			{
				pop(4);
				push(Frame::DOUBLE);
				push(Frame::TOP);
				break;
			}
		case $Opcodes::LSHL:
			{}
		case $Opcodes::LSHR:
			{}
		case $Opcodes::LUSHR:
			{
				pop(3);
				push(Frame::LONG);
				push(Frame::TOP);
				break;
			}
		case $Opcodes::IINC:
			{
				setLocal(arg, Frame::INTEGER);
				break;
			}
		case $Opcodes::I2L:
			{}
		case $Opcodes::F2L:
			{
				pop(1);
				push(Frame::LONG);
				push(Frame::TOP);
				break;
			}
		case $Opcodes::I2F:
			{
				pop(1);
				push(Frame::FLOAT);
				break;
			}
		case $Opcodes::I2D:
			{}
		case $Opcodes::F2D:
			{
				pop(1);
				push(Frame::DOUBLE);
				push(Frame::TOP);
				break;
			}
		case $Opcodes::F2I:
			{}
		case $Opcodes::ARRAYLENGTH:
			{}
		case $Opcodes::INSTANCEOF:
			{
				pop(1);
				push(Frame::INTEGER);
				break;
			}
		case $Opcodes::LCMP:
			{}
		case $Opcodes::DCMPL:
			{}
		case $Opcodes::DCMPG:
			{
				pop(4);
				push(Frame::INTEGER);
				break;
			}
		case $Opcodes::JSR:
			{}
		case $Opcodes::RET:
			{
				$throwNew($IllegalArgumentException, "JSR/RET are not supported with computeFrames option"_s);
			}
		case $Opcodes::GETSTATIC:
			{
				push(symbolTable, $nc(argSymbol)->value);
				break;
			}
		case $Opcodes::PUTSTATIC:
			{
				pop($nc(argSymbol)->value);
				break;
			}
		case $Opcodes::GETFIELD:
			{
				pop(1);
				push(symbolTable, $nc(argSymbol)->value);
				break;
			}
		case $Opcodes::PUTFIELD:
			{
				pop($nc(argSymbol)->value);
				pop();
				break;
			}
		case $Opcodes::INVOKEVIRTUAL:
			{}
		case $Opcodes::INVOKESPECIAL:
			{}
		case $Opcodes::INVOKESTATIC:
			{}
		case $Opcodes::INVOKEINTERFACE:
			{
				pop($nc(argSymbol)->value);
				if (opcode != $Opcodes::INVOKESTATIC) {
					abstractType1 = pop();
					if (opcode == $Opcodes::INVOKESPECIAL && $nc($nc(argSymbol)->name)->charAt(0) == u'<') {
						addInitializedType(abstractType1);
					}
				}
				push(symbolTable, $nc(argSymbol)->value);
				break;
			}
		case $Opcodes::INVOKEDYNAMIC:
			{
				pop($nc(argSymbol)->value);
				push(symbolTable, $nc(argSymbol)->value);
				break;
			}
		case $Opcodes::NEW:
			{
				push(Frame::UNINITIALIZED_KIND | $nc(symbolTable)->addUninitializedType($nc(argSymbol)->value, arg));
				break;
			}
		case $Opcodes::NEWARRAY:
			{
				pop();
				switch (arg) {
				case $Opcodes::T_BOOLEAN:
					{
						push(Frame::ARRAY_OF | Frame::BOOLEAN);
						break;
					}
				case $Opcodes::T_CHAR:
					{
						push(Frame::ARRAY_OF | Frame::CHAR);
						break;
					}
				case $Opcodes::T_BYTE:
					{
						push(Frame::ARRAY_OF | Frame::BYTE);
						break;
					}
				case $Opcodes::T_SHORT:
					{
						push(Frame::ARRAY_OF | Frame::SHORT);
						break;
					}
				case $Opcodes::T_INT:
					{
						push(Frame::ARRAY_OF | Frame::INTEGER);
						break;
					}
				case $Opcodes::T_FLOAT:
					{
						push(Frame::ARRAY_OF | Frame::FLOAT);
						break;
					}
				case $Opcodes::T_DOUBLE:
					{
						push(Frame::ARRAY_OF | Frame::DOUBLE);
						break;
					}
				case $Opcodes::T_LONG:
					{
						push(Frame::ARRAY_OF | Frame::LONG);
						break;
					}
				default:
					{
						$throwNew($IllegalArgumentException);
					}
				}
				break;
			}
		case $Opcodes::ANEWARRAY:
			{
				$assign(arrayElementType, $nc(argSymbol)->value);
				pop();
				if ($nc(arrayElementType)->charAt(0) == u'[') {
					push(symbolTable, $$str({$$str(u'['), arrayElementType}));
				} else {
					push((Frame::ARRAY_OF | Frame::REFERENCE_KIND) | $nc(symbolTable)->addType(arrayElementType));
				}
				break;
			}
		case $Opcodes::CHECKCAST:
			{
				$assign(castType, argSymbol->value);
				pop();
				if ($nc(castType)->charAt(0) == u'[') {
					push(symbolTable, castType);
				} else {
					push(Frame::REFERENCE_KIND | $nc(symbolTable)->addType(castType));
				}
				break;
			}
		case $Opcodes::MULTIANEWARRAY:
			{
				pop(arg);
				push(symbolTable, argSymbol->value);
				break;
			}
		default:
			{
				$throwNew($IllegalArgumentException);
			}
		}
	}
}

int32_t Frame::getConcreteOutputType(int32_t abstractOutputType, int32_t numStack) {
	int32_t dim = (int32_t)(abstractOutputType & (uint32_t)Frame::DIM_MASK);
	int32_t kind = (int32_t)(abstractOutputType & (uint32_t)Frame::KIND_MASK);
	if (kind == Frame::LOCAL_KIND) {
		int32_t concreteOutputType = dim + $nc(this->inputLocals)->get((int32_t)(abstractOutputType & (uint32_t)Frame::VALUE_MASK));
		if (((int32_t)(abstractOutputType & (uint32_t)Frame::TOP_IF_LONG_OR_DOUBLE_FLAG)) != 0 && (concreteOutputType == Frame::LONG || concreteOutputType == Frame::DOUBLE)) {
			concreteOutputType = Frame::TOP;
		}
		return concreteOutputType;
	} else if (kind == Frame::STACK_KIND) {
		int32_t concreteOutputType = dim + $nc(this->inputStack)->get(numStack - ((int32_t)(abstractOutputType & (uint32_t)Frame::VALUE_MASK)));
		if (((int32_t)(abstractOutputType & (uint32_t)Frame::TOP_IF_LONG_OR_DOUBLE_FLAG)) != 0 && (concreteOutputType == Frame::LONG || concreteOutputType == Frame::DOUBLE)) {
			concreteOutputType = Frame::TOP;
		}
		return concreteOutputType;
	} else {
		return abstractOutputType;
	}
}

bool Frame::merge($SymbolTable* symbolTable, Frame* dstFrame, int32_t catchTypeIndex) {
	bool frameChanged = false;
	int32_t numLocal = $nc(this->inputLocals)->length;
	int32_t numStack = $nc(this->inputStack)->length;
	if ($nc(dstFrame)->inputLocals == nullptr) {
		$set(dstFrame, inputLocals, $new($ints, numLocal));
		frameChanged = true;
	}
	for (int32_t i = 0; i < numLocal; ++i) {
		int32_t concreteOutputType = 0;
		if (this->outputLocals != nullptr && i < $nc(this->outputLocals)->length) {
			int32_t abstractOutputType = $nc(this->outputLocals)->get(i);
			if (abstractOutputType == 0) {
				concreteOutputType = $nc(this->inputLocals)->get(i);
			} else {
				concreteOutputType = getConcreteOutputType(abstractOutputType, numStack);
			}
		} else {
			concreteOutputType = $nc(this->inputLocals)->get(i);
		}
		if (this->initializations != nullptr) {
			concreteOutputType = getInitializedType(symbolTable, concreteOutputType);
		}
		frameChanged |= merge(symbolTable, concreteOutputType, $nc(dstFrame)->inputLocals, i);
	}
	if (catchTypeIndex > 0) {
		for (int32_t i = 0; i < numLocal; ++i) {
			frameChanged |= merge(symbolTable, $nc(this->inputLocals)->get(i), $nc(dstFrame)->inputLocals, i);
		}
		if ($nc(dstFrame)->inputStack == nullptr) {
			$set(dstFrame, inputStack, $new($ints, 1));
			frameChanged = true;
		}
		frameChanged |= merge(symbolTable, catchTypeIndex, $nc(dstFrame)->inputStack, 0);
		return frameChanged;
	}
	int32_t numInputStack = $nc(this->inputStack)->length + this->outputStackStart;
	if ($nc(dstFrame)->inputStack == nullptr) {
		$set(dstFrame, inputStack, $new($ints, numInputStack + this->outputStackTop));
		frameChanged = true;
	}
	for (int32_t i = 0; i < numInputStack; ++i) {
		int32_t concreteOutputType = $nc(this->inputStack)->get(i);
		if (this->initializations != nullptr) {
			concreteOutputType = getInitializedType(symbolTable, concreteOutputType);
		}
		frameChanged |= merge(symbolTable, concreteOutputType, $nc(dstFrame)->inputStack, i);
	}
	for (int32_t i = 0; i < this->outputStackTop; ++i) {
		int32_t abstractOutputType = $nc(this->outputStack)->get(i);
		int32_t concreteOutputType = getConcreteOutputType(abstractOutputType, numStack);
		if (this->initializations != nullptr) {
			concreteOutputType = getInitializedType(symbolTable, concreteOutputType);
		}
		frameChanged |= merge(symbolTable, concreteOutputType, $nc(dstFrame)->inputStack, numInputStack + i);
	}
	return frameChanged;
}

bool Frame::merge($SymbolTable* symbolTable, int32_t sourceType, $ints* dstTypes, int32_t dstIndex) {
	int32_t dstType = $nc(dstTypes)->get(dstIndex);
	if (dstType == sourceType) {
		return false;
	}
	int32_t srcType = sourceType;
	if (((int32_t)(sourceType & (uint32_t)~Frame::DIM_MASK)) == Frame::NULL) {
		if (dstType == Frame::NULL) {
			return false;
		}
		srcType = Frame::NULL;
	}
	if (dstType == 0) {
		dstTypes->set(dstIndex, srcType);
		return true;
	}
	int32_t mergedType = 0;
	if (((int32_t)(dstType & (uint32_t)Frame::DIM_MASK)) != 0 || ((int32_t)(dstType & (uint32_t)Frame::KIND_MASK)) == Frame::REFERENCE_KIND) {
		if (srcType == Frame::NULL) {
			return false;
		} else if (((int32_t)(srcType & (uint32_t)(Frame::DIM_MASK | Frame::KIND_MASK))) == ((int32_t)(dstType & (uint32_t)(Frame::DIM_MASK | Frame::KIND_MASK)))) {
			if (((int32_t)(dstType & (uint32_t)Frame::KIND_MASK)) == Frame::REFERENCE_KIND) {
				mergedType = (((int32_t)(srcType & (uint32_t)Frame::DIM_MASK)) | Frame::REFERENCE_KIND) | $nc(symbolTable)->addMergedType((int32_t)(srcType & (uint32_t)Frame::VALUE_MASK), (int32_t)(dstType & (uint32_t)Frame::VALUE_MASK));
			} else {
				int32_t mergedDim = Frame::ELEMENT_OF + ((int32_t)(srcType & (uint32_t)Frame::DIM_MASK));
				mergedType = (mergedDim | Frame::REFERENCE_KIND) | $nc(symbolTable)->addType("java/lang/Object"_s);
			}
		} else if (((int32_t)(srcType & (uint32_t)Frame::DIM_MASK)) != 0 || ((int32_t)(srcType & (uint32_t)Frame::KIND_MASK)) == Frame::REFERENCE_KIND) {
			int32_t srcDim = (int32_t)(srcType & (uint32_t)Frame::DIM_MASK);
			if (srcDim != 0 && ((int32_t)(srcType & (uint32_t)Frame::KIND_MASK)) != Frame::REFERENCE_KIND) {
				srcDim = Frame::ELEMENT_OF + srcDim;
			}
			int32_t dstDim = (int32_t)(dstType & (uint32_t)Frame::DIM_MASK);
			if (dstDim != 0 && ((int32_t)(dstType & (uint32_t)Frame::KIND_MASK)) != Frame::REFERENCE_KIND) {
				dstDim = Frame::ELEMENT_OF + dstDim;
			}
			int32_t var$0 = $Math::min(srcDim, dstDim) | Frame::REFERENCE_KIND;
			mergedType = var$0 | $nc(symbolTable)->addType("java/lang/Object"_s);
		} else {
			mergedType = Frame::TOP;
		}
	} else if (dstType == Frame::NULL) {
		mergedType = ((int32_t)(srcType & (uint32_t)Frame::DIM_MASK)) != 0 || ((int32_t)(srcType & (uint32_t)Frame::KIND_MASK)) == Frame::REFERENCE_KIND ? srcType : Frame::TOP;
	} else {
		mergedType = Frame::TOP;
	}
	if (mergedType != dstType) {
		dstTypes->set(dstIndex, mergedType);
		return true;
	}
	return false;
}

void Frame::accept($MethodWriter* methodWriter) {
	$useLocalCurrentObjectStackCache();
	$var($ints, localTypes, this->inputLocals);
	int32_t numLocal = 0;
	int32_t numTrailingTop = 0;
	int32_t i = 0;
	while (i < $nc(localTypes)->length) {
		int32_t localType = localTypes->get(i);
		i += (localType == Frame::LONG || localType == Frame::DOUBLE) ? 2 : 1;
		if (localType == Frame::TOP) {
			++numTrailingTop;
		} else {
			numLocal += numTrailingTop + 1;
			numTrailingTop = 0;
		}
	}
	$var($ints, stackTypes, this->inputStack);
	int32_t numStack = 0;
	i = 0;
	while (i < $nc(stackTypes)->length) {
		int32_t stackType = stackTypes->get(i);
		i += (stackType == Frame::LONG || stackType == Frame::DOUBLE) ? 2 : 1;
		++numStack;
	}
	int32_t frameIndex = $nc(methodWriter)->visitFrameStart($nc(this->owner)->bytecodeOffset, numLocal, numStack);
	i = 0;
	while (numLocal-- > 0) {
		int32_t localType = $nc(localTypes)->get(i);
		i += (localType == Frame::LONG || localType == Frame::DOUBLE) ? 2 : 1;
		methodWriter->visitAbstractType(frameIndex++, localType);
	}
	i = 0;
	while (numStack-- > 0) {
		int32_t stackType = $nc(stackTypes)->get(i);
		i += (stackType == Frame::LONG || stackType == Frame::DOUBLE) ? 2 : 1;
		methodWriter->visitAbstractType(frameIndex++, stackType);
	}
	methodWriter->visitFrameEnd();
}

void Frame::putAbstractType($SymbolTable* symbolTable, int32_t abstractType, $ByteVector* output) {
	$useLocalCurrentObjectStackCache();
	int32_t arrayDimensions = $sr((int32_t)(abstractType & (uint32_t)Frame::DIM_MASK), Frame::DIM_SHIFT);
	if (arrayDimensions == 0) {
		int32_t typeValue = (int32_t)(abstractType & (uint32_t)Frame::VALUE_MASK);
		switch ((int32_t)(abstractType & (uint32_t)Frame::KIND_MASK)) {
		case Frame::CONSTANT_KIND:
			{
				$nc(output)->putByte(typeValue);
				break;
			}
		case Frame::REFERENCE_KIND:
			{
				$nc($($nc(output)->putByte(Frame::ITEM_OBJECT)))->putShort($nc($($nc(symbolTable)->addConstantClass($nc($(symbolTable->getType(typeValue)))->value)))->index);
				break;
			}
		case Frame::UNINITIALIZED_KIND:
			{
				$nc($($nc(output)->putByte(Frame::ITEM_UNINITIALIZED)))->putShort((int32_t)$nc($($nc(symbolTable)->getType(typeValue)))->data);
				break;
			}
		default:
			{
				$throwNew($AssertionError);
			}
		}
	} else {
		$var($StringBuilder, typeDescriptor, $new($StringBuilder));
		while (arrayDimensions-- > 0) {
			typeDescriptor->append(u'[');
		}
		if (((int32_t)(abstractType & (uint32_t)Frame::KIND_MASK)) == Frame::REFERENCE_KIND) {
			typeDescriptor->append(u'L')->append($nc($($nc(symbolTable)->getType((int32_t)(abstractType & (uint32_t)Frame::VALUE_MASK))))->value)->append(u';');
		} else {
			switch ((int32_t)(abstractType & (uint32_t)Frame::VALUE_MASK)) {
			case Frame::ITEM_ASM_BOOLEAN:
				{
					typeDescriptor->append(u'Z');
					break;
				}
			case Frame::ITEM_ASM_BYTE:
				{
					typeDescriptor->append(u'B');
					break;
				}
			case Frame::ITEM_ASM_CHAR:
				{
					typeDescriptor->append(u'C');
					break;
				}
			case Frame::ITEM_ASM_SHORT:
				{
					typeDescriptor->append(u'S');
					break;
				}
			case Frame::ITEM_INTEGER:
				{
					typeDescriptor->append(u'I');
					break;
				}
			case Frame::ITEM_FLOAT:
				{
					typeDescriptor->append(u'F');
					break;
				}
			case Frame::ITEM_LONG:
				{
					typeDescriptor->append(u'J');
					break;
				}
			case Frame::ITEM_DOUBLE:
				{
					typeDescriptor->append(u'D');
					break;
				}
			default:
				{
					$throwNew($AssertionError);
				}
			}
		}
		$nc($($nc(output)->putByte(Frame::ITEM_OBJECT)))->putShort($nc($($nc(symbolTable)->addConstantClass($(typeDescriptor->toString()))))->index);
	}
}

Frame::Frame() {
}

$Class* Frame::load$($String* name, bool initialize) {
	$loadClass(Frame, name, initialize, &_Frame_ClassInfo_, allocate$Frame);
	return class$;
}

$Class* Frame::class$ = nullptr;

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk