#include <jdk/internal/org/objectweb/asm/tree/analysis/BasicInterpreter.h>

#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/List.h>
#include <jdk/internal/org/objectweb/asm/ConstantDynamic.h>
#include <jdk/internal/org/objectweb/asm/Handle.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/Type.h>
#include <jdk/internal/org/objectweb/asm/tree/AbstractInsnNode.h>
#include <jdk/internal/org/objectweb/asm/tree/FieldInsnNode.h>
#include <jdk/internal/org/objectweb/asm/tree/IntInsnNode.h>
#include <jdk/internal/org/objectweb/asm/tree/InvokeDynamicInsnNode.h>
#include <jdk/internal/org/objectweb/asm/tree/LdcInsnNode.h>
#include <jdk/internal/org/objectweb/asm/tree/MethodInsnNode.h>
#include <jdk/internal/org/objectweb/asm/tree/MultiANewArrayInsnNode.h>
#include <jdk/internal/org/objectweb/asm/tree/TypeInsnNode.h>
#include <jdk/internal/org/objectweb/asm/tree/analysis/AnalyzerException.h>
#include <jdk/internal/org/objectweb/asm/tree/analysis/BasicValue.h>
#include <jdk/internal/org/objectweb/asm/tree/analysis/Interpreter.h>
#include <jdk/internal/org/objectweb/asm/tree/analysis/Value.h>
#include <jcpp.h>

#undef AALOAD
#undef ACONST_NULL
#undef ANEWARRAY
#undef ARETURN
#undef ARRAY
#undef ARRAYLENGTH
#undef ASM8
#undef ATHROW
#undef BALOAD
#undef BIPUSH
#undef BOOLEAN
#undef BYTE
#undef CALOAD
#undef CHAR
#undef CHECKCAST
#undef D2F
#undef D2I
#undef D2L
#undef DADD
#undef DALOAD
#undef DCMPG
#undef DCMPL
#undef DCONST_0
#undef DCONST_1
#undef DDIV
#undef DMUL
#undef DNEG
#undef DOUBLE
#undef DOUBLE_VALUE
#undef DREM
#undef DRETURN
#undef DSUB
#undef F2D
#undef F2I
#undef F2L
#undef FADD
#undef FALOAD
#undef FCMPG
#undef FCMPL
#undef FCONST_0
#undef FCONST_1
#undef FCONST_2
#undef FDIV
#undef FLOAT
#undef FLOAT_VALUE
#undef FMUL
#undef FNEG
#undef FREM
#undef FRETURN
#undef FSUB
#undef GETFIELD
#undef GETSTATIC
#undef I2B
#undef I2C
#undef I2D
#undef I2F
#undef I2L
#undef I2S
#undef IADD
#undef IALOAD
#undef IAND
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
#undef IMUL
#undef INEG
#undef INSTANCEOF
#undef INT
#undef INT_VALUE
#undef INVOKEDYNAMIC
#undef IOR
#undef IREM
#undef IRETURN
#undef ISHL
#undef ISHR
#undef ISUB
#undef IUSHR
#undef IXOR
#undef JSR
#undef L2D
#undef L2F
#undef L2I
#undef LADD
#undef LALOAD
#undef LAND
#undef LCMP
#undef LCONST_0
#undef LCONST_1
#undef LDC
#undef LDIV
#undef LMUL
#undef LNEG
#undef LONG
#undef LONG_VALUE
#undef LOOKUPSWITCH
#undef LOR
#undef LREM
#undef LRETURN
#undef LSHL
#undef LSHR
#undef LSUB
#undef LUSHR
#undef LXOR
#undef METHOD
#undef MONITORENTER
#undef MONITOREXIT
#undef MULTIANEWARRAY
#undef NEW
#undef NEWARRAY
#undef NULL_TYPE
#undef OBJECT
#undef PUTFIELD
#undef PUTSTATIC
#undef REFERENCE_VALUE
#undef RETURNADDRESS_VALUE
#undef SALOAD
#undef SHORT
#undef SIPUSH
#undef TABLESWITCH
#undef T_BOOLEAN
#undef T_BYTE
#undef T_CHAR
#undef T_DOUBLE
#undef T_FLOAT
#undef T_INT
#undef T_LONG
#undef T_SHORT
#undef UNINITIALIZED_VALUE
#undef VOID

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $ConstantDynamic = ::jdk::internal::org::objectweb::asm$::ConstantDynamic;
using $Handle = ::jdk::internal::org::objectweb::asm$::Handle;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $Type = ::jdk::internal::org::objectweb::asm$::Type;
using $AbstractInsnNode = ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode;
using $FieldInsnNode = ::jdk::internal::org::objectweb::asm$::tree::FieldInsnNode;
using $IntInsnNode = ::jdk::internal::org::objectweb::asm$::tree::IntInsnNode;
using $InvokeDynamicInsnNode = ::jdk::internal::org::objectweb::asm$::tree::InvokeDynamicInsnNode;
using $LdcInsnNode = ::jdk::internal::org::objectweb::asm$::tree::LdcInsnNode;
using $MethodInsnNode = ::jdk::internal::org::objectweb::asm$::tree::MethodInsnNode;
using $MultiANewArrayInsnNode = ::jdk::internal::org::objectweb::asm$::tree::MultiANewArrayInsnNode;
using $TypeInsnNode = ::jdk::internal::org::objectweb::asm$::tree::TypeInsnNode;
using $AnalyzerException = ::jdk::internal::org::objectweb::asm$::tree::analysis::AnalyzerException;
using $BasicValue = ::jdk::internal::org::objectweb::asm$::tree::analysis::BasicValue;
using $Interpreter = ::jdk::internal::org::objectweb::asm$::tree::analysis::Interpreter;
using $1Value = ::jdk::internal::org::objectweb::asm$::tree::analysis::Value;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace tree {
						namespace analysis {

$FieldInfo _BasicInterpreter_FieldInfo_[] = {
	{"NULL_TYPE", "Ljdk/internal/org/objectweb/asm/Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasicInterpreter, NULL_TYPE)},
	{}
};

$MethodInfo _BasicInterpreter_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicInterpreter::*)()>(&BasicInterpreter::init$))},
	{"<init>", "(I)V", nullptr, $PROTECTED, $method(static_cast<void(BasicInterpreter::*)(int32_t)>(&BasicInterpreter::init$))},
	{"binaryOperation", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;Ljdk/internal/org/objectweb/asm/tree/analysis/BasicValue;Ljdk/internal/org/objectweb/asm/tree/analysis/BasicValue;)Ljdk/internal/org/objectweb/asm/tree/analysis/BasicValue;", nullptr, $PUBLIC, nullptr, "jdk.internal.org.objectweb.asm.tree.analysis.AnalyzerException"},
	{"binaryOperation", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;Ljdk/internal/org/objectweb/asm/tree/analysis/Value;Ljdk/internal/org/objectweb/asm/tree/analysis/Value;)Ljdk/internal/org/objectweb/asm/tree/analysis/Value;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "jdk.internal.org.objectweb.asm.tree.analysis.AnalyzerException"},
	{"copyOperation", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;Ljdk/internal/org/objectweb/asm/tree/analysis/BasicValue;)Ljdk/internal/org/objectweb/asm/tree/analysis/BasicValue;", nullptr, $PUBLIC, nullptr, "jdk.internal.org.objectweb.asm.tree.analysis.AnalyzerException"},
	{"copyOperation", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;Ljdk/internal/org/objectweb/asm/tree/analysis/Value;)Ljdk/internal/org/objectweb/asm/tree/analysis/Value;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "jdk.internal.org.objectweb.asm.tree.analysis.AnalyzerException"},
	{"merge", "(Ljdk/internal/org/objectweb/asm/tree/analysis/BasicValue;Ljdk/internal/org/objectweb/asm/tree/analysis/BasicValue;)Ljdk/internal/org/objectweb/asm/tree/analysis/BasicValue;", nullptr, $PUBLIC},
	{"merge", "(Ljdk/internal/org/objectweb/asm/tree/analysis/Value;Ljdk/internal/org/objectweb/asm/tree/analysis/Value;)Ljdk/internal/org/objectweb/asm/tree/analysis/Value;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"naryOperation", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;Ljava/util/List;)Ljdk/internal/org/objectweb/asm/tree/analysis/BasicValue;", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;Ljava/util/List<+Ljdk/internal/org/objectweb/asm/tree/analysis/BasicValue;>;)Ljdk/internal/org/objectweb/asm/tree/analysis/BasicValue;", $PUBLIC, nullptr, "jdk.internal.org.objectweb.asm.tree.analysis.AnalyzerException"},
	{"newOperation", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;)Ljdk/internal/org/objectweb/asm/tree/analysis/BasicValue;", nullptr, $PUBLIC, nullptr, "jdk.internal.org.objectweb.asm.tree.analysis.AnalyzerException"},
	{"newValue", "(Ljdk/internal/org/objectweb/asm/Type;)Ljdk/internal/org/objectweb/asm/tree/analysis/BasicValue;", nullptr, $PUBLIC},
	{"returnOperation", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;Ljdk/internal/org/objectweb/asm/tree/analysis/BasicValue;Ljdk/internal/org/objectweb/asm/tree/analysis/BasicValue;)V", nullptr, $PUBLIC, nullptr, "jdk.internal.org.objectweb.asm.tree.analysis.AnalyzerException"},
	{"returnOperation", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;Ljdk/internal/org/objectweb/asm/tree/analysis/Value;Ljdk/internal/org/objectweb/asm/tree/analysis/Value;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "jdk.internal.org.objectweb.asm.tree.analysis.AnalyzerException"},
	{"ternaryOperation", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;Ljdk/internal/org/objectweb/asm/tree/analysis/BasicValue;Ljdk/internal/org/objectweb/asm/tree/analysis/BasicValue;Ljdk/internal/org/objectweb/asm/tree/analysis/BasicValue;)Ljdk/internal/org/objectweb/asm/tree/analysis/BasicValue;", nullptr, $PUBLIC, nullptr, "jdk.internal.org.objectweb.asm.tree.analysis.AnalyzerException"},
	{"ternaryOperation", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;Ljdk/internal/org/objectweb/asm/tree/analysis/Value;Ljdk/internal/org/objectweb/asm/tree/analysis/Value;Ljdk/internal/org/objectweb/asm/tree/analysis/Value;)Ljdk/internal/org/objectweb/asm/tree/analysis/Value;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "jdk.internal.org.objectweb.asm.tree.analysis.AnalyzerException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unaryOperation", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;Ljdk/internal/org/objectweb/asm/tree/analysis/BasicValue;)Ljdk/internal/org/objectweb/asm/tree/analysis/BasicValue;", nullptr, $PUBLIC, nullptr, "jdk.internal.org.objectweb.asm.tree.analysis.AnalyzerException"},
	{"unaryOperation", "(Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;Ljdk/internal/org/objectweb/asm/tree/analysis/Value;)Ljdk/internal/org/objectweb/asm/tree/analysis/Value;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "jdk.internal.org.objectweb.asm.tree.analysis.AnalyzerException"},
	{}
};

$ClassInfo _BasicInterpreter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.tree.analysis.BasicInterpreter",
	"jdk.internal.org.objectweb.asm.tree.analysis.Interpreter",
	"jdk.internal.org.objectweb.asm.Opcodes",
	_BasicInterpreter_FieldInfo_,
	_BasicInterpreter_MethodInfo_,
	"Ljdk/internal/org/objectweb/asm/tree/analysis/Interpreter<Ljdk/internal/org/objectweb/asm/tree/analysis/BasicValue;>;Ljdk/internal/org/objectweb/asm/Opcodes;"
};

$Object* allocate$BasicInterpreter($Class* clazz) {
	return $of($alloc(BasicInterpreter));
}

int32_t BasicInterpreter::hashCode() {
	 return this->$Interpreter::hashCode();
}

bool BasicInterpreter::equals(Object$* obj) {
	 return this->$Interpreter::equals(obj);
}

$Object* BasicInterpreter::clone() {
	 return this->$Interpreter::clone();
}

$String* BasicInterpreter::toString() {
	 return this->$Interpreter::toString();
}

void BasicInterpreter::finalize() {
	this->$Interpreter::finalize();
}


$Type* BasicInterpreter::NULL_TYPE = nullptr;

void BasicInterpreter::init$() {
	$Interpreter::init$($Opcodes::ASM8);
	if ($of(this)->getClass() != BasicInterpreter::class$) {
		$throwNew($IllegalStateException);
	}
}

void BasicInterpreter::init$(int32_t api) {
	$Interpreter::init$(api);
}

$1Value* BasicInterpreter::newValue($Type* type) {
	if (type == nullptr) {
		$init($BasicValue);
		return $BasicValue::UNINITIALIZED_VALUE;
	}
	switch ($nc(type)->getSort()) {
	case $Type::VOID:
		{
			return nullptr;
		}
	case $Type::BOOLEAN:
		{}
	case $Type::CHAR:
		{}
	case $Type::BYTE:
		{}
	case $Type::SHORT:
		{}
	case $Type::INT:
		{
			$init($BasicValue);
			return $BasicValue::INT_VALUE;
		}
	case $Type::FLOAT:
		{
			$init($BasicValue);
			return $BasicValue::FLOAT_VALUE;
		}
	case $Type::LONG:
		{
			$init($BasicValue);
			return $BasicValue::LONG_VALUE;
		}
	case $Type::DOUBLE:
		{
			$init($BasicValue);
			return $BasicValue::DOUBLE_VALUE;
		}
	case $Type::ARRAY:
		{}
	case $Type::OBJECT:
		{
			$init($BasicValue);
			return $BasicValue::REFERENCE_VALUE;
		}
	default:
		{
			$throwNew($AssertionError);
		}
	}
}

$1Value* BasicInterpreter::newOperation($AbstractInsnNode* insn) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Object, value, nullptr)
		switch ($nc(insn)->getOpcode()) {
		case $Opcodes::ACONST_NULL:
			{
				return newValue(BasicInterpreter::NULL_TYPE);
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
			{
				$init($BasicValue);
				return $BasicValue::INT_VALUE;
			}
		case $Opcodes::LCONST_0:
			{}
		case $Opcodes::LCONST_1:
			{
				$init($BasicValue);
				return $BasicValue::LONG_VALUE;
			}
		case $Opcodes::FCONST_0:
			{}
		case $Opcodes::FCONST_1:
			{}
		case $Opcodes::FCONST_2:
			{
				$init($BasicValue);
				return $BasicValue::FLOAT_VALUE;
			}
		case $Opcodes::DCONST_0:
			{}
		case $Opcodes::DCONST_1:
			{
				$init($BasicValue);
				return $BasicValue::DOUBLE_VALUE;
			}
		case $Opcodes::BIPUSH:
			{}
		case $Opcodes::SIPUSH:
			{
				$init($BasicValue);
				return $BasicValue::INT_VALUE;
			}
		case $Opcodes::LDC:
			{
				$assign(value, $nc(($cast($LdcInsnNode, insn)))->cst);
				if ($instanceOf($Integer, value)) {
					$init($BasicValue);
					return $BasicValue::INT_VALUE;
				} else if ($instanceOf($Float, value)) {
					$init($BasicValue);
					return $BasicValue::FLOAT_VALUE;
				} else if ($instanceOf($Long, value)) {
					$init($BasicValue);
					return $BasicValue::LONG_VALUE;
				} else if ($instanceOf($Double, value)) {
					$init($BasicValue);
					return $BasicValue::DOUBLE_VALUE;
				} else if ($instanceOf($String, value)) {
					return newValue($($Type::getObjectType("java/lang/String"_s)));
				} else if ($instanceOf($Type, value)) {
					int32_t sort = $nc(($cast($Type, value)))->getSort();
					if (sort == $Type::OBJECT || sort == $Type::ARRAY) {
						return newValue($($Type::getObjectType("java/lang/Class"_s)));
					} else if (sort == $Type::METHOD) {
						return newValue($($Type::getObjectType("java/lang/invoke/MethodType"_s)));
					} else {
						$throwNew($AnalyzerException, insn, $$str({"Illegal LDC value "_s, value}));
					}
				} else if ($instanceOf($Handle, value)) {
					return newValue($($Type::getObjectType("java/lang/invoke/MethodHandle"_s)));
				} else if ($instanceOf($ConstantDynamic, value)) {
					return newValue($($Type::getType($($nc(($cast($ConstantDynamic, value)))->getDescriptor()))));
				} else {
					$throwNew($AnalyzerException, insn, $$str({"Illegal LDC value "_s, value}));
				}
			}
		case $Opcodes::JSR:
			{
				$init($BasicValue);
				return $BasicValue::RETURNADDRESS_VALUE;
			}
		case $Opcodes::GETSTATIC:
			{
				return newValue($($Type::getType($nc(($cast($FieldInsnNode, insn)))->desc)));
			}
		case $Opcodes::NEW:
			{
				return newValue($($Type::getObjectType($nc(($cast($TypeInsnNode, insn)))->desc)));
			}
		default:
			{
				$throwNew($AssertionError);
			}
		}
	}
}

$BasicValue* BasicInterpreter::copyOperation($AbstractInsnNode* insn, $BasicValue* value) {
	return value;
}

$BasicValue* BasicInterpreter::unaryOperation($AbstractInsnNode* insn, $BasicValue* value) {
	$useLocalCurrentObjectStackCache();
	switch ($nc(insn)->getOpcode()) {
	case $Opcodes::INEG:
		{}
	case $Opcodes::IINC:
		{}
	case $Opcodes::L2I:
		{}
	case $Opcodes::F2I:
		{}
	case $Opcodes::D2I:
		{}
	case $Opcodes::I2B:
		{}
	case $Opcodes::I2C:
		{}
	case $Opcodes::I2S:
		{
			$init($BasicValue);
			return $BasicValue::INT_VALUE;
		}
	case $Opcodes::FNEG:
		{}
	case $Opcodes::I2F:
		{}
	case $Opcodes::L2F:
		{}
	case $Opcodes::D2F:
		{
			$init($BasicValue);
			return $BasicValue::FLOAT_VALUE;
		}
	case $Opcodes::LNEG:
		{}
	case $Opcodes::I2L:
		{}
	case $Opcodes::F2L:
		{}
	case $Opcodes::D2L:
		{
			$init($BasicValue);
			return $BasicValue::LONG_VALUE;
		}
	case $Opcodes::DNEG:
		{}
	case $Opcodes::I2D:
		{}
	case $Opcodes::L2D:
		{}
	case $Opcodes::F2D:
		{
			$init($BasicValue);
			return $BasicValue::DOUBLE_VALUE;
		}
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
	case $Opcodes::LRETURN:
		{}
	case $Opcodes::FRETURN:
		{}
	case $Opcodes::DRETURN:
		{}
	case $Opcodes::ARETURN:
		{}
	case $Opcodes::PUTSTATIC:
		{
			return nullptr;
		}
	case $Opcodes::GETFIELD:
		{
			return $cast($BasicValue, newValue($($Type::getType($nc(($cast($FieldInsnNode, insn)))->desc))));
		}
	case $Opcodes::NEWARRAY:
		{
			switch ($nc(($cast($IntInsnNode, insn)))->operand) {
			case $Opcodes::T_BOOLEAN:
				{
					return $cast($BasicValue, newValue($($Type::getType("[Z"_s))));
				}
			case $Opcodes::T_CHAR:
				{
					return $cast($BasicValue, newValue($($Type::getType("[C"_s))));
				}
			case $Opcodes::T_BYTE:
				{
					return $cast($BasicValue, newValue($($Type::getType("[B"_s))));
				}
			case $Opcodes::T_SHORT:
				{
					return $cast($BasicValue, newValue($($Type::getType("[S"_s))));
				}
			case $Opcodes::T_INT:
				{
					return $cast($BasicValue, newValue($($Type::getType("[I"_s))));
				}
			case $Opcodes::T_FLOAT:
				{
					return $cast($BasicValue, newValue($($Type::getType("[F"_s))));
				}
			case $Opcodes::T_DOUBLE:
				{
					return $cast($BasicValue, newValue($($Type::getType("[D"_s))));
				}
			case $Opcodes::T_LONG:
				{
					return $cast($BasicValue, newValue($($Type::getType("[J"_s))));
				}
			default:
				{
					break;
				}
			}
			$throwNew($AnalyzerException, insn, "Invalid array type"_s);
		}
	case $Opcodes::ANEWARRAY:
		{
			return $cast($BasicValue, newValue($($Type::getType($$str({"["_s, $($Type::getObjectType($nc(($cast($TypeInsnNode, insn)))->desc))})))));
		}
	case $Opcodes::ARRAYLENGTH:
		{
			$init($BasicValue);
			return $BasicValue::INT_VALUE;
		}
	case $Opcodes::ATHROW:
		{
			return nullptr;
		}
	case $Opcodes::CHECKCAST:
		{
			return $cast($BasicValue, newValue($($Type::getObjectType($nc(($cast($TypeInsnNode, insn)))->desc))));
		}
	case $Opcodes::INSTANCEOF:
		{
			$init($BasicValue);
			return $BasicValue::INT_VALUE;
		}
	case $Opcodes::MONITORENTER:
		{}
	case $Opcodes::MONITOREXIT:
		{}
	case $Opcodes::IFNULL:
		{}
	case $Opcodes::IFNONNULL:
		{
			return nullptr;
		}
	default:
		{
			$throwNew($AssertionError);
		}
	}
}

$BasicValue* BasicInterpreter::binaryOperation($AbstractInsnNode* insn, $BasicValue* value1, $BasicValue* value2) {
	switch ($nc(insn)->getOpcode()) {
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
		{
			$init($BasicValue);
			return $BasicValue::INT_VALUE;
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
		{
			$init($BasicValue);
			return $BasicValue::FLOAT_VALUE;
		}
	case $Opcodes::LALOAD:
		{}
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
	case $Opcodes::LSHL:
		{}
	case $Opcodes::LSHR:
		{}
	case $Opcodes::LUSHR:
		{}
	case $Opcodes::LAND:
		{}
	case $Opcodes::LOR:
		{}
	case $Opcodes::LXOR:
		{
			$init($BasicValue);
			return $BasicValue::LONG_VALUE;
		}
	case $Opcodes::DALOAD:
		{}
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
			$init($BasicValue);
			return $BasicValue::DOUBLE_VALUE;
		}
	case $Opcodes::AALOAD:
		{
			$init($BasicValue);
			return $BasicValue::REFERENCE_VALUE;
		}
	case $Opcodes::LCMP:
		{}
	case $Opcodes::FCMPL:
		{}
	case $Opcodes::FCMPG:
		{}
	case $Opcodes::DCMPL:
		{}
	case $Opcodes::DCMPG:
		{
			$init($BasicValue);
			return $BasicValue::INT_VALUE;
		}
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
	case $Opcodes::PUTFIELD:
		{
			return nullptr;
		}
	default:
		{
			$throwNew($AssertionError);
		}
	}
}

$BasicValue* BasicInterpreter::ternaryOperation($AbstractInsnNode* insn, $BasicValue* value1, $BasicValue* value2, $BasicValue* value3) {
	return nullptr;
}

$1Value* BasicInterpreter::naryOperation($AbstractInsnNode* insn, $List* values) {
	$useLocalCurrentObjectStackCache();
	int32_t opcode = $nc(insn)->getOpcode();
	if (opcode == $Opcodes::MULTIANEWARRAY) {
		return newValue($($Type::getType($nc(($cast($MultiANewArrayInsnNode, insn)))->desc)));
	} else if (opcode == $Opcodes::INVOKEDYNAMIC) {
		return newValue($($Type::getReturnType($nc(($cast($InvokeDynamicInsnNode, insn)))->desc)));
	} else {
		return newValue($($Type::getReturnType($nc(($cast($MethodInsnNode, insn)))->desc)));
	}
}

void BasicInterpreter::returnOperation($AbstractInsnNode* insn, $BasicValue* value, $BasicValue* expected) {
}

$BasicValue* BasicInterpreter::merge($BasicValue* value1, $BasicValue* value2) {
	if (!$nc(value1)->equals(value2)) {
		$init($BasicValue);
		return $BasicValue::UNINITIALIZED_VALUE;
	}
	return value1;
}

$1Value* BasicInterpreter::merge($1Value* value1, $1Value* value2) {
	return this->merge($cast($BasicValue, value1), $cast($BasicValue, value2));
}

void BasicInterpreter::returnOperation($AbstractInsnNode* insn, $1Value* value, $1Value* expected) {
	this->returnOperation(insn, $cast($BasicValue, value), $cast($BasicValue, expected));
}

$1Value* BasicInterpreter::ternaryOperation($AbstractInsnNode* insn, $1Value* value1, $1Value* value2, $1Value* value3) {
	return this->ternaryOperation(insn, $cast($BasicValue, value1), $cast($BasicValue, value2), $cast($BasicValue, value3));
}

$1Value* BasicInterpreter::binaryOperation($AbstractInsnNode* insn, $1Value* value1, $1Value* value2) {
	return this->binaryOperation(insn, $cast($BasicValue, value1), $cast($BasicValue, value2));
}

$1Value* BasicInterpreter::unaryOperation($AbstractInsnNode* insn, $1Value* value) {
	return this->unaryOperation(insn, $cast($BasicValue, value));
}

$1Value* BasicInterpreter::copyOperation($AbstractInsnNode* insn, $1Value* value) {
	return this->copyOperation(insn, $cast($BasicValue, value));
}

void clinit$BasicInterpreter($Class* class$) {
	$assignStatic(BasicInterpreter::NULL_TYPE, $Type::getObjectType("null"_s));
}

BasicInterpreter::BasicInterpreter() {
}

$Class* BasicInterpreter::load$($String* name, bool initialize) {
	$loadClass(BasicInterpreter, name, initialize, &_BasicInterpreter_ClassInfo_, clinit$BasicInterpreter, allocate$BasicInterpreter);
	return class$;
}

$Class* BasicInterpreter::class$ = nullptr;

						} // analysis
					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk