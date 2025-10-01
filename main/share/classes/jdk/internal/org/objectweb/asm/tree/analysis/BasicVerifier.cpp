#include <jdk/internal/org/objectweb/asm/tree/analysis/BasicVerifier.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/Type.h>
#include <jdk/internal/org/objectweb/asm/tree/AbstractInsnNode.h>
#include <jdk/internal/org/objectweb/asm/tree/FieldInsnNode.h>
#include <jdk/internal/org/objectweb/asm/tree/InvokeDynamicInsnNode.h>
#include <jdk/internal/org/objectweb/asm/tree/MethodInsnNode.h>
#include <jdk/internal/org/objectweb/asm/tree/analysis/AnalyzerException.h>
#include <jdk/internal/org/objectweb/asm/tree/analysis/BasicInterpreter.h>
#include <jdk/internal/org/objectweb/asm/tree/analysis/BasicValue.h>
#include <jdk/internal/org/objectweb/asm/tree/analysis/Value.h>
#include <jcpp.h>

#undef ARRAYLENGTH
#undef FALOAD
#undef IF_ICMPLT
#undef MONITORENTER
#undef PUTSTATIC
#undef ALOAD
#undef ISUB
#undef FSTORE
#undef F2D
#undef F2I
#undef BASTORE
#undef F2L
#undef DALOAD
#undef LUSHR
#undef ASM8
#undef FRETURN
#undef MULTIANEWARRAY
#undef LOR
#undef IRETURN
#undef IF_ICMPLE
#undef FSUB
#undef DSTORE
#undef INT_VALUE
#undef RETURNADDRESS_VALUE
#undef LRETURN
#undef IFLT
#undef CALOAD
#undef FNEG
#undef FDIV
#undef LXOR
#undef ISTORE
#undef FREM
#undef IF_ACMPEQ
#undef I2B
#undef I2D
#undef I2C
#undef FADD
#undef IF_ACMPNE
#undef I2F
#undef LLOAD
#undef NEWARRAY
#undef INVOKESTATIC
#undef I2L
#undef LOOKUPSWITCH
#undef PUTFIELD
#undef I2S
#undef SALOAD
#undef IXOR
#undef IFLE
#undef LSUB
#undef LCMP
#undef SASTORE
#undef DRETURN
#undef DSUB
#undef FASTORE
#undef INSTANCEOF
#undef ASTORE
#undef LDIV
#undef ILOAD
#undef LNEG
#undef ATHROW
#undef DNEG
#undef ISHL
#undef IFNONNULL
#undef LREM
#undef INVOKEDYNAMIC
#undef LASTORE
#undef LONG_VALUE
#undef ISHR
#undef LADD
#undef DREM
#undef IFGE
#undef D2F
#undef IMUL
#undef D2I
#undef LSTORE
#undef L2D
#undef D2L
#undef IF_ICMPGT
#undef L2F
#undef L2I
#undef DADD
#undef REFERENCE_VALUE
#undef AALOAD
#undef INEG
#undef TABLESWITCH
#undef IDIV
#undef IFEQ
#undef FLOAT_VALUE
#undef DASTORE
#undef GETFIELD
#undef DDIV
#undef LALOAD
#undef IREM
#undef IFNULL
#undef IFNE
#undef IALOAD
#undef AASTORE
#undef IADD
#undef FMUL
#undef DMUL
#undef ANEWARRAY
#undef CASTORE
#undef CHECKCAST
#undef LAND
#undef DLOAD
#undef DOUBLE_VALUE
#undef IF_ICMPGE
#undef FLOAD
#undef FCMPL
#undef MONITOREXIT
#undef IUSHR
#undef FCMPG
#undef IASTORE
#undef ARETURN
#undef IF_ICMPEQ
#undef IFGT
#undef LSHL
#undef IAND
#undef IOR
#undef BALOAD
#undef LSHR
#undef IINC
#undef DCMPL
#undef DCMPG
#undef IF_ICMPNE
#undef LMUL

using $TypeArray = $Array<::jdk::internal::org::objectweb::asm$::Type>;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $Type = ::jdk::internal::org::objectweb::asm$::Type;
using $AbstractInsnNode = ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode;
using $FieldInsnNode = ::jdk::internal::org::objectweb::asm$::tree::FieldInsnNode;
using $InvokeDynamicInsnNode = ::jdk::internal::org::objectweb::asm$::tree::InvokeDynamicInsnNode;
using $MethodInsnNode = ::jdk::internal::org::objectweb::asm$::tree::MethodInsnNode;
using $AnalyzerException = ::jdk::internal::org::objectweb::asm$::tree::analysis::AnalyzerException;
using $BasicInterpreter = ::jdk::internal::org::objectweb::asm$::tree::analysis::BasicInterpreter;
using $BasicValue = ::jdk::internal::org::objectweb::asm$::tree::analysis::BasicValue;
using $1Value = ::jdk::internal::org::objectweb::asm$::tree::analysis::Value;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace tree {
						namespace analysis {

$MethodInfo _BasicVerifier_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicVerifier::*)()>(&BasicVerifier::init$))},
	{"<init>", "(I)V", nullptr, $PROTECTED, $method(static_cast<void(BasicVerifier::*)(int32_t)>(&BasicVerifier::init$))},
	{"binaryOperation", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;Ljdk/internal/org/objectweb/asm/tree/analysis/BasicValue;Ljdk/internal/org/objectweb/asm/tree/analysis/BasicValue;)Ljdk/internal/org/objectweb/asm/tree/analysis/BasicValue;", nullptr, $PUBLIC, nullptr, "jdk.internal.org.objectweb.asm.tree.analysis.AnalyzerException"},
	{"binaryOperation", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;Ljdk/internal/org/objectweb/asm/tree/analysis/Value;Ljdk/internal/org/objectweb/asm/tree/analysis/Value;)Ljdk/internal/org/objectweb/asm/tree/analysis/Value;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "jdk.internal.org.objectweb.asm.tree.analysis.AnalyzerException"},
	{"copyOperation", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;Ljdk/internal/org/objectweb/asm/tree/analysis/BasicValue;)Ljdk/internal/org/objectweb/asm/tree/analysis/BasicValue;", nullptr, $PUBLIC, nullptr, "jdk.internal.org.objectweb.asm.tree.analysis.AnalyzerException"},
	{"copyOperation", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;Ljdk/internal/org/objectweb/asm/tree/analysis/Value;)Ljdk/internal/org/objectweb/asm/tree/analysis/Value;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "jdk.internal.org.objectweb.asm.tree.analysis.AnalyzerException"},
	{"getElementValue", "(Ljdk/internal/org/objectweb/asm/tree/analysis/BasicValue;)Ljdk/internal/org/objectweb/asm/tree/analysis/BasicValue;", nullptr, $PROTECTED, nullptr, "jdk.internal.org.objectweb.asm.tree.analysis.AnalyzerException"},
	{"isArrayValue", "(Ljdk/internal/org/objectweb/asm/tree/analysis/BasicValue;)Z", nullptr, $PROTECTED},
	{"isSubTypeOf", "(Ljdk/internal/org/objectweb/asm/tree/analysis/BasicValue;Ljdk/internal/org/objectweb/asm/tree/analysis/BasicValue;)Z", nullptr, $PROTECTED},
	{"naryOperation", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;Ljava/util/List;)Ljdk/internal/org/objectweb/asm/tree/analysis/BasicValue;", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;Ljava/util/List<+Ljdk/internal/org/objectweb/asm/tree/analysis/BasicValue;>;)Ljdk/internal/org/objectweb/asm/tree/analysis/BasicValue;", $PUBLIC, nullptr, "jdk.internal.org.objectweb.asm.tree.analysis.AnalyzerException"},
	{"returnOperation", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;Ljdk/internal/org/objectweb/asm/tree/analysis/BasicValue;Ljdk/internal/org/objectweb/asm/tree/analysis/BasicValue;)V", nullptr, $PUBLIC, nullptr, "jdk.internal.org.objectweb.asm.tree.analysis.AnalyzerException"},
	{"returnOperation", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;Ljdk/internal/org/objectweb/asm/tree/analysis/Value;Ljdk/internal/org/objectweb/asm/tree/analysis/Value;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "jdk.internal.org.objectweb.asm.tree.analysis.AnalyzerException"},
	{"ternaryOperation", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;Ljdk/internal/org/objectweb/asm/tree/analysis/BasicValue;Ljdk/internal/org/objectweb/asm/tree/analysis/BasicValue;Ljdk/internal/org/objectweb/asm/tree/analysis/BasicValue;)Ljdk/internal/org/objectweb/asm/tree/analysis/BasicValue;", nullptr, $PUBLIC, nullptr, "jdk.internal.org.objectweb.asm.tree.analysis.AnalyzerException"},
	{"ternaryOperation", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;Ljdk/internal/org/objectweb/asm/tree/analysis/Value;Ljdk/internal/org/objectweb/asm/tree/analysis/Value;Ljdk/internal/org/objectweb/asm/tree/analysis/Value;)Ljdk/internal/org/objectweb/asm/tree/analysis/Value;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "jdk.internal.org.objectweb.asm.tree.analysis.AnalyzerException"},
	{"unaryOperation", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;Ljdk/internal/org/objectweb/asm/tree/analysis/BasicValue;)Ljdk/internal/org/objectweb/asm/tree/analysis/BasicValue;", nullptr, $PUBLIC, nullptr, "jdk.internal.org.objectweb.asm.tree.analysis.AnalyzerException"},
	{"unaryOperation", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;Ljdk/internal/org/objectweb/asm/tree/analysis/Value;)Ljdk/internal/org/objectweb/asm/tree/analysis/Value;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "jdk.internal.org.objectweb.asm.tree.analysis.AnalyzerException"},
	{}
};

$ClassInfo _BasicVerifier_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.tree.analysis.BasicVerifier",
	"jdk.internal.org.objectweb.asm.tree.analysis.BasicInterpreter",
	nullptr,
	nullptr,
	_BasicVerifier_MethodInfo_
};

$Object* allocate$BasicVerifier($Class* clazz) {
	return $of($alloc(BasicVerifier));
}

void BasicVerifier::init$() {
	$BasicInterpreter::init$($Opcodes::ASM8);
	if ($of(this)->getClass() != BasicVerifier::class$) {
		$throwNew($IllegalStateException);
	}
}

void BasicVerifier::init$(int32_t api) {
	$BasicInterpreter::init$(api);
}

$BasicValue* BasicVerifier::copyOperation($AbstractInsnNode* insn, $BasicValue* value) {
	$var($1Value, expected, nullptr);
	switch ($nc(insn)->getOpcode()) {
	case $Opcodes::ILOAD:
		{}
	case $Opcodes::ISTORE:
		{
			$init($BasicValue);
			$assign(expected, $BasicValue::INT_VALUE);
			break;
		}
	case $Opcodes::FLOAD:
		{}
	case $Opcodes::FSTORE:
		{
			$init($BasicValue);
			$assign(expected, $BasicValue::FLOAT_VALUE);
			break;
		}
	case $Opcodes::LLOAD:
		{}
	case $Opcodes::LSTORE:
		{
			$init($BasicValue);
			$assign(expected, $BasicValue::LONG_VALUE);
			break;
		}
	case $Opcodes::DLOAD:
		{}
	case $Opcodes::DSTORE:
		{
			$init($BasicValue);
			$assign(expected, $BasicValue::DOUBLE_VALUE);
			break;
		}
	case $Opcodes::ALOAD:
		{
			if (!$nc(value)->isReference()) {
				$throwNew($AnalyzerException, insn, nullptr, "an object reference"_s, value);
			}
			return value;
		}
	case $Opcodes::ASTORE:
		{
			bool var$0 = !$nc(value)->isReference();
			if (var$0 && !$nc($BasicValue::RETURNADDRESS_VALUE)->equals(value)) {
				$throwNew($AnalyzerException, insn, nullptr, "an object reference or a return address"_s, value);
			}
			return value;
		}
	default:
		{
			return value;
		}
	}
	if (!$nc($of(expected))->equals(value)) {
		$throwNew($AnalyzerException, insn, nullptr, expected, value);
	}
	return value;
}

$BasicValue* BasicVerifier::unaryOperation($AbstractInsnNode* insn, $BasicValue* value) {
	$var($BasicValue, expected, nullptr);
	switch ($nc(insn)->getOpcode()) {
	case $Opcodes::INEG:
		{}
	case $Opcodes::IINC:
		{}
	case $Opcodes::I2F:
		{}
	case $Opcodes::I2L:
		{}
	case $Opcodes::I2D:
		{}
	case $Opcodes::I2B:
		{}
	case $Opcodes::I2C:
		{}
	case $Opcodes::I2S:
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
	case $Opcodes::TABLESWITCH:
		{}
	case $Opcodes::LOOKUPSWITCH:
		{}
	case $Opcodes::IRETURN:
		{}
	case $Opcodes::NEWARRAY:
		{}
	case $Opcodes::ANEWARRAY:
		{
			$init($BasicValue);
			$assign(expected, $BasicValue::INT_VALUE);
			break;
		}
	case $Opcodes::FNEG:
		{}
	case $Opcodes::F2I:
		{}
	case $Opcodes::F2L:
		{}
	case $Opcodes::F2D:
		{}
	case $Opcodes::FRETURN:
		{
			$init($BasicValue);
			$assign(expected, $BasicValue::FLOAT_VALUE);
			break;
		}
	case $Opcodes::LNEG:
		{}
	case $Opcodes::L2I:
		{}
	case $Opcodes::L2F:
		{}
	case $Opcodes::L2D:
		{}
	case $Opcodes::LRETURN:
		{
			$init($BasicValue);
			$assign(expected, $BasicValue::LONG_VALUE);
			break;
		}
	case $Opcodes::DNEG:
		{}
	case $Opcodes::D2I:
		{}
	case $Opcodes::D2F:
		{}
	case $Opcodes::D2L:
		{}
	case $Opcodes::DRETURN:
		{
			$init($BasicValue);
			$assign(expected, $BasicValue::DOUBLE_VALUE);
			break;
		}
	case $Opcodes::GETFIELD:
		{
			$assign(expected, $cast($BasicValue, newValue($($Type::getObjectType($nc(($cast($FieldInsnNode, insn)))->owner)))));
			break;
		}
	case $Opcodes::ARRAYLENGTH:
		{
			if (!isArrayValue(value)) {
				$throwNew($AnalyzerException, insn, nullptr, "an array reference"_s, value);
			}
			return $BasicInterpreter::unaryOperation(insn, value);
		}
	case $Opcodes::CHECKCAST:
		{}
	case $Opcodes::ARETURN:
		{}
	case $Opcodes::ATHROW:
		{}
	case $Opcodes::INSTANCEOF:
		{}
	case $Opcodes::MONITORENTER:
		{}
	case $Opcodes::MONITOREXIT:
		{}
	case $Opcodes::IFNULL:
		{}
	case $Opcodes::IFNONNULL:
		{
			if (!$nc(value)->isReference()) {
				$throwNew($AnalyzerException, insn, nullptr, "an object reference"_s, value);
			}
			return $BasicInterpreter::unaryOperation(insn, value);
		}
	case $Opcodes::PUTSTATIC:
		{
			$assign(expected, $cast($BasicValue, newValue($($Type::getType($nc(($cast($FieldInsnNode, insn)))->desc)))));
			break;
		}
	default:
		{
			$throwNew($AssertionError);
		}
	}
	if (!isSubTypeOf(value, expected)) {
		$throwNew($AnalyzerException, insn, nullptr, expected, value);
	}
	return $BasicInterpreter::unaryOperation(insn, value);
}

$BasicValue* BasicVerifier::binaryOperation($AbstractInsnNode* insn, $BasicValue* value1, $BasicValue* value2) {
	$var($BasicValue, expected1, nullptr);
	$var($BasicValue, expected2, nullptr);
	{
		$var($FieldInsnNode, fieldInsn, nullptr)
		switch ($nc(insn)->getOpcode()) {
		case $Opcodes::IALOAD:
			{
				$assign(expected1, $cast($BasicValue, newValue($($Type::getType("[I"_s)))));
				$init($BasicValue);
				$assign(expected2, $BasicValue::INT_VALUE);
				break;
			}
		case $Opcodes::BALOAD:
			{
				if (isSubTypeOf(value1, $($cast($BasicValue, newValue($($Type::getType("[Z"_s))))))) {
					$assign(expected1, $cast($BasicValue, newValue($($Type::getType("[Z"_s)))));
				} else {
					$assign(expected1, $cast($BasicValue, newValue($($Type::getType("[B"_s)))));
				}
				$init($BasicValue);
				$assign(expected2, $BasicValue::INT_VALUE);
				break;
			}
		case $Opcodes::CALOAD:
			{
				$assign(expected1, $cast($BasicValue, newValue($($Type::getType("[C"_s)))));
				$init($BasicValue);
				$assign(expected2, $BasicValue::INT_VALUE);
				break;
			}
		case $Opcodes::SALOAD:
			{
				$assign(expected1, $cast($BasicValue, newValue($($Type::getType("[S"_s)))));
				$init($BasicValue);
				$assign(expected2, $BasicValue::INT_VALUE);
				break;
			}
		case $Opcodes::LALOAD:
			{
				$assign(expected1, $cast($BasicValue, newValue($($Type::getType("[J"_s)))));
				$init($BasicValue);
				$assign(expected2, $BasicValue::INT_VALUE);
				break;
			}
		case $Opcodes::FALOAD:
			{
				$assign(expected1, $cast($BasicValue, newValue($($Type::getType("[F"_s)))));
				$init($BasicValue);
				$assign(expected2, $BasicValue::INT_VALUE);
				break;
			}
		case $Opcodes::DALOAD:
			{
				$assign(expected1, $cast($BasicValue, newValue($($Type::getType("[D"_s)))));
				$init($BasicValue);
				$assign(expected2, $BasicValue::INT_VALUE);
				break;
			}
		case $Opcodes::AALOAD:
			{
				$assign(expected1, $cast($BasicValue, newValue($($Type::getType("[Ljava/lang/Object;"_s)))));
				$init($BasicValue);
				$assign(expected2, $BasicValue::INT_VALUE);
				break;
			}
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
		case $Opcodes::ISHL:
			{}
		case $Opcodes::ISHR:
			{}
		case $Opcodes::IUSHR:
			{}
		case $Opcodes::IAND:
			{}
		case $Opcodes::IOR:
			{}
		case $Opcodes::IXOR:
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
			{
				$init($BasicValue);
				$assign(expected1, $BasicValue::INT_VALUE);
				$init($BasicValue);
				$assign(expected2, $BasicValue::INT_VALUE);
				break;
			}
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
		case $Opcodes::FCMPL:
			{}
		case $Opcodes::FCMPG:
			{
				$init($BasicValue);
				$assign(expected1, $BasicValue::FLOAT_VALUE);
				$init($BasicValue);
				$assign(expected2, $BasicValue::FLOAT_VALUE);
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
			{}
		case $Opcodes::LCMP:
			{
				$init($BasicValue);
				$assign(expected1, $BasicValue::LONG_VALUE);
				$init($BasicValue);
				$assign(expected2, $BasicValue::LONG_VALUE);
				break;
			}
		case $Opcodes::LSHL:
			{}
		case $Opcodes::LSHR:
			{}
		case $Opcodes::LUSHR:
			{
				$init($BasicValue);
				$assign(expected1, $BasicValue::LONG_VALUE);
				$init($BasicValue);
				$assign(expected2, $BasicValue::INT_VALUE);
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
			{}
		case $Opcodes::DCMPL:
			{}
		case $Opcodes::DCMPG:
			{
				$init($BasicValue);
				$assign(expected1, $BasicValue::DOUBLE_VALUE);
				$init($BasicValue);
				$assign(expected2, $BasicValue::DOUBLE_VALUE);
				break;
			}
		case $Opcodes::IF_ACMPEQ:
			{}
		case $Opcodes::IF_ACMPNE:
			{
				$init($BasicValue);
				$assign(expected1, $BasicValue::REFERENCE_VALUE);
				$init($BasicValue);
				$assign(expected2, $BasicValue::REFERENCE_VALUE);
				break;
			}
		case $Opcodes::PUTFIELD:
			{
				$assign(fieldInsn, $cast($FieldInsnNode, insn));
				$assign(expected1, $cast($BasicValue, newValue($($Type::getObjectType($nc(fieldInsn)->owner)))));
				$assign(expected2, $cast($BasicValue, newValue($($Type::getType($nc(fieldInsn)->desc)))));
				break;
			}
		default:
			{
				$throwNew($AssertionError);
			}
		}
	}
	if (!isSubTypeOf(value1, expected1)) {
		$throwNew($AnalyzerException, insn, "First argument"_s, expected1, value1);
	} else if (!isSubTypeOf(value2, expected2)) {
		$throwNew($AnalyzerException, insn, "Second argument"_s, expected2, value2);
	}
	if (insn->getOpcode() == $Opcodes::AALOAD) {
		return getElementValue(value1);
	} else {
		return $BasicInterpreter::binaryOperation(insn, value1, value2);
	}
}

$BasicValue* BasicVerifier::ternaryOperation($AbstractInsnNode* insn, $BasicValue* value1, $BasicValue* value2, $BasicValue* value3) {
	$var($BasicValue, expected1, nullptr);
	$var($BasicValue, expected3, nullptr);
	switch ($nc(insn)->getOpcode()) {
	case $Opcodes::IASTORE:
		{
			$assign(expected1, $cast($BasicValue, newValue($($Type::getType("[I"_s)))));
			$init($BasicValue);
			$assign(expected3, $BasicValue::INT_VALUE);
			break;
		}
	case $Opcodes::BASTORE:
		{
			if (isSubTypeOf(value1, $($cast($BasicValue, newValue($($Type::getType("[Z"_s))))))) {
				$assign(expected1, $cast($BasicValue, newValue($($Type::getType("[Z"_s)))));
			} else {
				$assign(expected1, $cast($BasicValue, newValue($($Type::getType("[B"_s)))));
			}
			$init($BasicValue);
			$assign(expected3, $BasicValue::INT_VALUE);
			break;
		}
	case $Opcodes::CASTORE:
		{
			$assign(expected1, $cast($BasicValue, newValue($($Type::getType("[C"_s)))));
			$init($BasicValue);
			$assign(expected3, $BasicValue::INT_VALUE);
			break;
		}
	case $Opcodes::SASTORE:
		{
			$assign(expected1, $cast($BasicValue, newValue($($Type::getType("[S"_s)))));
			$init($BasicValue);
			$assign(expected3, $BasicValue::INT_VALUE);
			break;
		}
	case $Opcodes::LASTORE:
		{
			$assign(expected1, $cast($BasicValue, newValue($($Type::getType("[J"_s)))));
			$init($BasicValue);
			$assign(expected3, $BasicValue::LONG_VALUE);
			break;
		}
	case $Opcodes::FASTORE:
		{
			$assign(expected1, $cast($BasicValue, newValue($($Type::getType("[F"_s)))));
			$init($BasicValue);
			$assign(expected3, $BasicValue::FLOAT_VALUE);
			break;
		}
	case $Opcodes::DASTORE:
		{
			$assign(expected1, $cast($BasicValue, newValue($($Type::getType("[D"_s)))));
			$init($BasicValue);
			$assign(expected3, $BasicValue::DOUBLE_VALUE);
			break;
		}
	case $Opcodes::AASTORE:
		{
			$assign(expected1, value1);
			$init($BasicValue);
			$assign(expected3, $BasicValue::REFERENCE_VALUE);
			break;
		}
	default:
		{
			$throwNew($AssertionError);
		}
	}
	if (!isSubTypeOf(value1, expected1)) {
		$throwNew($AnalyzerException, insn, "First argument"_s, $$str({"a "_s, expected1, " array reference"_s}), value1);
	} else {
		$init($BasicValue);
		if (!$nc($BasicValue::INT_VALUE)->equals(value2)) {
			$throwNew($AnalyzerException, insn, "Second argument"_s, $BasicValue::INT_VALUE, value2);
		} else if (!isSubTypeOf(value3, expected3)) {
			$throwNew($AnalyzerException, insn, "Third argument"_s, expected3, value3);
		}
	}
	return nullptr;
}

$1Value* BasicVerifier::naryOperation($AbstractInsnNode* insn, $List* values) {
	int32_t opcode = $nc(insn)->getOpcode();
	if (opcode == $Opcodes::MULTIANEWARRAY) {
		{
			$var($Iterator, i$, $nc(values)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($BasicValue, value, $cast($BasicValue, i$->next()));
				{
					$init($BasicValue);
					if (!$nc($BasicValue::INT_VALUE)->equals(value)) {
						$throwNew($AnalyzerException, insn, nullptr, $BasicValue::INT_VALUE, value);
					}
				}
			}
		}
	} else {
		int32_t i = 0;
		int32_t j = 0;
		if (opcode != $Opcodes::INVOKESTATIC && opcode != $Opcodes::INVOKEDYNAMIC) {
			$var($Type, owner, $Type::getObjectType($nc(($cast($MethodInsnNode, insn)))->owner));
			$var($BasicValue, var$0, $cast($BasicValue, $nc(values)->get(i++)));
			if (!isSubTypeOf(var$0, $($cast($BasicValue, newValue(owner))))) {
				$var($AbstractInsnNode, var$1, insn);
				$var($String, var$2, "Method owner"_s);
				$var($Object, var$3, $of(newValue(owner)));
				$throwNew($AnalyzerException, var$1, var$2, var$3, $cast($1Value, $($nc(values)->get(0))));
			}
		}
		$var($String, methodDescriptor, (opcode == $Opcodes::INVOKEDYNAMIC) ? $nc(($cast($InvokeDynamicInsnNode, insn)))->desc : $nc(($cast($MethodInsnNode, insn)))->desc);
		$var($TypeArray, args, $Type::getArgumentTypes(methodDescriptor));
		while (i < $nc(values)->size()) {
			$var($BasicValue, expected, $cast($BasicValue, newValue($nc(args)->get(j++))));
			$var($BasicValue, actual, $cast($BasicValue, values->get(i++)));
			if (!isSubTypeOf(actual, expected)) {
				$throwNew($AnalyzerException, insn, $$str({"Argument "_s, $$str(j)}), expected, actual);
			}
		}
	}
	return $BasicInterpreter::naryOperation(insn, values);
}

void BasicVerifier::returnOperation($AbstractInsnNode* insn, $BasicValue* value, $BasicValue* expected) {
	if (!isSubTypeOf(value, expected)) {
		$throwNew($AnalyzerException, insn, "Incompatible return type"_s, expected, value);
	}
}

bool BasicVerifier::isArrayValue($BasicValue* value) {
	return $nc(value)->isReference();
}

$BasicValue* BasicVerifier::getElementValue($BasicValue* objectArrayValue) {
	$init($BasicValue);
	return $BasicValue::REFERENCE_VALUE;
}

bool BasicVerifier::isSubTypeOf($BasicValue* value, $BasicValue* expected) {
	return $nc(value)->equals(expected);
}

void BasicVerifier::returnOperation($AbstractInsnNode* insn, $1Value* value, $1Value* expected) {
	this->returnOperation(insn, $cast($BasicValue, value), $cast($BasicValue, expected));
}

$1Value* BasicVerifier::ternaryOperation($AbstractInsnNode* insn, $1Value* value1, $1Value* value2, $1Value* value3) {
	return this->ternaryOperation(insn, $cast($BasicValue, value1), $cast($BasicValue, value2), $cast($BasicValue, value3));
}

$1Value* BasicVerifier::binaryOperation($AbstractInsnNode* insn, $1Value* value1, $1Value* value2) {
	return this->binaryOperation(insn, $cast($BasicValue, value1), $cast($BasicValue, value2));
}

$1Value* BasicVerifier::unaryOperation($AbstractInsnNode* insn, $1Value* value) {
	return this->unaryOperation(insn, $cast($BasicValue, value));
}

$1Value* BasicVerifier::copyOperation($AbstractInsnNode* insn, $1Value* value) {
	return this->copyOperation(insn, $cast($BasicValue, value));
}

BasicVerifier::BasicVerifier() {
}

$Class* BasicVerifier::load$($String* name, bool initialize) {
	$loadClass(BasicVerifier, name, initialize, &_BasicVerifier_ClassInfo_, allocate$BasicVerifier);
	return class$;
}

$Class* BasicVerifier::class$ = nullptr;

						} // analysis
					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk