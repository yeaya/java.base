#ifndef _jdk_internal_org_objectweb_asm$_Opcodes_h_
#define _jdk_internal_org_objectweb_asm$_Opcodes_h_
//$ interface jdk.internal.org.objectweb.asm.Opcodes
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("F_NEW")
#undef F_NEW
#pragma push_macro("ACC_ENUM")
#undef ACC_ENUM
#pragma push_macro("POP2")
#undef POP2
#pragma push_macro("MONITORENTER")
#undef MONITORENTER
#pragma push_macro("DUP2")
#undef DUP2
#pragma push_macro("ACC_BRIDGE")
#undef ACC_BRIDGE
#pragma push_macro("FSTORE")
#undef FSTORE
#pragma push_macro("ACC_VARARGS")
#undef ACC_VARARGS
#pragma push_macro("DCONST_0")
#undef DCONST_0
#pragma push_macro("LUSHR")
#undef LUSHR
#pragma push_macro("DCONST_1")
#undef DCONST_1
#pragma push_macro("FRETURN")
#undef FRETURN
#pragma push_macro("FCONST_2")
#undef FCONST_2
#pragma push_macro("F_FULL")
#undef F_FULL
#pragma push_macro("JSR")
#undef JSR
#pragma push_macro("ACC_RECORD")
#undef ACC_RECORD
#pragma push_macro("ACC_SYNTHETIC")
#undef ACC_SYNTHETIC
#pragma push_macro("POP")
#undef POP
#pragma push_macro("ACC_STRICT")
#undef ACC_STRICT
#pragma push_macro("LCONST_1")
#undef LCONST_1
#pragma push_macro("LCONST_0")
#undef LCONST_0
#pragma push_macro("FCONST_0")
#undef FCONST_0
#pragma push_macro("FCONST_1")
#undef FCONST_1
#pragma push_macro("FSUB")
#undef FSUB
#pragma push_macro("INVOKEVIRTUAL")
#undef INVOKEVIRTUAL
#pragma push_macro("DSTORE")
#undef DSTORE
#pragma push_macro("H_PUTSTATIC")
#undef H_PUTSTATIC
#pragma push_macro("ACC_STATIC")
#undef ACC_STATIC
#pragma push_macro("LRETURN")
#undef LRETURN
#pragma push_macro("CALOAD")
#undef CALOAD
#pragma push_macro("ACC_PRIVATE")
#undef ACC_PRIVATE
#pragma push_macro("FDIV")
#undef FDIV
#pragma push_macro("LXOR")
#undef LXOR
#pragma push_macro("ACC_FINAL")
#undef ACC_FINAL
#pragma push_macro("FREM")
#undef FREM
#pragma push_macro("I2B")
#undef I2B
#pragma push_macro("I2D")
#undef I2D
#pragma push_macro("ACONST_NULL")
#undef ACONST_NULL
#pragma push_macro("FADD")
#undef FADD
#pragma push_macro("I2C")
#undef I2C
#pragma push_macro("IF_ACMPNE")
#undef IF_ACMPNE
#pragma push_macro("I2F")
#undef I2F
#pragma push_macro("LONG")
#undef LONG
#pragma push_macro("NEWARRAY")
#undef NEWARRAY
#pragma push_macro("INVOKESTATIC")
#undef INVOKESTATIC
#pragma push_macro("I2L")
#undef I2L
#pragma push_macro("H_NEWINVOKESPECIAL")
#undef H_NEWINVOKESPECIAL
#pragma push_macro("F_SAME")
#undef F_SAME
#pragma push_macro("I2S")
#undef I2S
#pragma push_macro("INVOKEINTERFACE")
#undef INVOKEINTERFACE
#pragma push_macro("LSUB")
#undef LSUB
#pragma push_macro("FASTORE")
#undef FASTORE
#pragma push_macro("RET")
#undef RET
#pragma push_macro("ACC_PROTECTED")
#undef ACC_PROTECTED
#pragma push_macro("ASTORE")
#undef ASTORE
#pragma push_macro("LDIV")
#undef LDIV
#pragma push_macro("ILOAD")
#undef ILOAD
#pragma push_macro("ATHROW")
#undef ATHROW
#pragma push_macro("DNEG")
#undef DNEG
#pragma push_macro("LREM")
#undef LREM
#pragma push_macro("INVOKEDYNAMIC")
#undef INVOKEDYNAMIC
#pragma push_macro("F_SAME1")
#undef F_SAME1
#pragma push_macro("LADD")
#undef LADD
#pragma push_macro("IMUL")
#undef IMUL
#pragma push_macro("IFGE")
#undef IFGE
#pragma push_macro("INTEGER")
#undef INTEGER
#pragma push_macro("T_BYTE")
#undef T_BYTE
#pragma push_macro("INEG")
#undef INEG
#pragma push_macro("TABLESWITCH")
#undef TABLESWITCH
#pragma push_macro("IFEQ")
#undef IFEQ
#pragma push_macro("NOP")
#undef NOP
#pragma push_macro("DASTORE")
#undef DASTORE
#pragma push_macro("LALOAD")
#undef LALOAD
#pragma push_macro("IFNULL")
#undef IFNULL
#pragma push_macro("T_BOOLEAN")
#undef T_BOOLEAN
#pragma push_macro("AASTORE")
#undef AASTORE
#pragma push_macro("ACC_TRANSIENT")
#undef ACC_TRANSIENT
#pragma push_macro("DMUL")
#undef DMUL
#pragma push_macro("ACC_ABSTRACT")
#undef ACC_ABSTRACT
#pragma push_macro("CASTORE")
#undef CASTORE
#pragma push_macro("DLOAD")
#undef DLOAD
#pragma push_macro("T_CHAR")
#undef T_CHAR
#pragma push_macro("RETURN")
#undef RETURN
#pragma push_macro("DUP2_X2")
#undef DUP2_X2
#pragma push_macro("DUP2_X1")
#undef DUP2_X1
#pragma push_macro("FCMPL")
#undef FCMPL
#pragma push_macro("FCMPG")
#undef FCMPG
#pragma push_macro("ACC_TRANSITIVE")
#undef ACC_TRANSITIVE
#pragma push_macro("ACC_SYNCHRONIZED")
#undef ACC_SYNCHRONIZED
#pragma push_macro("ARETURN")
#undef ARETURN
#pragma push_macro("LSHL")
#undef LSHL
#pragma push_macro("IFGT")
#undef IFGT
#pragma push_macro("T_SHORT")
#undef T_SHORT
#pragma push_macro("IAND")
#undef IAND
#pragma push_macro("INVOKESPECIAL")
#undef INVOKESPECIAL
#pragma push_macro("LSHR")
#undef LSHR
#pragma push_macro("IINC")
#undef IINC
#pragma push_macro("H_INVOKESTATIC")
#undef H_INVOKESTATIC
#pragma push_macro("IF_ICMPNE")
#undef IF_ICMPNE
#pragma push_macro("ARRAYLENGTH")
#undef ARRAYLENGTH
#pragma push_macro("ACC_VOLATILE")
#undef ACC_VOLATILE
#pragma push_macro("FALOAD")
#undef FALOAD
#pragma push_macro("IF_ICMPLT")
#undef IF_ICMPLT
#pragma push_macro("PUTSTATIC")
#undef PUTSTATIC
#pragma push_macro("ALOAD")
#undef ALOAD
#pragma push_macro("ISUB")
#undef ISUB
#pragma push_macro("H_INVOKEINTERFACE")
#undef H_INVOKEINTERFACE
#pragma push_macro("ICONST_M1")
#undef ICONST_M1
#pragma push_macro("F2D")
#undef F2D
#pragma push_macro("F2I")
#undef F2I
#pragma push_macro("BASTORE")
#undef BASTORE
#pragma push_macro("F2L")
#undef F2L
#pragma push_macro("ASM7")
#undef ASM7
#pragma push_macro("DALOAD")
#undef DALOAD
#pragma push_macro("ASM8")
#undef ASM8
#pragma push_macro("ASM5")
#undef ASM5
#pragma push_macro("ASM6")
#undef ASM6
#pragma push_macro("ASM4")
#undef ASM4
#pragma push_macro("ASM9_EXPERIMENTAL")
#undef ASM9_EXPERIMENTAL
#pragma push_macro("MULTIANEWARRAY")
#undef MULTIANEWARRAY
#pragma push_macro("BIPUSH")
#undef BIPUSH
#pragma push_macro("LOR")
#undef LOR
#pragma push_macro("IRETURN")
#undef IRETURN
#pragma push_macro("T_LONG")
#undef T_LONG
#pragma push_macro("T_FLOAT")
#undef T_FLOAT
#pragma push_macro("TOP")
#undef TOP
#pragma push_macro("IF_ICMPLE")
#undef IF_ICMPLE
#pragma push_macro("ACC_PUBLIC")
#undef ACC_PUBLIC
#pragma push_macro("GOTO")
#undef GOTO
#pragma push_macro("IFLT")
#undef IFLT
#pragma push_macro("F_APPEND")
#undef F_APPEND
#pragma push_macro("ACC_OPEN")
#undef ACC_OPEN
#pragma push_macro("FNEG")
#undef FNEG
#pragma push_macro("H_PUTFIELD")
#undef H_PUTFIELD
#pragma push_macro("ISTORE")
#undef ISTORE
#pragma push_macro("IF_ACMPEQ")
#undef IF_ACMPEQ
#pragma push_macro("ACC_INTERFACE")
#undef ACC_INTERFACE
#pragma push_macro("DOUBLE")
#undef DOUBLE
#pragma push_macro("LLOAD")
#undef LLOAD
#pragma push_macro("LOOKUPSWITCH")
#undef LOOKUPSWITCH
#pragma push_macro("ICONST_5")
#undef ICONST_5
#pragma push_macro("PUTFIELD")
#undef PUTFIELD
#pragma push_macro("UNINITIALIZED_THIS")
#undef UNINITIALIZED_THIS
#pragma push_macro("SALOAD")
#undef SALOAD
#pragma push_macro("IXOR")
#undef IXOR
#pragma push_macro("ICONST_0")
#undef ICONST_0
#pragma push_macro("ICONST_1")
#undef ICONST_1
#pragma push_macro("IFLE")
#undef IFLE
#pragma push_macro("ICONST_2")
#undef ICONST_2
#pragma push_macro("ICONST_3")
#undef ICONST_3
#pragma push_macro("ACC_NATIVE")
#undef ACC_NATIVE
#pragma push_macro("ICONST_4")
#undef ICONST_4
#pragma push_macro("LCMP")
#undef LCMP
#pragma push_macro("SASTORE")
#undef SASTORE
#pragma push_macro("DSUB")
#undef DSUB
#pragma push_macro("DRETURN")
#undef DRETURN
#pragma push_macro("NEW")
#undef NEW
#pragma push_macro("INSTANCEOF")
#undef INSTANCEOF
#pragma push_macro("LNEG")
#undef LNEG
#pragma push_macro("ISHL")
#undef ISHL
#pragma push_macro("IFNONNULL")
#undef IFNONNULL
#pragma push_macro("LASTORE")
#undef LASTORE
#pragma push_macro("F_CHOP")
#undef F_CHOP
#pragma push_macro("ACC_STATIC_PHASE")
#undef ACC_STATIC_PHASE
#pragma push_macro("DREM")
#undef DREM
#pragma push_macro("ISHR")
#undef ISHR
#pragma push_macro("SOURCE_MASK")
#undef SOURCE_MASK
#pragma push_macro("H_GETFIELD")
#undef H_GETFIELD
#pragma push_macro("D2F")
#undef D2F
#pragma push_macro("D2I")
#undef D2I
#pragma push_macro("ACC_SUPER")
#undef ACC_SUPER
#pragma push_macro("LSTORE")
#undef LSTORE
#pragma push_macro("L2D")
#undef L2D
#pragma push_macro("D2L")
#undef D2L
#pragma push_macro("IF_ICMPGT")
#undef IF_ICMPGT
#pragma push_macro("L2F")
#undef L2F
#pragma push_macro("DADD")
#undef DADD
#pragma push_macro("L2I")
#undef L2I
#pragma push_macro("NULL")
#undef NULL
#pragma push_macro("AALOAD")
#undef AALOAD
#pragma push_macro("T_INT")
#undef T_INT
#pragma push_macro("IDIV")
#undef IDIV
#pragma push_macro("GETFIELD")
#undef GETFIELD
#pragma push_macro("DDIV")
#undef DDIV
#pragma push_macro("IREM")
#undef IREM
#pragma push_macro("SWAP")
#undef SWAP
#pragma push_macro("IFNE")
#undef IFNE
#pragma push_macro("IALOAD")
#undef IALOAD
#pragma push_macro("IADD")
#undef IADD
#pragma push_macro("H_INVOKESPECIAL")
#undef H_INVOKESPECIAL
#pragma push_macro("SIPUSH")
#undef SIPUSH
#pragma push_macro("GETSTATIC")
#undef GETSTATIC
#pragma push_macro("FMUL")
#undef FMUL
#pragma push_macro("ACC_MANDATED")
#undef ACC_MANDATED
#pragma push_macro("T_DOUBLE")
#undef T_DOUBLE
#pragma push_macro("FLOAT")
#undef FLOAT
#pragma push_macro("ANEWARRAY")
#undef ANEWARRAY
#pragma push_macro("ACC_DEPRECATED")
#undef ACC_DEPRECATED
#pragma push_macro("ACC_MODULE")
#undef ACC_MODULE
#pragma push_macro("H_GETSTATIC")
#undef H_GETSTATIC
#pragma push_macro("CHECKCAST")
#undef CHECKCAST
#pragma push_macro("LAND")
#undef LAND
#pragma push_macro("LDC")
#undef LDC
#pragma push_macro("IF_ICMPGE")
#undef IF_ICMPGE
#pragma push_macro("FLOAD")
#undef FLOAD
#pragma push_macro("MONITOREXIT")
#undef MONITOREXIT
#pragma push_macro("IUSHR")
#undef IUSHR
#pragma push_macro("V_PREVIEW")
#undef V_PREVIEW
#pragma push_macro("DUP")
#undef DUP
#pragma push_macro("IASTORE")
#undef IASTORE
#pragma push_macro("DUP_X1")
#undef DUP_X1
#pragma push_macro("DUP_X2")
#undef DUP_X2
#pragma push_macro("IF_ICMPEQ")
#undef IF_ICMPEQ
#pragma push_macro("H_INVOKEVIRTUAL")
#undef H_INVOKEVIRTUAL
#pragma push_macro("IOR")
#undef IOR
#pragma push_macro("BALOAD")
#undef BALOAD
#pragma push_macro("SOURCE_DEPRECATED")
#undef SOURCE_DEPRECATED
#pragma push_macro("DCMPL")
#undef DCMPL
#pragma push_macro("DCMPG")
#undef DCMPG
#pragma push_macro("LMUL")
#undef LMUL
#pragma push_macro("ACC_ANNOTATION")
#undef ACC_ANNOTATION

namespace java {
	namespace lang {
		class Integer;
	}
}

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {

class $import Opcodes : public ::java::lang::Object {
	$interface(Opcodes, 0, ::java::lang::Object)
public:
	static const int32_t ASM4 = 262144; // 4 << 16 | 0 << 8
	static const int32_t ASM5 = 327680; // 5 << 16 | 0 << 8
	static const int32_t ASM6 = 393216; // 6 << 16 | 0 << 8
	static const int32_t ASM7 = 458752; // 7 << 16 | 0 << 8
	static const int32_t ASM8 = 524288; // 8 << 16 | 0 << 8
	static const int32_t ASM9_EXPERIMENTAL = 17367040; // 1 << 24 | 9 << 16 | 0 << 8
	static const int32_t SOURCE_DEPRECATED = 256;
	static const int32_t SOURCE_MASK = SOURCE_DEPRECATED;
	static const int32_t V1_1 = 196653; // 3 << 16 | 45
	static const int32_t V1_2 = 46; // 0 << 16 | 46
	static const int32_t V1_3 = 47; // 0 << 16 | 47
	static const int32_t V1_4 = 48; // 0 << 16 | 48
	static const int32_t V1_5 = 49; // 0 << 16 | 49
	static const int32_t V1_6 = 50; // 0 << 16 | 50
	static const int32_t V1_7 = 51; // 0 << 16 | 51
	static const int32_t V1_8 = 52; // 0 << 16 | 52
	static const int32_t V9 = 53; // 0 << 16 | 53
	static const int32_t V10 = 54; // 0 << 16 | 54
	static const int32_t V11 = 55; // 0 << 16 | 55
	static const int32_t V12 = 56; // 0 << 16 | 56
	static const int32_t V13 = 57; // 0 << 16 | 57
	static const int32_t V14 = 58; // 0 << 16 | 58
	static const int32_t V15 = 59; // 0 << 16 | 59
	static const int32_t V16 = 60; // 0 << 16 | 60
	static const int32_t V17 = 61; // 0 << 16 | 61
	static const int32_t V_PREVIEW = 0xFFFF0000;
	static const int32_t ACC_PUBLIC = 1;
	static const int32_t ACC_PRIVATE = 2;
	static const int32_t ACC_PROTECTED = 4;
	static const int32_t ACC_STATIC = 8;
	static const int32_t ACC_FINAL = 16;
	static const int32_t ACC_SUPER = 32;
	static const int32_t ACC_SYNCHRONIZED = 32;
	static const int32_t ACC_OPEN = 32;
	static const int32_t ACC_TRANSITIVE = 32;
	static const int32_t ACC_VOLATILE = 64;
	static const int32_t ACC_BRIDGE = 64;
	static const int32_t ACC_STATIC_PHASE = 64;
	static const int32_t ACC_VARARGS = 128;
	static const int32_t ACC_TRANSIENT = 128;
	static const int32_t ACC_NATIVE = 256;
	static const int32_t ACC_INTERFACE = 512;
	static const int32_t ACC_ABSTRACT = 1024;
	static const int32_t ACC_STRICT = 2048;
	static const int32_t ACC_SYNTHETIC = 4096;
	static const int32_t ACC_ANNOTATION = 8192;
	static const int32_t ACC_ENUM = 16384;
	static const int32_t ACC_MANDATED = 32768;
	static const int32_t ACC_MODULE = 32768;
	static const int32_t ACC_RECORD = 0x00010000;
	static const int32_t ACC_DEPRECATED = 0x00020000;
	static const int32_t T_BOOLEAN = 4;
	static const int32_t T_CHAR = 5;
	static const int32_t T_FLOAT = 6;
	static const int32_t T_DOUBLE = 7;
	static const int32_t T_BYTE = 8;
	static const int32_t T_SHORT = 9;
	static const int32_t T_INT = 10;
	static const int32_t T_LONG = 11;
	static const int32_t H_GETFIELD = 1;
	static const int32_t H_GETSTATIC = 2;
	static const int32_t H_PUTFIELD = 3;
	static const int32_t H_PUTSTATIC = 4;
	static const int32_t H_INVOKEVIRTUAL = 5;
	static const int32_t H_INVOKESTATIC = 6;
	static const int32_t H_INVOKESPECIAL = 7;
	static const int32_t H_NEWINVOKESPECIAL = 8;
	static const int32_t H_INVOKEINTERFACE = 9;
	static const int32_t F_NEW = (-1);
	static const int32_t F_FULL = 0;
	static const int32_t F_APPEND = 1;
	static const int32_t F_CHOP = 2;
	static const int32_t F_SAME = 3;
	static const int32_t F_SAME1 = 4;
	static ::java::lang::Integer* TOP;
	static ::java::lang::Integer* INTEGER;
	static ::java::lang::Integer* FLOAT;
	static ::java::lang::Integer* DOUBLE;
	static ::java::lang::Integer* LONG;
	static ::java::lang::Integer* NULL;
	static ::java::lang::Integer* UNINITIALIZED_THIS;
	static const int32_t NOP = 0;
	static const int32_t ACONST_NULL = 1;
	static const int32_t ICONST_M1 = 2;
	static const int32_t ICONST_0 = 3;
	static const int32_t ICONST_1 = 4;
	static const int32_t ICONST_2 = 5;
	static const int32_t ICONST_3 = 6;
	static const int32_t ICONST_4 = 7;
	static const int32_t ICONST_5 = 8;
	static const int32_t LCONST_0 = 9;
	static const int32_t LCONST_1 = 10;
	static const int32_t FCONST_0 = 11;
	static const int32_t FCONST_1 = 12;
	static const int32_t FCONST_2 = 13;
	static const int32_t DCONST_0 = 14;
	static const int32_t DCONST_1 = 15;
	static const int32_t BIPUSH = 16;
	static const int32_t SIPUSH = 17;
	static const int32_t LDC = 18;
	static const int32_t ILOAD = 21;
	static const int32_t LLOAD = 22;
	static const int32_t FLOAD = 23;
	static const int32_t DLOAD = 24;
	static const int32_t ALOAD = 25;
	static const int32_t IALOAD = 46;
	static const int32_t LALOAD = 47;
	static const int32_t FALOAD = 48;
	static const int32_t DALOAD = 49;
	static const int32_t AALOAD = 50;
	static const int32_t BALOAD = 51;
	static const int32_t CALOAD = 52;
	static const int32_t SALOAD = 53;
	static const int32_t ISTORE = 54;
	static const int32_t LSTORE = 55;
	static const int32_t FSTORE = 56;
	static const int32_t DSTORE = 57;
	static const int32_t ASTORE = 58;
	static const int32_t IASTORE = 79;
	static const int32_t LASTORE = 80;
	static const int32_t FASTORE = 81;
	static const int32_t DASTORE = 82;
	static const int32_t AASTORE = 83;
	static const int32_t BASTORE = 84;
	static const int32_t CASTORE = 85;
	static const int32_t SASTORE = 86;
	static const int32_t POP = 87;
	static const int32_t POP2 = 88;
	static const int32_t DUP = 89;
	static const int32_t DUP_X1 = 90;
	static const int32_t DUP_X2 = 91;
	static const int32_t DUP2 = 92;
	static const int32_t DUP2_X1 = 93;
	static const int32_t DUP2_X2 = 94;
	static const int32_t SWAP = 95;
	static const int32_t IADD = 96;
	static const int32_t LADD = 97;
	static const int32_t FADD = 98;
	static const int32_t DADD = 99;
	static const int32_t ISUB = 100;
	static const int32_t LSUB = 101;
	static const int32_t FSUB = 102;
	static const int32_t DSUB = 103;
	static const int32_t IMUL = 104;
	static const int32_t LMUL = 105;
	static const int32_t FMUL = 106;
	static const int32_t DMUL = 107;
	static const int32_t IDIV = 108;
	static const int32_t LDIV = 109;
	static const int32_t FDIV = 110;
	static const int32_t DDIV = 111;
	static const int32_t IREM = 112;
	static const int32_t LREM = 113;
	static const int32_t FREM = 114;
	static const int32_t DREM = 115;
	static const int32_t INEG = 116;
	static const int32_t LNEG = 117;
	static const int32_t FNEG = 118;
	static const int32_t DNEG = 119;
	static const int32_t ISHL = 120;
	static const int32_t LSHL = 121;
	static const int32_t ISHR = 122;
	static const int32_t LSHR = 123;
	static const int32_t IUSHR = 124;
	static const int32_t LUSHR = 125;
	static const int32_t IAND = 126;
	static const int32_t LAND = 127;
	static const int32_t IOR = 128;
	static const int32_t LOR = 129;
	static const int32_t IXOR = 130;
	static const int32_t LXOR = 131;
	static const int32_t IINC = 132;
	static const int32_t I2L = 133;
	static const int32_t I2F = 134;
	static const int32_t I2D = 135;
	static const int32_t L2I = 136;
	static const int32_t L2F = 137;
	static const int32_t L2D = 138;
	static const int32_t F2I = 139;
	static const int32_t F2L = 140;
	static const int32_t F2D = 141;
	static const int32_t D2I = 142;
	static const int32_t D2L = 143;
	static const int32_t D2F = 144;
	static const int32_t I2B = 145;
	static const int32_t I2C = 146;
	static const int32_t I2S = 147;
	static const int32_t LCMP = 148;
	static const int32_t FCMPL = 149;
	static const int32_t FCMPG = 150;
	static const int32_t DCMPL = 151;
	static const int32_t DCMPG = 152;
	static const int32_t IFEQ = 153;
	static const int32_t IFNE = 154;
	static const int32_t IFLT = 155;
	static const int32_t IFGE = 156;
	static const int32_t IFGT = 157;
	static const int32_t IFLE = 158;
	static const int32_t IF_ICMPEQ = 159;
	static const int32_t IF_ICMPNE = 160;
	static const int32_t IF_ICMPLT = 161;
	static const int32_t IF_ICMPGE = 162;
	static const int32_t IF_ICMPGT = 163;
	static const int32_t IF_ICMPLE = 164;
	static const int32_t IF_ACMPEQ = 165;
	static const int32_t IF_ACMPNE = 166;
	static const int32_t GOTO = 167;
	static const int32_t JSR = 168;
	static const int32_t RET = 169;
	static const int32_t TABLESWITCH = 170;
	static const int32_t LOOKUPSWITCH = 171;
	static const int32_t IRETURN = 172;
	static const int32_t LRETURN = 173;
	static const int32_t FRETURN = 174;
	static const int32_t DRETURN = 175;
	static const int32_t ARETURN = 176;
	static const int32_t RETURN = 177;
	static const int32_t GETSTATIC = 178;
	static const int32_t PUTSTATIC = 179;
	static const int32_t GETFIELD = 180;
	static const int32_t PUTFIELD = 181;
	static const int32_t INVOKEVIRTUAL = 182;
	static const int32_t INVOKESPECIAL = 183;
	static const int32_t INVOKESTATIC = 184;
	static const int32_t INVOKEINTERFACE = 185;
	static const int32_t INVOKEDYNAMIC = 186;
	static const int32_t NEW = 187;
	static const int32_t NEWARRAY = 188;
	static const int32_t ANEWARRAY = 189;
	static const int32_t ARRAYLENGTH = 190;
	static const int32_t ATHROW = 191;
	static const int32_t CHECKCAST = 192;
	static const int32_t INSTANCEOF = 193;
	static const int32_t MONITORENTER = 194;
	static const int32_t MONITOREXIT = 195;
	static const int32_t MULTIANEWARRAY = 197;
	static const int32_t IFNULL = 198;
	static const int32_t IFNONNULL = 199;
};

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#pragma pop_macro("F_NEW")
#pragma pop_macro("ACC_ENUM")
#pragma pop_macro("POP2")
#pragma pop_macro("MONITORENTER")
#pragma pop_macro("DUP2")
#pragma pop_macro("ACC_BRIDGE")
#pragma pop_macro("FSTORE")
#pragma pop_macro("ACC_VARARGS")
#pragma pop_macro("DCONST_0")
#pragma pop_macro("LUSHR")
#pragma pop_macro("DCONST_1")
#pragma pop_macro("FRETURN")
#pragma pop_macro("FCONST_2")
#pragma pop_macro("F_FULL")
#pragma pop_macro("JSR")
#pragma pop_macro("ACC_RECORD")
#pragma pop_macro("ACC_SYNTHETIC")
#pragma pop_macro("POP")
#pragma pop_macro("ACC_STRICT")
#pragma pop_macro("LCONST_1")
#pragma pop_macro("LCONST_0")
#pragma pop_macro("FCONST_0")
#pragma pop_macro("FCONST_1")
#pragma pop_macro("FSUB")
#pragma pop_macro("INVOKEVIRTUAL")
#pragma pop_macro("DSTORE")
#pragma pop_macro("H_PUTSTATIC")
#pragma pop_macro("ACC_STATIC")
#pragma pop_macro("LRETURN")
#pragma pop_macro("CALOAD")
#pragma pop_macro("ACC_PRIVATE")
#pragma pop_macro("FDIV")
#pragma pop_macro("LXOR")
#pragma pop_macro("ACC_FINAL")
#pragma pop_macro("FREM")
#pragma pop_macro("I2B")
#pragma pop_macro("I2D")
#pragma pop_macro("ACONST_NULL")
#pragma pop_macro("FADD")
#pragma pop_macro("I2C")
#pragma pop_macro("IF_ACMPNE")
#pragma pop_macro("I2F")
#pragma pop_macro("LONG")
#pragma pop_macro("NEWARRAY")
#pragma pop_macro("INVOKESTATIC")
#pragma pop_macro("I2L")
#pragma pop_macro("H_NEWINVOKESPECIAL")
#pragma pop_macro("F_SAME")
#pragma pop_macro("I2S")
#pragma pop_macro("INVOKEINTERFACE")
#pragma pop_macro("LSUB")
#pragma pop_macro("FASTORE")
#pragma pop_macro("RET")
#pragma pop_macro("ACC_PROTECTED")
#pragma pop_macro("ASTORE")
#pragma pop_macro("LDIV")
#pragma pop_macro("ILOAD")
#pragma pop_macro("ATHROW")
#pragma pop_macro("DNEG")
#pragma pop_macro("LREM")
#pragma pop_macro("INVOKEDYNAMIC")
#pragma pop_macro("F_SAME1")
#pragma pop_macro("LADD")
#pragma pop_macro("IMUL")
#pragma pop_macro("IFGE")
#pragma pop_macro("INTEGER")
#pragma pop_macro("T_BYTE")
#pragma pop_macro("INEG")
#pragma pop_macro("TABLESWITCH")
#pragma pop_macro("IFEQ")
#pragma pop_macro("NOP")
#pragma pop_macro("DASTORE")
#pragma pop_macro("LALOAD")
#pragma pop_macro("IFNULL")
#pragma pop_macro("T_BOOLEAN")
#pragma pop_macro("AASTORE")
#pragma pop_macro("ACC_TRANSIENT")
#pragma pop_macro("DMUL")
#pragma pop_macro("ACC_ABSTRACT")
#pragma pop_macro("CASTORE")
#pragma pop_macro("DLOAD")
#pragma pop_macro("T_CHAR")
#pragma pop_macro("RETURN")
#pragma pop_macro("DUP2_X2")
#pragma pop_macro("DUP2_X1")
#pragma pop_macro("FCMPL")
#pragma pop_macro("FCMPG")
#pragma pop_macro("ACC_TRANSITIVE")
#pragma pop_macro("ACC_SYNCHRONIZED")
#pragma pop_macro("ARETURN")
#pragma pop_macro("LSHL")
#pragma pop_macro("IFGT")
#pragma pop_macro("T_SHORT")
#pragma pop_macro("IAND")
#pragma pop_macro("INVOKESPECIAL")
#pragma pop_macro("LSHR")
#pragma pop_macro("IINC")
#pragma pop_macro("H_INVOKESTATIC")
#pragma pop_macro("IF_ICMPNE")
#pragma pop_macro("ARRAYLENGTH")
#pragma pop_macro("ACC_VOLATILE")
#pragma pop_macro("FALOAD")
#pragma pop_macro("IF_ICMPLT")
#pragma pop_macro("PUTSTATIC")
#pragma pop_macro("ALOAD")
#pragma pop_macro("ISUB")
#pragma pop_macro("H_INVOKEINTERFACE")
#pragma pop_macro("ICONST_M1")
#pragma pop_macro("F2D")
#pragma pop_macro("F2I")
#pragma pop_macro("BASTORE")
#pragma pop_macro("F2L")
#pragma pop_macro("ASM7")
#pragma pop_macro("DALOAD")
#pragma pop_macro("ASM8")
#pragma pop_macro("ASM5")
#pragma pop_macro("ASM6")
#pragma pop_macro("ASM4")
#pragma pop_macro("ASM9_EXPERIMENTAL")
#pragma pop_macro("MULTIANEWARRAY")
#pragma pop_macro("BIPUSH")
#pragma pop_macro("LOR")
#pragma pop_macro("IRETURN")
#pragma pop_macro("T_LONG")
#pragma pop_macro("T_FLOAT")
#pragma pop_macro("TOP")
#pragma pop_macro("IF_ICMPLE")
#pragma pop_macro("ACC_PUBLIC")
#pragma pop_macro("GOTO")
#pragma pop_macro("IFLT")
#pragma pop_macro("F_APPEND")
#pragma pop_macro("ACC_OPEN")
#pragma pop_macro("FNEG")
#pragma pop_macro("H_PUTFIELD")
#pragma pop_macro("ISTORE")
#pragma pop_macro("IF_ACMPEQ")
#pragma pop_macro("ACC_INTERFACE")
#pragma pop_macro("DOUBLE")
#pragma pop_macro("LLOAD")
#pragma pop_macro("LOOKUPSWITCH")
#pragma pop_macro("ICONST_5")
#pragma pop_macro("PUTFIELD")
#pragma pop_macro("UNINITIALIZED_THIS")
#pragma pop_macro("SALOAD")
#pragma pop_macro("IXOR")
#pragma pop_macro("ICONST_0")
#pragma pop_macro("ICONST_1")
#pragma pop_macro("IFLE")
#pragma pop_macro("ICONST_2")
#pragma pop_macro("ICONST_3")
#pragma pop_macro("ACC_NATIVE")
#pragma pop_macro("ICONST_4")
#pragma pop_macro("LCMP")
#pragma pop_macro("SASTORE")
#pragma pop_macro("DSUB")
#pragma pop_macro("DRETURN")
#pragma pop_macro("NEW")
#pragma pop_macro("INSTANCEOF")
#pragma pop_macro("LNEG")
#pragma pop_macro("ISHL")
#pragma pop_macro("IFNONNULL")
#pragma pop_macro("LASTORE")
#pragma pop_macro("F_CHOP")
#pragma pop_macro("ACC_STATIC_PHASE")
#pragma pop_macro("DREM")
#pragma pop_macro("ISHR")
#pragma pop_macro("SOURCE_MASK")
#pragma pop_macro("H_GETFIELD")
#pragma pop_macro("D2F")
#pragma pop_macro("D2I")
#pragma pop_macro("ACC_SUPER")
#pragma pop_macro("LSTORE")
#pragma pop_macro("L2D")
#pragma pop_macro("D2L")
#pragma pop_macro("IF_ICMPGT")
#pragma pop_macro("L2F")
#pragma pop_macro("DADD")
#pragma pop_macro("L2I")
#pragma pop_macro("NULL")
#pragma pop_macro("AALOAD")
#pragma pop_macro("T_INT")
#pragma pop_macro("IDIV")
#pragma pop_macro("GETFIELD")
#pragma pop_macro("DDIV")
#pragma pop_macro("IREM")
#pragma pop_macro("SWAP")
#pragma pop_macro("IFNE")
#pragma pop_macro("IALOAD")
#pragma pop_macro("IADD")
#pragma pop_macro("H_INVOKESPECIAL")
#pragma pop_macro("SIPUSH")
#pragma pop_macro("GETSTATIC")
#pragma pop_macro("FMUL")
#pragma pop_macro("ACC_MANDATED")
#pragma pop_macro("T_DOUBLE")
#pragma pop_macro("FLOAT")
#pragma pop_macro("ANEWARRAY")
#pragma pop_macro("ACC_DEPRECATED")
#pragma pop_macro("ACC_MODULE")
#pragma pop_macro("H_GETSTATIC")
#pragma pop_macro("CHECKCAST")
#pragma pop_macro("LAND")
#pragma pop_macro("LDC")
#pragma pop_macro("IF_ICMPGE")
#pragma pop_macro("FLOAD")
#pragma pop_macro("MONITOREXIT")
#pragma pop_macro("IUSHR")
#pragma pop_macro("V_PREVIEW")
#pragma pop_macro("DUP")
#pragma pop_macro("IASTORE")
#pragma pop_macro("DUP_X1")
#pragma pop_macro("DUP_X2")
#pragma pop_macro("IF_ICMPEQ")
#pragma pop_macro("H_INVOKEVIRTUAL")
#pragma pop_macro("IOR")
#pragma pop_macro("BALOAD")
#pragma pop_macro("SOURCE_DEPRECATED")
#pragma pop_macro("DCMPL")
#pragma pop_macro("DCMPG")
#pragma pop_macro("LMUL")
#pragma pop_macro("ACC_ANNOTATION")

#endif // _jdk_internal_org_objectweb_asm$_Opcodes_h_