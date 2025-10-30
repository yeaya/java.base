#include <jdk/internal/org/objectweb/asm/commons/InstructionAdapter.h>

#include <java/lang/IllegalStateException.h>
#include <java/lang/UnsupportedOperationException.h>
#include <jdk/internal/org/objectweb/asm/ConstantDynamic.h>
#include <jdk/internal/org/objectweb/asm/Handle.h>
#include <jdk/internal/org/objectweb/asm/Label.h>
#include <jdk/internal/org/objectweb/asm/MethodVisitor.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/Type.h>
#include <jcpp.h>

#undef AALOAD
#undef AASTORE
#undef ACONST_NULL
#undef ALOAD
#undef ANEWARRAY
#undef ARETURN
#undef ARRAYLENGTH
#undef ASM5
#undef ASM7
#undef ASM8
#undef ASTORE
#undef ATHROW
#undef BALOAD
#undef BASTORE
#undef BIPUSH
#undef BOOLEAN
#undef BOOLEAN_TYPE
#undef BYTE
#undef BYTE_TYPE
#undef CALOAD
#undef CASTORE
#undef CHAR
#undef CHAR_TYPE
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
#undef DOUBLE_TYPE
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
#undef FLOAT_TYPE
#undef FMUL
#undef FNEG
#undef FREM
#undef FRETURN
#undef FSTORE
#undef FSUB
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
#undef ILOAD
#undef IMUL
#undef INEG
#undef INSTANCEOF
#undef INT
#undef INT_TYPE
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
#undef LDIV
#undef LLOAD
#undef LMUL
#undef LNEG
#undef LONG
#undef LONG_TYPE
#undef LOR
#undef LREM
#undef LRETURN
#undef LSHL
#undef LSHR
#undef LSTORE
#undef LSUB
#undef LUSHR
#undef LXOR
#undef MAX_VALUE
#undef METHOD
#undef MIN_VALUE
#undef MONITORENTER
#undef MONITOREXIT
#undef NEW
#undef NEWARRAY
#undef NOP
#undef OBJECT_TYPE
#undef POP
#undef POP2
#undef PUTFIELD
#undef PUTSTATIC
#undef RET
#undef RETURN
#undef SALOAD
#undef SASTORE
#undef SHORT
#undef SHORT_TYPE
#undef SIPUSH
#undef SOURCE_DEPRECATED
#undef SOURCE_MASK
#undef SWAP
#undef T_BOOLEAN
#undef T_BYTE
#undef T_CHAR
#undef T_DOUBLE
#undef T_FLOAT
#undef T_INT
#undef T_LONG
#undef T_SHORT
#undef VOID_TYPE

using $LabelArray = $Array<::jdk::internal::org::objectweb::asm$::Label>;
using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $ConstantDynamic = ::jdk::internal::org::objectweb::asm$::ConstantDynamic;
using $Handle = ::jdk::internal::org::objectweb::asm$::Handle;
using $Label = ::jdk::internal::org::objectweb::asm$::Label;
using $MethodVisitor = ::jdk::internal::org::objectweb::asm$::MethodVisitor;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $Type = ::jdk::internal::org::objectweb::asm$::Type;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace commons {

$CompoundAttribute _InstructionAdapter_MethodAnnotations_invokespecial51[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _InstructionAdapter_MethodAnnotations_invokestatic53[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _InstructionAdapter_MethodAnnotations_invokevirtual55[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _InstructionAdapter_FieldInfo_[] = {
	{"OBJECT_TYPE", "Ljdk/internal/org/objectweb/asm/Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionAdapter, OBJECT_TYPE)},
	{}
};

$MethodInfo _InstructionAdapter_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/org/objectweb/asm/MethodVisitor;)V", nullptr, $PUBLIC, $method(static_cast<void(InstructionAdapter::*)($MethodVisitor*)>(&InstructionAdapter::init$))},
	{"<init>", "(ILjdk/internal/org/objectweb/asm/MethodVisitor;)V", nullptr, $PROTECTED, $method(static_cast<void(InstructionAdapter::*)(int32_t,$MethodVisitor*)>(&InstructionAdapter::init$))},
	{"aconst", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"add", "(Ljdk/internal/org/objectweb/asm/Type;)V", nullptr, $PUBLIC},
	{"aload", "(Ljdk/internal/org/objectweb/asm/Type;)V", nullptr, $PUBLIC},
	{"and", "(Ljdk/internal/org/objectweb/asm/Type;)V", nullptr, $PUBLIC},
	{"anew", "(Ljdk/internal/org/objectweb/asm/Type;)V", nullptr, $PUBLIC},
	{"areturn", "(Ljdk/internal/org/objectweb/asm/Type;)V", nullptr, $PUBLIC},
	{"arraylength", "()V", nullptr, $PUBLIC},
	{"astore", "(Ljdk/internal/org/objectweb/asm/Type;)V", nullptr, $PUBLIC},
	{"athrow", "()V", nullptr, $PUBLIC},
	{"cast", "(Ljdk/internal/org/objectweb/asm/Type;Ljdk/internal/org/objectweb/asm/Type;)V", nullptr, $PUBLIC},
	{"cast", "(Ljdk/internal/org/objectweb/asm/MethodVisitor;Ljdk/internal/org/objectweb/asm/Type;Ljdk/internal/org/objectweb/asm/Type;)V", nullptr, $STATIC, $method(static_cast<void(*)($MethodVisitor*,$Type*,$Type*)>(&InstructionAdapter::cast))},
	{"cconst", "(Ljdk/internal/org/objectweb/asm/ConstantDynamic;)V", nullptr, $PUBLIC},
	{"checkcast", "(Ljdk/internal/org/objectweb/asm/Type;)V", nullptr, $PUBLIC},
	{"cmpg", "(Ljdk/internal/org/objectweb/asm/Type;)V", nullptr, $PUBLIC},
	{"cmpl", "(Ljdk/internal/org/objectweb/asm/Type;)V", nullptr, $PUBLIC},
	{"dconst", "(D)V", nullptr, $PUBLIC},
	{"div", "(Ljdk/internal/org/objectweb/asm/Type;)V", nullptr, $PUBLIC},
	{"dup", "()V", nullptr, $PUBLIC},
	{"dup2", "()V", nullptr, $PUBLIC},
	{"dup2X1", "()V", nullptr, $PUBLIC},
	{"dup2X2", "()V", nullptr, $PUBLIC},
	{"dupX1", "()V", nullptr, $PUBLIC},
	{"dupX2", "()V", nullptr, $PUBLIC},
	{"fconst", "(F)V", nullptr, $PUBLIC},
	{"getfield", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"getstatic", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"goTo", "(Ljdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC},
	{"hconst", "(Ljdk/internal/org/objectweb/asm/Handle;)V", nullptr, $PUBLIC},
	{"iconst", "(I)V", nullptr, $PUBLIC},
	{"ifacmpeq", "(Ljdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC},
	{"ifacmpne", "(Ljdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC},
	{"ifeq", "(Ljdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC},
	{"ifge", "(Ljdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC},
	{"ifgt", "(Ljdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC},
	{"ificmpeq", "(Ljdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC},
	{"ificmpge", "(Ljdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC},
	{"ificmpgt", "(Ljdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC},
	{"ificmple", "(Ljdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC},
	{"ificmplt", "(Ljdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC},
	{"ificmpne", "(Ljdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC},
	{"ifle", "(Ljdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC},
	{"iflt", "(Ljdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC},
	{"ifne", "(Ljdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC},
	{"ifnonnull", "(Ljdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC},
	{"ifnull", "(Ljdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC},
	{"iinc", "(II)V", nullptr, $PUBLIC},
	{"instanceOf", "(Ljdk/internal/org/objectweb/asm/Type;)V", nullptr, $PUBLIC},
	{"invokedynamic", "(Ljava/lang/String;Ljava/lang/String;Ljdk/internal/org/objectweb/asm/Handle;[Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"invokeinterface", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"invokespecial", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _InstructionAdapter_MethodAnnotations_invokespecial51},
	{"invokespecial", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PUBLIC},
	{"invokestatic", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _InstructionAdapter_MethodAnnotations_invokestatic53},
	{"invokestatic", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PUBLIC},
	{"invokevirtual", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _InstructionAdapter_MethodAnnotations_invokevirtual55},
	{"invokevirtual", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PUBLIC},
	{"jsr", "(Ljdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC},
	{"lcmp", "()V", nullptr, $PUBLIC},
	{"lconst", "(J)V", nullptr, $PUBLIC},
	{"load", "(ILjdk/internal/org/objectweb/asm/Type;)V", nullptr, $PUBLIC},
	{"lookupswitch", "(Ljdk/internal/org/objectweb/asm/Label;[I[Ljdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC},
	{"mark", "(Ljdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC},
	{"monitorenter", "()V", nullptr, $PUBLIC},
	{"monitorexit", "()V", nullptr, $PUBLIC},
	{"mul", "(Ljdk/internal/org/objectweb/asm/Type;)V", nullptr, $PUBLIC},
	{"multianewarray", "(Ljava/lang/String;I)V", nullptr, $PUBLIC},
	{"neg", "(Ljdk/internal/org/objectweb/asm/Type;)V", nullptr, $PUBLIC},
	{"newarray", "(Ljdk/internal/org/objectweb/asm/Type;)V", nullptr, $PUBLIC},
	{"newarray", "(Ljdk/internal/org/objectweb/asm/MethodVisitor;Ljdk/internal/org/objectweb/asm/Type;)V", nullptr, $STATIC, $method(static_cast<void(*)($MethodVisitor*,$Type*)>(&InstructionAdapter::newarray))},
	{"nop", "()V", nullptr, $PUBLIC},
	{"or", "(Ljdk/internal/org/objectweb/asm/Type;)V", nullptr, $PUBLIC},
	{"pop", "()V", nullptr, $PUBLIC},
	{"pop2", "()V", nullptr, $PUBLIC},
	{"putfield", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"putstatic", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"rem", "(Ljdk/internal/org/objectweb/asm/Type;)V", nullptr, $PUBLIC},
	{"ret", "(I)V", nullptr, $PUBLIC},
	{"shl", "(Ljdk/internal/org/objectweb/asm/Type;)V", nullptr, $PUBLIC},
	{"shr", "(Ljdk/internal/org/objectweb/asm/Type;)V", nullptr, $PUBLIC},
	{"store", "(ILjdk/internal/org/objectweb/asm/Type;)V", nullptr, $PUBLIC},
	{"sub", "(Ljdk/internal/org/objectweb/asm/Type;)V", nullptr, $PUBLIC},
	{"swap", "()V", nullptr, $PUBLIC},
	{"tableswitch", "(IILjdk/internal/org/objectweb/asm/Label;[Ljdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC | $TRANSIENT},
	{"tconst", "(Ljdk/internal/org/objectweb/asm/Type;)V", nullptr, $PUBLIC},
	{"ushr", "(Ljdk/internal/org/objectweb/asm/Type;)V", nullptr, $PUBLIC},
	{"visitFieldInsn", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"visitIincInsn", "(II)V", nullptr, $PUBLIC},
	{"visitInsn", "(I)V", nullptr, $PUBLIC},
	{"visitIntInsn", "(II)V", nullptr, $PUBLIC},
	{"visitInvokeDynamicInsn", "(Ljava/lang/String;Ljava/lang/String;Ljdk/internal/org/objectweb/asm/Handle;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT},
	{"visitJumpInsn", "(ILjdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC},
	{"visitLabel", "(Ljdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC},
	{"visitLdcInsn", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"visitLookupSwitchInsn", "(Ljdk/internal/org/objectweb/asm/Label;[I[Ljdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC},
	{"visitMethodInsn", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PUBLIC},
	{"visitMultiANewArrayInsn", "(Ljava/lang/String;I)V", nullptr, $PUBLIC},
	{"visitTableSwitchInsn", "(IILjdk/internal/org/objectweb/asm/Label;[Ljdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC | $TRANSIENT},
	{"visitTypeInsn", "(ILjava/lang/String;)V", nullptr, $PUBLIC},
	{"visitVarInsn", "(II)V", nullptr, $PUBLIC},
	{"xor", "(Ljdk/internal/org/objectweb/asm/Type;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _InstructionAdapter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.commons.InstructionAdapter",
	"jdk.internal.org.objectweb.asm.MethodVisitor",
	nullptr,
	_InstructionAdapter_FieldInfo_,
	_InstructionAdapter_MethodInfo_
};

$Object* allocate$InstructionAdapter($Class* clazz) {
	return $of($alloc(InstructionAdapter));
}

$Type* InstructionAdapter::OBJECT_TYPE = nullptr;

void InstructionAdapter::init$($MethodVisitor* methodVisitor) {
	InstructionAdapter::init$($Opcodes::ASM8, methodVisitor);
	if ($of(this)->getClass() != InstructionAdapter::class$) {
		$throwNew($IllegalStateException);
	}
}

void InstructionAdapter::init$(int32_t api, $MethodVisitor* methodVisitor) {
	$MethodVisitor::init$(api, methodVisitor);
}

void InstructionAdapter::visitInsn(int32_t opcode) {
	switch (opcode) {
	case $Opcodes::NOP:
		{
			nop();
			break;
		}
	case $Opcodes::ACONST_NULL:
		{
			aconst(nullptr);
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
		{
			iconst(opcode - $Opcodes::ICONST_0);
			break;
		}
	case $Opcodes::LCONST_0:
		{}
	case $Opcodes::LCONST_1:
		{
			lconst((int64_t)(opcode - $Opcodes::LCONST_0));
			break;
		}
	case $Opcodes::FCONST_0:
		{}
	case $Opcodes::FCONST_1:
		{}
	case $Opcodes::FCONST_2:
		{
			fconst((float)(opcode - $Opcodes::FCONST_0));
			break;
		}
	case $Opcodes::DCONST_0:
		{}
	case $Opcodes::DCONST_1:
		{
			dconst((double)(opcode - $Opcodes::DCONST_0));
			break;
		}
	case $Opcodes::IALOAD:
		{
			$init($Type);
			aload($Type::INT_TYPE);
			break;
		}
	case $Opcodes::LALOAD:
		{
			$init($Type);
			aload($Type::LONG_TYPE);
			break;
		}
	case $Opcodes::FALOAD:
		{
			$init($Type);
			aload($Type::FLOAT_TYPE);
			break;
		}
	case $Opcodes::DALOAD:
		{
			$init($Type);
			aload($Type::DOUBLE_TYPE);
			break;
		}
	case $Opcodes::AALOAD:
		{
			aload(InstructionAdapter::OBJECT_TYPE);
			break;
		}
	case $Opcodes::BALOAD:
		{
			$init($Type);
			aload($Type::BYTE_TYPE);
			break;
		}
	case $Opcodes::CALOAD:
		{
			$init($Type);
			aload($Type::CHAR_TYPE);
			break;
		}
	case $Opcodes::SALOAD:
		{
			$init($Type);
			aload($Type::SHORT_TYPE);
			break;
		}
	case $Opcodes::IASTORE:
		{
			$init($Type);
			astore($Type::INT_TYPE);
			break;
		}
	case $Opcodes::LASTORE:
		{
			$init($Type);
			astore($Type::LONG_TYPE);
			break;
		}
	case $Opcodes::FASTORE:
		{
			$init($Type);
			astore($Type::FLOAT_TYPE);
			break;
		}
	case $Opcodes::DASTORE:
		{
			$init($Type);
			astore($Type::DOUBLE_TYPE);
			break;
		}
	case $Opcodes::AASTORE:
		{
			astore(InstructionAdapter::OBJECT_TYPE);
			break;
		}
	case $Opcodes::BASTORE:
		{
			$init($Type);
			astore($Type::BYTE_TYPE);
			break;
		}
	case $Opcodes::CASTORE:
		{
			$init($Type);
			astore($Type::CHAR_TYPE);
			break;
		}
	case $Opcodes::SASTORE:
		{
			$init($Type);
			astore($Type::SHORT_TYPE);
			break;
		}
	case $Opcodes::POP:
		{
			pop();
			break;
		}
	case $Opcodes::POP2:
		{
			pop2();
			break;
		}
	case $Opcodes::DUP:
		{
			dup();
			break;
		}
	case $Opcodes::DUP_X1:
		{
			dupX1();
			break;
		}
	case $Opcodes::DUP_X2:
		{
			dupX2();
			break;
		}
	case $Opcodes::DUP2:
		{
			dup2();
			break;
		}
	case $Opcodes::DUP2_X1:
		{
			dup2X1();
			break;
		}
	case $Opcodes::DUP2_X2:
		{
			dup2X2();
			break;
		}
	case $Opcodes::SWAP:
		{
			swap();
			break;
		}
	case $Opcodes::IADD:
		{
			$init($Type);
			add($Type::INT_TYPE);
			break;
		}
	case $Opcodes::LADD:
		{
			$init($Type);
			add($Type::LONG_TYPE);
			break;
		}
	case $Opcodes::FADD:
		{
			$init($Type);
			add($Type::FLOAT_TYPE);
			break;
		}
	case $Opcodes::DADD:
		{
			$init($Type);
			add($Type::DOUBLE_TYPE);
			break;
		}
	case $Opcodes::ISUB:
		{
			$init($Type);
			sub($Type::INT_TYPE);
			break;
		}
	case $Opcodes::LSUB:
		{
			$init($Type);
			sub($Type::LONG_TYPE);
			break;
		}
	case $Opcodes::FSUB:
		{
			$init($Type);
			sub($Type::FLOAT_TYPE);
			break;
		}
	case $Opcodes::DSUB:
		{
			$init($Type);
			sub($Type::DOUBLE_TYPE);
			break;
		}
	case $Opcodes::IMUL:
		{
			$init($Type);
			mul($Type::INT_TYPE);
			break;
		}
	case $Opcodes::LMUL:
		{
			$init($Type);
			mul($Type::LONG_TYPE);
			break;
		}
	case $Opcodes::FMUL:
		{
			$init($Type);
			mul($Type::FLOAT_TYPE);
			break;
		}
	case $Opcodes::DMUL:
		{
			$init($Type);
			mul($Type::DOUBLE_TYPE);
			break;
		}
	case $Opcodes::IDIV:
		{
			$init($Type);
			div($Type::INT_TYPE);
			break;
		}
	case $Opcodes::LDIV:
		{
			$init($Type);
			div($Type::LONG_TYPE);
			break;
		}
	case $Opcodes::FDIV:
		{
			$init($Type);
			div($Type::FLOAT_TYPE);
			break;
		}
	case $Opcodes::DDIV:
		{
			$init($Type);
			div($Type::DOUBLE_TYPE);
			break;
		}
	case $Opcodes::IREM:
		{
			$init($Type);
			rem($Type::INT_TYPE);
			break;
		}
	case $Opcodes::LREM:
		{
			$init($Type);
			rem($Type::LONG_TYPE);
			break;
		}
	case $Opcodes::FREM:
		{
			$init($Type);
			rem($Type::FLOAT_TYPE);
			break;
		}
	case $Opcodes::DREM:
		{
			$init($Type);
			rem($Type::DOUBLE_TYPE);
			break;
		}
	case $Opcodes::INEG:
		{
			$init($Type);
			neg($Type::INT_TYPE);
			break;
		}
	case $Opcodes::LNEG:
		{
			$init($Type);
			neg($Type::LONG_TYPE);
			break;
		}
	case $Opcodes::FNEG:
		{
			$init($Type);
			neg($Type::FLOAT_TYPE);
			break;
		}
	case $Opcodes::DNEG:
		{
			$init($Type);
			neg($Type::DOUBLE_TYPE);
			break;
		}
	case $Opcodes::ISHL:
		{
			$init($Type);
			shl($Type::INT_TYPE);
			break;
		}
	case $Opcodes::LSHL:
		{
			$init($Type);
			shl($Type::LONG_TYPE);
			break;
		}
	case $Opcodes::ISHR:
		{
			$init($Type);
			shr($Type::INT_TYPE);
			break;
		}
	case $Opcodes::LSHR:
		{
			$init($Type);
			shr($Type::LONG_TYPE);
			break;
		}
	case $Opcodes::IUSHR:
		{
			$init($Type);
			ushr($Type::INT_TYPE);
			break;
		}
	case $Opcodes::LUSHR:
		{
			$init($Type);
			ushr($Type::LONG_TYPE);
			break;
		}
	case $Opcodes::IAND:
		{
			$init($Type);
			and$($Type::INT_TYPE);
			break;
		}
	case $Opcodes::LAND:
		{
			$init($Type);
			and$($Type::LONG_TYPE);
			break;
		}
	case $Opcodes::IOR:
		{
			$init($Type);
			or$($Type::INT_TYPE);
			break;
		}
	case $Opcodes::LOR:
		{
			$init($Type);
			or$($Type::LONG_TYPE);
			break;
		}
	case $Opcodes::IXOR:
		{
			$init($Type);
			xor$($Type::INT_TYPE);
			break;
		}
	case $Opcodes::LXOR:
		{
			$init($Type);
			xor$($Type::LONG_TYPE);
			break;
		}
	case $Opcodes::I2L:
		{
			$init($Type);
			cast($Type::INT_TYPE, $Type::LONG_TYPE);
			break;
		}
	case $Opcodes::I2F:
		{
			$init($Type);
			cast($Type::INT_TYPE, $Type::FLOAT_TYPE);
			break;
		}
	case $Opcodes::I2D:
		{
			$init($Type);
			cast($Type::INT_TYPE, $Type::DOUBLE_TYPE);
			break;
		}
	case $Opcodes::L2I:
		{
			$init($Type);
			cast($Type::LONG_TYPE, $Type::INT_TYPE);
			break;
		}
	case $Opcodes::L2F:
		{
			$init($Type);
			cast($Type::LONG_TYPE, $Type::FLOAT_TYPE);
			break;
		}
	case $Opcodes::L2D:
		{
			$init($Type);
			cast($Type::LONG_TYPE, $Type::DOUBLE_TYPE);
			break;
		}
	case $Opcodes::F2I:
		{
			$init($Type);
			cast($Type::FLOAT_TYPE, $Type::INT_TYPE);
			break;
		}
	case $Opcodes::F2L:
		{
			$init($Type);
			cast($Type::FLOAT_TYPE, $Type::LONG_TYPE);
			break;
		}
	case $Opcodes::F2D:
		{
			$init($Type);
			cast($Type::FLOAT_TYPE, $Type::DOUBLE_TYPE);
			break;
		}
	case $Opcodes::D2I:
		{
			$init($Type);
			cast($Type::DOUBLE_TYPE, $Type::INT_TYPE);
			break;
		}
	case $Opcodes::D2L:
		{
			$init($Type);
			cast($Type::DOUBLE_TYPE, $Type::LONG_TYPE);
			break;
		}
	case $Opcodes::D2F:
		{
			$init($Type);
			cast($Type::DOUBLE_TYPE, $Type::FLOAT_TYPE);
			break;
		}
	case $Opcodes::I2B:
		{
			$init($Type);
			cast($Type::INT_TYPE, $Type::BYTE_TYPE);
			break;
		}
	case $Opcodes::I2C:
		{
			$init($Type);
			cast($Type::INT_TYPE, $Type::CHAR_TYPE);
			break;
		}
	case $Opcodes::I2S:
		{
			$init($Type);
			cast($Type::INT_TYPE, $Type::SHORT_TYPE);
			break;
		}
	case $Opcodes::LCMP:
		{
			lcmp();
			break;
		}
	case $Opcodes::FCMPL:
		{
			$init($Type);
			cmpl($Type::FLOAT_TYPE);
			break;
		}
	case $Opcodes::FCMPG:
		{
			$init($Type);
			cmpg($Type::FLOAT_TYPE);
			break;
		}
	case $Opcodes::DCMPL:
		{
			$init($Type);
			cmpl($Type::DOUBLE_TYPE);
			break;
		}
	case $Opcodes::DCMPG:
		{
			$init($Type);
			cmpg($Type::DOUBLE_TYPE);
			break;
		}
	case $Opcodes::IRETURN:
		{
			$init($Type);
			areturn($Type::INT_TYPE);
			break;
		}
	case $Opcodes::LRETURN:
		{
			$init($Type);
			areturn($Type::LONG_TYPE);
			break;
		}
	case $Opcodes::FRETURN:
		{
			$init($Type);
			areturn($Type::FLOAT_TYPE);
			break;
		}
	case $Opcodes::DRETURN:
		{
			$init($Type);
			areturn($Type::DOUBLE_TYPE);
			break;
		}
	case $Opcodes::ARETURN:
		{
			areturn(InstructionAdapter::OBJECT_TYPE);
			break;
		}
	case $Opcodes::RETURN:
		{
			$init($Type);
			areturn($Type::VOID_TYPE);
			break;
		}
	case $Opcodes::ARRAYLENGTH:
		{
			arraylength();
			break;
		}
	case $Opcodes::ATHROW:
		{
			athrow();
			break;
		}
	case $Opcodes::MONITORENTER:
		{
			monitorenter();
			break;
		}
	case $Opcodes::MONITOREXIT:
		{
			monitorexit();
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException);
		}
	}
}

void InstructionAdapter::visitIntInsn(int32_t opcode, int32_t operand) {
	switch (opcode) {
	case $Opcodes::BIPUSH:
		{
			iconst(operand);
			break;
		}
	case $Opcodes::SIPUSH:
		{
			iconst(operand);
			break;
		}
	case $Opcodes::NEWARRAY:
		{
			switch (operand) {
			case $Opcodes::T_BOOLEAN:
				{
					$init($Type);
					newarray($Type::BOOLEAN_TYPE);
					break;
				}
			case $Opcodes::T_CHAR:
				{
					$init($Type);
					newarray($Type::CHAR_TYPE);
					break;
				}
			case $Opcodes::T_BYTE:
				{
					$init($Type);
					newarray($Type::BYTE_TYPE);
					break;
				}
			case $Opcodes::T_SHORT:
				{
					$init($Type);
					newarray($Type::SHORT_TYPE);
					break;
				}
			case $Opcodes::T_INT:
				{
					$init($Type);
					newarray($Type::INT_TYPE);
					break;
				}
			case $Opcodes::T_FLOAT:
				{
					$init($Type);
					newarray($Type::FLOAT_TYPE);
					break;
				}
			case $Opcodes::T_LONG:
				{
					$init($Type);
					newarray($Type::LONG_TYPE);
					break;
				}
			case $Opcodes::T_DOUBLE:
				{
					$init($Type);
					newarray($Type::DOUBLE_TYPE);
					break;
				}
			default:
				{
					$throwNew($IllegalArgumentException);
				}
			}
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException);
		}
	}
}

void InstructionAdapter::visitVarInsn(int32_t opcode, int32_t var) {
	switch (opcode) {
	case $Opcodes::ILOAD:
		{
			$init($Type);
			load(var, $Type::INT_TYPE);
			break;
		}
	case $Opcodes::LLOAD:
		{
			$init($Type);
			load(var, $Type::LONG_TYPE);
			break;
		}
	case $Opcodes::FLOAD:
		{
			$init($Type);
			load(var, $Type::FLOAT_TYPE);
			break;
		}
	case $Opcodes::DLOAD:
		{
			$init($Type);
			load(var, $Type::DOUBLE_TYPE);
			break;
		}
	case $Opcodes::ALOAD:
		{
			load(var, InstructionAdapter::OBJECT_TYPE);
			break;
		}
	case $Opcodes::ISTORE:
		{
			$init($Type);
			store(var, $Type::INT_TYPE);
			break;
		}
	case $Opcodes::LSTORE:
		{
			$init($Type);
			store(var, $Type::LONG_TYPE);
			break;
		}
	case $Opcodes::FSTORE:
		{
			$init($Type);
			store(var, $Type::FLOAT_TYPE);
			break;
		}
	case $Opcodes::DSTORE:
		{
			$init($Type);
			store(var, $Type::DOUBLE_TYPE);
			break;
		}
	case $Opcodes::ASTORE:
		{
			store(var, InstructionAdapter::OBJECT_TYPE);
			break;
		}
	case $Opcodes::RET:
		{
			ret(var);
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException);
		}
	}
}

void InstructionAdapter::visitTypeInsn(int32_t opcode, $String* type) {
	$var($Type, objectType, $Type::getObjectType(type));
	switch (opcode) {
	case $Opcodes::NEW:
		{
			anew(objectType);
			break;
		}
	case $Opcodes::ANEWARRAY:
		{
			newarray(objectType);
			break;
		}
	case $Opcodes::CHECKCAST:
		{
			checkcast(objectType);
			break;
		}
	case $Opcodes::INSTANCEOF:
		{
			instanceOf(objectType);
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException);
		}
	}
}

void InstructionAdapter::visitFieldInsn(int32_t opcode, $String* owner, $String* name, $String* descriptor) {
	switch (opcode) {
	case $Opcodes::GETSTATIC:
		{
			getstatic(owner, name, descriptor);
			break;
		}
	case $Opcodes::PUTSTATIC:
		{
			putstatic(owner, name, descriptor);
			break;
		}
	case $Opcodes::GETFIELD:
		{
			getfield(owner, name, descriptor);
			break;
		}
	case $Opcodes::PUTFIELD:
		{
			putfield(owner, name, descriptor);
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException);
		}
	}
}

void InstructionAdapter::visitMethodInsn(int32_t opcodeAndSource, $String* owner, $String* name, $String* descriptor, bool isInterface) {
	if (this->api < $Opcodes::ASM5 && ((int32_t)(opcodeAndSource & (uint32_t)$Opcodes::SOURCE_DEPRECATED)) == 0) {
		$MethodVisitor::visitMethodInsn(opcodeAndSource, owner, name, descriptor, isInterface);
		return;
	}
	int32_t opcode = (int32_t)(opcodeAndSource & (uint32_t)~$Opcodes::SOURCE_MASK);
	switch (opcode) {
	case $Opcodes::INVOKESPECIAL:
		{
			invokespecial(owner, name, descriptor, isInterface);
			break;
		}
	case $Opcodes::INVOKEVIRTUAL:
		{
			invokevirtual(owner, name, descriptor, isInterface);
			break;
		}
	case $Opcodes::INVOKESTATIC:
		{
			invokestatic(owner, name, descriptor, isInterface);
			break;
		}
	case $Opcodes::INVOKEINTERFACE:
		{
			invokeinterface(owner, name, descriptor);
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException);
		}
	}
}

void InstructionAdapter::visitInvokeDynamicInsn($String* name, $String* descriptor, $Handle* bootstrapMethodHandle, $ObjectArray* bootstrapMethodArguments) {
	invokedynamic(name, descriptor, bootstrapMethodHandle, bootstrapMethodArguments);
}

void InstructionAdapter::visitJumpInsn(int32_t opcode, $Label* label) {
	switch (opcode) {
	case $Opcodes::IFEQ:
		{
			ifeq(label);
			break;
		}
	case $Opcodes::IFNE:
		{
			ifne(label);
			break;
		}
	case $Opcodes::IFLT:
		{
			iflt(label);
			break;
		}
	case $Opcodes::IFGE:
		{
			ifge(label);
			break;
		}
	case $Opcodes::IFGT:
		{
			ifgt(label);
			break;
		}
	case $Opcodes::IFLE:
		{
			ifle(label);
			break;
		}
	case $Opcodes::IF_ICMPEQ:
		{
			ificmpeq(label);
			break;
		}
	case $Opcodes::IF_ICMPNE:
		{
			ificmpne(label);
			break;
		}
	case $Opcodes::IF_ICMPLT:
		{
			ificmplt(label);
			break;
		}
	case $Opcodes::IF_ICMPGE:
		{
			ificmpge(label);
			break;
		}
	case $Opcodes::IF_ICMPGT:
		{
			ificmpgt(label);
			break;
		}
	case $Opcodes::IF_ICMPLE:
		{
			ificmple(label);
			break;
		}
	case $Opcodes::IF_ACMPEQ:
		{
			ifacmpeq(label);
			break;
		}
	case $Opcodes::IF_ACMPNE:
		{
			ifacmpne(label);
			break;
		}
	case $Opcodes::GOTO:
		{
			goTo(label);
			break;
		}
	case $Opcodes::JSR:
		{
			jsr(label);
			break;
		}
	case $Opcodes::IFNULL:
		{
			ifnull(label);
			break;
		}
	case $Opcodes::IFNONNULL:
		{
			ifnonnull(label);
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException);
		}
	}
}

void InstructionAdapter::visitLabel($Label* label) {
	mark(label);
}

void InstructionAdapter::visitLdcInsn(Object$* value) {
	if (this->api < $Opcodes::ASM5 && ($instanceOf($Handle, value) || ($instanceOf($Type, value) && $nc(($cast($Type, value)))->getSort() == $Type::METHOD))) {
		$throwNew($UnsupportedOperationException, "This feature requires ASM5"_s);
	}
	if (this->api < $Opcodes::ASM7 && $instanceOf($ConstantDynamic, value)) {
		$throwNew($UnsupportedOperationException, "This feature requires ASM7"_s);
	}
	if ($instanceOf($Integer, value)) {
		iconst($nc(($cast($Integer, value)))->intValue());
	} else if ($instanceOf($Byte, value)) {
		iconst($nc(($cast($Byte, value)))->intValue());
	} else if ($instanceOf($Character, value)) {
		iconst($nc(($cast($Character, value)))->charValue());
	} else if ($instanceOf($Short, value)) {
		iconst($nc(($cast($Short, value)))->intValue());
	} else if ($instanceOf($Boolean, value)) {
		iconst($nc(($cast($Boolean, value)))->booleanValue() ? 1 : 0);
	} else if ($instanceOf($Float, value)) {
		fconst($nc(($cast($Float, value)))->floatValue());
	} else if ($instanceOf($Long, value)) {
		lconst($nc(($cast($Long, value)))->longValue());
	} else if ($instanceOf($Double, value)) {
		dconst($nc(($cast($Double, value)))->doubleValue());
	} else if ($instanceOf($String, value)) {
		aconst(value);
	} else if ($instanceOf($Type, value)) {
		tconst($cast($Type, value));
	} else if ($instanceOf($Handle, value)) {
		hconst($cast($Handle, value));
	} else if ($instanceOf($ConstantDynamic, value)) {
		cconst($cast($ConstantDynamic, value));
	} else {
		$throwNew($IllegalArgumentException);
	}
}

void InstructionAdapter::visitIincInsn(int32_t var, int32_t increment) {
	iinc(var, increment);
}

void InstructionAdapter::visitTableSwitchInsn(int32_t min, int32_t max, $Label* dflt, $LabelArray* labels) {
	tableswitch(min, max, dflt, labels);
}

void InstructionAdapter::visitLookupSwitchInsn($Label* dflt, $ints* keys, $LabelArray* labels) {
	lookupswitch(dflt, keys, labels);
}

void InstructionAdapter::visitMultiANewArrayInsn($String* descriptor, int32_t numDimensions) {
	multianewarray(descriptor, numDimensions);
}

void InstructionAdapter::nop() {
	$nc(this->mv)->visitInsn($Opcodes::NOP);
}

void InstructionAdapter::aconst(Object$* value) {
	if (value == nullptr) {
		$nc(this->mv)->visitInsn($Opcodes::ACONST_NULL);
	} else {
		$nc(this->mv)->visitLdcInsn(value);
	}
}

void InstructionAdapter::iconst(int32_t intValue) {
	if (intValue >= -1 && intValue <= 5) {
		$nc(this->mv)->visitInsn($Opcodes::ICONST_0 + intValue);
	} else if (intValue >= $Byte::MIN_VALUE && intValue <= $Byte::MAX_VALUE) {
		$nc(this->mv)->visitIntInsn($Opcodes::BIPUSH, intValue);
	} else if (intValue >= $Short::MIN_VALUE && intValue <= $Short::MAX_VALUE) {
		$nc(this->mv)->visitIntInsn($Opcodes::SIPUSH, intValue);
	} else {
		$nc(this->mv)->visitLdcInsn($($Integer::valueOf(intValue)));
	}
}

void InstructionAdapter::lconst(int64_t longValue) {
	if (longValue == (int64_t)0 || longValue == (int64_t)1) {
		$nc(this->mv)->visitInsn($Opcodes::LCONST_0 + (int32_t)longValue);
	} else {
		$nc(this->mv)->visitLdcInsn($($Long::valueOf(longValue)));
	}
}

void InstructionAdapter::fconst(float floatValue) {
	int32_t bits = $Float::floatToIntBits(floatValue);
	if (bits == (int64_t)0 || bits == 0x3F800000 || bits == 0x40000000) {
		$nc(this->mv)->visitInsn($Opcodes::FCONST_0 + $cast(int32_t, floatValue));
	} else {
		$nc(this->mv)->visitLdcInsn($($Float::valueOf(floatValue)));
	}
}

void InstructionAdapter::dconst(double doubleValue) {
	int64_t bits = $Double::doubleToLongBits(doubleValue);
	if (bits == (int64_t)0 || bits == (int64_t)0x3FF0000000000000) {
		$nc(this->mv)->visitInsn($Opcodes::DCONST_0 + $cast(int32_t, doubleValue));
	} else {
		$nc(this->mv)->visitLdcInsn($($Double::valueOf(doubleValue)));
	}
}

void InstructionAdapter::tconst($Type* type) {
	$nc(this->mv)->visitLdcInsn(type);
}

void InstructionAdapter::hconst($Handle* handle) {
	$nc(this->mv)->visitLdcInsn(handle);
}

void InstructionAdapter::cconst($ConstantDynamic* constantDynamic) {
	$nc(this->mv)->visitLdcInsn(constantDynamic);
}

void InstructionAdapter::load(int32_t var, $Type* type) {
	$nc(this->mv)->visitVarInsn($nc(type)->getOpcode($Opcodes::ILOAD), var);
}

void InstructionAdapter::aload($Type* type) {
	$nc(this->mv)->visitInsn($nc(type)->getOpcode($Opcodes::IALOAD));
}

void InstructionAdapter::store(int32_t var, $Type* type) {
	$nc(this->mv)->visitVarInsn($nc(type)->getOpcode($Opcodes::ISTORE), var);
}

void InstructionAdapter::astore($Type* type) {
	$nc(this->mv)->visitInsn($nc(type)->getOpcode($Opcodes::IASTORE));
}

void InstructionAdapter::pop() {
	$nc(this->mv)->visitInsn($Opcodes::POP);
}

void InstructionAdapter::pop2() {
	$nc(this->mv)->visitInsn($Opcodes::POP2);
}

void InstructionAdapter::dup() {
	$nc(this->mv)->visitInsn($Opcodes::DUP);
}

void InstructionAdapter::dup2() {
	$nc(this->mv)->visitInsn($Opcodes::DUP2);
}

void InstructionAdapter::dupX1() {
	$nc(this->mv)->visitInsn($Opcodes::DUP_X1);
}

void InstructionAdapter::dupX2() {
	$nc(this->mv)->visitInsn($Opcodes::DUP_X2);
}

void InstructionAdapter::dup2X1() {
	$nc(this->mv)->visitInsn($Opcodes::DUP2_X1);
}

void InstructionAdapter::dup2X2() {
	$nc(this->mv)->visitInsn($Opcodes::DUP2_X2);
}

void InstructionAdapter::swap() {
	$nc(this->mv)->visitInsn($Opcodes::SWAP);
}

void InstructionAdapter::add($Type* type) {
	$nc(this->mv)->visitInsn($nc(type)->getOpcode($Opcodes::IADD));
}

void InstructionAdapter::sub($Type* type) {
	$nc(this->mv)->visitInsn($nc(type)->getOpcode($Opcodes::ISUB));
}

void InstructionAdapter::mul($Type* type) {
	$nc(this->mv)->visitInsn($nc(type)->getOpcode($Opcodes::IMUL));
}

void InstructionAdapter::div($Type* type) {
	$nc(this->mv)->visitInsn($nc(type)->getOpcode($Opcodes::IDIV));
}

void InstructionAdapter::rem($Type* type) {
	$nc(this->mv)->visitInsn($nc(type)->getOpcode($Opcodes::IREM));
}

void InstructionAdapter::neg($Type* type) {
	$nc(this->mv)->visitInsn($nc(type)->getOpcode($Opcodes::INEG));
}

void InstructionAdapter::shl($Type* type) {
	$nc(this->mv)->visitInsn($nc(type)->getOpcode($Opcodes::ISHL));
}

void InstructionAdapter::shr($Type* type) {
	$nc(this->mv)->visitInsn($nc(type)->getOpcode($Opcodes::ISHR));
}

void InstructionAdapter::ushr($Type* type) {
	$nc(this->mv)->visitInsn($nc(type)->getOpcode($Opcodes::IUSHR));
}

void InstructionAdapter::and$($Type* type) {
	$nc(this->mv)->visitInsn($nc(type)->getOpcode($Opcodes::IAND));
}

void InstructionAdapter::or$($Type* type) {
	$nc(this->mv)->visitInsn($nc(type)->getOpcode($Opcodes::IOR));
}

void InstructionAdapter::xor$($Type* type) {
	$nc(this->mv)->visitInsn($nc(type)->getOpcode($Opcodes::IXOR));
}

void InstructionAdapter::iinc(int32_t var, int32_t increment) {
	$nc(this->mv)->visitIincInsn(var, increment);
}

void InstructionAdapter::cast($Type* from, $Type* to) {
	cast(this->mv, from, to);
}

void InstructionAdapter::cast($MethodVisitor* methodVisitor, $Type* from, $Type* to) {
	$init(InstructionAdapter);
	if (from != to) {
		$init($Type);
		if (from == $Type::DOUBLE_TYPE) {
			if (to == $Type::FLOAT_TYPE) {
				$nc(methodVisitor)->visitInsn($Opcodes::D2F);
			} else {
				if (to == $Type::LONG_TYPE) {
					$nc(methodVisitor)->visitInsn($Opcodes::D2L);
				} else {
					$nc(methodVisitor)->visitInsn($Opcodes::D2I);
					cast(methodVisitor, $Type::INT_TYPE, to);
				}
			}
		} else {
			if (from == $Type::FLOAT_TYPE) {
				if (to == $Type::DOUBLE_TYPE) {
					$nc(methodVisitor)->visitInsn($Opcodes::F2D);
				} else {
					if (to == $Type::LONG_TYPE) {
						$nc(methodVisitor)->visitInsn($Opcodes::F2L);
					} else {
						$nc(methodVisitor)->visitInsn($Opcodes::F2I);
						cast(methodVisitor, $Type::INT_TYPE, to);
					}
				}
			} else {
				if (from == $Type::LONG_TYPE) {
					if (to == $Type::DOUBLE_TYPE) {
						$nc(methodVisitor)->visitInsn($Opcodes::L2D);
					} else {
						if (to == $Type::FLOAT_TYPE) {
							$nc(methodVisitor)->visitInsn($Opcodes::L2F);
						} else {
							$nc(methodVisitor)->visitInsn($Opcodes::L2I);
							cast(methodVisitor, $Type::INT_TYPE, to);
						}
					}
				} else {
					if (to == $Type::BYTE_TYPE) {
						$nc(methodVisitor)->visitInsn($Opcodes::I2B);
					} else {
						if (to == $Type::CHAR_TYPE) {
							$nc(methodVisitor)->visitInsn($Opcodes::I2C);
						} else {
							if (to == $Type::DOUBLE_TYPE) {
								$nc(methodVisitor)->visitInsn($Opcodes::I2D);
							} else {
								if (to == $Type::FLOAT_TYPE) {
									$nc(methodVisitor)->visitInsn($Opcodes::I2F);
								} else {
									if (to == $Type::LONG_TYPE) {
										$nc(methodVisitor)->visitInsn($Opcodes::I2L);
									} else {
										if (to == $Type::SHORT_TYPE) {
											$nc(methodVisitor)->visitInsn($Opcodes::I2S);
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void InstructionAdapter::lcmp() {
	$nc(this->mv)->visitInsn($Opcodes::LCMP);
}

void InstructionAdapter::cmpl($Type* type) {
	$init($Type);
	$nc(this->mv)->visitInsn(type == $Type::FLOAT_TYPE ? $Opcodes::FCMPL : $Opcodes::DCMPL);
}

void InstructionAdapter::cmpg($Type* type) {
	$init($Type);
	$nc(this->mv)->visitInsn(type == $Type::FLOAT_TYPE ? $Opcodes::FCMPG : $Opcodes::DCMPG);
}

void InstructionAdapter::ifeq($Label* label) {
	$nc(this->mv)->visitJumpInsn($Opcodes::IFEQ, label);
}

void InstructionAdapter::ifne($Label* label) {
	$nc(this->mv)->visitJumpInsn($Opcodes::IFNE, label);
}

void InstructionAdapter::iflt($Label* label) {
	$nc(this->mv)->visitJumpInsn($Opcodes::IFLT, label);
}

void InstructionAdapter::ifge($Label* label) {
	$nc(this->mv)->visitJumpInsn($Opcodes::IFGE, label);
}

void InstructionAdapter::ifgt($Label* label) {
	$nc(this->mv)->visitJumpInsn($Opcodes::IFGT, label);
}

void InstructionAdapter::ifle($Label* label) {
	$nc(this->mv)->visitJumpInsn($Opcodes::IFLE, label);
}

void InstructionAdapter::ificmpeq($Label* label) {
	$nc(this->mv)->visitJumpInsn($Opcodes::IF_ICMPEQ, label);
}

void InstructionAdapter::ificmpne($Label* label) {
	$nc(this->mv)->visitJumpInsn($Opcodes::IF_ICMPNE, label);
}

void InstructionAdapter::ificmplt($Label* label) {
	$nc(this->mv)->visitJumpInsn($Opcodes::IF_ICMPLT, label);
}

void InstructionAdapter::ificmpge($Label* label) {
	$nc(this->mv)->visitJumpInsn($Opcodes::IF_ICMPGE, label);
}

void InstructionAdapter::ificmpgt($Label* label) {
	$nc(this->mv)->visitJumpInsn($Opcodes::IF_ICMPGT, label);
}

void InstructionAdapter::ificmple($Label* label) {
	$nc(this->mv)->visitJumpInsn($Opcodes::IF_ICMPLE, label);
}

void InstructionAdapter::ifacmpeq($Label* label) {
	$nc(this->mv)->visitJumpInsn($Opcodes::IF_ACMPEQ, label);
}

void InstructionAdapter::ifacmpne($Label* label) {
	$nc(this->mv)->visitJumpInsn($Opcodes::IF_ACMPNE, label);
}

void InstructionAdapter::goTo($Label* label) {
	$nc(this->mv)->visitJumpInsn($Opcodes::GOTO, label);
}

void InstructionAdapter::jsr($Label* label) {
	$nc(this->mv)->visitJumpInsn($Opcodes::JSR, label);
}

void InstructionAdapter::ret(int32_t var) {
	$nc(this->mv)->visitVarInsn($Opcodes::RET, var);
}

void InstructionAdapter::tableswitch(int32_t min, int32_t max, $Label* dflt, $LabelArray* labels) {
	$nc(this->mv)->visitTableSwitchInsn(min, max, dflt, labels);
}

void InstructionAdapter::lookupswitch($Label* dflt, $ints* keys, $LabelArray* labels) {
	$nc(this->mv)->visitLookupSwitchInsn(dflt, keys, labels);
}

void InstructionAdapter::areturn($Type* type) {
	$nc(this->mv)->visitInsn($nc(type)->getOpcode($Opcodes::IRETURN));
}

void InstructionAdapter::getstatic($String* owner, $String* name, $String* descriptor) {
	$nc(this->mv)->visitFieldInsn($Opcodes::GETSTATIC, owner, name, descriptor);
}

void InstructionAdapter::putstatic($String* owner, $String* name, $String* descriptor) {
	$nc(this->mv)->visitFieldInsn($Opcodes::PUTSTATIC, owner, name, descriptor);
}

void InstructionAdapter::getfield($String* owner, $String* name, $String* descriptor) {
	$nc(this->mv)->visitFieldInsn($Opcodes::GETFIELD, owner, name, descriptor);
}

void InstructionAdapter::putfield($String* owner, $String* name, $String* descriptor) {
	$nc(this->mv)->visitFieldInsn($Opcodes::PUTFIELD, owner, name, descriptor);
}

void InstructionAdapter::invokevirtual($String* owner, $String* name, $String* descriptor) {
	if (this->api >= $Opcodes::ASM5) {
		invokevirtual(owner, name, descriptor, false);
		return;
	}
	$nc(this->mv)->visitMethodInsn($Opcodes::INVOKEVIRTUAL, owner, name, descriptor);
}

void InstructionAdapter::invokevirtual($String* owner, $String* name, $String* descriptor, bool isInterface) {
	if (this->api < $Opcodes::ASM5) {
		if (isInterface) {
			$throwNew($IllegalArgumentException, "INVOKEVIRTUAL on interfaces require ASM 5"_s);
		}
		invokevirtual(owner, name, descriptor);
		return;
	}
	$nc(this->mv)->visitMethodInsn($Opcodes::INVOKEVIRTUAL, owner, name, descriptor, isInterface);
}

void InstructionAdapter::invokespecial($String* owner, $String* name, $String* descriptor) {
	if (this->api >= $Opcodes::ASM5) {
		invokespecial(owner, name, descriptor, false);
		return;
	}
	$nc(this->mv)->visitMethodInsn($Opcodes::INVOKESPECIAL, owner, name, descriptor, false);
}

void InstructionAdapter::invokespecial($String* owner, $String* name, $String* descriptor, bool isInterface) {
	if (this->api < $Opcodes::ASM5) {
		if (isInterface) {
			$throwNew($IllegalArgumentException, "INVOKESPECIAL on interfaces require ASM 5"_s);
		}
		invokespecial(owner, name, descriptor);
		return;
	}
	$nc(this->mv)->visitMethodInsn($Opcodes::INVOKESPECIAL, owner, name, descriptor, isInterface);
}

void InstructionAdapter::invokestatic($String* owner, $String* name, $String* descriptor) {
	if (this->api >= $Opcodes::ASM5) {
		invokestatic(owner, name, descriptor, false);
		return;
	}
	$nc(this->mv)->visitMethodInsn($Opcodes::INVOKESTATIC, owner, name, descriptor, false);
}

void InstructionAdapter::invokestatic($String* owner, $String* name, $String* descriptor, bool isInterface) {
	if (this->api < $Opcodes::ASM5) {
		if (isInterface) {
			$throwNew($IllegalArgumentException, "INVOKESTATIC on interfaces require ASM 5"_s);
		}
		invokestatic(owner, name, descriptor);
		return;
	}
	$nc(this->mv)->visitMethodInsn($Opcodes::INVOKESTATIC, owner, name, descriptor, isInterface);
}

void InstructionAdapter::invokeinterface($String* owner, $String* name, $String* descriptor) {
	$nc(this->mv)->visitMethodInsn($Opcodes::INVOKEINTERFACE, owner, name, descriptor, true);
}

void InstructionAdapter::invokedynamic($String* name, $String* descriptor, $Handle* bootstrapMethodHandle, $ObjectArray* bootstrapMethodArguments) {
	$nc(this->mv)->visitInvokeDynamicInsn(name, descriptor, bootstrapMethodHandle, bootstrapMethodArguments);
}

void InstructionAdapter::anew($Type* type) {
	$nc(this->mv)->visitTypeInsn($Opcodes::NEW, $($nc(type)->getInternalName()));
}

void InstructionAdapter::newarray($Type* type) {
	newarray(this->mv, type);
}

void InstructionAdapter::newarray($MethodVisitor* methodVisitor, $Type* type) {
	$init(InstructionAdapter);
	int32_t arrayType = 0;
	switch ($nc(type)->getSort()) {
	case $Type::BOOLEAN:
		{
			arrayType = $Opcodes::T_BOOLEAN;
			break;
		}
	case $Type::CHAR:
		{
			arrayType = $Opcodes::T_CHAR;
			break;
		}
	case $Type::BYTE:
		{
			arrayType = $Opcodes::T_BYTE;
			break;
		}
	case $Type::SHORT:
		{
			arrayType = $Opcodes::T_SHORT;
			break;
		}
	case $Type::INT:
		{
			arrayType = $Opcodes::T_INT;
			break;
		}
	case $Type::FLOAT:
		{
			arrayType = $Opcodes::T_FLOAT;
			break;
		}
	case $Type::LONG:
		{
			arrayType = $Opcodes::T_LONG;
			break;
		}
	case $Type::DOUBLE:
		{
			arrayType = $Opcodes::T_DOUBLE;
			break;
		}
	default:
		{
			$nc(methodVisitor)->visitTypeInsn($Opcodes::ANEWARRAY, $(type->getInternalName()));
			return;
		}
	}
	$nc(methodVisitor)->visitIntInsn($Opcodes::NEWARRAY, arrayType);
}

void InstructionAdapter::arraylength() {
	$nc(this->mv)->visitInsn($Opcodes::ARRAYLENGTH);
}

void InstructionAdapter::athrow() {
	$nc(this->mv)->visitInsn($Opcodes::ATHROW);
}

void InstructionAdapter::checkcast($Type* type) {
	$nc(this->mv)->visitTypeInsn($Opcodes::CHECKCAST, $($nc(type)->getInternalName()));
}

void InstructionAdapter::instanceOf($Type* type) {
	$nc(this->mv)->visitTypeInsn($Opcodes::INSTANCEOF, $($nc(type)->getInternalName()));
}

void InstructionAdapter::monitorenter() {
	$nc(this->mv)->visitInsn($Opcodes::MONITORENTER);
}

void InstructionAdapter::monitorexit() {
	$nc(this->mv)->visitInsn($Opcodes::MONITOREXIT);
}

void InstructionAdapter::multianewarray($String* descriptor, int32_t numDimensions) {
	$nc(this->mv)->visitMultiANewArrayInsn(descriptor, numDimensions);
}

void InstructionAdapter::ifnull($Label* label) {
	$nc(this->mv)->visitJumpInsn($Opcodes::IFNULL, label);
}

void InstructionAdapter::ifnonnull($Label* label) {
	$nc(this->mv)->visitJumpInsn($Opcodes::IFNONNULL, label);
}

void InstructionAdapter::mark($Label* label) {
	$nc(this->mv)->visitLabel(label);
}

void clinit$InstructionAdapter($Class* class$) {
	$assignStatic(InstructionAdapter::OBJECT_TYPE, $Type::getType("Ljava/lang/Object;"_s));
}

InstructionAdapter::InstructionAdapter() {
}

$Class* InstructionAdapter::load$($String* name, bool initialize) {
	$loadClass(InstructionAdapter, name, initialize, &_InstructionAdapter_ClassInfo_, clinit$InstructionAdapter, allocate$InstructionAdapter);
	return class$;
}

$Class* InstructionAdapter::class$ = nullptr;

					} // commons
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk