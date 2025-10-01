#include <jdk/internal/reflect/ClassFileAssembler.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/reflect/ByteVector.h>
#include <jdk/internal/reflect/ByteVectorFactory.h>
#include <jdk/internal/reflect/ClassFileConstants.h>
#include <jdk/internal/reflect/Label.h>
#include <jdk/internal/reflect/UTF8.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ByteVector = ::jdk::internal::reflect::ByteVector;
using $ByteVectorFactory = ::jdk::internal::reflect::ByteVectorFactory;
using $ClassFileConstants = ::jdk::internal::reflect::ClassFileConstants;
using $Label = ::jdk::internal::reflect::Label;
using $UTF8 = ::jdk::internal::reflect::UTF8;

namespace jdk {
	namespace internal {
		namespace reflect {

$FieldInfo _ClassFileAssembler_FieldInfo_[] = {
	{"vec", "Ljdk/internal/reflect/ByteVector;", nullptr, $PRIVATE, $field(ClassFileAssembler, vec)},
	{"cpIdx", "S", nullptr, $PRIVATE, $field(ClassFileAssembler, cpIdx)},
	{"stack", "I", nullptr, $PRIVATE, $field(ClassFileAssembler, stack)},
	{"maxStack", "I", nullptr, $PRIVATE, $field(ClassFileAssembler, maxStack)},
	{"maxLocals", "I", nullptr, $PRIVATE, $field(ClassFileAssembler, maxLocals)},
	{}
};

$MethodInfo _ClassFileAssembler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ClassFileAssembler::*)()>(&ClassFileAssembler::init$))},
	{"<init>", "(Ljdk/internal/reflect/ByteVector;)V", nullptr, $PUBLIC, $method(static_cast<void(ClassFileAssembler::*)($ByteVector*)>(&ClassFileAssembler::init$))},
	{"append", "(Ljdk/internal/reflect/ClassFileAssembler;)V", nullptr, $PUBLIC},
	{"append", "(Ljdk/internal/reflect/ByteVector;)V", nullptr, $PUBLIC},
	{"cpi", "()S", nullptr, $PUBLIC},
	{"decStack", "()V", nullptr, $PRIVATE, $method(static_cast<void(ClassFileAssembler::*)()>(&ClassFileAssembler::decStack))},
	{"emitByte", "(B)V", nullptr, $PUBLIC},
	{"emitConstantPoolClass", "(S)V", nullptr, $PUBLIC},
	{"emitConstantPoolFieldref", "(SS)V", nullptr, $PUBLIC},
	{"emitConstantPoolInterfaceMethodref", "(SS)V", nullptr, $PUBLIC},
	{"emitConstantPoolMethodref", "(SS)V", nullptr, $PUBLIC},
	{"emitConstantPoolNameAndType", "(SS)V", nullptr, $PUBLIC},
	{"emitConstantPoolString", "(S)V", nullptr, $PUBLIC},
	{"emitConstantPoolUTF8", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"emitInt", "(I)V", nullptr, $PUBLIC},
	{"emitMagicAndVersion", "()V", nullptr, $PUBLIC},
	{"emitShort", "(S)V", nullptr, $PUBLIC},
	{"emitShort", "(SS)V", nullptr, 0},
	{"getData", "()Ljdk/internal/reflect/ByteVector;", nullptr, $PUBLIC},
	{"getLength", "()S", nullptr, $PUBLIC},
	{"getMaxLocals", "()S", nullptr, $PUBLIC},
	{"getMaxStack", "()S", nullptr, $PUBLIC},
	{"getStack", "()I", nullptr, $PUBLIC},
	{"incStack", "()V", nullptr, $PRIVATE, $method(static_cast<void(ClassFileAssembler::*)()>(&ClassFileAssembler::incStack))},
	{"opc_aaload", "()V", nullptr, $PUBLIC},
	{"opc_aconst_null", "()V", nullptr, $PUBLIC},
	{"opc_aload_0", "()V", nullptr, $PUBLIC},
	{"opc_aload_1", "()V", nullptr, $PUBLIC},
	{"opc_aload_2", "()V", nullptr, $PUBLIC},
	{"opc_aload_3", "()V", nullptr, $PUBLIC},
	{"opc_areturn", "()V", nullptr, $PUBLIC},
	{"opc_arraylength", "()V", nullptr, $PUBLIC},
	{"opc_astore_0", "()V", nullptr, $PUBLIC},
	{"opc_astore_1", "()V", nullptr, $PUBLIC},
	{"opc_astore_2", "()V", nullptr, $PUBLIC},
	{"opc_astore_3", "()V", nullptr, $PUBLIC},
	{"opc_athrow", "()V", nullptr, $PUBLIC},
	{"opc_checkcast", "(S)V", nullptr, $PUBLIC},
	{"opc_dload_0", "()V", nullptr, $PUBLIC},
	{"opc_dload_1", "()V", nullptr, $PUBLIC},
	{"opc_dload_2", "()V", nullptr, $PUBLIC},
	{"opc_dload_3", "()V", nullptr, $PUBLIC},
	{"opc_dreturn", "()V", nullptr, $PUBLIC},
	{"opc_dup", "()V", nullptr, $PUBLIC},
	{"opc_dup_x1", "()V", nullptr, $PUBLIC},
	{"opc_f2d", "()V", nullptr, $PUBLIC},
	{"opc_fload_0", "()V", nullptr, $PUBLIC},
	{"opc_fload_1", "()V", nullptr, $PUBLIC},
	{"opc_fload_2", "()V", nullptr, $PUBLIC},
	{"opc_fload_3", "()V", nullptr, $PUBLIC},
	{"opc_freturn", "()V", nullptr, $PUBLIC},
	{"opc_getfield", "(SI)V", nullptr, $PUBLIC},
	{"opc_getstatic", "(SI)V", nullptr, $PUBLIC},
	{"opc_goto", "(S)V", nullptr, $PUBLIC},
	{"opc_goto", "(Ljdk/internal/reflect/Label;)V", nullptr, $PUBLIC},
	{"opc_i2d", "()V", nullptr, $PUBLIC},
	{"opc_i2f", "()V", nullptr, $PUBLIC},
	{"opc_i2l", "()V", nullptr, $PUBLIC},
	{"opc_if_icmpeq", "(S)V", nullptr, $PUBLIC},
	{"opc_if_icmpeq", "(Ljdk/internal/reflect/Label;)V", nullptr, $PUBLIC},
	{"opc_ifeq", "(S)V", nullptr, $PUBLIC},
	{"opc_ifeq", "(Ljdk/internal/reflect/Label;)V", nullptr, $PUBLIC},
	{"opc_ifnonnull", "(S)V", nullptr, $PUBLIC},
	{"opc_ifnonnull", "(Ljdk/internal/reflect/Label;)V", nullptr, $PUBLIC},
	{"opc_ifnull", "(S)V", nullptr, $PUBLIC},
	{"opc_ifnull", "(Ljdk/internal/reflect/Label;)V", nullptr, $PUBLIC},
	{"opc_iload_0", "()V", nullptr, $PUBLIC},
	{"opc_iload_1", "()V", nullptr, $PUBLIC},
	{"opc_iload_2", "()V", nullptr, $PUBLIC},
	{"opc_iload_3", "()V", nullptr, $PUBLIC},
	{"opc_instanceof", "(S)V", nullptr, $PUBLIC},
	{"opc_invokeinterface", "(SIBI)V", nullptr, $PUBLIC},
	{"opc_invokespecial", "(SII)V", nullptr, $PUBLIC},
	{"opc_invokestatic", "(SII)V", nullptr, $PUBLIC},
	{"opc_invokevirtual", "(SII)V", nullptr, $PUBLIC},
	{"opc_ireturn", "()V", nullptr, $PUBLIC},
	{"opc_l2d", "()V", nullptr, $PUBLIC},
	{"opc_l2f", "()V", nullptr, $PUBLIC},
	{"opc_ldc", "(B)V", nullptr, $PUBLIC},
	{"opc_lload_0", "()V", nullptr, $PUBLIC},
	{"opc_lload_1", "()V", nullptr, $PUBLIC},
	{"opc_lload_2", "()V", nullptr, $PUBLIC},
	{"opc_lload_3", "()V", nullptr, $PUBLIC},
	{"opc_lreturn", "()V", nullptr, $PUBLIC},
	{"opc_new", "(S)V", nullptr, $PUBLIC},
	{"opc_pop", "()V", nullptr, $PUBLIC},
	{"opc_putfield", "(SI)V", nullptr, $PUBLIC},
	{"opc_putstatic", "(SI)V", nullptr, $PUBLIC},
	{"opc_return", "()V", nullptr, $PUBLIC},
	{"opc_sipush", "(S)V", nullptr, $PUBLIC},
	{"opc_swap", "()V", nullptr, $PUBLIC},
	{"setMaxLocals", "(I)V", nullptr, $PUBLIC},
	{"setStack", "(I)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ClassFileAssembler_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.reflect.ClassFileAssembler",
	"java.lang.Object",
	"jdk.internal.reflect.ClassFileConstants",
	_ClassFileAssembler_FieldInfo_,
	_ClassFileAssembler_MethodInfo_
};

$Object* allocate$ClassFileAssembler($Class* clazz) {
	return $of($alloc(ClassFileAssembler));
}

void ClassFileAssembler::init$() {
	ClassFileAssembler::init$($($ByteVectorFactory::create()));
}

void ClassFileAssembler::init$($ByteVector* vec) {
	this->cpIdx = (int16_t)0;
	this->stack = 0;
	this->maxStack = 0;
	this->maxLocals = 0;
	$set(this, vec, vec);
}

$ByteVector* ClassFileAssembler::getData() {
	return this->vec;
}

int16_t ClassFileAssembler::getLength() {
	return (int16_t)$nc(this->vec)->getLength();
}

void ClassFileAssembler::emitMagicAndVersion() {
	emitInt((int32_t)0xCAFEBABE);
	emitShort((int16_t)0);
	emitShort((int16_t)49);
}

void ClassFileAssembler::emitInt(int32_t val) {
	emitByte((int8_t)(val >> 24));
	emitByte((int8_t)((int32_t)((val >> 16) & (uint32_t)255)));
	emitByte((int8_t)((int32_t)((val >> 8) & (uint32_t)255)));
	emitByte((int8_t)((int32_t)(val & (uint32_t)255)));
}

void ClassFileAssembler::emitShort(int16_t val) {
	emitByte((int8_t)((int32_t)((val >> 8) & (uint32_t)255)));
	emitByte((int8_t)((int32_t)(val & (uint32_t)255)));
}

void ClassFileAssembler::emitShort(int16_t bci, int16_t val) {
	$nc(this->vec)->put(bci, (int8_t)((int32_t)((val >> 8) & (uint32_t)255)));
	$nc(this->vec)->put(bci + 1, (int8_t)((int32_t)(val & (uint32_t)255)));
}

void ClassFileAssembler::emitByte(int8_t val) {
	$nc(this->vec)->add(val);
}

void ClassFileAssembler::append(ClassFileAssembler* asm$) {
	append($nc(asm$)->vec);
}

void ClassFileAssembler::append($ByteVector* vec) {
	for (int32_t i = 0; i < $nc(vec)->getLength(); ++i) {
		emitByte(vec->get(i));
	}
}

int16_t ClassFileAssembler::cpi() {
	if (this->cpIdx == 0) {
		$throwNew($RuntimeException, "Illegal use of ClassFileAssembler"_s);
	}
	return this->cpIdx;
}

void ClassFileAssembler::emitConstantPoolUTF8($String* str) {
	$var($bytes, bytes, $UTF8::encode(str));
	emitByte($ClassFileConstants::CONSTANT_Utf8);
	emitShort((int16_t)$nc(bytes)->length);
	for (int32_t i = 0; i < $nc(bytes)->length; ++i) {
		emitByte(bytes->get(i));
	}
	++this->cpIdx;
}

void ClassFileAssembler::emitConstantPoolClass(int16_t index) {
	emitByte($ClassFileConstants::CONSTANT_Class);
	emitShort(index);
	++this->cpIdx;
}

void ClassFileAssembler::emitConstantPoolNameAndType(int16_t nameIndex, int16_t typeIndex) {
	emitByte($ClassFileConstants::CONSTANT_NameAndType);
	emitShort(nameIndex);
	emitShort(typeIndex);
	++this->cpIdx;
}

void ClassFileAssembler::emitConstantPoolFieldref(int16_t classIndex, int16_t nameAndTypeIndex) {
	emitByte($ClassFileConstants::CONSTANT_Fieldref);
	emitShort(classIndex);
	emitShort(nameAndTypeIndex);
	++this->cpIdx;
}

void ClassFileAssembler::emitConstantPoolMethodref(int16_t classIndex, int16_t nameAndTypeIndex) {
	emitByte($ClassFileConstants::CONSTANT_Methodref);
	emitShort(classIndex);
	emitShort(nameAndTypeIndex);
	++this->cpIdx;
}

void ClassFileAssembler::emitConstantPoolInterfaceMethodref(int16_t classIndex, int16_t nameAndTypeIndex) {
	emitByte($ClassFileConstants::CONSTANT_InterfaceMethodref);
	emitShort(classIndex);
	emitShort(nameAndTypeIndex);
	++this->cpIdx;
}

void ClassFileAssembler::emitConstantPoolString(int16_t utf8Index) {
	emitByte($ClassFileConstants::CONSTANT_String);
	emitShort(utf8Index);
	++this->cpIdx;
}

void ClassFileAssembler::incStack() {
	setStack(this->stack + 1);
}

void ClassFileAssembler::decStack() {
	--this->stack;
}

int16_t ClassFileAssembler::getMaxStack() {
	return (int16_t)this->maxStack;
}

int16_t ClassFileAssembler::getMaxLocals() {
	return (int16_t)this->maxLocals;
}

void ClassFileAssembler::setMaxLocals(int32_t maxLocals) {
	this->maxLocals = maxLocals;
}

int32_t ClassFileAssembler::getStack() {
	return this->stack;
}

void ClassFileAssembler::setStack(int32_t value) {
	this->stack = value;
	if (this->stack > this->maxStack) {
		this->maxStack = this->stack;
	}
}

void ClassFileAssembler::opc_aconst_null() {
	emitByte($ClassFileConstants::opc_aconst_null);
	incStack();
}

void ClassFileAssembler::opc_sipush(int16_t constant) {
	emitByte($ClassFileConstants::opc_sipush);
	emitShort(constant);
	incStack();
}

void ClassFileAssembler::opc_ldc(int8_t cpIdx) {
	emitByte($ClassFileConstants::opc_ldc);
	emitByte(cpIdx);
	incStack();
}

void ClassFileAssembler::opc_iload_0() {
	emitByte($ClassFileConstants::opc_iload_0);
	if (this->maxLocals < 1) {
		this->maxLocals = 1;
	}
	incStack();
}

void ClassFileAssembler::opc_iload_1() {
	emitByte($ClassFileConstants::opc_iload_1);
	if (this->maxLocals < 2) {
		this->maxLocals = 2;
	}
	incStack();
}

void ClassFileAssembler::opc_iload_2() {
	emitByte($ClassFileConstants::opc_iload_2);
	if (this->maxLocals < 3) {
		this->maxLocals = 3;
	}
	incStack();
}

void ClassFileAssembler::opc_iload_3() {
	emitByte($ClassFileConstants::opc_iload_3);
	if (this->maxLocals < 4) {
		this->maxLocals = 4;
	}
	incStack();
}

void ClassFileAssembler::opc_lload_0() {
	emitByte($ClassFileConstants::opc_lload_0);
	if (this->maxLocals < 2) {
		this->maxLocals = 2;
	}
	incStack();
	incStack();
}

void ClassFileAssembler::opc_lload_1() {
	emitByte($ClassFileConstants::opc_lload_1);
	if (this->maxLocals < 3) {
		this->maxLocals = 3;
	}
	incStack();
	incStack();
}

void ClassFileAssembler::opc_lload_2() {
	emitByte($ClassFileConstants::opc_lload_2);
	if (this->maxLocals < 4) {
		this->maxLocals = 4;
	}
	incStack();
	incStack();
}

void ClassFileAssembler::opc_lload_3() {
	emitByte($ClassFileConstants::opc_lload_3);
	if (this->maxLocals < 5) {
		this->maxLocals = 5;
	}
	incStack();
	incStack();
}

void ClassFileAssembler::opc_fload_0() {
	emitByte($ClassFileConstants::opc_fload_0);
	if (this->maxLocals < 1) {
		this->maxLocals = 1;
	}
	incStack();
}

void ClassFileAssembler::opc_fload_1() {
	emitByte($ClassFileConstants::opc_fload_1);
	if (this->maxLocals < 2) {
		this->maxLocals = 2;
	}
	incStack();
}

void ClassFileAssembler::opc_fload_2() {
	emitByte($ClassFileConstants::opc_fload_2);
	if (this->maxLocals < 3) {
		this->maxLocals = 3;
	}
	incStack();
}

void ClassFileAssembler::opc_fload_3() {
	emitByte($ClassFileConstants::opc_fload_3);
	if (this->maxLocals < 4) {
		this->maxLocals = 4;
	}
	incStack();
}

void ClassFileAssembler::opc_dload_0() {
	emitByte($ClassFileConstants::opc_dload_0);
	if (this->maxLocals < 2) {
		this->maxLocals = 2;
	}
	incStack();
	incStack();
}

void ClassFileAssembler::opc_dload_1() {
	emitByte($ClassFileConstants::opc_dload_1);
	if (this->maxLocals < 3) {
		this->maxLocals = 3;
	}
	incStack();
	incStack();
}

void ClassFileAssembler::opc_dload_2() {
	emitByte($ClassFileConstants::opc_dload_2);
	if (this->maxLocals < 4) {
		this->maxLocals = 4;
	}
	incStack();
	incStack();
}

void ClassFileAssembler::opc_dload_3() {
	emitByte($ClassFileConstants::opc_dload_3);
	if (this->maxLocals < 5) {
		this->maxLocals = 5;
	}
	incStack();
	incStack();
}

void ClassFileAssembler::opc_aload_0() {
	emitByte($ClassFileConstants::opc_aload_0);
	if (this->maxLocals < 1) {
		this->maxLocals = 1;
	}
	incStack();
}

void ClassFileAssembler::opc_aload_1() {
	emitByte($ClassFileConstants::opc_aload_1);
	if (this->maxLocals < 2) {
		this->maxLocals = 2;
	}
	incStack();
}

void ClassFileAssembler::opc_aload_2() {
	emitByte($ClassFileConstants::opc_aload_2);
	if (this->maxLocals < 3) {
		this->maxLocals = 3;
	}
	incStack();
}

void ClassFileAssembler::opc_aload_3() {
	emitByte($ClassFileConstants::opc_aload_3);
	if (this->maxLocals < 4) {
		this->maxLocals = 4;
	}
	incStack();
}

void ClassFileAssembler::opc_aaload() {
	emitByte($ClassFileConstants::opc_aaload);
	decStack();
}

void ClassFileAssembler::opc_astore_0() {
	emitByte($ClassFileConstants::opc_astore_0);
	if (this->maxLocals < 1) {
		this->maxLocals = 1;
	}
	decStack();
}

void ClassFileAssembler::opc_astore_1() {
	emitByte($ClassFileConstants::opc_astore_1);
	if (this->maxLocals < 2) {
		this->maxLocals = 2;
	}
	decStack();
}

void ClassFileAssembler::opc_astore_2() {
	emitByte($ClassFileConstants::opc_astore_2);
	if (this->maxLocals < 3) {
		this->maxLocals = 3;
	}
	decStack();
}

void ClassFileAssembler::opc_astore_3() {
	emitByte($ClassFileConstants::opc_astore_3);
	if (this->maxLocals < 4) {
		this->maxLocals = 4;
	}
	decStack();
}

void ClassFileAssembler::opc_pop() {
	emitByte($ClassFileConstants::opc_pop);
	decStack();
}

void ClassFileAssembler::opc_dup() {
	emitByte($ClassFileConstants::opc_dup);
	incStack();
}

void ClassFileAssembler::opc_dup_x1() {
	emitByte($ClassFileConstants::opc_dup_x1);
	incStack();
}

void ClassFileAssembler::opc_swap() {
	emitByte($ClassFileConstants::opc_swap);
}

void ClassFileAssembler::opc_i2l() {
	emitByte($ClassFileConstants::opc_i2l);
}

void ClassFileAssembler::opc_i2f() {
	emitByte($ClassFileConstants::opc_i2f);
}

void ClassFileAssembler::opc_i2d() {
	emitByte($ClassFileConstants::opc_i2d);
}

void ClassFileAssembler::opc_l2f() {
	emitByte($ClassFileConstants::opc_l2f);
}

void ClassFileAssembler::opc_l2d() {
	emitByte($ClassFileConstants::opc_l2d);
}

void ClassFileAssembler::opc_f2d() {
	emitByte($ClassFileConstants::opc_f2d);
}

void ClassFileAssembler::opc_ifeq(int16_t bciOffset) {
	emitByte($ClassFileConstants::opc_ifeq);
	emitShort(bciOffset);
	decStack();
}

void ClassFileAssembler::opc_ifeq($Label* l) {
	int16_t instrBCI = getLength();
	emitByte($ClassFileConstants::opc_ifeq);
	int16_t var$0 = instrBCI;
	int16_t var$1 = getLength();
	$nc(l)->add(this, var$0, var$1, getStack() - 1);
	emitShort((int16_t)-1);
}

void ClassFileAssembler::opc_if_icmpeq(int16_t bciOffset) {
	emitByte($ClassFileConstants::opc_if_icmpeq);
	emitShort(bciOffset);
	setStack(getStack() - 2);
}

void ClassFileAssembler::opc_if_icmpeq($Label* l) {
	int16_t instrBCI = getLength();
	emitByte($ClassFileConstants::opc_if_icmpeq);
	int16_t var$0 = instrBCI;
	int16_t var$1 = getLength();
	$nc(l)->add(this, var$0, var$1, getStack() - 2);
	emitShort((int16_t)-1);
}

void ClassFileAssembler::opc_goto(int16_t bciOffset) {
	emitByte($ClassFileConstants::opc_goto);
	emitShort(bciOffset);
}

void ClassFileAssembler::opc_goto($Label* l) {
	int16_t instrBCI = getLength();
	emitByte($ClassFileConstants::opc_goto);
	int16_t var$0 = instrBCI;
	int16_t var$1 = getLength();
	$nc(l)->add(this, var$0, var$1, getStack());
	emitShort((int16_t)-1);
}

void ClassFileAssembler::opc_ifnull(int16_t bciOffset) {
	emitByte($ClassFileConstants::opc_ifnull);
	emitShort(bciOffset);
	decStack();
}

void ClassFileAssembler::opc_ifnull($Label* l) {
	int16_t instrBCI = getLength();
	emitByte($ClassFileConstants::opc_ifnull);
	int16_t var$0 = instrBCI;
	int16_t var$1 = getLength();
	$nc(l)->add(this, var$0, var$1, getStack() - 1);
	emitShort((int16_t)-1);
	decStack();
}

void ClassFileAssembler::opc_ifnonnull(int16_t bciOffset) {
	emitByte($ClassFileConstants::opc_ifnonnull);
	emitShort(bciOffset);
	decStack();
}

void ClassFileAssembler::opc_ifnonnull($Label* l) {
	int16_t instrBCI = getLength();
	emitByte($ClassFileConstants::opc_ifnonnull);
	int16_t var$0 = instrBCI;
	int16_t var$1 = getLength();
	$nc(l)->add(this, var$0, var$1, getStack() - 1);
	emitShort((int16_t)-1);
	decStack();
}

void ClassFileAssembler::opc_ireturn() {
	emitByte($ClassFileConstants::opc_ireturn);
	setStack(0);
}

void ClassFileAssembler::opc_lreturn() {
	emitByte($ClassFileConstants::opc_lreturn);
	setStack(0);
}

void ClassFileAssembler::opc_freturn() {
	emitByte($ClassFileConstants::opc_freturn);
	setStack(0);
}

void ClassFileAssembler::opc_dreturn() {
	emitByte($ClassFileConstants::opc_dreturn);
	setStack(0);
}

void ClassFileAssembler::opc_areturn() {
	emitByte($ClassFileConstants::opc_areturn);
	setStack(0);
}

void ClassFileAssembler::opc_return() {
	emitByte($ClassFileConstants::opc_return);
	setStack(0);
}

void ClassFileAssembler::opc_getstatic(int16_t fieldIndex, int32_t fieldSizeInStackSlots) {
	emitByte($ClassFileConstants::opc_getstatic);
	emitShort(fieldIndex);
	setStack(getStack() + fieldSizeInStackSlots);
}

void ClassFileAssembler::opc_putstatic(int16_t fieldIndex, int32_t fieldSizeInStackSlots) {
	emitByte($ClassFileConstants::opc_putstatic);
	emitShort(fieldIndex);
	setStack(getStack() - fieldSizeInStackSlots);
}

void ClassFileAssembler::opc_getfield(int16_t fieldIndex, int32_t fieldSizeInStackSlots) {
	emitByte($ClassFileConstants::opc_getfield);
	emitShort(fieldIndex);
	setStack(getStack() + fieldSizeInStackSlots - 1);
}

void ClassFileAssembler::opc_putfield(int16_t fieldIndex, int32_t fieldSizeInStackSlots) {
	emitByte($ClassFileConstants::opc_putfield);
	emitShort(fieldIndex);
	setStack(getStack() - fieldSizeInStackSlots - 1);
}

void ClassFileAssembler::opc_invokevirtual(int16_t methodIndex, int32_t numArgs, int32_t numReturnValues) {
	emitByte($ClassFileConstants::opc_invokevirtual);
	emitShort(methodIndex);
	setStack(getStack() - numArgs - 1 + numReturnValues);
}

void ClassFileAssembler::opc_invokespecial(int16_t methodIndex, int32_t numArgs, int32_t numReturnValues) {
	emitByte($ClassFileConstants::opc_invokespecial);
	emitShort(methodIndex);
	setStack(getStack() - numArgs - 1 + numReturnValues);
}

void ClassFileAssembler::opc_invokestatic(int16_t methodIndex, int32_t numArgs, int32_t numReturnValues) {
	emitByte($ClassFileConstants::opc_invokestatic);
	emitShort(methodIndex);
	setStack(getStack() - numArgs + numReturnValues);
}

void ClassFileAssembler::opc_invokeinterface(int16_t methodIndex, int32_t numArgs, int8_t count, int32_t numReturnValues) {
	emitByte($ClassFileConstants::opc_invokeinterface);
	emitShort(methodIndex);
	emitByte(count);
	emitByte((int8_t)0);
	setStack(getStack() - numArgs - 1 + numReturnValues);
}

void ClassFileAssembler::opc_arraylength() {
	emitByte($ClassFileConstants::opc_arraylength);
}

void ClassFileAssembler::opc_new(int16_t classIndex) {
	emitByte($ClassFileConstants::opc_new);
	emitShort(classIndex);
	incStack();
}

void ClassFileAssembler::opc_athrow() {
	emitByte($ClassFileConstants::opc_athrow);
	setStack(1);
}

void ClassFileAssembler::opc_checkcast(int16_t classIndex) {
	emitByte($ClassFileConstants::opc_checkcast);
	emitShort(classIndex);
}

void ClassFileAssembler::opc_instanceof(int16_t classIndex) {
	emitByte($ClassFileConstants::opc_instanceof);
	emitShort(classIndex);
}

ClassFileAssembler::ClassFileAssembler() {
}

$Class* ClassFileAssembler::load$($String* name, bool initialize) {
	$loadClass(ClassFileAssembler, name, initialize, &_ClassFileAssembler_ClassInfo_, allocate$ClassFileAssembler);
	return class$;
}

$Class* ClassFileAssembler::class$ = nullptr;

		} // reflect
	} // internal
} // jdk