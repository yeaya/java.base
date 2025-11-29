#include <jdk/internal/org/objectweb/asm/ClassReader.h>

#include <java/io/ByteArrayOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/AssertionError.h>
#include <java/lang/ClassLoader.h>
#include <jdk/internal/org/objectweb/asm/AnnotationVisitor.h>
#include <jdk/internal/org/objectweb/asm/Attribute.h>
#include <jdk/internal/org/objectweb/asm/ClassVisitor.h>
#include <jdk/internal/org/objectweb/asm/ConstantDynamic.h>
#include <jdk/internal/org/objectweb/asm/Constants.h>
#include <jdk/internal/org/objectweb/asm/Context.h>
#include <jdk/internal/org/objectweb/asm/FieldVisitor.h>
#include <jdk/internal/org/objectweb/asm/Frame.h>
#include <jdk/internal/org/objectweb/asm/Handle.h>
#include <jdk/internal/org/objectweb/asm/Label.h>
#include <jdk/internal/org/objectweb/asm/MethodVisitor.h>
#include <jdk/internal/org/objectweb/asm/MethodWriter.h>
#include <jdk/internal/org/objectweb/asm/ModuleVisitor.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/RecordComponentVisitor.h>
#include <jdk/internal/org/objectweb/asm/Symbol.h>
#include <jdk/internal/org/objectweb/asm/Type.h>
#include <jdk/internal/org/objectweb/asm/TypePath.h>
#include <jdk/internal/org/objectweb/asm/TypeReference.h>
#include <jcpp.h>

#undef AALOAD
#undef AASTORE
#undef ACC_DEPRECATED
#undef ACC_RECORD
#undef ACC_STATIC
#undef ACC_SYNTHETIC
#undef ACONST_NULL
#undef ALOAD
#undef ALOAD_0
#undef ALOAD_1
#undef ALOAD_2
#undef ALOAD_3
#undef ANEWARRAY
#undef ANNOTATION_DEFAULT
#undef ARETURN
#undef ARRAYLENGTH
#undef ASM_GOTO
#undef ASM_GOTO_W
#undef ASM_IFEQ
#undef ASM_IFGE
#undef ASM_IFGT
#undef ASM_IFLE
#undef ASM_IFLT
#undef ASM_IFNE
#undef ASM_IFNONNULL
#undef ASM_IFNULL
#undef ASM_IFNULL_OPCODE_DELTA
#undef ASM_IF_ACMPEQ
#undef ASM_IF_ACMPNE
#undef ASM_IF_ICMPEQ
#undef ASM_IF_ICMPGE
#undef ASM_IF_ICMPGT
#undef ASM_IF_ICMPLE
#undef ASM_IF_ICMPLT
#undef ASM_IF_ICMPNE
#undef ASM_JSR
#undef ASM_OPCODE_DELTA
#undef ASTORE
#undef ASTORE_0
#undef ASTORE_1
#undef ASTORE_2
#undef ASTORE_3
#undef ATHROW
#undef BALOAD
#undef BASTORE
#undef BIPUSH
#undef BOOTSTRAP_METHODS
#undef CALOAD
#undef CAST
#undef CASTORE
#undef CHECKCAST
#undef CHOP_FRAME
#undef CLASS_EXTENDS
#undef CLASS_TYPE_PARAMETER
#undef CLASS_TYPE_PARAMETER_BOUND
#undef CODE
#undef CONSTANT_CLASS_TAG
#undef CONSTANT_DOUBLE_TAG
#undef CONSTANT_DYNAMIC_TAG
#undef CONSTANT_FIELDREF_TAG
#undef CONSTANT_FLOAT_TAG
#undef CONSTANT_INTEGER_TAG
#undef CONSTANT_INTERFACE_METHODREF_TAG
#undef CONSTANT_INVOKE_DYNAMIC_TAG
#undef CONSTANT_LONG_TAG
#undef CONSTANT_METHODREF_TAG
#undef CONSTANT_METHOD_HANDLE_TAG
#undef CONSTANT_METHOD_TYPE_TAG
#undef CONSTANT_MODULE_TAG
#undef CONSTANT_NAME_AND_TYPE_TAG
#undef CONSTANT_PACKAGE_TAG
#undef CONSTANT_STRING_TAG
#undef CONSTANT_UTF8_TAG
#undef CONSTANT_VALUE
#undef CONSTRUCTOR_INVOCATION_TYPE_ARGUMENT
#undef CONSTRUCTOR_REFERENCE
#undef CONSTRUCTOR_REFERENCE_TYPE_ARGUMENT
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
#undef DEPRECATED
#undef DLOAD
#undef DLOAD_0
#undef DLOAD_1
#undef DLOAD_2
#undef DLOAD_3
#undef DMUL
#undef DNEG
#undef DOUBLE
#undef DREM
#undef DRETURN
#undef DSTORE
#undef DSTORE_0
#undef DSTORE_1
#undef DSTORE_2
#undef DSTORE_3
#undef DSUB
#undef DUP
#undef DUP2
#undef DUP2_X1
#undef DUP2_X2
#undef DUP_X1
#undef DUP_X2
#undef ENCLOSING_METHOD
#undef EXCEPTIONS
#undef EXCEPTION_PARAMETER
#undef EXPAND_ASM_INSNS
#undef EXPAND_FRAMES
#undef F2D
#undef F2I
#undef F2L
#undef FADD
#undef FALOAD
#undef FALSE
#undef FASTORE
#undef FCMPG
#undef FCMPL
#undef FCONST_0
#undef FCONST_1
#undef FCONST_2
#undef FDIV
#undef FIELD
#undef FLAG_DEBUG_ONLY
#undef FLOAD
#undef FLOAD_0
#undef FLOAD_1
#undef FLOAD_2
#undef FLOAD_3
#undef FLOAT
#undef FMUL
#undef FNEG
#undef FREM
#undef FRETURN
#undef FSTORE
#undef FSTORE_0
#undef FSTORE_1
#undef FSTORE_2
#undef FSTORE_3
#undef FSUB
#undef FULL_FRAME
#undef F_APPEND
#undef F_CHOP
#undef F_FULL
#undef F_INSERT
#undef F_NEW
#undef F_SAME
#undef F_SAME1
#undef GETFIELD
#undef GETSTATIC
#undef GOTO
#undef GOTO_W
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
#undef ILOAD_0
#undef ILOAD_1
#undef ILOAD_2
#undef ILOAD_3
#undef IMUL
#undef INEG
#undef INNER_CLASSES
#undef INPUT_STREAM_DATA_CHUNK_SIZE
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
#undef ISTORE_0
#undef ISTORE_1
#undef ISTORE_2
#undef ISTORE_3
#undef ISUB
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
#undef JSR_W
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
#undef LDC2_W
#undef LDC_W
#undef LDIV
#undef LINE_NUMBER_TABLE
#undef LLOAD
#undef LLOAD_0
#undef LLOAD_1
#undef LLOAD_2
#undef LLOAD_3
#undef LMUL
#undef LNEG
#undef LOCAL_VARIABLE
#undef LOCAL_VARIABLE_TABLE
#undef LOCAL_VARIABLE_TYPE_TABLE
#undef LONG
#undef LOOKUPSWITCH
#undef LOR
#undef LREM
#undef LRETURN
#undef LSHL
#undef LSHR
#undef LSTORE
#undef LSTORE_0
#undef LSTORE_1
#undef LSTORE_2
#undef LSTORE_3
#undef LSUB
#undef LUSHR
#undef LXOR
#undef METHOD_FORMAL_PARAMETER
#undef METHOD_INVOCATION_TYPE_ARGUMENT
#undef METHOD_PARAMETERS
#undef METHOD_RECEIVER
#undef METHOD_REFERENCE
#undef METHOD_REFERENCE_TYPE_ARGUMENT
#undef METHOD_RETURN
#undef METHOD_TYPE_PARAMETER
#undef METHOD_TYPE_PARAMETER_BOUND
#undef MODULE
#undef MODULE_MAIN_CLASS
#undef MODULE_PACKAGES
#undef MONITORENTER
#undef MONITOREXIT
#undef MULTIANEWARRAY
#undef NEST_HOST
#undef NEST_MEMBERS
#undef NEW
#undef NEWARRAY
#undef NOP
#undef NULL
#undef PERMITTED_SUBCLASSES
#undef POP
#undef POP2
#undef PUTFIELD
#undef PUTSTATIC
#undef RECORD
#undef RESERVED
#undef RESOURCE_VARIABLE
#undef RET
#undef RETURN
#undef RUNTIME_INVISIBLE_ANNOTATIONS
#undef RUNTIME_INVISIBLE_PARAMETER_ANNOTATIONS
#undef RUNTIME_INVISIBLE_TYPE_ANNOTATIONS
#undef RUNTIME_VISIBLE_ANNOTATIONS
#undef RUNTIME_VISIBLE_PARAMETER_ANNOTATIONS
#undef RUNTIME_VISIBLE_TYPE_ANNOTATIONS
#undef SALOAD
#undef SAME_FRAME_EXTENDED
#undef SAME_LOCALS_1_STACK_ITEM_FRAME
#undef SAME_LOCALS_1_STACK_ITEM_FRAME_EXTENDED
#undef SASTORE
#undef SIGNATURE
#undef SIPUSH
#undef SKIP_CODE
#undef SKIP_DEBUG
#undef SKIP_FRAMES
#undef SOURCE_DEBUG_EXTENSION
#undef SOURCE_FILE
#undef STACK_MAP_TABLE
#undef SWAP
#undef SYNTHETIC
#undef TABLESWITCH
#undef THROWS
#undef TOP
#undef TRUE
#undef UNINITIALIZED_THIS
#undef WIDE
#undef WIDE_JUMP_OPCODE_DELTA

using $AttributeArray = $Array<::jdk::internal::org::objectweb::asm$::Attribute>;
using $ConstantDynamicArray = $Array<::jdk::internal::org::objectweb::asm$::ConstantDynamic>;
using $LabelArray = $Array<::jdk::internal::org::objectweb::asm$::Label>;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $AnnotationVisitor = ::jdk::internal::org::objectweb::asm$::AnnotationVisitor;
using $Attribute = ::jdk::internal::org::objectweb::asm$::Attribute;
using $ClassVisitor = ::jdk::internal::org::objectweb::asm$::ClassVisitor;
using $ConstantDynamic = ::jdk::internal::org::objectweb::asm$::ConstantDynamic;
using $Constants = ::jdk::internal::org::objectweb::asm$::Constants;
using $Context = ::jdk::internal::org::objectweb::asm$::Context;
using $FieldVisitor = ::jdk::internal::org::objectweb::asm$::FieldVisitor;
using $Frame = ::jdk::internal::org::objectweb::asm$::Frame;
using $Handle = ::jdk::internal::org::objectweb::asm$::Handle;
using $Label = ::jdk::internal::org::objectweb::asm$::Label;
using $MethodVisitor = ::jdk::internal::org::objectweb::asm$::MethodVisitor;
using $MethodWriter = ::jdk::internal::org::objectweb::asm$::MethodWriter;
using $ModuleVisitor = ::jdk::internal::org::objectweb::asm$::ModuleVisitor;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $RecordComponentVisitor = ::jdk::internal::org::objectweb::asm$::RecordComponentVisitor;
using $Symbol = ::jdk::internal::org::objectweb::asm$::Symbol;
using $Type = ::jdk::internal::org::objectweb::asm$::Type;
using $TypePath = ::jdk::internal::org::objectweb::asm$::TypePath;
using $TypeReference = ::jdk::internal::org::objectweb::asm$::TypeReference;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {

$CompoundAttribute _ClassReader_FieldAnnotations_b[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _ClassReader_FieldInfo_[] = {
	{"SKIP_CODE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassReader, SKIP_CODE)},
	{"SKIP_DEBUG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassReader, SKIP_DEBUG)},
	{"SKIP_FRAMES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassReader, SKIP_FRAMES)},
	{"EXPAND_FRAMES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClassReader, EXPAND_FRAMES)},
	{"EXPAND_ASM_INSNS", "I", nullptr, $STATIC | $FINAL, $constField(ClassReader, EXPAND_ASM_INSNS)},
	{"INPUT_STREAM_DATA_CHUNK_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ClassReader, INPUT_STREAM_DATA_CHUNK_SIZE)},
	{"b", "[B", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $field(ClassReader, b), _ClassReader_FieldAnnotations_b},
	{"classFileBuffer", "[B", nullptr, $FINAL, $field(ClassReader, classFileBuffer)},
	{"cpInfoOffsets", "[I", nullptr, $PRIVATE | $FINAL, $field(ClassReader, cpInfoOffsets)},
	{"constantUtf8Values", "[Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ClassReader, constantUtf8Values)},
	{"constantDynamicValues", "[Ljdk/internal/org/objectweb/asm/ConstantDynamic;", nullptr, $PRIVATE | $FINAL, $field(ClassReader, constantDynamicValues)},
	{"bootstrapMethodOffsets", "[I", nullptr, $PRIVATE | $FINAL, $field(ClassReader, bootstrapMethodOffsets)},
	{"maxStringLength", "I", nullptr, $PRIVATE | $FINAL, $field(ClassReader, maxStringLength)},
	{"header", "I", nullptr, $PUBLIC | $FINAL, $field(ClassReader, header)},
	{}
};

$MethodInfo _ClassReader_MethodInfo_[] = {
	{"<init>", "([B)V", nullptr, $PUBLIC, $method(static_cast<void(ClassReader::*)($bytes*)>(&ClassReader::init$))},
	{"<init>", "([BII)V", nullptr, $PUBLIC, $method(static_cast<void(ClassReader::*)($bytes*,int32_t,int32_t)>(&ClassReader::init$))},
	{"<init>", "([BIZ)V", nullptr, 0, $method(static_cast<void(ClassReader::*)($bytes*,int32_t,bool)>(&ClassReader::init$))},
	{"<init>", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(ClassReader::*)($InputStream*)>(&ClassReader::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ClassReader::*)($String*)>(&ClassReader::init$)), "java.io.IOException"},
	{"accept", "(Ljdk/internal/org/objectweb/asm/ClassVisitor;I)V", nullptr, $PUBLIC},
	{"accept", "(Ljdk/internal/org/objectweb/asm/ClassVisitor;[Ljdk/internal/org/objectweb/asm/Attribute;I)V", nullptr, $PUBLIC},
	{"computeImplicitFrame", "(Ljdk/internal/org/objectweb/asm/Context;)V", nullptr, $PRIVATE, $method(static_cast<void(ClassReader::*)($Context*)>(&ClassReader::computeImplicitFrame))},
	{"createDebugLabel", "(I[Ljdk/internal/org/objectweb/asm/Label;)V", nullptr, $PRIVATE, $method(static_cast<void(ClassReader::*)(int32_t,$LabelArray*)>(&ClassReader::createDebugLabel))},
	{"createLabel", "(I[Ljdk/internal/org/objectweb/asm/Label;)Ljdk/internal/org/objectweb/asm/Label;", nullptr, $PRIVATE, $method(static_cast<$Label*(ClassReader::*)(int32_t,$LabelArray*)>(&ClassReader::createLabel))},
	{"getAccess", "()I", nullptr, $PUBLIC},
	{"getClassName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getFirstAttributeOffset", "()I", nullptr, $FINAL, $method(static_cast<int32_t(ClassReader::*)()>(&ClassReader::getFirstAttributeOffset))},
	{"getInterfaces", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getItem", "(I)I", nullptr, $PUBLIC},
	{"getItemCount", "()I", nullptr, $PUBLIC},
	{"getMaxStringLength", "()I", nullptr, $PUBLIC},
	{"getSuperName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getTypeAnnotationBytecodeOffset", "([II)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ClassReader::*)($ints*,int32_t)>(&ClassReader::getTypeAnnotationBytecodeOffset))},
	{"readAttribute", "([Ljdk/internal/org/objectweb/asm/Attribute;Ljava/lang/String;II[CI[Ljdk/internal/org/objectweb/asm/Label;)Ljdk/internal/org/objectweb/asm/Attribute;", nullptr, $PRIVATE, $method(static_cast<$Attribute*(ClassReader::*)($AttributeArray*,$String*,int32_t,int32_t,$chars*,int32_t,$LabelArray*)>(&ClassReader::readAttribute))},
	{"readBootstrapMethodsAttribute", "(I)[I", nullptr, $PRIVATE, $method(static_cast<$ints*(ClassReader::*)(int32_t)>(&ClassReader::readBootstrapMethodsAttribute))},
	{"readByte", "(I)I", nullptr, $PUBLIC},
	{"readClass", "(I[C)Ljava/lang/String;", nullptr, $PUBLIC},
	{"readCode", "(Ljdk/internal/org/objectweb/asm/MethodVisitor;Ljdk/internal/org/objectweb/asm/Context;I)V", nullptr, $PRIVATE, $method(static_cast<void(ClassReader::*)($MethodVisitor*,$Context*,int32_t)>(&ClassReader::readCode))},
	{"readConst", "(I[C)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"readConstantDynamic", "(I[C)Ljdk/internal/org/objectweb/asm/ConstantDynamic;", nullptr, $PRIVATE, $method(static_cast<$ConstantDynamic*(ClassReader::*)(int32_t,$chars*)>(&ClassReader::readConstantDynamic))},
	{"readElementValue", "(Ljdk/internal/org/objectweb/asm/AnnotationVisitor;ILjava/lang/String;[C)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ClassReader::*)($AnnotationVisitor*,int32_t,$String*,$chars*)>(&ClassReader::readElementValue))},
	{"readElementValues", "(Ljdk/internal/org/objectweb/asm/AnnotationVisitor;IZ[C)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ClassReader::*)($AnnotationVisitor*,int32_t,bool,$chars*)>(&ClassReader::readElementValues))},
	{"readField", "(Ljdk/internal/org/objectweb/asm/ClassVisitor;Ljdk/internal/org/objectweb/asm/Context;I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ClassReader::*)($ClassVisitor*,$Context*,int32_t)>(&ClassReader::readField))},
	{"readInt", "(I)I", nullptr, $PUBLIC},
	{"readLabel", "(I[Ljdk/internal/org/objectweb/asm/Label;)Ljdk/internal/org/objectweb/asm/Label;", nullptr, $PROTECTED},
	{"readLong", "(I)J", nullptr, $PUBLIC},
	{"readMethod", "(Ljdk/internal/org/objectweb/asm/ClassVisitor;Ljdk/internal/org/objectweb/asm/Context;I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ClassReader::*)($ClassVisitor*,$Context*,int32_t)>(&ClassReader::readMethod))},
	{"readModule", "(I[C)Ljava/lang/String;", nullptr, $PUBLIC},
	{"readModuleAttributes", "(Ljdk/internal/org/objectweb/asm/ClassVisitor;Ljdk/internal/org/objectweb/asm/Context;IILjava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(ClassReader::*)($ClassVisitor*,$Context*,int32_t,int32_t,$String*)>(&ClassReader::readModuleAttributes))},
	{"readPackage", "(I[C)Ljava/lang/String;", nullptr, $PUBLIC},
	{"readParameterAnnotations", "(Ljdk/internal/org/objectweb/asm/MethodVisitor;Ljdk/internal/org/objectweb/asm/Context;IZ)V", nullptr, $PRIVATE, $method(static_cast<void(ClassReader::*)($MethodVisitor*,$Context*,int32_t,bool)>(&ClassReader::readParameterAnnotations))},
	{"readRecordComponent", "(Ljdk/internal/org/objectweb/asm/ClassVisitor;Ljdk/internal/org/objectweb/asm/Context;I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ClassReader::*)($ClassVisitor*,$Context*,int32_t)>(&ClassReader::readRecordComponent))},
	{"readShort", "(I)S", nullptr, $PUBLIC},
	{"readStackMapFrame", "(IZZLjdk/internal/org/objectweb/asm/Context;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ClassReader::*)(int32_t,bool,bool,$Context*)>(&ClassReader::readStackMapFrame))},
	{"readStream", "(Ljava/io/InputStream;Z)[B", nullptr, $PRIVATE | $STATIC, $method(static_cast<$bytes*(*)($InputStream*,bool)>(&ClassReader::readStream)), "java.io.IOException"},
	{"readStringish", "(I[C)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(ClassReader::*)(int32_t,$chars*)>(&ClassReader::readStringish))},
	{"readTypeAnnotationTarget", "(Ljdk/internal/org/objectweb/asm/Context;I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ClassReader::*)($Context*,int32_t)>(&ClassReader::readTypeAnnotationTarget))},
	{"readTypeAnnotations", "(Ljdk/internal/org/objectweb/asm/MethodVisitor;Ljdk/internal/org/objectweb/asm/Context;IZ)[I", nullptr, $PRIVATE, $method(static_cast<$ints*(ClassReader::*)($MethodVisitor*,$Context*,int32_t,bool)>(&ClassReader::readTypeAnnotations))},
	{"readUTF8", "(I[C)Ljava/lang/String;", nullptr, $PUBLIC},
	{"readUnsignedShort", "(I)I", nullptr, $PUBLIC},
	{"readUtf", "(I[C)Ljava/lang/String;", nullptr, $FINAL, $method(static_cast<$String*(ClassReader::*)(int32_t,$chars*)>(&ClassReader::readUtf))},
	{"readUtf", "(II[C)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(ClassReader::*)(int32_t,int32_t,$chars*)>(&ClassReader::readUtf))},
	{"readVerificationTypeInfo", "(I[Ljava/lang/Object;I[C[Ljdk/internal/org/objectweb/asm/Label;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ClassReader::*)(int32_t,$ObjectArray*,int32_t,$chars*,$LabelArray*)>(&ClassReader::readVerificationTypeInfo))},
	{}
};

$ClassInfo _ClassReader_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.ClassReader",
	"java.lang.Object",
	nullptr,
	_ClassReader_FieldInfo_,
	_ClassReader_MethodInfo_
};

$Object* allocate$ClassReader($Class* clazz) {
	return $of($alloc(ClassReader));
}

void ClassReader::init$($bytes* classFile) {
	ClassReader::init$(classFile, 0, $nc(classFile)->length);
}

void ClassReader::init$($bytes* classFileBuffer, int32_t classFileOffset, int32_t classFileLength) {
	ClassReader::init$(classFileBuffer, classFileOffset, true);
}

void ClassReader::init$($bytes* classFileBuffer, int32_t classFileOffset, bool checkClassVersion) {
	$useLocalCurrentObjectStackCache();
	$set(this, classFileBuffer, classFileBuffer);
	$set(this, b, classFileBuffer);
	if (checkClassVersion && readShort(classFileOffset + 6) > $Opcodes::V17) {
		$throwNew($IllegalArgumentException, $$str({"Unsupported class file major version "_s, $$str(readShort(classFileOffset + 6))}));
	}
	int32_t constantPoolCount = readUnsignedShort(classFileOffset + 8);
	$set(this, cpInfoOffsets, $new($ints, constantPoolCount));
	$set(this, constantUtf8Values, $new($StringArray, constantPoolCount));
	int32_t currentCpInfoIndex = 1;
	int32_t currentCpInfoOffset = classFileOffset + 10;
	int32_t currentMaxStringLength = 0;
	bool hasBootstrapMethods = false;
	bool hasConstantDynamic = false;
	while (currentCpInfoIndex < constantPoolCount) {
		$nc(this->cpInfoOffsets)->set(currentCpInfoIndex++, currentCpInfoOffset + 1);
		int32_t cpInfoSize = 0;
		switch ($nc(classFileBuffer)->get(currentCpInfoOffset)) {
		case $Symbol::CONSTANT_FIELDREF_TAG:
			{}
		case $Symbol::CONSTANT_METHODREF_TAG:
			{}
		case $Symbol::CONSTANT_INTERFACE_METHODREF_TAG:
			{}
		case $Symbol::CONSTANT_INTEGER_TAG:
			{}
		case $Symbol::CONSTANT_FLOAT_TAG:
			{}
		case $Symbol::CONSTANT_NAME_AND_TYPE_TAG:
			{
				cpInfoSize = 5;
				break;
			}
		case $Symbol::CONSTANT_DYNAMIC_TAG:
			{
				cpInfoSize = 5;
				hasBootstrapMethods = true;
				hasConstantDynamic = true;
				break;
			}
		case $Symbol::CONSTANT_INVOKE_DYNAMIC_TAG:
			{
				cpInfoSize = 5;
				hasBootstrapMethods = true;
				break;
			}
		case $Symbol::CONSTANT_LONG_TAG:
			{}
		case $Symbol::CONSTANT_DOUBLE_TAG:
			{
				cpInfoSize = 9;
				++currentCpInfoIndex;
				break;
			}
		case $Symbol::CONSTANT_UTF8_TAG:
			{
				cpInfoSize = 3 + readUnsignedShort(currentCpInfoOffset + 1);
				if (cpInfoSize > currentMaxStringLength) {
					currentMaxStringLength = cpInfoSize;
				}
				break;
			}
		case $Symbol::CONSTANT_METHOD_HANDLE_TAG:
			{
				cpInfoSize = 4;
				break;
			}
		case $Symbol::CONSTANT_CLASS_TAG:
			{}
		case $Symbol::CONSTANT_STRING_TAG:
			{}
		case $Symbol::CONSTANT_METHOD_TYPE_TAG:
			{}
		case $Symbol::CONSTANT_PACKAGE_TAG:
			{}
		case $Symbol::CONSTANT_MODULE_TAG:
			{
				cpInfoSize = 3;
				break;
			}
		default:
			{
				$throwNew($IllegalArgumentException);
			}
		}
		currentCpInfoOffset += cpInfoSize;
	}
	this->maxStringLength = currentMaxStringLength;
	this->header = currentCpInfoOffset;
	$set(this, constantDynamicValues, hasConstantDynamic ? $new($ConstantDynamicArray, constantPoolCount) : ($ConstantDynamicArray*)nullptr);
	$set(this, bootstrapMethodOffsets, hasBootstrapMethods ? readBootstrapMethodsAttribute(currentMaxStringLength) : ($ints*)nullptr);
}

void ClassReader::init$($InputStream* inputStream) {
	ClassReader::init$($(readStream(inputStream, false)));
}

void ClassReader::init$($String* className) {
	$useLocalCurrentObjectStackCache();
	ClassReader::init$($(readStream($($ClassLoader::getSystemResourceAsStream($$str({$($nc(className)->replace(u'.', u'/')), ".class"_s}))), true)));
}

$bytes* ClassReader::readStream($InputStream* inputStream, bool close) {
	$useLocalCurrentObjectStackCache();
	if (inputStream == nullptr) {
		$throwNew($IOException, "Class not found"_s);
	}
	{
		$var($Throwable, var$0, nullptr);
		$var($bytes, var$2, nullptr);
		bool return$1 = false;
		try {
			$var($ByteArrayOutputStream, outputStream, $new($ByteArrayOutputStream));
			{
				$var($Throwable, var$3, nullptr);
				$var($bytes, var$5, nullptr);
				bool return$4 = false;
				try {
					try {
						$var($bytes, data, $new($bytes, ClassReader::INPUT_STREAM_DATA_CHUNK_SIZE));
						int32_t bytesRead = 0;
						while ((bytesRead = $nc(inputStream)->read(data, 0, data->length)) != -1) {
							outputStream->write(data, 0, bytesRead);
						}
						outputStream->flush();
						$assign(var$5, outputStream->toByteArray());
						return$4 = true;
						goto $finally1;
					} catch ($Throwable& t$) {
						try {
							outputStream->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
						$throw(t$);
					}
				} catch ($Throwable& var$6) {
					$assign(var$3, var$6);
				} $finally1: {
					outputStream->close();
				}
				if (var$3 != nullptr) {
					$throw(var$3);
				}
				if (return$4) {
					$assign(var$2, var$5);
					return$1 = true;
					goto $finally;
				}
			}
		} catch ($Throwable& var$7) {
			$assign(var$0, var$7);
		} $finally: {
			if (close) {
				$nc(inputStream)->close();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int32_t ClassReader::getAccess() {
	return readUnsignedShort(this->header);
}

$String* ClassReader::getClassName() {
	return readClass(this->header + 2, $$new($chars, this->maxStringLength));
}

$String* ClassReader::getSuperName() {
	return readClass(this->header + 4, $$new($chars, this->maxStringLength));
}

$StringArray* ClassReader::getInterfaces() {
	$useLocalCurrentObjectStackCache();
	int32_t currentOffset = this->header + 6;
	int32_t interfacesCount = readUnsignedShort(currentOffset);
	$var($StringArray, interfaces, $new($StringArray, interfacesCount));
	if (interfacesCount > 0) {
		$var($chars, charBuffer, $new($chars, this->maxStringLength));
		for (int32_t i = 0; i < interfacesCount; ++i) {
			currentOffset += 2;
			interfaces->set(i, $(readClass(currentOffset, charBuffer)));
		}
	}
	return interfaces;
}

void ClassReader::accept($ClassVisitor* classVisitor, int32_t parsingOptions) {
	accept(classVisitor, $$new($AttributeArray, 0), parsingOptions);
}

void ClassReader::accept($ClassVisitor* classVisitor, $AttributeArray* attributePrototypes, int32_t parsingOptions) {
	$useLocalCurrentObjectStackCache();
	$var($Context, context, $new($Context));
	$set(context, attributePrototypes, attributePrototypes);
	context->parsingOptions = parsingOptions;
	$set(context, charBuffer, $new($chars, this->maxStringLength));
	$var($chars, charBuffer, context->charBuffer);
	int32_t currentOffset = this->header;
	int32_t accessFlags = readUnsignedShort(currentOffset);
	$var($String, thisClass, readClass(currentOffset + 2, charBuffer));
	$var($String, superClass, readClass(currentOffset + 4, charBuffer));
	$var($StringArray, interfaces, $new($StringArray, readUnsignedShort(currentOffset + 6)));
	currentOffset += 8;
	for (int32_t i = 0; i < interfaces->length; ++i) {
		interfaces->set(i, $(readClass(currentOffset, charBuffer)));
		currentOffset += 2;
	}
	int32_t innerClassesOffset = 0;
	int32_t enclosingMethodOffset = 0;
	$var($String, signature, nullptr);
	$var($String, sourceFile, nullptr);
	$var($String, sourceDebugExtension, nullptr);
	int32_t runtimeVisibleAnnotationsOffset = 0;
	int32_t runtimeInvisibleAnnotationsOffset = 0;
	int32_t runtimeVisibleTypeAnnotationsOffset = 0;
	int32_t runtimeInvisibleTypeAnnotationsOffset = 0;
	int32_t moduleOffset = 0;
	int32_t modulePackagesOffset = 0;
	$var($String, moduleMainClass, nullptr);
	$var($String, nestHostClass, nullptr);
	int32_t nestMembersOffset = 0;
	int32_t permittedSubclassesOffset = 0;
	int32_t recordOffset = 0;
	$var($Attribute, attributes, nullptr);
	int32_t currentAttributeOffset = getFirstAttributeOffset();
	for (int32_t i = readUnsignedShort(currentAttributeOffset - 2); i > 0; --i) {
		$var($String, attributeName, readUTF8(currentAttributeOffset, charBuffer));
		int32_t attributeLength = readInt(currentAttributeOffset + 2);
		currentAttributeOffset += 6;
		$init($Constants);
		if ($nc($Constants::SOURCE_FILE)->equals(attributeName)) {
			$assign(sourceFile, readUTF8(currentAttributeOffset, charBuffer));
		} else {
			if ($nc($Constants::INNER_CLASSES)->equals(attributeName)) {
				innerClassesOffset = currentAttributeOffset;
			} else {
				if ($nc($Constants::ENCLOSING_METHOD)->equals(attributeName)) {
					enclosingMethodOffset = currentAttributeOffset;
				} else {
					if ($nc($Constants::NEST_HOST)->equals(attributeName)) {
						$assign(nestHostClass, readClass(currentAttributeOffset, charBuffer));
					} else {
						if ($nc($Constants::NEST_MEMBERS)->equals(attributeName)) {
							nestMembersOffset = currentAttributeOffset;
						} else {
							if ($nc($Constants::PERMITTED_SUBCLASSES)->equals(attributeName)) {
								permittedSubclassesOffset = currentAttributeOffset;
							} else {
								if ($nc($Constants::SIGNATURE)->equals(attributeName)) {
									$assign(signature, readUTF8(currentAttributeOffset, charBuffer));
								} else {
									if ($nc($Constants::RUNTIME_VISIBLE_ANNOTATIONS)->equals(attributeName)) {
										runtimeVisibleAnnotationsOffset = currentAttributeOffset;
									} else {
										if ($nc($Constants::RUNTIME_VISIBLE_TYPE_ANNOTATIONS)->equals(attributeName)) {
											runtimeVisibleTypeAnnotationsOffset = currentAttributeOffset;
										} else {
											if ($nc($Constants::DEPRECATED)->equals(attributeName)) {
												accessFlags |= $Opcodes::ACC_DEPRECATED;
											} else {
												if ($nc($Constants::SYNTHETIC)->equals(attributeName)) {
													accessFlags |= $Opcodes::ACC_SYNTHETIC;
												} else {
													if ($nc($Constants::SOURCE_DEBUG_EXTENSION)->equals(attributeName)) {
														if (attributeLength > $nc(this->classFileBuffer)->length - currentAttributeOffset) {
															$throwNew($IllegalArgumentException);
														}
														$assign(sourceDebugExtension, readUtf(currentAttributeOffset, attributeLength, $$new($chars, attributeLength)));
													} else {
														if ($nc($Constants::RUNTIME_INVISIBLE_ANNOTATIONS)->equals(attributeName)) {
															runtimeInvisibleAnnotationsOffset = currentAttributeOffset;
														} else {
															if ($nc($Constants::RUNTIME_INVISIBLE_TYPE_ANNOTATIONS)->equals(attributeName)) {
																runtimeInvisibleTypeAnnotationsOffset = currentAttributeOffset;
															} else {
																if ($nc($Constants::RECORD)->equals(attributeName)) {
																	recordOffset = currentAttributeOffset;
																	accessFlags |= $Opcodes::ACC_RECORD;
																} else {
																	if ($nc($Constants::MODULE)->equals(attributeName)) {
																		moduleOffset = currentAttributeOffset;
																	} else {
																		if ($nc($Constants::MODULE_MAIN_CLASS)->equals(attributeName)) {
																			$assign(moduleMainClass, readClass(currentAttributeOffset, charBuffer));
																		} else {
																			if ($nc($Constants::MODULE_PACKAGES)->equals(attributeName)) {
																				modulePackagesOffset = currentAttributeOffset;
																			} else {
																				if (!$nc($Constants::BOOTSTRAP_METHODS)->equals(attributeName)) {
																					$var($Attribute, attribute, readAttribute(attributePrototypes, attributeName, currentAttributeOffset, attributeLength, charBuffer, -1, nullptr));
																					$set($nc(attribute), nextAttribute, attributes);
																					$assign(attributes, attribute);
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
									}
								}
							}
						}
					}
				}
			}
		}
		currentAttributeOffset += attributeLength;
	}
	$nc(classVisitor)->visit(readInt($nc(this->cpInfoOffsets)->get(1) - 7), accessFlags, thisClass, signature, superClass, interfaces);
	if (((int32_t)(parsingOptions & (uint32_t)ClassReader::SKIP_DEBUG)) == 0 && (sourceFile != nullptr || sourceDebugExtension != nullptr)) {
		classVisitor->visitSource(sourceFile, sourceDebugExtension);
	}
	if (moduleOffset != 0) {
		readModuleAttributes(classVisitor, context, moduleOffset, modulePackagesOffset, moduleMainClass);
	}
	if (nestHostClass != nullptr) {
		classVisitor->visitNestHost(nestHostClass);
	}
	if (enclosingMethodOffset != 0) {
		$var($String, className, readClass(enclosingMethodOffset, charBuffer));
		int32_t methodIndex = readUnsignedShort(enclosingMethodOffset + 2);
		$var($String, name, methodIndex == 0 ? ($String*)nullptr : readUTF8($nc(this->cpInfoOffsets)->get(methodIndex), charBuffer));
		$var($String, type, methodIndex == 0 ? ($String*)nullptr : readUTF8($nc(this->cpInfoOffsets)->get(methodIndex) + 2, charBuffer));
		classVisitor->visitOuterClass(className, name, type);
	}
	if (runtimeVisibleAnnotationsOffset != 0) {
		int32_t numAnnotations = readUnsignedShort(runtimeVisibleAnnotationsOffset);
		int32_t currentAnnotationOffset = runtimeVisibleAnnotationsOffset + 2;
		while (numAnnotations-- > 0) {
			$var($String, annotationDescriptor, readUTF8(currentAnnotationOffset, charBuffer));
			currentAnnotationOffset += 2;
			currentAnnotationOffset = readElementValues($(classVisitor->visitAnnotation(annotationDescriptor, true)), currentAnnotationOffset, true, charBuffer);
		}
	}
	if (runtimeInvisibleAnnotationsOffset != 0) {
		int32_t numAnnotations = readUnsignedShort(runtimeInvisibleAnnotationsOffset);
		int32_t currentAnnotationOffset = runtimeInvisibleAnnotationsOffset + 2;
		while (numAnnotations-- > 0) {
			$var($String, annotationDescriptor, readUTF8(currentAnnotationOffset, charBuffer));
			currentAnnotationOffset += 2;
			currentAnnotationOffset = readElementValues($(classVisitor->visitAnnotation(annotationDescriptor, false)), currentAnnotationOffset, true, charBuffer);
		}
	}
	if (runtimeVisibleTypeAnnotationsOffset != 0) {
		int32_t numAnnotations = readUnsignedShort(runtimeVisibleTypeAnnotationsOffset);
		int32_t currentAnnotationOffset = runtimeVisibleTypeAnnotationsOffset + 2;
		while (numAnnotations-- > 0) {
			currentAnnotationOffset = readTypeAnnotationTarget(context, currentAnnotationOffset);
			$var($String, annotationDescriptor, readUTF8(currentAnnotationOffset, charBuffer));
			currentAnnotationOffset += 2;
			currentAnnotationOffset = readElementValues($(classVisitor->visitTypeAnnotation(context->currentTypeAnnotationTarget, context->currentTypeAnnotationTargetPath, annotationDescriptor, true)), currentAnnotationOffset, true, charBuffer);
		}
	}
	if (runtimeInvisibleTypeAnnotationsOffset != 0) {
		int32_t numAnnotations = readUnsignedShort(runtimeInvisibleTypeAnnotationsOffset);
		int32_t currentAnnotationOffset = runtimeInvisibleTypeAnnotationsOffset + 2;
		while (numAnnotations-- > 0) {
			currentAnnotationOffset = readTypeAnnotationTarget(context, currentAnnotationOffset);
			$var($String, annotationDescriptor, readUTF8(currentAnnotationOffset, charBuffer));
			currentAnnotationOffset += 2;
			currentAnnotationOffset = readElementValues($(classVisitor->visitTypeAnnotation(context->currentTypeAnnotationTarget, context->currentTypeAnnotationTargetPath, annotationDescriptor, false)), currentAnnotationOffset, true, charBuffer);
		}
	}
	while (attributes != nullptr) {
		$var($Attribute, nextAttribute, attributes->nextAttribute);
		$set(attributes, nextAttribute, nullptr);
		classVisitor->visitAttribute(attributes);
		$assign(attributes, nextAttribute);
	}
	if (nestMembersOffset != 0) {
		int32_t numberOfNestMembers = readUnsignedShort(nestMembersOffset);
		int32_t currentNestMemberOffset = nestMembersOffset + 2;
		while (numberOfNestMembers-- > 0) {
			classVisitor->visitNestMember($(readClass(currentNestMemberOffset, charBuffer)));
			currentNestMemberOffset += 2;
		}
	}
	if (permittedSubclassesOffset != 0) {
		int32_t numberOfPermittedSubclasses = readUnsignedShort(permittedSubclassesOffset);
		int32_t currentPermittedSubclassOffset = permittedSubclassesOffset + 2;
		while (numberOfPermittedSubclasses-- > 0) {
			classVisitor->visitPermittedSubclassExperimental($(readClass(currentPermittedSubclassOffset, charBuffer)));
			currentPermittedSubclassOffset += 2;
		}
	}
	if (innerClassesOffset != 0) {
		int32_t numberOfClasses = readUnsignedShort(innerClassesOffset);
		int32_t currentClassesOffset = innerClassesOffset + 2;
		while (numberOfClasses-- > 0) {
			$var($String, var$0, readClass(currentClassesOffset, charBuffer));
			$var($String, var$1, readClass(currentClassesOffset + 2, charBuffer));
			$var($String, var$2, readUTF8(currentClassesOffset + 4, charBuffer));
			classVisitor->visitInnerClass(var$0, var$1, var$2, readUnsignedShort(currentClassesOffset + 6));
			currentClassesOffset += 8;
		}
	}
	if (recordOffset != 0) {
		int32_t recordComponentsCount = readUnsignedShort(recordOffset);
		recordOffset += 2;
		while (recordComponentsCount-- > 0) {
			recordOffset = readRecordComponent(classVisitor, context, recordOffset);
		}
	}
	int32_t fieldsCount = readUnsignedShort(currentOffset);
	currentOffset += 2;
	while (fieldsCount-- > 0) {
		currentOffset = readField(classVisitor, context, currentOffset);
	}
	int32_t methodsCount = readUnsignedShort(currentOffset);
	currentOffset += 2;
	while (methodsCount-- > 0) {
		currentOffset = readMethod(classVisitor, context, currentOffset);
	}
	classVisitor->visitEnd();
}

void ClassReader::readModuleAttributes($ClassVisitor* classVisitor, $Context* context, int32_t moduleOffset, int32_t modulePackagesOffset, $String* moduleMainClass) {
	$useLocalCurrentObjectStackCache();
	$var($chars, buffer, $nc(context)->charBuffer);
	int32_t currentOffset = moduleOffset;
	$var($String, moduleName, readModule(currentOffset, buffer));
	int32_t moduleFlags = readUnsignedShort(currentOffset + 2);
	$var($String, moduleVersion, readUTF8(currentOffset + 4, buffer));
	currentOffset += 6;
	$var($ModuleVisitor, moduleVisitor, $nc(classVisitor)->visitModule(moduleName, moduleFlags, moduleVersion));
	if (moduleVisitor == nullptr) {
		return;
	}
	if (moduleMainClass != nullptr) {
		$nc(moduleVisitor)->visitMainClass(moduleMainClass);
	}
	if (modulePackagesOffset != 0) {
		int32_t packageCount = readUnsignedShort(modulePackagesOffset);
		int32_t currentPackageOffset = modulePackagesOffset + 2;
		while (packageCount-- > 0) {
			$nc(moduleVisitor)->visitPackage($(readPackage(currentPackageOffset, buffer)));
			currentPackageOffset += 2;
		}
	}
	int32_t requiresCount = readUnsignedShort(currentOffset);
	currentOffset += 2;
	while (requiresCount-- > 0) {
		$var($String, requires, readModule(currentOffset, buffer));
		int32_t requiresFlags = readUnsignedShort(currentOffset + 2);
		$var($String, requiresVersion, readUTF8(currentOffset + 4, buffer));
		currentOffset += 6;
		$nc(moduleVisitor)->visitRequire(requires, requiresFlags, requiresVersion);
	}
	int32_t exportsCount = readUnsignedShort(currentOffset);
	currentOffset += 2;
	while (exportsCount-- > 0) {
		$var($String, exports, readPackage(currentOffset, buffer));
		int32_t exportsFlags = readUnsignedShort(currentOffset + 2);
		int32_t exportsToCount = readUnsignedShort(currentOffset + 4);
		currentOffset += 6;
		$var($StringArray, exportsTo, nullptr);
		if (exportsToCount != 0) {
			$assign(exportsTo, $new($StringArray, exportsToCount));
			for (int32_t i = 0; i < exportsToCount; ++i) {
				exportsTo->set(i, $(readModule(currentOffset, buffer)));
				currentOffset += 2;
			}
		}
		$nc(moduleVisitor)->visitExport(exports, exportsFlags, exportsTo);
	}
	int32_t opensCount = readUnsignedShort(currentOffset);
	currentOffset += 2;
	while (opensCount-- > 0) {
		$var($String, opens, readPackage(currentOffset, buffer));
		int32_t opensFlags = readUnsignedShort(currentOffset + 2);
		int32_t opensToCount = readUnsignedShort(currentOffset + 4);
		currentOffset += 6;
		$var($StringArray, opensTo, nullptr);
		if (opensToCount != 0) {
			$assign(opensTo, $new($StringArray, opensToCount));
			for (int32_t i = 0; i < opensToCount; ++i) {
				opensTo->set(i, $(readModule(currentOffset, buffer)));
				currentOffset += 2;
			}
		}
		$nc(moduleVisitor)->visitOpen(opens, opensFlags, opensTo);
	}
	int32_t usesCount = readUnsignedShort(currentOffset);
	currentOffset += 2;
	while (usesCount-- > 0) {
		$nc(moduleVisitor)->visitUse($(readClass(currentOffset, buffer)));
		currentOffset += 2;
	}
	int32_t providesCount = readUnsignedShort(currentOffset);
	currentOffset += 2;
	while (providesCount-- > 0) {
		$var($String, provides, readClass(currentOffset, buffer));
		int32_t providesWithCount = readUnsignedShort(currentOffset + 2);
		currentOffset += 4;
		$var($StringArray, providesWith, $new($StringArray, providesWithCount));
		for (int32_t i = 0; i < providesWithCount; ++i) {
			providesWith->set(i, $(readClass(currentOffset, buffer)));
			currentOffset += 2;
		}
		$nc(moduleVisitor)->visitProvide(provides, providesWith);
	}
	$nc(moduleVisitor)->visitEnd();
}

int32_t ClassReader::readRecordComponent($ClassVisitor* classVisitor, $Context* context, int32_t recordComponentOffset) {
	$useLocalCurrentObjectStackCache();
	$var($chars, charBuffer, $nc(context)->charBuffer);
	int32_t currentOffset = recordComponentOffset;
	$var($String, name, readUTF8(currentOffset, charBuffer));
	$var($String, descriptor, readUTF8(currentOffset + 2, charBuffer));
	currentOffset += 4;
	$var($String, signature, nullptr);
	int32_t runtimeVisibleAnnotationsOffset = 0;
	int32_t runtimeInvisibleAnnotationsOffset = 0;
	int32_t runtimeVisibleTypeAnnotationsOffset = 0;
	int32_t runtimeInvisibleTypeAnnotationsOffset = 0;
	$var($Attribute, attributes, nullptr);
	int32_t attributesCount = readUnsignedShort(currentOffset);
	currentOffset += 2;
	while (attributesCount-- > 0) {
		$var($String, attributeName, readUTF8(currentOffset, charBuffer));
		int32_t attributeLength = readInt(currentOffset + 2);
		currentOffset += 6;
		$init($Constants);
		if ($nc($Constants::SIGNATURE)->equals(attributeName)) {
			$assign(signature, readUTF8(currentOffset, charBuffer));
		} else {
			if ($nc($Constants::RUNTIME_VISIBLE_ANNOTATIONS)->equals(attributeName)) {
				runtimeVisibleAnnotationsOffset = currentOffset;
			} else {
				if ($nc($Constants::RUNTIME_VISIBLE_TYPE_ANNOTATIONS)->equals(attributeName)) {
					runtimeVisibleTypeAnnotationsOffset = currentOffset;
				} else {
					if ($nc($Constants::RUNTIME_INVISIBLE_ANNOTATIONS)->equals(attributeName)) {
						runtimeInvisibleAnnotationsOffset = currentOffset;
					} else {
						if ($nc($Constants::RUNTIME_INVISIBLE_TYPE_ANNOTATIONS)->equals(attributeName)) {
							runtimeInvisibleTypeAnnotationsOffset = currentOffset;
						} else {
							$var($Attribute, attribute, readAttribute(context->attributePrototypes, attributeName, currentOffset, attributeLength, charBuffer, -1, nullptr));
							$set($nc(attribute), nextAttribute, attributes);
							$assign(attributes, attribute);
						}
					}
				}
			}
		}
		currentOffset += attributeLength;
	}
	$var($RecordComponentVisitor, recordComponentVisitor, $nc(classVisitor)->visitRecordComponent(name, descriptor, signature));
	if (recordComponentVisitor == nullptr) {
		return currentOffset;
	}
	if (runtimeVisibleAnnotationsOffset != 0) {
		int32_t numAnnotations = readUnsignedShort(runtimeVisibleAnnotationsOffset);
		int32_t currentAnnotationOffset = runtimeVisibleAnnotationsOffset + 2;
		while (numAnnotations-- > 0) {
			$var($String, annotationDescriptor, readUTF8(currentAnnotationOffset, charBuffer));
			currentAnnotationOffset += 2;
			currentAnnotationOffset = readElementValues($($nc(recordComponentVisitor)->visitAnnotation(annotationDescriptor, true)), currentAnnotationOffset, true, charBuffer);
		}
	}
	if (runtimeInvisibleAnnotationsOffset != 0) {
		int32_t numAnnotations = readUnsignedShort(runtimeInvisibleAnnotationsOffset);
		int32_t currentAnnotationOffset = runtimeInvisibleAnnotationsOffset + 2;
		while (numAnnotations-- > 0) {
			$var($String, annotationDescriptor, readUTF8(currentAnnotationOffset, charBuffer));
			currentAnnotationOffset += 2;
			currentAnnotationOffset = readElementValues($($nc(recordComponentVisitor)->visitAnnotation(annotationDescriptor, false)), currentAnnotationOffset, true, charBuffer);
		}
	}
	if (runtimeVisibleTypeAnnotationsOffset != 0) {
		int32_t numAnnotations = readUnsignedShort(runtimeVisibleTypeAnnotationsOffset);
		int32_t currentAnnotationOffset = runtimeVisibleTypeAnnotationsOffset + 2;
		while (numAnnotations-- > 0) {
			currentAnnotationOffset = readTypeAnnotationTarget(context, currentAnnotationOffset);
			$var($String, annotationDescriptor, readUTF8(currentAnnotationOffset, charBuffer));
			currentAnnotationOffset += 2;
			currentAnnotationOffset = readElementValues($($nc(recordComponentVisitor)->visitTypeAnnotation(context->currentTypeAnnotationTarget, context->currentTypeAnnotationTargetPath, annotationDescriptor, true)), currentAnnotationOffset, true, charBuffer);
		}
	}
	if (runtimeInvisibleTypeAnnotationsOffset != 0) {
		int32_t numAnnotations = readUnsignedShort(runtimeInvisibleTypeAnnotationsOffset);
		int32_t currentAnnotationOffset = runtimeInvisibleTypeAnnotationsOffset + 2;
		while (numAnnotations-- > 0) {
			currentAnnotationOffset = readTypeAnnotationTarget(context, currentAnnotationOffset);
			$var($String, annotationDescriptor, readUTF8(currentAnnotationOffset, charBuffer));
			currentAnnotationOffset += 2;
			currentAnnotationOffset = readElementValues($($nc(recordComponentVisitor)->visitTypeAnnotation(context->currentTypeAnnotationTarget, context->currentTypeAnnotationTargetPath, annotationDescriptor, false)), currentAnnotationOffset, true, charBuffer);
		}
	}
	while (attributes != nullptr) {
		$var($Attribute, nextAttribute, attributes->nextAttribute);
		$set(attributes, nextAttribute, nullptr);
		$nc(recordComponentVisitor)->visitAttribute(attributes);
		$assign(attributes, nextAttribute);
	}
	$nc(recordComponentVisitor)->visitEnd();
	return currentOffset;
}

int32_t ClassReader::readField($ClassVisitor* classVisitor, $Context* context, int32_t fieldInfoOffset) {
	$useLocalCurrentObjectStackCache();
	$var($chars, charBuffer, $nc(context)->charBuffer);
	int32_t currentOffset = fieldInfoOffset;
	int32_t accessFlags = readUnsignedShort(currentOffset);
	$var($String, name, readUTF8(currentOffset + 2, charBuffer));
	$var($String, descriptor, readUTF8(currentOffset + 4, charBuffer));
	currentOffset += 6;
	$var($Object, constantValue, nullptr);
	$var($String, signature, nullptr);
	int32_t runtimeVisibleAnnotationsOffset = 0;
	int32_t runtimeInvisibleAnnotationsOffset = 0;
	int32_t runtimeVisibleTypeAnnotationsOffset = 0;
	int32_t runtimeInvisibleTypeAnnotationsOffset = 0;
	$var($Attribute, attributes, nullptr);
	int32_t attributesCount = readUnsignedShort(currentOffset);
	currentOffset += 2;
	while (attributesCount-- > 0) {
		$var($String, attributeName, readUTF8(currentOffset, charBuffer));
		int32_t attributeLength = readInt(currentOffset + 2);
		currentOffset += 6;
		$init($Constants);
		if ($nc($Constants::CONSTANT_VALUE)->equals(attributeName)) {
			int32_t constantvalueIndex = readUnsignedShort(currentOffset);
			$assign(constantValue, constantvalueIndex == 0 ? ($Object*)nullptr : readConst(constantvalueIndex, charBuffer));
		} else {
			if ($nc($Constants::SIGNATURE)->equals(attributeName)) {
				$assign(signature, readUTF8(currentOffset, charBuffer));
			} else {
				if ($nc($Constants::DEPRECATED)->equals(attributeName)) {
					accessFlags |= $Opcodes::ACC_DEPRECATED;
				} else {
					if ($nc($Constants::SYNTHETIC)->equals(attributeName)) {
						accessFlags |= $Opcodes::ACC_SYNTHETIC;
					} else {
						if ($nc($Constants::RUNTIME_VISIBLE_ANNOTATIONS)->equals(attributeName)) {
							runtimeVisibleAnnotationsOffset = currentOffset;
						} else {
							if ($nc($Constants::RUNTIME_VISIBLE_TYPE_ANNOTATIONS)->equals(attributeName)) {
								runtimeVisibleTypeAnnotationsOffset = currentOffset;
							} else {
								if ($nc($Constants::RUNTIME_INVISIBLE_ANNOTATIONS)->equals(attributeName)) {
									runtimeInvisibleAnnotationsOffset = currentOffset;
								} else {
									if ($nc($Constants::RUNTIME_INVISIBLE_TYPE_ANNOTATIONS)->equals(attributeName)) {
										runtimeInvisibleTypeAnnotationsOffset = currentOffset;
									} else {
										$var($Attribute, attribute, readAttribute(context->attributePrototypes, attributeName, currentOffset, attributeLength, charBuffer, -1, nullptr));
										$set($nc(attribute), nextAttribute, attributes);
										$assign(attributes, attribute);
									}
								}
							}
						}
					}
				}
			}
		}
		currentOffset += attributeLength;
	}
	$var($FieldVisitor, fieldVisitor, $nc(classVisitor)->visitField(accessFlags, name, descriptor, signature, constantValue));
	if (fieldVisitor == nullptr) {
		return currentOffset;
	}
	if (runtimeVisibleAnnotationsOffset != 0) {
		int32_t numAnnotations = readUnsignedShort(runtimeVisibleAnnotationsOffset);
		int32_t currentAnnotationOffset = runtimeVisibleAnnotationsOffset + 2;
		while (numAnnotations-- > 0) {
			$var($String, annotationDescriptor, readUTF8(currentAnnotationOffset, charBuffer));
			currentAnnotationOffset += 2;
			currentAnnotationOffset = readElementValues($($nc(fieldVisitor)->visitAnnotation(annotationDescriptor, true)), currentAnnotationOffset, true, charBuffer);
		}
	}
	if (runtimeInvisibleAnnotationsOffset != 0) {
		int32_t numAnnotations = readUnsignedShort(runtimeInvisibleAnnotationsOffset);
		int32_t currentAnnotationOffset = runtimeInvisibleAnnotationsOffset + 2;
		while (numAnnotations-- > 0) {
			$var($String, annotationDescriptor, readUTF8(currentAnnotationOffset, charBuffer));
			currentAnnotationOffset += 2;
			currentAnnotationOffset = readElementValues($($nc(fieldVisitor)->visitAnnotation(annotationDescriptor, false)), currentAnnotationOffset, true, charBuffer);
		}
	}
	if (runtimeVisibleTypeAnnotationsOffset != 0) {
		int32_t numAnnotations = readUnsignedShort(runtimeVisibleTypeAnnotationsOffset);
		int32_t currentAnnotationOffset = runtimeVisibleTypeAnnotationsOffset + 2;
		while (numAnnotations-- > 0) {
			currentAnnotationOffset = readTypeAnnotationTarget(context, currentAnnotationOffset);
			$var($String, annotationDescriptor, readUTF8(currentAnnotationOffset, charBuffer));
			currentAnnotationOffset += 2;
			currentAnnotationOffset = readElementValues($($nc(fieldVisitor)->visitTypeAnnotation(context->currentTypeAnnotationTarget, context->currentTypeAnnotationTargetPath, annotationDescriptor, true)), currentAnnotationOffset, true, charBuffer);
		}
	}
	if (runtimeInvisibleTypeAnnotationsOffset != 0) {
		int32_t numAnnotations = readUnsignedShort(runtimeInvisibleTypeAnnotationsOffset);
		int32_t currentAnnotationOffset = runtimeInvisibleTypeAnnotationsOffset + 2;
		while (numAnnotations-- > 0) {
			currentAnnotationOffset = readTypeAnnotationTarget(context, currentAnnotationOffset);
			$var($String, annotationDescriptor, readUTF8(currentAnnotationOffset, charBuffer));
			currentAnnotationOffset += 2;
			currentAnnotationOffset = readElementValues($($nc(fieldVisitor)->visitTypeAnnotation(context->currentTypeAnnotationTarget, context->currentTypeAnnotationTargetPath, annotationDescriptor, false)), currentAnnotationOffset, true, charBuffer);
		}
	}
	while (attributes != nullptr) {
		$var($Attribute, nextAttribute, attributes->nextAttribute);
		$set(attributes, nextAttribute, nullptr);
		$nc(fieldVisitor)->visitAttribute(attributes);
		$assign(attributes, nextAttribute);
	}
	$nc(fieldVisitor)->visitEnd();
	return currentOffset;
}

int32_t ClassReader::readMethod($ClassVisitor* classVisitor, $Context* context, int32_t methodInfoOffset) {
	$useLocalCurrentObjectStackCache();
	$var($chars, charBuffer, $nc(context)->charBuffer);
	int32_t currentOffset = methodInfoOffset;
	context->currentMethodAccessFlags = readUnsignedShort(currentOffset);
	$set(context, currentMethodName, readUTF8(currentOffset + 2, charBuffer));
	$set(context, currentMethodDescriptor, readUTF8(currentOffset + 4, charBuffer));
	currentOffset += 6;
	int32_t codeOffset = 0;
	int32_t exceptionsOffset = 0;
	$var($StringArray, exceptions, nullptr);
	bool synthetic = false;
	int32_t signatureIndex = 0;
	int32_t runtimeVisibleAnnotationsOffset = 0;
	int32_t runtimeInvisibleAnnotationsOffset = 0;
	int32_t runtimeVisibleParameterAnnotationsOffset = 0;
	int32_t runtimeInvisibleParameterAnnotationsOffset = 0;
	int32_t runtimeVisibleTypeAnnotationsOffset = 0;
	int32_t runtimeInvisibleTypeAnnotationsOffset = 0;
	int32_t annotationDefaultOffset = 0;
	int32_t methodParametersOffset = 0;
	$var($Attribute, attributes, nullptr);
	int32_t attributesCount = readUnsignedShort(currentOffset);
	currentOffset += 2;
	while (attributesCount-- > 0) {
		$var($String, attributeName, readUTF8(currentOffset, charBuffer));
		int32_t attributeLength = readInt(currentOffset + 2);
		currentOffset += 6;
		$init($Constants);
		if ($nc($Constants::CODE)->equals(attributeName)) {
			if (((int32_t)(context->parsingOptions & (uint32_t)ClassReader::SKIP_CODE)) == 0) {
				codeOffset = currentOffset;
			}
		} else {
			if ($nc($Constants::EXCEPTIONS)->equals(attributeName)) {
				exceptionsOffset = currentOffset;
				$assign(exceptions, $new($StringArray, readUnsignedShort(exceptionsOffset)));
				int32_t currentExceptionOffset = exceptionsOffset + 2;
				for (int32_t i = 0; i < exceptions->length; ++i) {
					exceptions->set(i, $(readClass(currentExceptionOffset, charBuffer)));
					currentExceptionOffset += 2;
				}
			} else {
				if ($nc($Constants::SIGNATURE)->equals(attributeName)) {
					signatureIndex = readUnsignedShort(currentOffset);
				} else {
					if ($nc($Constants::DEPRECATED)->equals(attributeName)) {
						context->currentMethodAccessFlags |= $Opcodes::ACC_DEPRECATED;
					} else {
						if ($nc($Constants::RUNTIME_VISIBLE_ANNOTATIONS)->equals(attributeName)) {
							runtimeVisibleAnnotationsOffset = currentOffset;
						} else {
							if ($nc($Constants::RUNTIME_VISIBLE_TYPE_ANNOTATIONS)->equals(attributeName)) {
								runtimeVisibleTypeAnnotationsOffset = currentOffset;
							} else {
								if ($nc($Constants::ANNOTATION_DEFAULT)->equals(attributeName)) {
									annotationDefaultOffset = currentOffset;
								} else {
									if ($nc($Constants::SYNTHETIC)->equals(attributeName)) {
										synthetic = true;
										context->currentMethodAccessFlags |= $Opcodes::ACC_SYNTHETIC;
									} else {
										if ($nc($Constants::RUNTIME_INVISIBLE_ANNOTATIONS)->equals(attributeName)) {
											runtimeInvisibleAnnotationsOffset = currentOffset;
										} else {
											if ($nc($Constants::RUNTIME_INVISIBLE_TYPE_ANNOTATIONS)->equals(attributeName)) {
												runtimeInvisibleTypeAnnotationsOffset = currentOffset;
											} else {
												if ($nc($Constants::RUNTIME_VISIBLE_PARAMETER_ANNOTATIONS)->equals(attributeName)) {
													runtimeVisibleParameterAnnotationsOffset = currentOffset;
												} else {
													if ($nc($Constants::RUNTIME_INVISIBLE_PARAMETER_ANNOTATIONS)->equals(attributeName)) {
														runtimeInvisibleParameterAnnotationsOffset = currentOffset;
													} else {
														if ($nc($Constants::METHOD_PARAMETERS)->equals(attributeName)) {
															methodParametersOffset = currentOffset;
														} else {
															$var($Attribute, attribute, readAttribute(context->attributePrototypes, attributeName, currentOffset, attributeLength, charBuffer, -1, nullptr));
															$set($nc(attribute), nextAttribute, attributes);
															$assign(attributes, attribute);
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
			}
		}
		currentOffset += attributeLength;
	}
	$var($MethodVisitor, methodVisitor, $nc(classVisitor)->visitMethod(context->currentMethodAccessFlags, context->currentMethodName, context->currentMethodDescriptor, signatureIndex == 0 ? ($String*)nullptr : $(readUtf(signatureIndex, charBuffer)), exceptions));
	if (methodVisitor == nullptr) {
		return currentOffset;
	}
	if ($instanceOf($MethodWriter, methodVisitor)) {
		$var($MethodWriter, methodWriter, $cast($MethodWriter, methodVisitor));
		if ($nc(methodWriter)->canCopyMethodAttributes(this, synthetic, ((int32_t)(context->currentMethodAccessFlags & (uint32_t)$Opcodes::ACC_DEPRECATED)) != 0, readUnsignedShort(methodInfoOffset + 4), signatureIndex, exceptionsOffset)) {
			methodWriter->setMethodAttributesSource(methodInfoOffset, currentOffset - methodInfoOffset);
			return currentOffset;
		}
	}
	if (methodParametersOffset != 0 && ((int32_t)(context->parsingOptions & (uint32_t)ClassReader::SKIP_DEBUG)) == 0) {
		int32_t parametersCount = readByte(methodParametersOffset);
		int32_t currentParameterOffset = methodParametersOffset + 1;
		while (parametersCount-- > 0) {
			$var($String, var$0, readUTF8(currentParameterOffset, charBuffer));
			$nc(methodVisitor)->visitParameter(var$0, readUnsignedShort(currentParameterOffset + 2));
			currentParameterOffset += 4;
		}
	}
	if (annotationDefaultOffset != 0) {
		$var($AnnotationVisitor, annotationVisitor, $nc(methodVisitor)->visitAnnotationDefault());
		readElementValue(annotationVisitor, annotationDefaultOffset, nullptr, charBuffer);
		if (annotationVisitor != nullptr) {
			annotationVisitor->visitEnd();
		}
	}
	if (runtimeVisibleAnnotationsOffset != 0) {
		int32_t numAnnotations = readUnsignedShort(runtimeVisibleAnnotationsOffset);
		int32_t currentAnnotationOffset = runtimeVisibleAnnotationsOffset + 2;
		while (numAnnotations-- > 0) {
			$var($String, annotationDescriptor, readUTF8(currentAnnotationOffset, charBuffer));
			currentAnnotationOffset += 2;
			currentAnnotationOffset = readElementValues($($nc(methodVisitor)->visitAnnotation(annotationDescriptor, true)), currentAnnotationOffset, true, charBuffer);
		}
	}
	if (runtimeInvisibleAnnotationsOffset != 0) {
		int32_t numAnnotations = readUnsignedShort(runtimeInvisibleAnnotationsOffset);
		int32_t currentAnnotationOffset = runtimeInvisibleAnnotationsOffset + 2;
		while (numAnnotations-- > 0) {
			$var($String, annotationDescriptor, readUTF8(currentAnnotationOffset, charBuffer));
			currentAnnotationOffset += 2;
			currentAnnotationOffset = readElementValues($($nc(methodVisitor)->visitAnnotation(annotationDescriptor, false)), currentAnnotationOffset, true, charBuffer);
		}
	}
	if (runtimeVisibleTypeAnnotationsOffset != 0) {
		int32_t numAnnotations = readUnsignedShort(runtimeVisibleTypeAnnotationsOffset);
		int32_t currentAnnotationOffset = runtimeVisibleTypeAnnotationsOffset + 2;
		while (numAnnotations-- > 0) {
			currentAnnotationOffset = readTypeAnnotationTarget(context, currentAnnotationOffset);
			$var($String, annotationDescriptor, readUTF8(currentAnnotationOffset, charBuffer));
			currentAnnotationOffset += 2;
			currentAnnotationOffset = readElementValues($($nc(methodVisitor)->visitTypeAnnotation(context->currentTypeAnnotationTarget, context->currentTypeAnnotationTargetPath, annotationDescriptor, true)), currentAnnotationOffset, true, charBuffer);
		}
	}
	if (runtimeInvisibleTypeAnnotationsOffset != 0) {
		int32_t numAnnotations = readUnsignedShort(runtimeInvisibleTypeAnnotationsOffset);
		int32_t currentAnnotationOffset = runtimeInvisibleTypeAnnotationsOffset + 2;
		while (numAnnotations-- > 0) {
			currentAnnotationOffset = readTypeAnnotationTarget(context, currentAnnotationOffset);
			$var($String, annotationDescriptor, readUTF8(currentAnnotationOffset, charBuffer));
			currentAnnotationOffset += 2;
			currentAnnotationOffset = readElementValues($($nc(methodVisitor)->visitTypeAnnotation(context->currentTypeAnnotationTarget, context->currentTypeAnnotationTargetPath, annotationDescriptor, false)), currentAnnotationOffset, true, charBuffer);
		}
	}
	if (runtimeVisibleParameterAnnotationsOffset != 0) {
		readParameterAnnotations(methodVisitor, context, runtimeVisibleParameterAnnotationsOffset, true);
	}
	if (runtimeInvisibleParameterAnnotationsOffset != 0) {
		readParameterAnnotations(methodVisitor, context, runtimeInvisibleParameterAnnotationsOffset, false);
	}
	while (attributes != nullptr) {
		$var($Attribute, nextAttribute, attributes->nextAttribute);
		$set(attributes, nextAttribute, nullptr);
		$nc(methodVisitor)->visitAttribute(attributes);
		$assign(attributes, nextAttribute);
	}
	if (codeOffset != 0) {
		$nc(methodVisitor)->visitCode();
		readCode(methodVisitor, context, codeOffset);
	}
	$nc(methodVisitor)->visitEnd();
	return currentOffset;
}

void ClassReader::readCode($MethodVisitor* methodVisitor, $Context* context, int32_t codeOffset) {
	$useLocalCurrentObjectStackCache();
	int32_t currentOffset = codeOffset;
	$var($bytes, classBuffer, this->classFileBuffer);
	$var($chars, charBuffer, $nc(context)->charBuffer);
	int32_t maxStack = readUnsignedShort(currentOffset);
	int32_t maxLocals = readUnsignedShort(currentOffset + 2);
	int32_t codeLength = readInt(currentOffset + 4);
	currentOffset += 8;
	if (codeLength > $nc(this->classFileBuffer)->length - currentOffset) {
		$throwNew($IllegalArgumentException);
	}
	int32_t bytecodeStartOffset = currentOffset;
	int32_t bytecodeEndOffset = currentOffset + codeLength;
	$var($LabelArray, labels, $set(context, currentMethodLabels, $new($LabelArray, codeLength + 1)));
	while (currentOffset < bytecodeEndOffset) {
		int32_t bytecodeOffset = currentOffset - bytecodeStartOffset;
		int32_t opcode = (int32_t)($nc(classBuffer)->get(currentOffset) & (uint32_t)255);
		{
			int32_t numTableEntries = 0;
			int32_t numSwitchCases = 0;
			switch (opcode) {
			case $Opcodes::NOP:
				{}
			case $Opcodes::ACONST_NULL:
				{}
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
			case $Opcodes::LCONST_0:
				{}
			case $Opcodes::LCONST_1:
				{}
			case $Opcodes::FCONST_0:
				{}
			case $Opcodes::FCONST_1:
				{}
			case $Opcodes::FCONST_2:
				{}
			case $Opcodes::DCONST_0:
				{}
			case $Opcodes::DCONST_1:
				{}
			case $Opcodes::IALOAD:
				{}
			case $Opcodes::LALOAD:
				{}
			case $Opcodes::FALOAD:
				{}
			case $Opcodes::DALOAD:
				{}
			case $Opcodes::AALOAD:
				{}
			case $Opcodes::BALOAD:
				{}
			case $Opcodes::CALOAD:
				{}
			case $Opcodes::SALOAD:
				{}
			case $Opcodes::IASTORE:
				{}
			case $Opcodes::LASTORE:
				{}
			case $Opcodes::FASTORE:
				{}
			case $Opcodes::DASTORE:
				{}
			case $Opcodes::AASTORE:
				{}
			case $Opcodes::BASTORE:
				{}
			case $Opcodes::CASTORE:
				{}
			case $Opcodes::SASTORE:
				{}
			case $Opcodes::POP:
				{}
			case $Opcodes::POP2:
				{}
			case $Opcodes::DUP:
				{}
			case $Opcodes::DUP_X1:
				{}
			case $Opcodes::DUP_X2:
				{}
			case $Opcodes::DUP2:
				{}
			case $Opcodes::DUP2_X1:
				{}
			case $Opcodes::DUP2_X2:
				{}
			case $Opcodes::SWAP:
				{}
			case $Opcodes::IADD:
				{}
			case $Opcodes::LADD:
				{}
			case $Opcodes::FADD:
				{}
			case $Opcodes::DADD:
				{}
			case $Opcodes::ISUB:
				{}
			case $Opcodes::LSUB:
				{}
			case $Opcodes::FSUB:
				{}
			case $Opcodes::DSUB:
				{}
			case $Opcodes::IMUL:
				{}
			case $Opcodes::LMUL:
				{}
			case $Opcodes::FMUL:
				{}
			case $Opcodes::DMUL:
				{}
			case $Opcodes::IDIV:
				{}
			case $Opcodes::LDIV:
				{}
			case $Opcodes::FDIV:
				{}
			case $Opcodes::DDIV:
				{}
			case $Opcodes::IREM:
				{}
			case $Opcodes::LREM:
				{}
			case $Opcodes::FREM:
				{}
			case $Opcodes::DREM:
				{}
			case $Opcodes::INEG:
				{}
			case $Opcodes::LNEG:
				{}
			case $Opcodes::FNEG:
				{}
			case $Opcodes::DNEG:
				{}
			case $Opcodes::ISHL:
				{}
			case $Opcodes::LSHL:
				{}
			case $Opcodes::ISHR:
				{}
			case $Opcodes::LSHR:
				{}
			case $Opcodes::IUSHR:
				{}
			case $Opcodes::LUSHR:
				{}
			case $Opcodes::IAND:
				{}
			case $Opcodes::LAND:
				{}
			case $Opcodes::IOR:
				{}
			case $Opcodes::LOR:
				{}
			case $Opcodes::IXOR:
				{}
			case $Opcodes::LXOR:
				{}
			case $Opcodes::I2L:
				{}
			case $Opcodes::I2F:
				{}
			case $Opcodes::I2D:
				{}
			case $Opcodes::L2I:
				{}
			case $Opcodes::L2F:
				{}
			case $Opcodes::L2D:
				{}
			case $Opcodes::F2I:
				{}
			case $Opcodes::F2L:
				{}
			case $Opcodes::F2D:
				{}
			case $Opcodes::D2I:
				{}
			case $Opcodes::D2L:
				{}
			case $Opcodes::D2F:
				{}
			case $Opcodes::I2B:
				{}
			case $Opcodes::I2C:
				{}
			case $Opcodes::I2S:
				{}
			case $Opcodes::LCMP:
				{}
			case $Opcodes::FCMPL:
				{}
			case $Opcodes::FCMPG:
				{}
			case $Opcodes::DCMPL:
				{}
			case $Opcodes::DCMPG:
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
			case $Opcodes::RETURN:
				{}
			case $Opcodes::ARRAYLENGTH:
				{}
			case $Opcodes::ATHROW:
				{}
			case $Opcodes::MONITORENTER:
				{}
			case $Opcodes::MONITOREXIT:
				{}
			case $Constants::ILOAD_0:
				{}
			case $Constants::ILOAD_1:
				{}
			case $Constants::ILOAD_2:
				{}
			case $Constants::ILOAD_3:
				{}
			case $Constants::LLOAD_0:
				{}
			case $Constants::LLOAD_1:
				{}
			case $Constants::LLOAD_2:
				{}
			case $Constants::LLOAD_3:
				{}
			case $Constants::FLOAD_0:
				{}
			case $Constants::FLOAD_1:
				{}
			case $Constants::FLOAD_2:
				{}
			case $Constants::FLOAD_3:
				{}
			case $Constants::DLOAD_0:
				{}
			case $Constants::DLOAD_1:
				{}
			case $Constants::DLOAD_2:
				{}
			case $Constants::DLOAD_3:
				{}
			case $Constants::ALOAD_0:
				{}
			case $Constants::ALOAD_1:
				{}
			case $Constants::ALOAD_2:
				{}
			case $Constants::ALOAD_3:
				{}
			case $Constants::ISTORE_0:
				{}
			case $Constants::ISTORE_1:
				{}
			case $Constants::ISTORE_2:
				{}
			case $Constants::ISTORE_3:
				{}
			case $Constants::LSTORE_0:
				{}
			case $Constants::LSTORE_1:
				{}
			case $Constants::LSTORE_2:
				{}
			case $Constants::LSTORE_3:
				{}
			case $Constants::FSTORE_0:
				{}
			case $Constants::FSTORE_1:
				{}
			case $Constants::FSTORE_2:
				{}
			case $Constants::FSTORE_3:
				{}
			case $Constants::DSTORE_0:
				{}
			case $Constants::DSTORE_1:
				{}
			case $Constants::DSTORE_2:
				{}
			case $Constants::DSTORE_3:
				{}
			case $Constants::ASTORE_0:
				{}
			case $Constants::ASTORE_1:
				{}
			case $Constants::ASTORE_2:
				{}
			case $Constants::ASTORE_3:
				{
					currentOffset += 1;
					break;
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
			case $Opcodes::GOTO:
				{}
			case $Opcodes::JSR:
				{}
			case $Opcodes::IFNULL:
				{}
			case $Opcodes::IFNONNULL:
				{
					createLabel(bytecodeOffset + readShort(currentOffset + 1), labels);
					currentOffset += 3;
					break;
				}
			case $Constants::ASM_IFEQ:
				{}
			case $Constants::ASM_IFNE:
				{}
			case $Constants::ASM_IFLT:
				{}
			case $Constants::ASM_IFGE:
				{}
			case $Constants::ASM_IFGT:
				{}
			case $Constants::ASM_IFLE:
				{}
			case $Constants::ASM_IF_ICMPEQ:
				{}
			case $Constants::ASM_IF_ICMPNE:
				{}
			case $Constants::ASM_IF_ICMPLT:
				{}
			case $Constants::ASM_IF_ICMPGE:
				{}
			case $Constants::ASM_IF_ICMPGT:
				{}
			case $Constants::ASM_IF_ICMPLE:
				{}
			case $Constants::ASM_IF_ACMPEQ:
				{}
			case $Constants::ASM_IF_ACMPNE:
				{}
			case $Constants::ASM_GOTO:
				{}
			case $Constants::ASM_JSR:
				{}
			case $Constants::ASM_IFNULL:
				{}
			case $Constants::ASM_IFNONNULL:
				{
					createLabel(bytecodeOffset + readUnsignedShort(currentOffset + 1), labels);
					currentOffset += 3;
					break;
				}
			case $Constants::GOTO_W:
				{}
			case $Constants::JSR_W:
				{}
			case $Constants::ASM_GOTO_W:
				{
					createLabel(bytecodeOffset + readInt(currentOffset + 1), labels);
					currentOffset += 5;
					break;
				}
			case $Constants::WIDE:
				{
					switch ((int32_t)(classBuffer->get(currentOffset + 1) & (uint32_t)255)) {
					case $Opcodes::ILOAD:
						{}
					case $Opcodes::FLOAD:
						{}
					case $Opcodes::ALOAD:
						{}
					case $Opcodes::LLOAD:
						{}
					case $Opcodes::DLOAD:
						{}
					case $Opcodes::ISTORE:
						{}
					case $Opcodes::FSTORE:
						{}
					case $Opcodes::ASTORE:
						{}
					case $Opcodes::LSTORE:
						{}
					case $Opcodes::DSTORE:
						{}
					case $Opcodes::RET:
						{
							currentOffset += 4;
							break;
						}
					case $Opcodes::IINC:
						{
							currentOffset += 6;
							break;
						}
					default:
						{
							$throwNew($IllegalArgumentException);
						}
					}
					break;
				}
			case $Opcodes::TABLESWITCH:
				{
					currentOffset += 4 - ((int32_t)(bytecodeOffset & (uint32_t)3));
					createLabel(bytecodeOffset + readInt(currentOffset), labels);
					int32_t var$0 = readInt(currentOffset + 8);
					numTableEntries = var$0 - readInt(currentOffset + 4) + 1;
					currentOffset += 12;
					while (numTableEntries-- > 0) {
						createLabel(bytecodeOffset + readInt(currentOffset), labels);
						currentOffset += 4;
					}
					break;
				}
			case $Opcodes::LOOKUPSWITCH:
				{
					currentOffset += 4 - ((int32_t)(bytecodeOffset & (uint32_t)3));
					createLabel(bytecodeOffset + readInt(currentOffset), labels);
					numSwitchCases = readInt(currentOffset + 4);
					currentOffset += 8;
					while (numSwitchCases-- > 0) {
						createLabel(bytecodeOffset + readInt(currentOffset + 4), labels);
						currentOffset += 8;
					}
					break;
				}
			case $Opcodes::ILOAD:
				{}
			case $Opcodes::LLOAD:
				{}
			case $Opcodes::FLOAD:
				{}
			case $Opcodes::DLOAD:
				{}
			case $Opcodes::ALOAD:
				{}
			case $Opcodes::ISTORE:
				{}
			case $Opcodes::LSTORE:
				{}
			case $Opcodes::FSTORE:
				{}
			case $Opcodes::DSTORE:
				{}
			case $Opcodes::ASTORE:
				{}
			case $Opcodes::RET:
				{}
			case $Opcodes::BIPUSH:
				{}
			case $Opcodes::NEWARRAY:
				{}
			case $Opcodes::LDC:
				{
					currentOffset += 2;
					break;
				}
			case $Opcodes::SIPUSH:
				{}
			case $Constants::LDC_W:
				{}
			case $Constants::LDC2_W:
				{}
			case $Opcodes::GETSTATIC:
				{}
			case $Opcodes::PUTSTATIC:
				{}
			case $Opcodes::GETFIELD:
				{}
			case $Opcodes::PUTFIELD:
				{}
			case $Opcodes::INVOKEVIRTUAL:
				{}
			case $Opcodes::INVOKESPECIAL:
				{}
			case $Opcodes::INVOKESTATIC:
				{}
			case $Opcodes::NEW:
				{}
			case $Opcodes::ANEWARRAY:
				{}
			case $Opcodes::CHECKCAST:
				{}
			case $Opcodes::INSTANCEOF:
				{}
			case $Opcodes::IINC:
				{
					currentOffset += 3;
					break;
				}
			case $Opcodes::INVOKEINTERFACE:
				{}
			case $Opcodes::INVOKEDYNAMIC:
				{
					currentOffset += 5;
					break;
				}
			case $Opcodes::MULTIANEWARRAY:
				{
					currentOffset += 4;
					break;
				}
			default:
				{
					$throwNew($IllegalArgumentException);
				}
			}
		}
	}
	int32_t exceptionTableLength = readUnsignedShort(currentOffset);
	currentOffset += 2;
	while (exceptionTableLength-- > 0) {
		$var($Label, start, createLabel(readUnsignedShort(currentOffset), labels));
		$var($Label, end, createLabel(readUnsignedShort(currentOffset + 2), labels));
		$var($Label, handler, createLabel(readUnsignedShort(currentOffset + 4), labels));
		$var($String, catchType, readUTF8($nc(this->cpInfoOffsets)->get(readUnsignedShort(currentOffset + 6)), charBuffer));
		currentOffset += 8;
		$nc(methodVisitor)->visitTryCatchBlock(start, end, handler, catchType);
	}
	int32_t stackMapFrameOffset = 0;
	int32_t stackMapTableEndOffset = 0;
	bool compressedFrames = true;
	int32_t localVariableTableOffset = 0;
	int32_t localVariableTypeTableOffset = 0;
	$var($ints, visibleTypeAnnotationOffsets, nullptr);
	$var($ints, invisibleTypeAnnotationOffsets, nullptr);
	$var($Attribute, attributes, nullptr);
	int32_t attributesCount = readUnsignedShort(currentOffset);
	currentOffset += 2;
	while (attributesCount-- > 0) {
		$var($String, attributeName, readUTF8(currentOffset, charBuffer));
		int32_t attributeLength = readInt(currentOffset + 2);
		currentOffset += 6;
		$init($Constants);
		if ($nc($Constants::LOCAL_VARIABLE_TABLE)->equals(attributeName)) {
			if (((int32_t)(context->parsingOptions & (uint32_t)ClassReader::SKIP_DEBUG)) == 0) {
				localVariableTableOffset = currentOffset;
				int32_t currentLocalVariableTableOffset = currentOffset;
				int32_t localVariableTableLength = readUnsignedShort(currentLocalVariableTableOffset);
				currentLocalVariableTableOffset += 2;
				while (localVariableTableLength-- > 0) {
					int32_t startPc = readUnsignedShort(currentLocalVariableTableOffset);
					createDebugLabel(startPc, labels);
					int32_t length = readUnsignedShort(currentLocalVariableTableOffset + 2);
					createDebugLabel(startPc + length, labels);
					currentLocalVariableTableOffset += 10;
				}
			}
		} else {
			if ($nc($Constants::LOCAL_VARIABLE_TYPE_TABLE)->equals(attributeName)) {
				localVariableTypeTableOffset = currentOffset;
			} else {
				if ($nc($Constants::LINE_NUMBER_TABLE)->equals(attributeName)) {
					if (((int32_t)(context->parsingOptions & (uint32_t)ClassReader::SKIP_DEBUG)) == 0) {
						int32_t currentLineNumberTableOffset = currentOffset;
						int32_t lineNumberTableLength = readUnsignedShort(currentLineNumberTableOffset);
						currentLineNumberTableOffset += 2;
						while (lineNumberTableLength-- > 0) {
							int32_t startPc = readUnsignedShort(currentLineNumberTableOffset);
							int32_t lineNumber = readUnsignedShort(currentLineNumberTableOffset + 2);
							currentLineNumberTableOffset += 4;
							createDebugLabel(startPc, labels);
							$nc($nc(labels)->get(startPc))->addLineNumber(lineNumber);
						}
					}
				} else {
					if ($nc($Constants::RUNTIME_VISIBLE_TYPE_ANNOTATIONS)->equals(attributeName)) {
						$assign(visibleTypeAnnotationOffsets, readTypeAnnotations(methodVisitor, context, currentOffset, true));
					} else {
						if ($nc($Constants::RUNTIME_INVISIBLE_TYPE_ANNOTATIONS)->equals(attributeName)) {
							$assign(invisibleTypeAnnotationOffsets, readTypeAnnotations(methodVisitor, context, currentOffset, false));
						} else {
							if ($nc($Constants::STACK_MAP_TABLE)->equals(attributeName)) {
								if (((int32_t)(context->parsingOptions & (uint32_t)ClassReader::SKIP_FRAMES)) == 0) {
									stackMapFrameOffset = currentOffset + 2;
									stackMapTableEndOffset = currentOffset + attributeLength;
								}
							} else if ("StackMap"_s->equals(attributeName)) {
								if (((int32_t)(context->parsingOptions & (uint32_t)ClassReader::SKIP_FRAMES)) == 0) {
									stackMapFrameOffset = currentOffset + 2;
									stackMapTableEndOffset = currentOffset + attributeLength;
									compressedFrames = false;
								}
							} else {
								$var($Attribute, attribute, readAttribute(context->attributePrototypes, attributeName, currentOffset, attributeLength, charBuffer, codeOffset, labels));
								$set($nc(attribute), nextAttribute, attributes);
								$assign(attributes, attribute);
							}
						}
					}
				}
			}
		}
		currentOffset += attributeLength;
	}
	bool expandFrames = ((int32_t)(context->parsingOptions & (uint32_t)ClassReader::EXPAND_FRAMES)) != 0;
	if (stackMapFrameOffset != 0) {
		context->currentFrameOffset = -1;
		context->currentFrameType = 0;
		context->currentFrameLocalCount = 0;
		context->currentFrameLocalCountDelta = 0;
		$set(context, currentFrameLocalTypes, $new($ObjectArray, maxLocals));
		context->currentFrameStackCount = 0;
		$set(context, currentFrameStackTypes, $new($ObjectArray, maxStack));
		if (expandFrames) {
			computeImplicitFrame(context);
		}
		for (int32_t offset = stackMapFrameOffset; offset < stackMapTableEndOffset - 2; ++offset) {
			if ($nc(classBuffer)->get(offset) == $Frame::ITEM_UNINITIALIZED) {
				int32_t potentialBytecodeOffset = readUnsignedShort(offset + 1);
				if (potentialBytecodeOffset >= 0 && potentialBytecodeOffset < codeLength && ((int32_t)(classBuffer->get(bytecodeStartOffset + potentialBytecodeOffset) & (uint32_t)255)) == $Opcodes::NEW) {
					createLabel(potentialBytecodeOffset, labels);
				}
			}
		}
	}
	if (expandFrames && ((int32_t)(context->parsingOptions & (uint32_t)ClassReader::EXPAND_ASM_INSNS)) != 0) {
		$nc(methodVisitor)->visitFrame($Opcodes::F_NEW, maxLocals, nullptr, 0, nullptr);
	}
	int32_t currentVisibleTypeAnnotationIndex = 0;
	int32_t currentVisibleTypeAnnotationBytecodeOffset = getTypeAnnotationBytecodeOffset(visibleTypeAnnotationOffsets, 0);
	int32_t currentInvisibleTypeAnnotationIndex = 0;
	int32_t currentInvisibleTypeAnnotationBytecodeOffset = getTypeAnnotationBytecodeOffset(invisibleTypeAnnotationOffsets, 0);
	bool insertFrame = false;
	int32_t wideJumpOpcodeDelta = ((int32_t)(context->parsingOptions & (uint32_t)ClassReader::EXPAND_ASM_INSNS)) == 0 ? $Constants::WIDE_JUMP_OPCODE_DELTA : 0;
	currentOffset = bytecodeStartOffset;
	while (currentOffset < bytecodeEndOffset) {
		int32_t currentBytecodeOffset = currentOffset - bytecodeStartOffset;
		$var($Label, currentLabel, $nc(labels)->get(currentBytecodeOffset));
		if (currentLabel != nullptr) {
			currentLabel->accept(methodVisitor, ((int32_t)(context->parsingOptions & (uint32_t)ClassReader::SKIP_DEBUG)) == 0);
		}
		while (stackMapFrameOffset != 0 && (context->currentFrameOffset == currentBytecodeOffset || context->currentFrameOffset == -1)) {
			if (context->currentFrameOffset != -1) {
				if (!compressedFrames || expandFrames) {
					$nc(methodVisitor)->visitFrame($Opcodes::F_NEW, context->currentFrameLocalCount, context->currentFrameLocalTypes, context->currentFrameStackCount, context->currentFrameStackTypes);
				} else {
					$nc(methodVisitor)->visitFrame(context->currentFrameType, context->currentFrameLocalCountDelta, context->currentFrameLocalTypes, context->currentFrameStackCount, context->currentFrameStackTypes);
				}
				insertFrame = false;
			}
			if (stackMapFrameOffset < stackMapTableEndOffset) {
				stackMapFrameOffset = readStackMapFrame(stackMapFrameOffset, compressedFrames, expandFrames, context);
			} else {
				stackMapFrameOffset = 0;
			}
		}
		if (insertFrame) {
			if (((int32_t)(context->parsingOptions & (uint32_t)ClassReader::EXPAND_FRAMES)) != 0) {
				$nc(methodVisitor)->visitFrame($Constants::F_INSERT, 0, nullptr, 0, nullptr);
			}
			insertFrame = false;
		}
		int32_t opcode = (int32_t)($nc(classBuffer)->get(currentOffset) & (uint32_t)255);
		switch (opcode) {
		case $Opcodes::NOP:
			{}
		case $Opcodes::ACONST_NULL:
			{}
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
		case $Opcodes::LCONST_0:
			{}
		case $Opcodes::LCONST_1:
			{}
		case $Opcodes::FCONST_0:
			{}
		case $Opcodes::FCONST_1:
			{}
		case $Opcodes::FCONST_2:
			{}
		case $Opcodes::DCONST_0:
			{}
		case $Opcodes::DCONST_1:
			{}
		case $Opcodes::IALOAD:
			{}
		case $Opcodes::LALOAD:
			{}
		case $Opcodes::FALOAD:
			{}
		case $Opcodes::DALOAD:
			{}
		case $Opcodes::AALOAD:
			{}
		case $Opcodes::BALOAD:
			{}
		case $Opcodes::CALOAD:
			{}
		case $Opcodes::SALOAD:
			{}
		case $Opcodes::IASTORE:
			{}
		case $Opcodes::LASTORE:
			{}
		case $Opcodes::FASTORE:
			{}
		case $Opcodes::DASTORE:
			{}
		case $Opcodes::AASTORE:
			{}
		case $Opcodes::BASTORE:
			{}
		case $Opcodes::CASTORE:
			{}
		case $Opcodes::SASTORE:
			{}
		case $Opcodes::POP:
			{}
		case $Opcodes::POP2:
			{}
		case $Opcodes::DUP:
			{}
		case $Opcodes::DUP_X1:
			{}
		case $Opcodes::DUP_X2:
			{}
		case $Opcodes::DUP2:
			{}
		case $Opcodes::DUP2_X1:
			{}
		case $Opcodes::DUP2_X2:
			{}
		case $Opcodes::SWAP:
			{}
		case $Opcodes::IADD:
			{}
		case $Opcodes::LADD:
			{}
		case $Opcodes::FADD:
			{}
		case $Opcodes::DADD:
			{}
		case $Opcodes::ISUB:
			{}
		case $Opcodes::LSUB:
			{}
		case $Opcodes::FSUB:
			{}
		case $Opcodes::DSUB:
			{}
		case $Opcodes::IMUL:
			{}
		case $Opcodes::LMUL:
			{}
		case $Opcodes::FMUL:
			{}
		case $Opcodes::DMUL:
			{}
		case $Opcodes::IDIV:
			{}
		case $Opcodes::LDIV:
			{}
		case $Opcodes::FDIV:
			{}
		case $Opcodes::DDIV:
			{}
		case $Opcodes::IREM:
			{}
		case $Opcodes::LREM:
			{}
		case $Opcodes::FREM:
			{}
		case $Opcodes::DREM:
			{}
		case $Opcodes::INEG:
			{}
		case $Opcodes::LNEG:
			{}
		case $Opcodes::FNEG:
			{}
		case $Opcodes::DNEG:
			{}
		case $Opcodes::ISHL:
			{}
		case $Opcodes::LSHL:
			{}
		case $Opcodes::ISHR:
			{}
		case $Opcodes::LSHR:
			{}
		case $Opcodes::IUSHR:
			{}
		case $Opcodes::LUSHR:
			{}
		case $Opcodes::IAND:
			{}
		case $Opcodes::LAND:
			{}
		case $Opcodes::IOR:
			{}
		case $Opcodes::LOR:
			{}
		case $Opcodes::IXOR:
			{}
		case $Opcodes::LXOR:
			{}
		case $Opcodes::I2L:
			{}
		case $Opcodes::I2F:
			{}
		case $Opcodes::I2D:
			{}
		case $Opcodes::L2I:
			{}
		case $Opcodes::L2F:
			{}
		case $Opcodes::L2D:
			{}
		case $Opcodes::F2I:
			{}
		case $Opcodes::F2L:
			{}
		case $Opcodes::F2D:
			{}
		case $Opcodes::D2I:
			{}
		case $Opcodes::D2L:
			{}
		case $Opcodes::D2F:
			{}
		case $Opcodes::I2B:
			{}
		case $Opcodes::I2C:
			{}
		case $Opcodes::I2S:
			{}
		case $Opcodes::LCMP:
			{}
		case $Opcodes::FCMPL:
			{}
		case $Opcodes::FCMPG:
			{}
		case $Opcodes::DCMPL:
			{}
		case $Opcodes::DCMPG:
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
		case $Opcodes::RETURN:
			{}
		case $Opcodes::ARRAYLENGTH:
			{}
		case $Opcodes::ATHROW:
			{}
		case $Opcodes::MONITORENTER:
			{}
		case $Opcodes::MONITOREXIT:
			{
				$nc(methodVisitor)->visitInsn(opcode);
				currentOffset += 1;
				break;
			}
		case $Constants::ILOAD_0:
			{}
		case $Constants::ILOAD_1:
			{}
		case $Constants::ILOAD_2:
			{}
		case $Constants::ILOAD_3:
			{}
		case $Constants::LLOAD_0:
			{}
		case $Constants::LLOAD_1:
			{}
		case $Constants::LLOAD_2:
			{}
		case $Constants::LLOAD_3:
			{}
		case $Constants::FLOAD_0:
			{}
		case $Constants::FLOAD_1:
			{}
		case $Constants::FLOAD_2:
			{}
		case $Constants::FLOAD_3:
			{}
		case $Constants::DLOAD_0:
			{}
		case $Constants::DLOAD_1:
			{}
		case $Constants::DLOAD_2:
			{}
		case $Constants::DLOAD_3:
			{}
		case $Constants::ALOAD_0:
			{}
		case $Constants::ALOAD_1:
			{}
		case $Constants::ALOAD_2:
			{}
		case $Constants::ALOAD_3:
			{
				opcode -= $Constants::ILOAD_0;
				$nc(methodVisitor)->visitVarInsn($Opcodes::ILOAD + (opcode >> 2), (int32_t)(opcode & (uint32_t)3));
				currentOffset += 1;
				break;
			}
		case $Constants::ISTORE_0:
			{}
		case $Constants::ISTORE_1:
			{}
		case $Constants::ISTORE_2:
			{}
		case $Constants::ISTORE_3:
			{}
		case $Constants::LSTORE_0:
			{}
		case $Constants::LSTORE_1:
			{}
		case $Constants::LSTORE_2:
			{}
		case $Constants::LSTORE_3:
			{}
		case $Constants::FSTORE_0:
			{}
		case $Constants::FSTORE_1:
			{}
		case $Constants::FSTORE_2:
			{}
		case $Constants::FSTORE_3:
			{}
		case $Constants::DSTORE_0:
			{}
		case $Constants::DSTORE_1:
			{}
		case $Constants::DSTORE_2:
			{}
		case $Constants::DSTORE_3:
			{}
		case $Constants::ASTORE_0:
			{}
		case $Constants::ASTORE_1:
			{}
		case $Constants::ASTORE_2:
			{}
		case $Constants::ASTORE_3:
			{
				opcode -= $Constants::ISTORE_0;
				$nc(methodVisitor)->visitVarInsn($Opcodes::ISTORE + (opcode >> 2), (int32_t)(opcode & (uint32_t)3));
				currentOffset += 1;
				break;
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
		case $Opcodes::GOTO:
			{}
		case $Opcodes::JSR:
			{}
		case $Opcodes::IFNULL:
			{}
		case $Opcodes::IFNONNULL:
			{
				$nc(methodVisitor)->visitJumpInsn(opcode, labels->get(currentBytecodeOffset + readShort(currentOffset + 1)));
				currentOffset += 3;
				break;
			}
		case $Constants::GOTO_W:
			{}
		case $Constants::JSR_W:
			{
				$nc(methodVisitor)->visitJumpInsn(opcode - wideJumpOpcodeDelta, labels->get(currentBytecodeOffset + readInt(currentOffset + 1)));
				currentOffset += 5;
				break;
			}
		case $Constants::ASM_IFEQ:
			{}
		case $Constants::ASM_IFNE:
			{}
		case $Constants::ASM_IFLT:
			{}
		case $Constants::ASM_IFGE:
			{}
		case $Constants::ASM_IFGT:
			{}
		case $Constants::ASM_IFLE:
			{}
		case $Constants::ASM_IF_ICMPEQ:
			{}
		case $Constants::ASM_IF_ICMPNE:
			{}
		case $Constants::ASM_IF_ICMPLT:
			{}
		case $Constants::ASM_IF_ICMPGE:
			{}
		case $Constants::ASM_IF_ICMPGT:
			{}
		case $Constants::ASM_IF_ICMPLE:
			{}
		case $Constants::ASM_IF_ACMPEQ:
			{}
		case $Constants::ASM_IF_ACMPNE:
			{}
		case $Constants::ASM_GOTO:
			{}
		case $Constants::ASM_JSR:
			{}
		case $Constants::ASM_IFNULL:
			{}
		case $Constants::ASM_IFNONNULL:
			{
				{
					opcode = opcode < $Constants::ASM_IFNULL ? opcode - $Constants::ASM_OPCODE_DELTA : opcode - $Constants::ASM_IFNULL_OPCODE_DELTA;
					$var($Label, target, labels->get(currentBytecodeOffset + readUnsignedShort(currentOffset + 1)));
					if (opcode == $Opcodes::GOTO || opcode == $Opcodes::JSR) {
						$nc(methodVisitor)->visitJumpInsn(opcode + $Constants::WIDE_JUMP_OPCODE_DELTA, target);
					} else {
						opcode = opcode < $Opcodes::GOTO ? ((opcode + 1) ^ 1) - 1 : opcode ^ 1;
						$var($Label, endif, createLabel(currentBytecodeOffset + 3, labels));
						$nc(methodVisitor)->visitJumpInsn(opcode, endif);
						methodVisitor->visitJumpInsn($Constants::GOTO_W, target);
						insertFrame = true;
					}
					currentOffset += 3;
					break;
				}
			}
		case $Constants::ASM_GOTO_W:
			{
				$nc(methodVisitor)->visitJumpInsn($Constants::GOTO_W, labels->get(currentBytecodeOffset + readInt(currentOffset + 1)));
				insertFrame = true;
				currentOffset += 5;
				break;
			}
		case $Constants::WIDE:
			{
				opcode = (int32_t)(classBuffer->get(currentOffset + 1) & (uint32_t)255);
				if (opcode == $Opcodes::IINC) {
					int32_t var$1 = readUnsignedShort(currentOffset + 2);
					$nc(methodVisitor)->visitIincInsn(var$1, readShort(currentOffset + 4));
					currentOffset += 6;
				} else {
					$nc(methodVisitor)->visitVarInsn(opcode, readUnsignedShort(currentOffset + 2));
					currentOffset += 4;
				}
				break;
			}
		case $Opcodes::TABLESWITCH:
			{
				{
					currentOffset += 4 - ((int32_t)(currentBytecodeOffset & (uint32_t)3));
					$var($Label, defaultLabel, labels->get(currentBytecodeOffset + readInt(currentOffset)));
					int32_t low = readInt(currentOffset + 4);
					int32_t high = readInt(currentOffset + 8);
					currentOffset += 12;
					$var($LabelArray, table, $new($LabelArray, high - low + 1));
					for (int32_t i = 0; i < table->length; ++i) {
						table->set(i, labels->get(currentBytecodeOffset + readInt(currentOffset)));
						currentOffset += 4;
					}
					$nc(methodVisitor)->visitTableSwitchInsn(low, high, defaultLabel, table);
					break;
				}
			}
		case $Opcodes::LOOKUPSWITCH:
			{
				{
					currentOffset += 4 - ((int32_t)(currentBytecodeOffset & (uint32_t)3));
					$var($Label, defaultLabel, labels->get(currentBytecodeOffset + readInt(currentOffset)));
					int32_t numPairs = readInt(currentOffset + 4);
					currentOffset += 8;
					$var($ints, keys, $new($ints, numPairs));
					$var($LabelArray, values, $new($LabelArray, numPairs));
					for (int32_t i = 0; i < numPairs; ++i) {
						keys->set(i, readInt(currentOffset));
						values->set(i, labels->get(currentBytecodeOffset + readInt(currentOffset + 4)));
						currentOffset += 8;
					}
					$nc(methodVisitor)->visitLookupSwitchInsn(defaultLabel, keys, values);
					break;
				}
			}
		case $Opcodes::ILOAD:
			{}
		case $Opcodes::LLOAD:
			{}
		case $Opcodes::FLOAD:
			{}
		case $Opcodes::DLOAD:
			{}
		case $Opcodes::ALOAD:
			{}
		case $Opcodes::ISTORE:
			{}
		case $Opcodes::LSTORE:
			{}
		case $Opcodes::FSTORE:
			{}
		case $Opcodes::DSTORE:
			{}
		case $Opcodes::ASTORE:
			{}
		case $Opcodes::RET:
			{
				$nc(methodVisitor)->visitVarInsn(opcode, (int32_t)(classBuffer->get(currentOffset + 1) & (uint32_t)255));
				currentOffset += 2;
				break;
			}
		case $Opcodes::BIPUSH:
			{}
		case $Opcodes::NEWARRAY:
			{
				$nc(methodVisitor)->visitIntInsn(opcode, classBuffer->get(currentOffset + 1));
				currentOffset += 2;
				break;
			}
		case $Opcodes::SIPUSH:
			{
				$nc(methodVisitor)->visitIntInsn(opcode, readShort(currentOffset + 1));
				currentOffset += 3;
				break;
			}
		case $Opcodes::LDC:
			{
				$nc(methodVisitor)->visitLdcInsn($(readConst((int32_t)(classBuffer->get(currentOffset + 1) & (uint32_t)255), charBuffer)));
				currentOffset += 2;
				break;
			}
		case $Constants::LDC_W:
			{}
		case $Constants::LDC2_W:
			{
				$nc(methodVisitor)->visitLdcInsn($(readConst(readUnsignedShort(currentOffset + 1), charBuffer)));
				currentOffset += 3;
				break;
			}
		case $Opcodes::GETSTATIC:
			{}
		case $Opcodes::PUTSTATIC:
			{}
		case $Opcodes::GETFIELD:
			{}
		case $Opcodes::PUTFIELD:
			{}
		case $Opcodes::INVOKEVIRTUAL:
			{}
		case $Opcodes::INVOKESPECIAL:
			{}
		case $Opcodes::INVOKESTATIC:
			{}
		case $Opcodes::INVOKEINTERFACE:
			{
				{
					int32_t cpInfoOffset = $nc(this->cpInfoOffsets)->get(readUnsignedShort(currentOffset + 1));
					int32_t nameAndTypeCpInfoOffset = $nc(this->cpInfoOffsets)->get(readUnsignedShort(cpInfoOffset + 2));
					$var($String, owner, readClass(cpInfoOffset, charBuffer));
					$var($String, name, readUTF8(nameAndTypeCpInfoOffset, charBuffer));
					$var($String, descriptor, readUTF8(nameAndTypeCpInfoOffset + 2, charBuffer));
					if (opcode < $Opcodes::INVOKEVIRTUAL) {
						$nc(methodVisitor)->visitFieldInsn(opcode, owner, name, descriptor);
					} else {
						bool isInterface = classBuffer->get(cpInfoOffset - 1) == $Symbol::CONSTANT_INTERFACE_METHODREF_TAG;
						$nc(methodVisitor)->visitMethodInsn(opcode, owner, name, descriptor, isInterface);
					}
					if (opcode == $Opcodes::INVOKEINTERFACE) {
						currentOffset += 5;
					} else {
						currentOffset += 3;
					}
					break;
				}
			}
		case $Opcodes::INVOKEDYNAMIC:
			{
				{
					int32_t cpInfoOffset = $nc(this->cpInfoOffsets)->get(readUnsignedShort(currentOffset + 1));
					int32_t nameAndTypeCpInfoOffset = $nc(this->cpInfoOffsets)->get(readUnsignedShort(cpInfoOffset + 2));
					$var($String, name, readUTF8(nameAndTypeCpInfoOffset, charBuffer));
					$var($String, descriptor, readUTF8(nameAndTypeCpInfoOffset + 2, charBuffer));
					int32_t bootstrapMethodOffset = $nc(this->bootstrapMethodOffsets)->get(readUnsignedShort(cpInfoOffset));
					$var($Handle, handle, $cast($Handle, readConst(readUnsignedShort(bootstrapMethodOffset), charBuffer)));
					$var($ObjectArray, bootstrapMethodArguments, $new($ObjectArray, readUnsignedShort(bootstrapMethodOffset + 2)));
					bootstrapMethodOffset += 4;
					for (int32_t i = 0; i < bootstrapMethodArguments->length; ++i) {
						bootstrapMethodArguments->set(i, $(readConst(readUnsignedShort(bootstrapMethodOffset), charBuffer)));
						bootstrapMethodOffset += 2;
					}
					$nc(methodVisitor)->visitInvokeDynamicInsn(name, descriptor, handle, bootstrapMethodArguments);
					currentOffset += 5;
					break;
				}
			}
		case $Opcodes::NEW:
			{}
		case $Opcodes::ANEWARRAY:
			{}
		case $Opcodes::CHECKCAST:
			{}
		case $Opcodes::INSTANCEOF:
			{
				$nc(methodVisitor)->visitTypeInsn(opcode, $(readClass(currentOffset + 1, charBuffer)));
				currentOffset += 3;
				break;
			}
		case $Opcodes::IINC:
			{
				$nc(methodVisitor)->visitIincInsn((int32_t)(classBuffer->get(currentOffset + 1) & (uint32_t)255), classBuffer->get(currentOffset + 2));
				currentOffset += 3;
				break;
			}
		case $Opcodes::MULTIANEWARRAY:
			{
				$nc(methodVisitor)->visitMultiANewArrayInsn($(readClass(currentOffset + 1, charBuffer)), (int32_t)(classBuffer->get(currentOffset + 3) & (uint32_t)255));
				currentOffset += 4;
				break;
			}
		default:
			{
				$throwNew($AssertionError);
			}
		}
		while (visibleTypeAnnotationOffsets != nullptr && currentVisibleTypeAnnotationIndex < visibleTypeAnnotationOffsets->length && currentVisibleTypeAnnotationBytecodeOffset <= currentBytecodeOffset) {
			if (currentVisibleTypeAnnotationBytecodeOffset == currentBytecodeOffset) {
				int32_t currentAnnotationOffset = readTypeAnnotationTarget(context, visibleTypeAnnotationOffsets->get(currentVisibleTypeAnnotationIndex));
				$var($String, annotationDescriptor, readUTF8(currentAnnotationOffset, charBuffer));
				currentAnnotationOffset += 2;
				readElementValues($($nc(methodVisitor)->visitInsnAnnotation(context->currentTypeAnnotationTarget, context->currentTypeAnnotationTargetPath, annotationDescriptor, true)), currentAnnotationOffset, true, charBuffer);
			}
			currentVisibleTypeAnnotationBytecodeOffset = getTypeAnnotationBytecodeOffset(visibleTypeAnnotationOffsets, ++currentVisibleTypeAnnotationIndex);
		}
		while (invisibleTypeAnnotationOffsets != nullptr && currentInvisibleTypeAnnotationIndex < invisibleTypeAnnotationOffsets->length && currentInvisibleTypeAnnotationBytecodeOffset <= currentBytecodeOffset) {
			if (currentInvisibleTypeAnnotationBytecodeOffset == currentBytecodeOffset) {
				int32_t currentAnnotationOffset = readTypeAnnotationTarget(context, invisibleTypeAnnotationOffsets->get(currentInvisibleTypeAnnotationIndex));
				$var($String, annotationDescriptor, readUTF8(currentAnnotationOffset, charBuffer));
				currentAnnotationOffset += 2;
				readElementValues($($nc(methodVisitor)->visitInsnAnnotation(context->currentTypeAnnotationTarget, context->currentTypeAnnotationTargetPath, annotationDescriptor, false)), currentAnnotationOffset, true, charBuffer);
			}
			currentInvisibleTypeAnnotationBytecodeOffset = getTypeAnnotationBytecodeOffset(invisibleTypeAnnotationOffsets, ++currentInvisibleTypeAnnotationIndex);
		}
	}
	if ($nc(labels)->get(codeLength) != nullptr) {
		$nc(methodVisitor)->visitLabel(labels->get(codeLength));
	}
	if (localVariableTableOffset != 0 && ((int32_t)(context->parsingOptions & (uint32_t)ClassReader::SKIP_DEBUG)) == 0) {
		$var($ints, typeTable, nullptr);
		if (localVariableTypeTableOffset != 0) {
			$assign(typeTable, $new($ints, readUnsignedShort(localVariableTypeTableOffset) * 3));
			currentOffset = localVariableTypeTableOffset + 2;
			int32_t typeTableIndex = typeTable->length;
			while (typeTableIndex > 0) {
				typeTable->set(--typeTableIndex, currentOffset + 6);
				typeTable->set(--typeTableIndex, readUnsignedShort(currentOffset + 8));
				typeTable->set(--typeTableIndex, readUnsignedShort(currentOffset));
				currentOffset += 10;
			}
		}
		int32_t localVariableTableLength = readUnsignedShort(localVariableTableOffset);
		currentOffset = localVariableTableOffset + 2;
		while (localVariableTableLength-- > 0) {
			int32_t startPc = readUnsignedShort(currentOffset);
			int32_t length = readUnsignedShort(currentOffset + 2);
			$var($String, name, readUTF8(currentOffset + 4, charBuffer));
			$var($String, descriptor, readUTF8(currentOffset + 6, charBuffer));
			int32_t index = readUnsignedShort(currentOffset + 8);
			currentOffset += 10;
			$var($String, signature, nullptr);
			if (typeTable != nullptr) {
				for (int32_t i = 0; i < typeTable->length; i += 3) {
					if (typeTable->get(i) == startPc && typeTable->get(i + 1) == index) {
						$assign(signature, readUTF8(typeTable->get(i + 2), charBuffer));
						break;
					}
				}
			}
			$nc(methodVisitor)->visitLocalVariable(name, descriptor, signature, $nc(labels)->get(startPc), labels->get(startPc + length), index);
		}
	}
	if (visibleTypeAnnotationOffsets != nullptr) {
		{
			$var($ints, arr$, visibleTypeAnnotationOffsets);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				int32_t typeAnnotationOffset = arr$->get(i$);
				{
					int32_t targetType = readByte(typeAnnotationOffset);
					if (targetType == $TypeReference::LOCAL_VARIABLE || targetType == $TypeReference::RESOURCE_VARIABLE) {
						currentOffset = readTypeAnnotationTarget(context, typeAnnotationOffset);
						$var($String, annotationDescriptor, readUTF8(currentOffset, charBuffer));
						currentOffset += 2;
						readElementValues($($nc(methodVisitor)->visitLocalVariableAnnotation(context->currentTypeAnnotationTarget, context->currentTypeAnnotationTargetPath, context->currentLocalVariableAnnotationRangeStarts, context->currentLocalVariableAnnotationRangeEnds, context->currentLocalVariableAnnotationRangeIndices, annotationDescriptor, true)), currentOffset, true, charBuffer);
					}
				}
			}
		}
	}
	if (invisibleTypeAnnotationOffsets != nullptr) {
		{
			$var($ints, arr$, invisibleTypeAnnotationOffsets);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				int32_t typeAnnotationOffset = arr$->get(i$);
				{
					int32_t targetType = readByte(typeAnnotationOffset);
					if (targetType == $TypeReference::LOCAL_VARIABLE || targetType == $TypeReference::RESOURCE_VARIABLE) {
						currentOffset = readTypeAnnotationTarget(context, typeAnnotationOffset);
						$var($String, annotationDescriptor, readUTF8(currentOffset, charBuffer));
						currentOffset += 2;
						readElementValues($($nc(methodVisitor)->visitLocalVariableAnnotation(context->currentTypeAnnotationTarget, context->currentTypeAnnotationTargetPath, context->currentLocalVariableAnnotationRangeStarts, context->currentLocalVariableAnnotationRangeEnds, context->currentLocalVariableAnnotationRangeIndices, annotationDescriptor, false)), currentOffset, true, charBuffer);
					}
				}
			}
		}
	}
	while (attributes != nullptr) {
		$var($Attribute, nextAttribute, attributes->nextAttribute);
		$set(attributes, nextAttribute, nullptr);
		$nc(methodVisitor)->visitAttribute(attributes);
		$assign(attributes, nextAttribute);
	}
	$nc(methodVisitor)->visitMaxs(maxStack, maxLocals);
}

$Label* ClassReader::readLabel(int32_t bytecodeOffset, $LabelArray* labels) {
	if ($nc(labels)->get(bytecodeOffset) == nullptr) {
		labels->set(bytecodeOffset, $$new($Label));
	}
	return $nc(labels)->get(bytecodeOffset);
}

$Label* ClassReader::createLabel(int32_t bytecodeOffset, $LabelArray* labels) {
	$var($Label, label, readLabel(bytecodeOffset, labels));
	$nc(label)->flags &= (uint16_t)~$Label::FLAG_DEBUG_ONLY;
	return label;
}

void ClassReader::createDebugLabel(int32_t bytecodeOffset, $LabelArray* labels) {
	if ($nc(labels)->get(bytecodeOffset) == nullptr) {
		$nc($(readLabel(bytecodeOffset, labels)))->flags |= $Label::FLAG_DEBUG_ONLY;
	}
}

$ints* ClassReader::readTypeAnnotations($MethodVisitor* methodVisitor, $Context* context, int32_t runtimeTypeAnnotationsOffset, bool visible) {
	$useLocalCurrentObjectStackCache();
	$var($chars, charBuffer, $nc(context)->charBuffer);
	int32_t currentOffset = runtimeTypeAnnotationsOffset;
	$var($ints, typeAnnotationsOffsets, $new($ints, readUnsignedShort(currentOffset)));
	currentOffset += 2;
	for (int32_t i = 0; i < typeAnnotationsOffsets->length; ++i) {
		typeAnnotationsOffsets->set(i, currentOffset);
		int32_t targetType = readInt(currentOffset);
		{
			int32_t tableLength = 0;
			switch ((int32_t)((uint32_t)targetType >> 24)) {
			case $TypeReference::LOCAL_VARIABLE:
				{}
			case $TypeReference::RESOURCE_VARIABLE:
				{
					tableLength = readUnsignedShort(currentOffset + 1);
					currentOffset += 3;
					while (tableLength-- > 0) {
						int32_t startPc = readUnsignedShort(currentOffset);
						int32_t length = readUnsignedShort(currentOffset + 2);
						currentOffset += 6;
						createLabel(startPc, context->currentMethodLabels);
						createLabel(startPc + length, context->currentMethodLabels);
					}
					break;
				}
			case $TypeReference::CAST:
				{}
			case $TypeReference::CONSTRUCTOR_INVOCATION_TYPE_ARGUMENT:
				{}
			case $TypeReference::METHOD_INVOCATION_TYPE_ARGUMENT:
				{}
			case $TypeReference::CONSTRUCTOR_REFERENCE_TYPE_ARGUMENT:
				{}
			case $TypeReference::METHOD_REFERENCE_TYPE_ARGUMENT:
				{
					currentOffset += 4;
					break;
				}
			case $TypeReference::CLASS_EXTENDS:
				{}
			case $TypeReference::CLASS_TYPE_PARAMETER_BOUND:
				{}
			case $TypeReference::METHOD_TYPE_PARAMETER_BOUND:
				{}
			case $TypeReference::THROWS:
				{}
			case $TypeReference::EXCEPTION_PARAMETER:
				{}
			case $TypeReference::INSTANCEOF:
				{}
			case $TypeReference::NEW:
				{}
			case $TypeReference::CONSTRUCTOR_REFERENCE:
				{}
			case $TypeReference::METHOD_REFERENCE:
				{
					currentOffset += 3;
					break;
				}
			case $TypeReference::CLASS_TYPE_PARAMETER:
				{}
			case $TypeReference::METHOD_TYPE_PARAMETER:
				{}
			case $TypeReference::METHOD_FORMAL_PARAMETER:
				{}
			case $TypeReference::FIELD:
				{}
			case $TypeReference::METHOD_RETURN:
				{}
			case $TypeReference::METHOD_RECEIVER:
				{}
			default:
				{
					$throwNew($IllegalArgumentException);
				}
			}
		}
		int32_t pathLength = readByte(currentOffset);
		if (((int32_t)((uint32_t)targetType >> 24)) == $TypeReference::EXCEPTION_PARAMETER) {
			$var($TypePath, path, pathLength == 0 ? ($TypePath*)nullptr : $new($TypePath, this->classFileBuffer, currentOffset));
			currentOffset += 1 + 2 * pathLength;
			$var($String, annotationDescriptor, readUTF8(currentOffset, charBuffer));
			currentOffset += 2;
			currentOffset = readElementValues($($nc(methodVisitor)->visitTryCatchAnnotation((int32_t)(targetType & (uint32_t)-256), path, annotationDescriptor, visible)), currentOffset, true, charBuffer);
		} else {
			currentOffset += 3 + 2 * pathLength;
			currentOffset = readElementValues(nullptr, currentOffset, true, charBuffer);
		}
	}
	return typeAnnotationsOffsets;
}

int32_t ClassReader::getTypeAnnotationBytecodeOffset($ints* typeAnnotationOffsets, int32_t typeAnnotationIndex) {
	if (typeAnnotationOffsets == nullptr || typeAnnotationIndex >= $nc(typeAnnotationOffsets)->length || readByte($nc(typeAnnotationOffsets)->get(typeAnnotationIndex)) < $TypeReference::INSTANCEOF) {
		return -1;
	}
	return readUnsignedShort($nc(typeAnnotationOffsets)->get(typeAnnotationIndex) + 1);
}

int32_t ClassReader::readTypeAnnotationTarget($Context* context, int32_t typeAnnotationOffset) {
	$useLocalCurrentObjectStackCache();
	int32_t currentOffset = typeAnnotationOffset;
	int32_t targetType = readInt(typeAnnotationOffset);
	{
		int32_t tableLength = 0;
		switch ((int32_t)((uint32_t)targetType >> 24)) {
		case $TypeReference::CLASS_TYPE_PARAMETER:
			{}
		case $TypeReference::METHOD_TYPE_PARAMETER:
			{}
		case $TypeReference::METHOD_FORMAL_PARAMETER:
			{
				targetType &= (uint32_t)(int32_t)0xFFFF0000;
				currentOffset += 2;
				break;
			}
		case $TypeReference::FIELD:
			{}
		case $TypeReference::METHOD_RETURN:
			{}
		case $TypeReference::METHOD_RECEIVER:
			{
				targetType &= (uint32_t)(int32_t)0xFF000000;
				currentOffset += 1;
				break;
			}
		case $TypeReference::LOCAL_VARIABLE:
			{}
		case $TypeReference::RESOURCE_VARIABLE:
			{
				targetType &= (uint32_t)(int32_t)0xFF000000;
				tableLength = readUnsignedShort(currentOffset + 1);
				currentOffset += 3;
				$set($nc(context), currentLocalVariableAnnotationRangeStarts, $new($LabelArray, tableLength));
				$set($nc(context), currentLocalVariableAnnotationRangeEnds, $new($LabelArray, tableLength));
				$set($nc(context), currentLocalVariableAnnotationRangeIndices, $new($ints, tableLength));
				for (int32_t i = 0; i < tableLength; ++i) {
					int32_t startPc = readUnsignedShort(currentOffset);
					int32_t length = readUnsignedShort(currentOffset + 2);
					int32_t index = readUnsignedShort(currentOffset + 4);
					currentOffset += 6;
					$nc($nc(context)->currentLocalVariableAnnotationRangeStarts)->set(i, $(createLabel(startPc, context->currentMethodLabels)));
					$nc(context->currentLocalVariableAnnotationRangeEnds)->set(i, $(createLabel(startPc + length, context->currentMethodLabels)));
					$nc(context->currentLocalVariableAnnotationRangeIndices)->set(i, index);
				}
				break;
			}
		case $TypeReference::CAST:
			{}
		case $TypeReference::CONSTRUCTOR_INVOCATION_TYPE_ARGUMENT:
			{}
		case $TypeReference::METHOD_INVOCATION_TYPE_ARGUMENT:
			{}
		case $TypeReference::CONSTRUCTOR_REFERENCE_TYPE_ARGUMENT:
			{}
		case $TypeReference::METHOD_REFERENCE_TYPE_ARGUMENT:
			{
				targetType &= (uint32_t)(int32_t)0xFF0000FF;
				currentOffset += 4;
				break;
			}
		case $TypeReference::CLASS_EXTENDS:
			{}
		case $TypeReference::CLASS_TYPE_PARAMETER_BOUND:
			{}
		case $TypeReference::METHOD_TYPE_PARAMETER_BOUND:
			{}
		case $TypeReference::THROWS:
			{}
		case $TypeReference::EXCEPTION_PARAMETER:
			{
				targetType &= (uint32_t)-256;
				currentOffset += 3;
				break;
			}
		case $TypeReference::INSTANCEOF:
			{}
		case $TypeReference::NEW:
			{}
		case $TypeReference::CONSTRUCTOR_REFERENCE:
			{}
		case $TypeReference::METHOD_REFERENCE:
			{
				targetType &= (uint32_t)(int32_t)0xFF000000;
				currentOffset += 3;
				break;
			}
		default:
			{
				$throwNew($IllegalArgumentException);
			}
		}
	}
	$nc(context)->currentTypeAnnotationTarget = targetType;
	int32_t pathLength = readByte(currentOffset);
	$set(context, currentTypeAnnotationTargetPath, pathLength == 0 ? ($TypePath*)nullptr : $new($TypePath, this->classFileBuffer, currentOffset));
	return currentOffset + 1 + 2 * pathLength;
}

void ClassReader::readParameterAnnotations($MethodVisitor* methodVisitor, $Context* context, int32_t runtimeParameterAnnotationsOffset, bool visible) {
	$useLocalCurrentObjectStackCache();
	int32_t currentOffset = runtimeParameterAnnotationsOffset;
	int32_t numParameters = (int32_t)($nc(this->classFileBuffer)->get(currentOffset++) & (uint32_t)255);
	$nc(methodVisitor)->visitAnnotableParameterCount(numParameters, visible);
	$var($chars, charBuffer, $nc(context)->charBuffer);
	for (int32_t i = 0; i < numParameters; ++i) {
		int32_t numAnnotations = readUnsignedShort(currentOffset);
		currentOffset += 2;
		while (numAnnotations-- > 0) {
			$var($String, annotationDescriptor, readUTF8(currentOffset, charBuffer));
			currentOffset += 2;
			currentOffset = readElementValues($(methodVisitor->visitParameterAnnotation(i, annotationDescriptor, visible)), currentOffset, true, charBuffer);
		}
	}
}

int32_t ClassReader::readElementValues($AnnotationVisitor* annotationVisitor, int32_t annotationOffset, bool named, $chars* charBuffer) {
	$useLocalCurrentObjectStackCache();
	int32_t currentOffset = annotationOffset;
	int32_t numElementValuePairs = readUnsignedShort(currentOffset);
	currentOffset += 2;
	if (named) {
		while (numElementValuePairs-- > 0) {
			$var($String, elementName, readUTF8(currentOffset, charBuffer));
			currentOffset = readElementValue(annotationVisitor, currentOffset + 2, elementName, charBuffer);
		}
	} else {
		while (numElementValuePairs-- > 0) {
			currentOffset = readElementValue(annotationVisitor, currentOffset, nullptr, charBuffer);
		}
	}
	if (annotationVisitor != nullptr) {
		annotationVisitor->visitEnd();
	}
	return currentOffset;
}

int32_t ClassReader::readElementValue($AnnotationVisitor* annotationVisitor, int32_t elementValueOffset, $String* elementName, $chars* charBuffer) {
	$useLocalCurrentObjectStackCache();
	int32_t currentOffset = elementValueOffset;
	if (annotationVisitor == nullptr) {
		switch ((int32_t)($nc(this->classFileBuffer)->get(currentOffset) & (uint32_t)255)) {
		case u'e':
			{
				return currentOffset + 5;
			}
		case u'@':
			{
				return readElementValues(nullptr, currentOffset + 3, true, charBuffer);
			}
		case u'[':
			{
				return readElementValues(nullptr, currentOffset + 1, false, charBuffer);
			}
		default:
			{
				return currentOffset + 3;
			}
		}
	}
	{
		int32_t numValues = 0;
		switch ((int32_t)($nc(this->classFileBuffer)->get(currentOffset++) & (uint32_t)255)) {
		case u'B':
			{
				$nc(annotationVisitor)->visit(elementName, $($Byte::valueOf((int8_t)readInt($nc(this->cpInfoOffsets)->get(readUnsignedShort(currentOffset))))));
				currentOffset += 2;
				break;
			}
		case u'C':
			{
				$nc(annotationVisitor)->visit(elementName, $($Character::valueOf((char16_t)readInt($nc(this->cpInfoOffsets)->get(readUnsignedShort(currentOffset))))));
				currentOffset += 2;
				break;
			}
		case u'D':
			{}
		case u'F':
			{}
		case u'I':
			{}
		case u'J':
			{
				$nc(annotationVisitor)->visit(elementName, $(readConst(readUnsignedShort(currentOffset), charBuffer)));
				currentOffset += 2;
				break;
			}
		case u'S':
			{
				$nc(annotationVisitor)->visit(elementName, $($Short::valueOf((int16_t)readInt($nc(this->cpInfoOffsets)->get(readUnsignedShort(currentOffset))))));
				currentOffset += 2;
				break;
			}
		case u'Z':
			{
				$init($Boolean);
				$nc(annotationVisitor)->visit(elementName, readInt($nc(this->cpInfoOffsets)->get(readUnsignedShort(currentOffset))) == 0 ? $Boolean::FALSE : $Boolean::TRUE);
				currentOffset += 2;
				break;
			}
		case u's':
			{
				$nc(annotationVisitor)->visit(elementName, $(readUTF8(currentOffset, charBuffer)));
				currentOffset += 2;
				break;
			}
		case u'e':
			{
				$var($String, var$0, elementName);
				$var($String, var$1, readUTF8(currentOffset, charBuffer));
				$nc(annotationVisitor)->visitEnum(var$0, var$1, $(readUTF8(currentOffset + 2, charBuffer)));
				currentOffset += 4;
				break;
			}
		case u'c':
			{
				$nc(annotationVisitor)->visit(elementName, $($Type::getType($(readUTF8(currentOffset, charBuffer)))));
				currentOffset += 2;
				break;
			}
		case u'@':
			{
				currentOffset = readElementValues($($nc(annotationVisitor)->visitAnnotation(elementName, $(readUTF8(currentOffset, charBuffer)))), currentOffset + 2, true, charBuffer);
				break;
			}
		case u'[':
			{
				numValues = readUnsignedShort(currentOffset);
				currentOffset += 2;
				if (numValues == 0) {
					return readElementValues($($nc(annotationVisitor)->visitArray(elementName)), currentOffset - 2, false, charBuffer);
				}
				{
					$var($bytes, byteValues, nullptr)
					$var($booleans, booleanValues, nullptr)
					$var($shorts, shortValues, nullptr)
					$var($chars, charValues, nullptr)
					$var($ints, intValues, nullptr)
					$var($longs, longValues, nullptr)
					$var($floats, floatValues, nullptr)
					$var($doubles, doubleValues, nullptr)
					switch ((int32_t)($nc(this->classFileBuffer)->get(currentOffset) & (uint32_t)255)) {
					case u'B':
						{
							$assign(byteValues, $new($bytes, numValues));
							for (int32_t i = 0; i < numValues; ++i) {
								$nc(byteValues)->set(i, (int8_t)readInt($nc(this->cpInfoOffsets)->get(readUnsignedShort(currentOffset + 1))));
								currentOffset += 3;
							}
							$nc(annotationVisitor)->visit(elementName, byteValues);
							break;
						}
					case u'Z':
						{
							$assign(booleanValues, $new($booleans, numValues));
							for (int32_t i = 0; i < numValues; ++i) {
								$nc(booleanValues)->set(i, readInt($nc(this->cpInfoOffsets)->get(readUnsignedShort(currentOffset + 1))) != 0);
								currentOffset += 3;
							}
							$nc(annotationVisitor)->visit(elementName, booleanValues);
							break;
						}
					case u'S':
						{
							$assign(shortValues, $new($shorts, numValues));
							for (int32_t i = 0; i < numValues; ++i) {
								$nc(shortValues)->set(i, (int16_t)readInt($nc(this->cpInfoOffsets)->get(readUnsignedShort(currentOffset + 1))));
								currentOffset += 3;
							}
							$nc(annotationVisitor)->visit(elementName, shortValues);
							break;
						}
					case u'C':
						{
							$assign(charValues, $new($chars, numValues));
							for (int32_t i = 0; i < numValues; ++i) {
								$nc(charValues)->set(i, (char16_t)readInt($nc(this->cpInfoOffsets)->get(readUnsignedShort(currentOffset + 1))));
								currentOffset += 3;
							}
							$nc(annotationVisitor)->visit(elementName, charValues);
							break;
						}
					case u'I':
						{
							$assign(intValues, $new($ints, numValues));
							for (int32_t i = 0; i < numValues; ++i) {
								$nc(intValues)->set(i, readInt($nc(this->cpInfoOffsets)->get(readUnsignedShort(currentOffset + 1))));
								currentOffset += 3;
							}
							$nc(annotationVisitor)->visit(elementName, intValues);
							break;
						}
					case u'J':
						{
							$assign(longValues, $new($longs, numValues));
							for (int32_t i = 0; i < numValues; ++i) {
								$nc(longValues)->set(i, readLong($nc(this->cpInfoOffsets)->get(readUnsignedShort(currentOffset + 1))));
								currentOffset += 3;
							}
							$nc(annotationVisitor)->visit(elementName, longValues);
							break;
						}
					case u'F':
						{
							$assign(floatValues, $new($floats, numValues));
							for (int32_t i = 0; i < numValues; ++i) {
								$nc(floatValues)->set(i, $Float::intBitsToFloat(readInt($nc(this->cpInfoOffsets)->get(readUnsignedShort(currentOffset + 1)))));
								currentOffset += 3;
							}
							$nc(annotationVisitor)->visit(elementName, floatValues);
							break;
						}
					case u'D':
						{
							$assign(doubleValues, $new($doubles, numValues));
							for (int32_t i = 0; i < numValues; ++i) {
								$nc(doubleValues)->set(i, $Double::longBitsToDouble(readLong($nc(this->cpInfoOffsets)->get(readUnsignedShort(currentOffset + 1)))));
								currentOffset += 3;
							}
							$nc(annotationVisitor)->visit(elementName, doubleValues);
							break;
						}
					default:
						{
							currentOffset = readElementValues($($nc(annotationVisitor)->visitArray(elementName)), currentOffset - 2, false, charBuffer);
							break;
						}
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
	return currentOffset;
}

void ClassReader::computeImplicitFrame($Context* context) {
	$useLocalCurrentObjectStackCache();
	$var($String, methodDescriptor, $nc(context)->currentMethodDescriptor);
	$var($ObjectArray, locals, context->currentFrameLocalTypes);
	int32_t numLocal = 0;
	if (((int32_t)(context->currentMethodAccessFlags & (uint32_t)$Opcodes::ACC_STATIC)) == 0) {
		if ("<init>"_s->equals(context->currentMethodName)) {
			$init($Opcodes);
			$nc(locals)->set(numLocal++, $Opcodes::UNINITIALIZED_THIS);
		} else {
			$nc(locals)->set(numLocal++, $(readClass(this->header + 2, context->charBuffer)));
		}
	}
	int32_t currentMethodDescritorOffset = 1;
	while (true) {
		int32_t currentArgumentDescriptorStartOffset = currentMethodDescritorOffset;
		switch ($nc(methodDescriptor)->charAt(currentMethodDescritorOffset++)) {
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
				$init($Opcodes);
				$nc(locals)->set(numLocal++, $Opcodes::INTEGER);
				break;
			}
		case u'F':
			{
				$init($Opcodes);
				$nc(locals)->set(numLocal++, $Opcodes::FLOAT);
				break;
			}
		case u'J':
			{
				$init($Opcodes);
				$nc(locals)->set(numLocal++, $Opcodes::LONG);
				break;
			}
		case u'D':
			{
				$init($Opcodes);
				$nc(locals)->set(numLocal++, $Opcodes::DOUBLE);
				break;
			}
		case u'[':
			{
				while (methodDescriptor->charAt(currentMethodDescritorOffset) == u'[') {
					++currentMethodDescritorOffset;
				}
				if (methodDescriptor->charAt(currentMethodDescritorOffset) == u'L') {
					++currentMethodDescritorOffset;
					while (methodDescriptor->charAt(currentMethodDescritorOffset) != u';') {
						++currentMethodDescritorOffset;
					}
				}
				$nc(locals)->set(numLocal++, $(methodDescriptor->substring(currentArgumentDescriptorStartOffset, ++currentMethodDescritorOffset)));
				break;
			}
		case u'L':
			{
				while (methodDescriptor->charAt(currentMethodDescritorOffset) != u';') {
					++currentMethodDescritorOffset;
				}
				$nc(locals)->set(numLocal++, $(methodDescriptor->substring(currentArgumentDescriptorStartOffset + 1, currentMethodDescritorOffset++)));
				break;
			}
		default:
			{
				context->currentFrameLocalCount = numLocal;
				return;
			}
		}
	}
}

int32_t ClassReader::readStackMapFrame(int32_t stackMapFrameOffset, bool compressed, bool expand, $Context* context) {
	$useLocalCurrentObjectStackCache();
	int32_t currentOffset = stackMapFrameOffset;
	$var($chars, charBuffer, $nc(context)->charBuffer);
	$var($LabelArray, labels, context->currentMethodLabels);
	int32_t frameType = 0;
	if (compressed) {
		frameType = (int32_t)($nc(this->classFileBuffer)->get(currentOffset++) & (uint32_t)255);
	} else {
		frameType = $Frame::FULL_FRAME;
		context->currentFrameOffset = -1;
	}
	int32_t offsetDelta = 0;
	context->currentFrameLocalCountDelta = 0;
	if (frameType < $Frame::SAME_LOCALS_1_STACK_ITEM_FRAME) {
		offsetDelta = frameType;
		context->currentFrameType = $Opcodes::F_SAME;
		context->currentFrameStackCount = 0;
	} else if (frameType < $Frame::RESERVED) {
		offsetDelta = frameType - $Frame::SAME_LOCALS_1_STACK_ITEM_FRAME;
		currentOffset = readVerificationTypeInfo(currentOffset, context->currentFrameStackTypes, 0, charBuffer, labels);
		context->currentFrameType = $Opcodes::F_SAME1;
		context->currentFrameStackCount = 1;
	} else if (frameType >= $Frame::SAME_LOCALS_1_STACK_ITEM_FRAME_EXTENDED) {
		offsetDelta = readUnsignedShort(currentOffset);
		currentOffset += 2;
		if (frameType == $Frame::SAME_LOCALS_1_STACK_ITEM_FRAME_EXTENDED) {
			currentOffset = readVerificationTypeInfo(currentOffset, context->currentFrameStackTypes, 0, charBuffer, labels);
			context->currentFrameType = $Opcodes::F_SAME1;
			context->currentFrameStackCount = 1;
		} else if (frameType >= $Frame::CHOP_FRAME && frameType < $Frame::SAME_FRAME_EXTENDED) {
			context->currentFrameType = $Opcodes::F_CHOP;
			context->currentFrameLocalCountDelta = $Frame::SAME_FRAME_EXTENDED - frameType;
			context->currentFrameLocalCount -= context->currentFrameLocalCountDelta;
			context->currentFrameStackCount = 0;
		} else if (frameType == $Frame::SAME_FRAME_EXTENDED) {
			context->currentFrameType = $Opcodes::F_SAME;
			context->currentFrameStackCount = 0;
		} else if (frameType < $Frame::FULL_FRAME) {
			int32_t local = expand ? context->currentFrameLocalCount : 0;
			for (int32_t k = frameType - $Frame::SAME_FRAME_EXTENDED; k > 0; --k) {
				currentOffset = readVerificationTypeInfo(currentOffset, context->currentFrameLocalTypes, local++, charBuffer, labels);
			}
			context->currentFrameType = $Opcodes::F_APPEND;
			context->currentFrameLocalCountDelta = frameType - $Frame::SAME_FRAME_EXTENDED;
			context->currentFrameLocalCount += context->currentFrameLocalCountDelta;
			context->currentFrameStackCount = 0;
		} else {
			int32_t numberOfLocals = readUnsignedShort(currentOffset);
			currentOffset += 2;
			context->currentFrameType = $Opcodes::F_FULL;
			context->currentFrameLocalCountDelta = numberOfLocals;
			context->currentFrameLocalCount = numberOfLocals;
			for (int32_t local = 0; local < numberOfLocals; ++local) {
				currentOffset = readVerificationTypeInfo(currentOffset, context->currentFrameLocalTypes, local, charBuffer, labels);
			}
			int32_t numberOfStackItems = readUnsignedShort(currentOffset);
			currentOffset += 2;
			context->currentFrameStackCount = numberOfStackItems;
			for (int32_t stack = 0; stack < numberOfStackItems; ++stack) {
				currentOffset = readVerificationTypeInfo(currentOffset, context->currentFrameStackTypes, stack, charBuffer, labels);
			}
		}
	} else {
		$throwNew($IllegalArgumentException);
	}
	context->currentFrameOffset += offsetDelta + 1;
	createLabel(context->currentFrameOffset, labels);
	return currentOffset;
}

int32_t ClassReader::readVerificationTypeInfo(int32_t verificationTypeInfoOffset, $ObjectArray* frame, int32_t index, $chars* charBuffer, $LabelArray* labels) {
	$useLocalCurrentObjectStackCache();
	int32_t currentOffset = verificationTypeInfoOffset;
	int32_t tag = (int32_t)($nc(this->classFileBuffer)->get(currentOffset++) & (uint32_t)255);
	switch (tag) {
	case $Frame::ITEM_TOP:
		{
			$init($Opcodes);
			$nc(frame)->set(index, $Opcodes::TOP);
			break;
		}
	case $Frame::ITEM_INTEGER:
		{
			$init($Opcodes);
			$nc(frame)->set(index, $Opcodes::INTEGER);
			break;
		}
	case $Frame::ITEM_FLOAT:
		{
			$init($Opcodes);
			$nc(frame)->set(index, $Opcodes::FLOAT);
			break;
		}
	case $Frame::ITEM_DOUBLE:
		{
			$init($Opcodes);
			$nc(frame)->set(index, $Opcodes::DOUBLE);
			break;
		}
	case $Frame::ITEM_LONG:
		{
			$init($Opcodes);
			$nc(frame)->set(index, $Opcodes::LONG);
			break;
		}
	case $Frame::ITEM_NULL:
		{
			$init($Opcodes);
			$nc(frame)->set(index, $Opcodes::NULL);
			break;
		}
	case $Frame::ITEM_UNINITIALIZED_THIS:
		{
			$init($Opcodes);
			$nc(frame)->set(index, $Opcodes::UNINITIALIZED_THIS);
			break;
		}
	case $Frame::ITEM_OBJECT:
		{
			$nc(frame)->set(index, $(readClass(currentOffset, charBuffer)));
			currentOffset += 2;
			break;
		}
	case $Frame::ITEM_UNINITIALIZED:
		{
			$nc(frame)->set(index, $(createLabel(readUnsignedShort(currentOffset), labels)));
			currentOffset += 2;
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException);
		}
	}
	return currentOffset;
}

int32_t ClassReader::getFirstAttributeOffset() {
	int32_t currentOffset = this->header + 8 + readUnsignedShort(this->header + 6) * 2;
	int32_t fieldsCount = readUnsignedShort(currentOffset);
	currentOffset += 2;
	while (fieldsCount-- > 0) {
		int32_t attributesCount = readUnsignedShort(currentOffset + 6);
		currentOffset += 8;
		while (attributesCount-- > 0) {
			currentOffset += 6 + readInt(currentOffset + 2);
		}
	}
	int32_t methodsCount = readUnsignedShort(currentOffset);
	currentOffset += 2;
	while (methodsCount-- > 0) {
		int32_t attributesCount = readUnsignedShort(currentOffset + 6);
		currentOffset += 8;
		while (attributesCount-- > 0) {
			currentOffset += 6 + readInt(currentOffset + 2);
		}
	}
	return currentOffset + 2;
}

$ints* ClassReader::readBootstrapMethodsAttribute(int32_t maxStringLength) {
	$useLocalCurrentObjectStackCache();
	$var($chars, charBuffer, $new($chars, maxStringLength));
	int32_t currentAttributeOffset = getFirstAttributeOffset();
	$var($ints, currentBootstrapMethodOffsets, nullptr);
	for (int32_t i = readUnsignedShort(currentAttributeOffset - 2); i > 0; --i) {
		$var($String, attributeName, readUTF8(currentAttributeOffset, charBuffer));
		int32_t attributeLength = readInt(currentAttributeOffset + 2);
		currentAttributeOffset += 6;
		$init($Constants);
		if ($nc($Constants::BOOTSTRAP_METHODS)->equals(attributeName)) {
			$assign(currentBootstrapMethodOffsets, $new($ints, readUnsignedShort(currentAttributeOffset)));
			int32_t currentBootstrapMethodOffset = currentAttributeOffset + 2;
			for (int32_t j = 0; j < currentBootstrapMethodOffsets->length; ++j) {
				currentBootstrapMethodOffsets->set(j, currentBootstrapMethodOffset);
				currentBootstrapMethodOffset += 4 + readUnsignedShort(currentBootstrapMethodOffset + 2) * 2;
			}
			return currentBootstrapMethodOffsets;
		}
		currentAttributeOffset += attributeLength;
	}
	$throwNew($IllegalArgumentException);
}

$Attribute* ClassReader::readAttribute($AttributeArray* attributePrototypes, $String* type, int32_t offset, int32_t length, $chars* charBuffer, int32_t codeAttributeOffset, $LabelArray* labels) {
	$useLocalCurrentObjectStackCache();
	{
		$var($AttributeArray, arr$, attributePrototypes);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Attribute, attributePrototype, arr$->get(i$));
			{
				if ($nc($nc(attributePrototype)->type)->equals(type)) {
					return attributePrototype->read(this, offset, length, charBuffer, codeAttributeOffset, labels);
				}
			}
		}
	}
	return $$new($Attribute, type)->read(this, offset, length, nullptr, -1, nullptr);
}

int32_t ClassReader::getItemCount() {
	return $nc(this->cpInfoOffsets)->length;
}

int32_t ClassReader::getItem(int32_t constantPoolEntryIndex) {
	return $nc(this->cpInfoOffsets)->get(constantPoolEntryIndex);
}

int32_t ClassReader::getMaxStringLength() {
	return this->maxStringLength;
}

int32_t ClassReader::readByte(int32_t offset) {
	return (int32_t)($nc(this->classFileBuffer)->get(offset) & (uint32_t)255);
}

int32_t ClassReader::readUnsignedShort(int32_t offset) {
	$var($bytes, classBuffer, this->classFileBuffer);
	return (((int32_t)($nc(classBuffer)->get(offset) & (uint32_t)255)) << 8) | ((int32_t)(classBuffer->get(offset + 1) & (uint32_t)255));
}

int16_t ClassReader::readShort(int32_t offset) {
	$var($bytes, classBuffer, this->classFileBuffer);
	return (int16_t)((((int32_t)($nc(classBuffer)->get(offset) & (uint32_t)255)) << 8) | ((int32_t)(classBuffer->get(offset + 1) & (uint32_t)255)));
}

int32_t ClassReader::readInt(int32_t offset) {
	$var($bytes, classBuffer, this->classFileBuffer);
	return (((((int32_t)($nc(classBuffer)->get(offset) & (uint32_t)255)) << 24) | (((int32_t)(classBuffer->get(offset + 1) & (uint32_t)255)) << 16)) | (((int32_t)(classBuffer->get(offset + 2) & (uint32_t)255)) << 8)) | ((int32_t)(classBuffer->get(offset + 3) & (uint32_t)255));
}

int64_t ClassReader::readLong(int32_t offset) {
	int64_t l1 = readInt(offset);
	int64_t l0 = (int64_t)(readInt(offset + 4) & (uint64_t)(int64_t)0x00000000FFFFFFFF);
	return (l1 << 32) | l0;
}

$String* ClassReader::readUTF8(int32_t offset, $chars* charBuffer) {
	int32_t constantPoolEntryIndex = readUnsignedShort(offset);
	if (offset == 0 || constantPoolEntryIndex == 0) {
		return nullptr;
	}
	return readUtf(constantPoolEntryIndex, charBuffer);
}

$String* ClassReader::readUtf(int32_t constantPoolEntryIndex, $chars* charBuffer) {
	$useLocalCurrentObjectStackCache();
	$var($String, value, $nc(this->constantUtf8Values)->get(constantPoolEntryIndex));
	if (value != nullptr) {
		return value;
	}
	int32_t cpInfoOffset = $nc(this->cpInfoOffsets)->get(constantPoolEntryIndex);
	return $nc(this->constantUtf8Values)->set(constantPoolEntryIndex, $(readUtf(cpInfoOffset + 2, readUnsignedShort(cpInfoOffset), charBuffer)));
}

$String* ClassReader::readUtf(int32_t utfOffset, int32_t utfLength, $chars* charBuffer) {
	int32_t currentOffset = utfOffset;
	int32_t endOffset = currentOffset + utfLength;
	int32_t strLength = 0;
	$var($bytes, classBuffer, this->classFileBuffer);
	while (currentOffset < endOffset) {
		int32_t currentByte = $nc(classBuffer)->get(currentOffset++);
		if (((int32_t)(currentByte & (uint32_t)128)) == 0) {
			$nc(charBuffer)->set(strLength++, (char16_t)((int32_t)(currentByte & (uint32_t)127)));
		} else if (((int32_t)(currentByte & (uint32_t)224)) == 192) {
			$nc(charBuffer)->set(strLength++, (char16_t)((((int32_t)(currentByte & (uint32_t)31)) << 6) + ((int32_t)(classBuffer->get(currentOffset++) & (uint32_t)63))));
		} else {
			int32_t var$0 = (((int32_t)(currentByte & (uint32_t)15)) << 12) + (((int32_t)(classBuffer->get(currentOffset++) & (uint32_t)63)) << 6);
			$nc(charBuffer)->set(strLength++, (char16_t)(var$0 + ((int32_t)(classBuffer->get(currentOffset++) & (uint32_t)63))));
		}
	}
	return $new($String, charBuffer, 0, strLength);
}

$String* ClassReader::readStringish(int32_t offset, $chars* charBuffer) {
	return readUTF8($nc(this->cpInfoOffsets)->get(readUnsignedShort(offset)), charBuffer);
}

$String* ClassReader::readClass(int32_t offset, $chars* charBuffer) {
	return readStringish(offset, charBuffer);
}

$String* ClassReader::readModule(int32_t offset, $chars* charBuffer) {
	return readStringish(offset, charBuffer);
}

$String* ClassReader::readPackage(int32_t offset, $chars* charBuffer) {
	return readStringish(offset, charBuffer);
}

$ConstantDynamic* ClassReader::readConstantDynamic(int32_t constantPoolEntryIndex, $chars* charBuffer) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantDynamic, constantDynamic, $nc(this->constantDynamicValues)->get(constantPoolEntryIndex));
	if (constantDynamic != nullptr) {
		return constantDynamic;
	}
	int32_t cpInfoOffset = $nc(this->cpInfoOffsets)->get(constantPoolEntryIndex);
	int32_t nameAndTypeCpInfoOffset = $nc(this->cpInfoOffsets)->get(readUnsignedShort(cpInfoOffset + 2));
	$var($String, name, readUTF8(nameAndTypeCpInfoOffset, charBuffer));
	$var($String, descriptor, readUTF8(nameAndTypeCpInfoOffset + 2, charBuffer));
	int32_t bootstrapMethodOffset = $nc(this->bootstrapMethodOffsets)->get(readUnsignedShort(cpInfoOffset));
	$var($Handle, handle, $cast($Handle, readConst(readUnsignedShort(bootstrapMethodOffset), charBuffer)));
	$var($ObjectArray, bootstrapMethodArguments, $new($ObjectArray, readUnsignedShort(bootstrapMethodOffset + 2)));
	bootstrapMethodOffset += 4;
	for (int32_t i = 0; i < bootstrapMethodArguments->length; ++i) {
		bootstrapMethodArguments->set(i, $(readConst(readUnsignedShort(bootstrapMethodOffset), charBuffer)));
		bootstrapMethodOffset += 2;
	}
	return $nc(this->constantDynamicValues)->set(constantPoolEntryIndex, $$new($ConstantDynamic, name, descriptor, handle, bootstrapMethodArguments));
}

$Object* ClassReader::readConst(int32_t constantPoolEntryIndex, $chars* charBuffer) {
	$useLocalCurrentObjectStackCache();
	int32_t cpInfoOffset = $nc(this->cpInfoOffsets)->get(constantPoolEntryIndex);
	{
		int32_t referenceKind = 0;
		int32_t referenceCpInfoOffset = 0;
		int32_t nameAndTypeCpInfoOffset = 0;
		$var($String, owner, nullptr)
		$var($String, name, nullptr)
		$var($String, descriptor, nullptr)
		bool isInterface = false;
		switch ($nc(this->classFileBuffer)->get(cpInfoOffset - 1)) {
		case $Symbol::CONSTANT_INTEGER_TAG:
			{
				return $of($Integer::valueOf(readInt(cpInfoOffset)));
			}
		case $Symbol::CONSTANT_FLOAT_TAG:
			{
				return $of($Float::valueOf($Float::intBitsToFloat(readInt(cpInfoOffset))));
			}
		case $Symbol::CONSTANT_LONG_TAG:
			{
				return $of($Long::valueOf(readLong(cpInfoOffset)));
			}
		case $Symbol::CONSTANT_DOUBLE_TAG:
			{
				return $of($Double::valueOf($Double::longBitsToDouble(readLong(cpInfoOffset))));
			}
		case $Symbol::CONSTANT_CLASS_TAG:
			{
				return $of($Type::getObjectType($(readUTF8(cpInfoOffset, charBuffer))));
			}
		case $Symbol::CONSTANT_STRING_TAG:
			{
				return $of(readUTF8(cpInfoOffset, charBuffer));
			}
		case $Symbol::CONSTANT_METHOD_TYPE_TAG:
			{
				return $of($Type::getMethodType($(readUTF8(cpInfoOffset, charBuffer))));
			}
		case $Symbol::CONSTANT_METHOD_HANDLE_TAG:
			{
				referenceKind = readByte(cpInfoOffset);
				referenceCpInfoOffset = $nc(this->cpInfoOffsets)->get(readUnsignedShort(cpInfoOffset + 1));
				nameAndTypeCpInfoOffset = $nc(this->cpInfoOffsets)->get(readUnsignedShort(referenceCpInfoOffset + 2));
				$assign(owner, readClass(referenceCpInfoOffset, charBuffer));
				$assign(name, readUTF8(nameAndTypeCpInfoOffset, charBuffer));
				$assign(descriptor, readUTF8(nameAndTypeCpInfoOffset + 2, charBuffer));
				isInterface = $nc(this->classFileBuffer)->get(referenceCpInfoOffset - 1) == $Symbol::CONSTANT_INTERFACE_METHODREF_TAG;
				return $of($new($Handle, referenceKind, owner, name, descriptor, isInterface));
			}
		case $Symbol::CONSTANT_DYNAMIC_TAG:
			{
				return $of(readConstantDynamic(constantPoolEntryIndex, charBuffer));
			}
		default:
			{
				$throwNew($IllegalArgumentException);
			}
		}
	}
}

ClassReader::ClassReader() {
}

$Class* ClassReader::load$($String* name, bool initialize) {
	$loadClass(ClassReader, name, initialize, &_ClassReader_ClassInfo_, allocate$ClassReader);
	return class$;
}

$Class* ClassReader::class$ = nullptr;

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk