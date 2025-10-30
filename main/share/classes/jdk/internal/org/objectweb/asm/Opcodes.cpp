#include <jdk/internal/org/objectweb/asm/Opcodes.h>

#include <jdk/internal/org/objectweb/asm/Frame.h>
#include <jcpp.h>

#undef AALOAD
#undef AASTORE
#undef ACC_ABSTRACT
#undef ACC_ANNOTATION
#undef ACC_BRIDGE
#undef ACC_DEPRECATED
#undef ACC_ENUM
#undef ACC_FINAL
#undef ACC_INTERFACE
#undef ACC_MANDATED
#undef ACC_MODULE
#undef ACC_NATIVE
#undef ACC_OPEN
#undef ACC_PRIVATE
#undef ACC_PROTECTED
#undef ACC_PUBLIC
#undef ACC_RECORD
#undef ACC_STATIC
#undef ACC_STATIC_PHASE
#undef ACC_STRICT
#undef ACC_SUPER
#undef ACC_SYNCHRONIZED
#undef ACC_SYNTHETIC
#undef ACC_TRANSIENT
#undef ACC_TRANSITIVE
#undef ACC_VARARGS
#undef ACC_VOLATILE
#undef ACONST_NULL
#undef ALOAD
#undef ANEWARRAY
#undef ARETURN
#undef ARRAYLENGTH
#undef ASM4
#undef ASM5
#undef ASM6
#undef ASM7
#undef ASM8
#undef ASM9_EXPERIMENTAL
#undef ASTORE
#undef ATHROW
#undef BALOAD
#undef BASTORE
#undef BIPUSH
#undef CALOAD
#undef CASTORE
#undef CHECKCAST
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
#undef FLOAD
#undef FLOAT
#undef FMUL
#undef FNEG
#undef FREM
#undef FRETURN
#undef FSTORE
#undef FSUB
#undef F_APPEND
#undef F_CHOP
#undef F_FULL
#undef F_NEW
#undef F_SAME
#undef F_SAME1
#undef GETFIELD
#undef GETSTATIC
#undef GOTO
#undef H_GETFIELD
#undef H_GETSTATIC
#undef H_INVOKEINTERFACE
#undef H_INVOKESPECIAL
#undef H_INVOKESTATIC
#undef H_INVOKEVIRTUAL
#undef H_NEWINVOKESPECIAL
#undef H_PUTFIELD
#undef H_PUTSTATIC
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
#undef ITEM_DOUBLE
#undef ITEM_FLOAT
#undef ITEM_INTEGER
#undef ITEM_LONG
#undef ITEM_NULL
#undef ITEM_TOP
#undef ITEM_UNINITIALIZED_THIS
#undef IUSHR
#undef IXOR
#undef JSR
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
#undef RET
#undef RETURN
#undef SALOAD
#undef SASTORE
#undef SIPUSH
#undef SOURCE_DEPRECATED
#undef SOURCE_MASK
#undef SWAP
#undef TABLESWITCH
#undef TOP
#undef T_BOOLEAN
#undef T_BYTE
#undef T_CHAR
#undef T_DOUBLE
#undef T_FLOAT
#undef T_INT
#undef T_LONG
#undef T_SHORT
#undef UNINITIALIZED_THIS
#undef V_PREVIEW

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Frame = ::jdk::internal::org::objectweb::asm$::Frame;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {

$CompoundAttribute _Opcodes_FieldAnnotations_ASM9_EXPERIMENTAL[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _Opcodes_FieldInfo_[] = {
	{"ASM4", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, ASM4)},
	{"ASM5", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, ASM5)},
	{"ASM6", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, ASM6)},
	{"ASM7", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, ASM7)},
	{"ASM8", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, ASM8)},
	{"ASM9_EXPERIMENTAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(Opcodes, ASM9_EXPERIMENTAL), _Opcodes_FieldAnnotations_ASM9_EXPERIMENTAL},
	{"SOURCE_DEPRECATED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, SOURCE_DEPRECATED)},
	{"SOURCE_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, SOURCE_MASK)},
	{"V1_1", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, V1_1)},
	{"V1_2", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, V1_2)},
	{"V1_3", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, V1_3)},
	{"V1_4", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, V1_4)},
	{"V1_5", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, V1_5)},
	{"V1_6", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, V1_6)},
	{"V1_7", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, V1_7)},
	{"V1_8", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, V1_8)},
	{"V9", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, V9)},
	{"V10", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, V10)},
	{"V11", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, V11)},
	{"V12", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, V12)},
	{"V13", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, V13)},
	{"V14", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, V14)},
	{"V15", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, V15)},
	{"V16", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, V16)},
	{"V17", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, V17)},
	{"V_PREVIEW", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, V_PREVIEW)},
	{"ACC_PUBLIC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, ACC_PUBLIC)},
	{"ACC_PRIVATE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, ACC_PRIVATE)},
	{"ACC_PROTECTED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, ACC_PROTECTED)},
	{"ACC_STATIC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, ACC_STATIC)},
	{"ACC_FINAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, ACC_FINAL)},
	{"ACC_SUPER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, ACC_SUPER)},
	{"ACC_SYNCHRONIZED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, ACC_SYNCHRONIZED)},
	{"ACC_OPEN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, ACC_OPEN)},
	{"ACC_TRANSITIVE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, ACC_TRANSITIVE)},
	{"ACC_VOLATILE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, ACC_VOLATILE)},
	{"ACC_BRIDGE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, ACC_BRIDGE)},
	{"ACC_STATIC_PHASE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, ACC_STATIC_PHASE)},
	{"ACC_VARARGS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, ACC_VARARGS)},
	{"ACC_TRANSIENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, ACC_TRANSIENT)},
	{"ACC_NATIVE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, ACC_NATIVE)},
	{"ACC_INTERFACE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, ACC_INTERFACE)},
	{"ACC_ABSTRACT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, ACC_ABSTRACT)},
	{"ACC_STRICT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, ACC_STRICT)},
	{"ACC_SYNTHETIC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, ACC_SYNTHETIC)},
	{"ACC_ANNOTATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, ACC_ANNOTATION)},
	{"ACC_ENUM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, ACC_ENUM)},
	{"ACC_MANDATED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, ACC_MANDATED)},
	{"ACC_MODULE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, ACC_MODULE)},
	{"ACC_RECORD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, ACC_RECORD)},
	{"ACC_DEPRECATED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, ACC_DEPRECATED)},
	{"T_BOOLEAN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, T_BOOLEAN)},
	{"T_CHAR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, T_CHAR)},
	{"T_FLOAT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, T_FLOAT)},
	{"T_DOUBLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, T_DOUBLE)},
	{"T_BYTE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, T_BYTE)},
	{"T_SHORT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, T_SHORT)},
	{"T_INT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, T_INT)},
	{"T_LONG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, T_LONG)},
	{"H_GETFIELD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, H_GETFIELD)},
	{"H_GETSTATIC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, H_GETSTATIC)},
	{"H_PUTFIELD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, H_PUTFIELD)},
	{"H_PUTSTATIC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, H_PUTSTATIC)},
	{"H_INVOKEVIRTUAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, H_INVOKEVIRTUAL)},
	{"H_INVOKESTATIC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, H_INVOKESTATIC)},
	{"H_INVOKESPECIAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, H_INVOKESPECIAL)},
	{"H_NEWINVOKESPECIAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, H_NEWINVOKESPECIAL)},
	{"H_INVOKEINTERFACE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, H_INVOKEINTERFACE)},
	{"F_NEW", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, F_NEW)},
	{"F_FULL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, F_FULL)},
	{"F_APPEND", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, F_APPEND)},
	{"F_CHOP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, F_CHOP)},
	{"F_SAME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, F_SAME)},
	{"F_SAME1", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, F_SAME1)},
	{"TOP", "Ljava/lang/Integer;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Opcodes, TOP)},
	{"INTEGER", "Ljava/lang/Integer;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Opcodes, INTEGER)},
	{"FLOAT", "Ljava/lang/Integer;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Opcodes, FLOAT)},
	{"DOUBLE", "Ljava/lang/Integer;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Opcodes, DOUBLE)},
	{"LONG", "Ljava/lang/Integer;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Opcodes, LONG)},
	{"NULL", "Ljava/lang/Integer;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Opcodes, NULL)},
	{"UNINITIALIZED_THIS", "Ljava/lang/Integer;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Opcodes, UNINITIALIZED_THIS)},
	{"NOP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, NOP)},
	{"ACONST_NULL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, ACONST_NULL)},
	{"ICONST_M1", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, ICONST_M1)},
	{"ICONST_0", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, ICONST_0)},
	{"ICONST_1", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, ICONST_1)},
	{"ICONST_2", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, ICONST_2)},
	{"ICONST_3", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, ICONST_3)},
	{"ICONST_4", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, ICONST_4)},
	{"ICONST_5", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, ICONST_5)},
	{"LCONST_0", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, LCONST_0)},
	{"LCONST_1", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, LCONST_1)},
	{"FCONST_0", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, FCONST_0)},
	{"FCONST_1", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, FCONST_1)},
	{"FCONST_2", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, FCONST_2)},
	{"DCONST_0", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, DCONST_0)},
	{"DCONST_1", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, DCONST_1)},
	{"BIPUSH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, BIPUSH)},
	{"SIPUSH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, SIPUSH)},
	{"LDC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, LDC)},
	{"ILOAD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, ILOAD)},
	{"LLOAD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, LLOAD)},
	{"FLOAD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, FLOAD)},
	{"DLOAD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, DLOAD)},
	{"ALOAD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, ALOAD)},
	{"IALOAD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, IALOAD)},
	{"LALOAD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, LALOAD)},
	{"FALOAD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, FALOAD)},
	{"DALOAD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, DALOAD)},
	{"AALOAD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, AALOAD)},
	{"BALOAD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, BALOAD)},
	{"CALOAD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, CALOAD)},
	{"SALOAD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, SALOAD)},
	{"ISTORE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, ISTORE)},
	{"LSTORE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, LSTORE)},
	{"FSTORE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, FSTORE)},
	{"DSTORE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, DSTORE)},
	{"ASTORE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, ASTORE)},
	{"IASTORE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, IASTORE)},
	{"LASTORE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, LASTORE)},
	{"FASTORE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, FASTORE)},
	{"DASTORE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, DASTORE)},
	{"AASTORE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, AASTORE)},
	{"BASTORE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, BASTORE)},
	{"CASTORE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, CASTORE)},
	{"SASTORE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, SASTORE)},
	{"POP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, POP)},
	{"POP2", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, POP2)},
	{"DUP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, DUP)},
	{"DUP_X1", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, DUP_X1)},
	{"DUP_X2", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, DUP_X2)},
	{"DUP2", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, DUP2)},
	{"DUP2_X1", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, DUP2_X1)},
	{"DUP2_X2", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, DUP2_X2)},
	{"SWAP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, SWAP)},
	{"IADD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, IADD)},
	{"LADD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, LADD)},
	{"FADD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, FADD)},
	{"DADD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, DADD)},
	{"ISUB", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, ISUB)},
	{"LSUB", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, LSUB)},
	{"FSUB", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, FSUB)},
	{"DSUB", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, DSUB)},
	{"IMUL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, IMUL)},
	{"LMUL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, LMUL)},
	{"FMUL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, FMUL)},
	{"DMUL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, DMUL)},
	{"IDIV", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, IDIV)},
	{"LDIV", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, LDIV)},
	{"FDIV", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, FDIV)},
	{"DDIV", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, DDIV)},
	{"IREM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, IREM)},
	{"LREM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, LREM)},
	{"FREM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, FREM)},
	{"DREM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, DREM)},
	{"INEG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, INEG)},
	{"LNEG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, LNEG)},
	{"FNEG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, FNEG)},
	{"DNEG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, DNEG)},
	{"ISHL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, ISHL)},
	{"LSHL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, LSHL)},
	{"ISHR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, ISHR)},
	{"LSHR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, LSHR)},
	{"IUSHR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, IUSHR)},
	{"LUSHR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, LUSHR)},
	{"IAND", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, IAND)},
	{"LAND", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, LAND)},
	{"IOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, IOR)},
	{"LOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, LOR)},
	{"IXOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, IXOR)},
	{"LXOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, LXOR)},
	{"IINC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, IINC)},
	{"I2L", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, I2L)},
	{"I2F", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, I2F)},
	{"I2D", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, I2D)},
	{"L2I", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, L2I)},
	{"L2F", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, L2F)},
	{"L2D", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, L2D)},
	{"F2I", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, F2I)},
	{"F2L", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, F2L)},
	{"F2D", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, F2D)},
	{"D2I", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, D2I)},
	{"D2L", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, D2L)},
	{"D2F", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, D2F)},
	{"I2B", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, I2B)},
	{"I2C", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, I2C)},
	{"I2S", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, I2S)},
	{"LCMP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, LCMP)},
	{"FCMPL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, FCMPL)},
	{"FCMPG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, FCMPG)},
	{"DCMPL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, DCMPL)},
	{"DCMPG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, DCMPG)},
	{"IFEQ", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, IFEQ)},
	{"IFNE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, IFNE)},
	{"IFLT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, IFLT)},
	{"IFGE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, IFGE)},
	{"IFGT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, IFGT)},
	{"IFLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, IFLE)},
	{"IF_ICMPEQ", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, IF_ICMPEQ)},
	{"IF_ICMPNE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, IF_ICMPNE)},
	{"IF_ICMPLT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, IF_ICMPLT)},
	{"IF_ICMPGE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, IF_ICMPGE)},
	{"IF_ICMPGT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, IF_ICMPGT)},
	{"IF_ICMPLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, IF_ICMPLE)},
	{"IF_ACMPEQ", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, IF_ACMPEQ)},
	{"IF_ACMPNE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, IF_ACMPNE)},
	{"GOTO", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, GOTO)},
	{"JSR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, JSR)},
	{"RET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, RET)},
	{"TABLESWITCH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, TABLESWITCH)},
	{"LOOKUPSWITCH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, LOOKUPSWITCH)},
	{"IRETURN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, IRETURN)},
	{"LRETURN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, LRETURN)},
	{"FRETURN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, FRETURN)},
	{"DRETURN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, DRETURN)},
	{"ARETURN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, ARETURN)},
	{"RETURN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, RETURN)},
	{"GETSTATIC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, GETSTATIC)},
	{"PUTSTATIC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, PUTSTATIC)},
	{"GETFIELD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, GETFIELD)},
	{"PUTFIELD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, PUTFIELD)},
	{"INVOKEVIRTUAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, INVOKEVIRTUAL)},
	{"INVOKESPECIAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, INVOKESPECIAL)},
	{"INVOKESTATIC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, INVOKESTATIC)},
	{"INVOKEINTERFACE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, INVOKEINTERFACE)},
	{"INVOKEDYNAMIC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, INVOKEDYNAMIC)},
	{"NEW", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, NEW)},
	{"NEWARRAY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, NEWARRAY)},
	{"ANEWARRAY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, ANEWARRAY)},
	{"ARRAYLENGTH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, ARRAYLENGTH)},
	{"ATHROW", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, ATHROW)},
	{"CHECKCAST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, CHECKCAST)},
	{"INSTANCEOF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, INSTANCEOF)},
	{"MONITORENTER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, MONITORENTER)},
	{"MONITOREXIT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, MONITOREXIT)},
	{"MULTIANEWARRAY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, MULTIANEWARRAY)},
	{"IFNULL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, IFNULL)},
	{"IFNONNULL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Opcodes, IFNONNULL)},
	{}
};

$ClassInfo _Opcodes_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.org.objectweb.asm.Opcodes",
	nullptr,
	nullptr,
	_Opcodes_FieldInfo_
};

$Object* allocate$Opcodes($Class* clazz) {
	return $of($alloc(Opcodes));
}

$Integer* Opcodes::TOP = nullptr;
$Integer* Opcodes::INTEGER = nullptr;
$Integer* Opcodes::FLOAT = nullptr;
$Integer* Opcodes::DOUBLE = nullptr;
$Integer* Opcodes::LONG = nullptr;
$Integer* Opcodes::NULL = nullptr;
$Integer* Opcodes::UNINITIALIZED_THIS = nullptr;

void clinit$Opcodes($Class* class$) {
	$assignStatic(Opcodes::TOP, $Integer::valueOf($Frame::ITEM_TOP));
	$assignStatic(Opcodes::INTEGER, $Integer::valueOf($Frame::ITEM_INTEGER));
	$assignStatic(Opcodes::FLOAT, $Integer::valueOf($Frame::ITEM_FLOAT));
	$assignStatic(Opcodes::DOUBLE, $Integer::valueOf($Frame::ITEM_DOUBLE));
	$assignStatic(Opcodes::LONG, $Integer::valueOf($Frame::ITEM_LONG));
	$assignStatic(Opcodes::NULL, $Integer::valueOf($Frame::ITEM_NULL));
	$assignStatic(Opcodes::UNINITIALIZED_THIS, $Integer::valueOf($Frame::ITEM_UNINITIALIZED_THIS));
}

$Class* Opcodes::load$($String* name, bool initialize) {
	$loadClass(Opcodes, name, initialize, &_Opcodes_ClassInfo_, clinit$Opcodes, allocate$Opcodes);
	return class$;
}

$Class* Opcodes::class$ = nullptr;

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk