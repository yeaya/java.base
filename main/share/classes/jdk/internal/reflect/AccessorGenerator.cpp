#include <jdk/internal/reflect/AccessorGenerator.h>

#include <java/lang/InternalError.h>
#include <java/lang/Math.h>
#include <java/lang/reflect/Modifier.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jdk/internal/reflect/ClassFileAssembler.h>
#include <jdk/internal/reflect/ClassFileConstants.h>
#include <jcpp.h>

#undef ACC_PUBLIC
#undef NUM_BOXING_CPOOL_ENTRIES
#undef NUM_COMMON_CPOOL_ENTRIES
#undef TYPE

using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $Void = ::java::lang::Void;
using $Modifier = ::java::lang::reflect::Modifier;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $ClassFileAssembler = ::jdk::internal::reflect::ClassFileAssembler;
using $ClassFileConstants = ::jdk::internal::reflect::ClassFileConstants;

namespace jdk {
	namespace internal {
		namespace reflect {

$FieldInfo _AccessorGenerator_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $STATIC | $FINAL, $staticField(AccessorGenerator, unsafe)},
	{"S0", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(AccessorGenerator, S0)},
	{"S1", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(AccessorGenerator, S1)},
	{"S2", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(AccessorGenerator, S2)},
	{"S3", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(AccessorGenerator, S3)},
	{"S4", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(AccessorGenerator, S4)},
	{"S5", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(AccessorGenerator, S5)},
	{"S6", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(AccessorGenerator, S6)},
	{"asm", "Ljdk/internal/reflect/ClassFileAssembler;", nullptr, $PROTECTED, $field(AccessorGenerator, asm$)},
	{"modifiers", "I", nullptr, $PROTECTED, $field(AccessorGenerator, modifiers)},
	{"thisClass", "S", nullptr, $PROTECTED, $field(AccessorGenerator, thisClass)},
	{"superClass", "S", nullptr, $PROTECTED, $field(AccessorGenerator, superClass)},
	{"targetClass", "S", nullptr, $PROTECTED, $field(AccessorGenerator, targetClass)},
	{"throwableClass", "S", nullptr, $PROTECTED, $field(AccessorGenerator, throwableClass)},
	{"classCastClass", "S", nullptr, $PROTECTED, $field(AccessorGenerator, classCastClass)},
	{"nullPointerClass", "S", nullptr, $PROTECTED, $field(AccessorGenerator, nullPointerClass)},
	{"illegalArgumentClass", "S", nullptr, $PROTECTED, $field(AccessorGenerator, illegalArgumentClass)},
	{"invocationTargetClass", "S", nullptr, $PROTECTED, $field(AccessorGenerator, invocationTargetClass)},
	{"initIdx", "S", nullptr, $PROTECTED, $field(AccessorGenerator, initIdx)},
	{"initNameAndTypeIdx", "S", nullptr, $PROTECTED, $field(AccessorGenerator, initNameAndTypeIdx)},
	{"initStringNameAndTypeIdx", "S", nullptr, $PROTECTED, $field(AccessorGenerator, initStringNameAndTypeIdx)},
	{"nullPointerCtorIdx", "S", nullptr, $PROTECTED, $field(AccessorGenerator, nullPointerCtorIdx)},
	{"illegalArgumentCtorIdx", "S", nullptr, $PROTECTED, $field(AccessorGenerator, illegalArgumentCtorIdx)},
	{"illegalArgumentStringCtorIdx", "S", nullptr, $PROTECTED, $field(AccessorGenerator, illegalArgumentStringCtorIdx)},
	{"invocationTargetCtorIdx", "S", nullptr, $PROTECTED, $field(AccessorGenerator, invocationTargetCtorIdx)},
	{"superCtorIdx", "S", nullptr, $PROTECTED, $field(AccessorGenerator, superCtorIdx)},
	{"objectClass", "S", nullptr, $PROTECTED, $field(AccessorGenerator, objectClass)},
	{"toStringIdx", "S", nullptr, $PROTECTED, $field(AccessorGenerator, toStringIdx)},
	{"codeIdx", "S", nullptr, $PROTECTED, $field(AccessorGenerator, codeIdx)},
	{"exceptionsIdx", "S", nullptr, $PROTECTED, $field(AccessorGenerator, exceptionsIdx)},
	{"valueOfIdx", "S", nullptr, $PROTECTED, $field(AccessorGenerator, valueOfIdx)},
	{"booleanIdx", "S", nullptr, $PROTECTED, $field(AccessorGenerator, booleanIdx)},
	{"booleanBoxIdx", "S", nullptr, $PROTECTED, $field(AccessorGenerator, booleanBoxIdx)},
	{"booleanUnboxIdx", "S", nullptr, $PROTECTED, $field(AccessorGenerator, booleanUnboxIdx)},
	{"byteIdx", "S", nullptr, $PROTECTED, $field(AccessorGenerator, byteIdx)},
	{"byteBoxIdx", "S", nullptr, $PROTECTED, $field(AccessorGenerator, byteBoxIdx)},
	{"byteUnboxIdx", "S", nullptr, $PROTECTED, $field(AccessorGenerator, byteUnboxIdx)},
	{"characterIdx", "S", nullptr, $PROTECTED, $field(AccessorGenerator, characterIdx)},
	{"characterBoxIdx", "S", nullptr, $PROTECTED, $field(AccessorGenerator, characterBoxIdx)},
	{"characterUnboxIdx", "S", nullptr, $PROTECTED, $field(AccessorGenerator, characterUnboxIdx)},
	{"doubleIdx", "S", nullptr, $PROTECTED, $field(AccessorGenerator, doubleIdx)},
	{"doubleBoxIdx", "S", nullptr, $PROTECTED, $field(AccessorGenerator, doubleBoxIdx)},
	{"doubleUnboxIdx", "S", nullptr, $PROTECTED, $field(AccessorGenerator, doubleUnboxIdx)},
	{"floatIdx", "S", nullptr, $PROTECTED, $field(AccessorGenerator, floatIdx)},
	{"floatBoxIdx", "S", nullptr, $PROTECTED, $field(AccessorGenerator, floatBoxIdx)},
	{"floatUnboxIdx", "S", nullptr, $PROTECTED, $field(AccessorGenerator, floatUnboxIdx)},
	{"integerIdx", "S", nullptr, $PROTECTED, $field(AccessorGenerator, integerIdx)},
	{"integerBoxIdx", "S", nullptr, $PROTECTED, $field(AccessorGenerator, integerBoxIdx)},
	{"integerUnboxIdx", "S", nullptr, $PROTECTED, $field(AccessorGenerator, integerUnboxIdx)},
	{"longIdx", "S", nullptr, $PROTECTED, $field(AccessorGenerator, longIdx)},
	{"longBoxIdx", "S", nullptr, $PROTECTED, $field(AccessorGenerator, longBoxIdx)},
	{"longUnboxIdx", "S", nullptr, $PROTECTED, $field(AccessorGenerator, longUnboxIdx)},
	{"shortIdx", "S", nullptr, $PROTECTED, $field(AccessorGenerator, shortIdx)},
	{"shortBoxIdx", "S", nullptr, $PROTECTED, $field(AccessorGenerator, shortBoxIdx)},
	{"shortUnboxIdx", "S", nullptr, $PROTECTED, $field(AccessorGenerator, shortUnboxIdx)},
	{"NUM_COMMON_CPOOL_ENTRIES", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(AccessorGenerator, NUM_COMMON_CPOOL_ENTRIES)},
	{"NUM_BOXING_CPOOL_ENTRIES", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(AccessorGenerator, NUM_BOXING_CPOOL_ENTRIES)},
	{"primitiveTypes", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $PROTECTED | $STATIC | $FINAL, $staticField(AccessorGenerator, primitiveTypes)},
	{"illegalArgumentCodeBuffer", "Ljdk/internal/reflect/ClassFileAssembler;", nullptr, $PRIVATE, $field(AccessorGenerator, illegalArgumentCodeBuffer$)},
	{}
};

$MethodInfo _AccessorGenerator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(AccessorGenerator, init$, void)},
	{"add", "(SS)S", nullptr, $PROTECTED | $STATIC, $staticMethod(AccessorGenerator, add, int16_t, int16_t, int16_t)},
	{"boxingMethodForPrimitiveType", "(Ljava/lang/Class;)S", "(Ljava/lang/Class<*>;)S", $PROTECTED, $virtualMethod(AccessorGenerator, boxingMethodForPrimitiveType, int16_t, $Class*)},
	{"canWidenTo", "(Ljava/lang/Class;Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;)Z", $PROTECTED | $STATIC, $staticMethod(AccessorGenerator, canWidenTo, bool, $Class*, $Class*)},
	{"emitBoxingContantPoolEntries", "()V", nullptr, $PROTECTED, $virtualMethod(AccessorGenerator, emitBoxingContantPoolEntries, void)},
	{"emitCommonConstantPoolEntries", "()V", nullptr, $PROTECTED, $virtualMethod(AccessorGenerator, emitCommonConstantPoolEntries, void)},
	{"emitConstructor", "()V", nullptr, $PROTECTED, $virtualMethod(AccessorGenerator, emitConstructor, void)},
	{"emitMethod", "(SILjdk/internal/reflect/ClassFileAssembler;Ljdk/internal/reflect/ClassFileAssembler;[S)V", nullptr, $PROTECTED, $virtualMethod(AccessorGenerator, emitMethod, void, int16_t, int32_t, $ClassFileAssembler*, $ClassFileAssembler*, $shorts*)},
	{"emitWideningBytecodeForPrimitiveConversion", "(Ljdk/internal/reflect/ClassFileAssembler;Ljava/lang/Class;Ljava/lang/Class;)V", "(Ljdk/internal/reflect/ClassFileAssembler;Ljava/lang/Class<*>;Ljava/lang/Class<*>;)V", $PROTECTED | $STATIC, $staticMethod(AccessorGenerator, emitWideningBytecodeForPrimitiveConversion, void, $ClassFileAssembler*, $Class*, $Class*)},
	{"getClassName", "(Ljava/lang/Class;Z)Ljava/lang/String;", "(Ljava/lang/Class<*>;Z)Ljava/lang/String;", $PROTECTED | $STATIC, $staticMethod(AccessorGenerator, getClassName, $String*, $Class*, bool)},
	{"illegalArgumentCodeBuffer", "()Ljdk/internal/reflect/ClassFileAssembler;", nullptr, $PROTECTED, $virtualMethod(AccessorGenerator, illegalArgumentCodeBuffer, $ClassFileAssembler*)},
	{"indexForPrimitiveType", "(Ljava/lang/Class;)S", "(Ljava/lang/Class<*>;)S", $PROTECTED, $virtualMethod(AccessorGenerator, indexForPrimitiveType, int16_t, $Class*)},
	{"internalize", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(AccessorGenerator, internalize, $String*, $String*)},
	{"isPrimitive", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PROTECTED | $STATIC, $staticMethod(AccessorGenerator, isPrimitive, bool, $Class*)},
	{"isPrivate", "()Z", nullptr, $PROTECTED, $virtualMethod(AccessorGenerator, isPrivate, bool)},
	{"isStatic", "()Z", nullptr, $PROTECTED, $virtualMethod(AccessorGenerator, isStatic, bool)},
	{"sub", "(SS)S", nullptr, $PROTECTED | $STATIC, $staticMethod(AccessorGenerator, sub, int16_t, int16_t, int16_t)},
	{"typeSizeInStackSlots", "(Ljava/lang/Class;)I", "(Ljava/lang/Class<*>;)I", $PROTECTED, $virtualMethod(AccessorGenerator, typeSizeInStackSlots, int32_t, $Class*)},
	{"unboxingMethodForPrimitiveType", "(Ljava/lang/Class;)S", "(Ljava/lang/Class<*>;)S", $PROTECTED, $virtualMethod(AccessorGenerator, unboxingMethodForPrimitiveType, int16_t, $Class*)},
	{}
};

$ClassInfo _AccessorGenerator_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.reflect.AccessorGenerator",
	"java.lang.Object",
	"jdk.internal.reflect.ClassFileConstants",
	_AccessorGenerator_FieldInfo_,
	_AccessorGenerator_MethodInfo_
};

$Object* allocate$AccessorGenerator($Class* clazz) {
	return $of($alloc(AccessorGenerator));
}

$Unsafe* AccessorGenerator::unsafe = nullptr;
$ClassArray* AccessorGenerator::primitiveTypes = nullptr;

void AccessorGenerator::init$() {
}

void AccessorGenerator::emitCommonConstantPoolEntries() {
	$nc(this->asm$)->emitConstantPoolUTF8("java/lang/Throwable"_s);
	$nc(this->asm$)->emitConstantPoolClass($nc(this->asm$)->cpi());
	this->throwableClass = $nc(this->asm$)->cpi();
	$nc(this->asm$)->emitConstantPoolUTF8("java/lang/ClassCastException"_s);
	$nc(this->asm$)->emitConstantPoolClass($nc(this->asm$)->cpi());
	this->classCastClass = $nc(this->asm$)->cpi();
	$nc(this->asm$)->emitConstantPoolUTF8("java/lang/NullPointerException"_s);
	$nc(this->asm$)->emitConstantPoolClass($nc(this->asm$)->cpi());
	this->nullPointerClass = $nc(this->asm$)->cpi();
	$nc(this->asm$)->emitConstantPoolUTF8("java/lang/IllegalArgumentException"_s);
	$nc(this->asm$)->emitConstantPoolClass($nc(this->asm$)->cpi());
	this->illegalArgumentClass = $nc(this->asm$)->cpi();
	$nc(this->asm$)->emitConstantPoolUTF8("java/lang/reflect/InvocationTargetException"_s);
	$nc(this->asm$)->emitConstantPoolClass($nc(this->asm$)->cpi());
	this->invocationTargetClass = $nc(this->asm$)->cpi();
	$nc(this->asm$)->emitConstantPoolUTF8("<init>"_s);
	this->initIdx = $nc(this->asm$)->cpi();
	$nc(this->asm$)->emitConstantPoolUTF8("()V"_s);
	$nc(this->asm$)->emitConstantPoolNameAndType(this->initIdx, $nc(this->asm$)->cpi());
	this->initNameAndTypeIdx = $nc(this->asm$)->cpi();
	$nc(this->asm$)->emitConstantPoolMethodref(this->nullPointerClass, this->initNameAndTypeIdx);
	this->nullPointerCtorIdx = $nc(this->asm$)->cpi();
	$nc(this->asm$)->emitConstantPoolMethodref(this->illegalArgumentClass, this->initNameAndTypeIdx);
	this->illegalArgumentCtorIdx = $nc(this->asm$)->cpi();
	$nc(this->asm$)->emitConstantPoolUTF8("(Ljava/lang/String;)V"_s);
	$nc(this->asm$)->emitConstantPoolNameAndType(this->initIdx, $nc(this->asm$)->cpi());
	this->initStringNameAndTypeIdx = $nc(this->asm$)->cpi();
	$nc(this->asm$)->emitConstantPoolMethodref(this->illegalArgumentClass, this->initStringNameAndTypeIdx);
	this->illegalArgumentStringCtorIdx = $nc(this->asm$)->cpi();
	$nc(this->asm$)->emitConstantPoolUTF8("(Ljava/lang/Throwable;)V"_s);
	$nc(this->asm$)->emitConstantPoolNameAndType(this->initIdx, $nc(this->asm$)->cpi());
	$nc(this->asm$)->emitConstantPoolMethodref(this->invocationTargetClass, $nc(this->asm$)->cpi());
	this->invocationTargetCtorIdx = $nc(this->asm$)->cpi();
	$nc(this->asm$)->emitConstantPoolMethodref(this->superClass, this->initNameAndTypeIdx);
	this->superCtorIdx = $nc(this->asm$)->cpi();
	$nc(this->asm$)->emitConstantPoolUTF8("java/lang/Object"_s);
	$nc(this->asm$)->emitConstantPoolClass($nc(this->asm$)->cpi());
	this->objectClass = $nc(this->asm$)->cpi();
	$nc(this->asm$)->emitConstantPoolUTF8("toString"_s);
	$nc(this->asm$)->emitConstantPoolUTF8("()Ljava/lang/String;"_s);
	int16_t var$0 = sub($nc(this->asm$)->cpi(), AccessorGenerator::S1);
	$nc(this->asm$)->emitConstantPoolNameAndType(var$0, $nc(this->asm$)->cpi());
	$nc(this->asm$)->emitConstantPoolMethodref(this->objectClass, $nc(this->asm$)->cpi());
	this->toStringIdx = $nc(this->asm$)->cpi();
	$nc(this->asm$)->emitConstantPoolUTF8("Code"_s);
	this->codeIdx = $nc(this->asm$)->cpi();
	$nc(this->asm$)->emitConstantPoolUTF8("Exceptions"_s);
	this->exceptionsIdx = $nc(this->asm$)->cpi();
}

void AccessorGenerator::emitBoxingContantPoolEntries() {
	$nc(this->asm$)->emitConstantPoolUTF8("valueOf"_s);
	this->valueOfIdx = $nc(this->asm$)->cpi();
	$nc(this->asm$)->emitConstantPoolUTF8("java/lang/Boolean"_s);
	$nc(this->asm$)->emitConstantPoolClass($nc(this->asm$)->cpi());
	this->booleanIdx = $nc(this->asm$)->cpi();
	$nc(this->asm$)->emitConstantPoolUTF8("(Z)Ljava/lang/Boolean;"_s);
	$nc(this->asm$)->emitConstantPoolNameAndType(this->valueOfIdx, $nc(this->asm$)->cpi());
	int16_t var$0 = sub($nc(this->asm$)->cpi(), AccessorGenerator::S2);
	$nc(this->asm$)->emitConstantPoolMethodref(var$0, $nc(this->asm$)->cpi());
	this->booleanBoxIdx = $nc(this->asm$)->cpi();
	$nc(this->asm$)->emitConstantPoolUTF8("booleanValue"_s);
	$nc(this->asm$)->emitConstantPoolUTF8("()Z"_s);
	int16_t var$1 = sub($nc(this->asm$)->cpi(), AccessorGenerator::S1);
	$nc(this->asm$)->emitConstantPoolNameAndType(var$1, $nc(this->asm$)->cpi());
	int16_t var$2 = sub($nc(this->asm$)->cpi(), AccessorGenerator::S6);
	$nc(this->asm$)->emitConstantPoolMethodref(var$2, $nc(this->asm$)->cpi());
	this->booleanUnboxIdx = $nc(this->asm$)->cpi();
	$nc(this->asm$)->emitConstantPoolUTF8("java/lang/Byte"_s);
	$nc(this->asm$)->emitConstantPoolClass($nc(this->asm$)->cpi());
	this->byteIdx = $nc(this->asm$)->cpi();
	$nc(this->asm$)->emitConstantPoolUTF8("(B)Ljava/lang/Byte;"_s);
	$nc(this->asm$)->emitConstantPoolNameAndType(this->valueOfIdx, $nc(this->asm$)->cpi());
	int16_t var$3 = sub($nc(this->asm$)->cpi(), AccessorGenerator::S2);
	$nc(this->asm$)->emitConstantPoolMethodref(var$3, $nc(this->asm$)->cpi());
	this->byteBoxIdx = $nc(this->asm$)->cpi();
	$nc(this->asm$)->emitConstantPoolUTF8("byteValue"_s);
	$nc(this->asm$)->emitConstantPoolUTF8("()B"_s);
	int16_t var$4 = sub($nc(this->asm$)->cpi(), AccessorGenerator::S1);
	$nc(this->asm$)->emitConstantPoolNameAndType(var$4, $nc(this->asm$)->cpi());
	int16_t var$5 = sub($nc(this->asm$)->cpi(), AccessorGenerator::S6);
	$nc(this->asm$)->emitConstantPoolMethodref(var$5, $nc(this->asm$)->cpi());
	this->byteUnboxIdx = $nc(this->asm$)->cpi();
	$nc(this->asm$)->emitConstantPoolUTF8("java/lang/Character"_s);
	$nc(this->asm$)->emitConstantPoolClass($nc(this->asm$)->cpi());
	this->characterIdx = $nc(this->asm$)->cpi();
	$nc(this->asm$)->emitConstantPoolUTF8("(C)Ljava/lang/Character;"_s);
	$nc(this->asm$)->emitConstantPoolNameAndType(this->valueOfIdx, $nc(this->asm$)->cpi());
	int16_t var$6 = sub($nc(this->asm$)->cpi(), AccessorGenerator::S2);
	$nc(this->asm$)->emitConstantPoolMethodref(var$6, $nc(this->asm$)->cpi());
	this->characterBoxIdx = $nc(this->asm$)->cpi();
	$nc(this->asm$)->emitConstantPoolUTF8("charValue"_s);
	$nc(this->asm$)->emitConstantPoolUTF8("()C"_s);
	int16_t var$7 = sub($nc(this->asm$)->cpi(), AccessorGenerator::S1);
	$nc(this->asm$)->emitConstantPoolNameAndType(var$7, $nc(this->asm$)->cpi());
	int16_t var$8 = sub($nc(this->asm$)->cpi(), AccessorGenerator::S6);
	$nc(this->asm$)->emitConstantPoolMethodref(var$8, $nc(this->asm$)->cpi());
	this->characterUnboxIdx = $nc(this->asm$)->cpi();
	$nc(this->asm$)->emitConstantPoolUTF8("java/lang/Double"_s);
	$nc(this->asm$)->emitConstantPoolClass($nc(this->asm$)->cpi());
	this->doubleIdx = $nc(this->asm$)->cpi();
	$nc(this->asm$)->emitConstantPoolUTF8("(D)Ljava/lang/Double;"_s);
	$nc(this->asm$)->emitConstantPoolNameAndType(this->valueOfIdx, $nc(this->asm$)->cpi());
	int16_t var$9 = sub($nc(this->asm$)->cpi(), AccessorGenerator::S2);
	$nc(this->asm$)->emitConstantPoolMethodref(var$9, $nc(this->asm$)->cpi());
	this->doubleBoxIdx = $nc(this->asm$)->cpi();
	$nc(this->asm$)->emitConstantPoolUTF8("doubleValue"_s);
	$nc(this->asm$)->emitConstantPoolUTF8("()D"_s);
	int16_t var$10 = sub($nc(this->asm$)->cpi(), AccessorGenerator::S1);
	$nc(this->asm$)->emitConstantPoolNameAndType(var$10, $nc(this->asm$)->cpi());
	int16_t var$11 = sub($nc(this->asm$)->cpi(), AccessorGenerator::S6);
	$nc(this->asm$)->emitConstantPoolMethodref(var$11, $nc(this->asm$)->cpi());
	this->doubleUnboxIdx = $nc(this->asm$)->cpi();
	$nc(this->asm$)->emitConstantPoolUTF8("java/lang/Float"_s);
	$nc(this->asm$)->emitConstantPoolClass($nc(this->asm$)->cpi());
	this->floatIdx = $nc(this->asm$)->cpi();
	$nc(this->asm$)->emitConstantPoolUTF8("(F)Ljava/lang/Float;"_s);
	$nc(this->asm$)->emitConstantPoolNameAndType(this->valueOfIdx, $nc(this->asm$)->cpi());
	int16_t var$12 = sub($nc(this->asm$)->cpi(), AccessorGenerator::S2);
	$nc(this->asm$)->emitConstantPoolMethodref(var$12, $nc(this->asm$)->cpi());
	this->floatBoxIdx = $nc(this->asm$)->cpi();
	$nc(this->asm$)->emitConstantPoolUTF8("floatValue"_s);
	$nc(this->asm$)->emitConstantPoolUTF8("()F"_s);
	int16_t var$13 = sub($nc(this->asm$)->cpi(), AccessorGenerator::S1);
	$nc(this->asm$)->emitConstantPoolNameAndType(var$13, $nc(this->asm$)->cpi());
	int16_t var$14 = sub($nc(this->asm$)->cpi(), AccessorGenerator::S6);
	$nc(this->asm$)->emitConstantPoolMethodref(var$14, $nc(this->asm$)->cpi());
	this->floatUnboxIdx = $nc(this->asm$)->cpi();
	$nc(this->asm$)->emitConstantPoolUTF8("java/lang/Integer"_s);
	$nc(this->asm$)->emitConstantPoolClass($nc(this->asm$)->cpi());
	this->integerIdx = $nc(this->asm$)->cpi();
	$nc(this->asm$)->emitConstantPoolUTF8("(I)Ljava/lang/Integer;"_s);
	$nc(this->asm$)->emitConstantPoolNameAndType(this->valueOfIdx, $nc(this->asm$)->cpi());
	int16_t var$15 = sub($nc(this->asm$)->cpi(), AccessorGenerator::S2);
	$nc(this->asm$)->emitConstantPoolMethodref(var$15, $nc(this->asm$)->cpi());
	this->integerBoxIdx = $nc(this->asm$)->cpi();
	$nc(this->asm$)->emitConstantPoolUTF8("intValue"_s);
	$nc(this->asm$)->emitConstantPoolUTF8("()I"_s);
	int16_t var$16 = sub($nc(this->asm$)->cpi(), AccessorGenerator::S1);
	$nc(this->asm$)->emitConstantPoolNameAndType(var$16, $nc(this->asm$)->cpi());
	int16_t var$17 = sub($nc(this->asm$)->cpi(), AccessorGenerator::S6);
	$nc(this->asm$)->emitConstantPoolMethodref(var$17, $nc(this->asm$)->cpi());
	this->integerUnboxIdx = $nc(this->asm$)->cpi();
	$nc(this->asm$)->emitConstantPoolUTF8("java/lang/Long"_s);
	$nc(this->asm$)->emitConstantPoolClass($nc(this->asm$)->cpi());
	this->longIdx = $nc(this->asm$)->cpi();
	$nc(this->asm$)->emitConstantPoolUTF8("(J)Ljava/lang/Long;"_s);
	$nc(this->asm$)->emitConstantPoolNameAndType(this->valueOfIdx, $nc(this->asm$)->cpi());
	int16_t var$18 = sub($nc(this->asm$)->cpi(), AccessorGenerator::S2);
	$nc(this->asm$)->emitConstantPoolMethodref(var$18, $nc(this->asm$)->cpi());
	this->longBoxIdx = $nc(this->asm$)->cpi();
	$nc(this->asm$)->emitConstantPoolUTF8("longValue"_s);
	$nc(this->asm$)->emitConstantPoolUTF8("()J"_s);
	int16_t var$19 = sub($nc(this->asm$)->cpi(), AccessorGenerator::S1);
	$nc(this->asm$)->emitConstantPoolNameAndType(var$19, $nc(this->asm$)->cpi());
	int16_t var$20 = sub($nc(this->asm$)->cpi(), AccessorGenerator::S6);
	$nc(this->asm$)->emitConstantPoolMethodref(var$20, $nc(this->asm$)->cpi());
	this->longUnboxIdx = $nc(this->asm$)->cpi();
	$nc(this->asm$)->emitConstantPoolUTF8("java/lang/Short"_s);
	$nc(this->asm$)->emitConstantPoolClass($nc(this->asm$)->cpi());
	this->shortIdx = $nc(this->asm$)->cpi();
	$nc(this->asm$)->emitConstantPoolUTF8("(S)Ljava/lang/Short;"_s);
	$nc(this->asm$)->emitConstantPoolNameAndType(this->valueOfIdx, $nc(this->asm$)->cpi());
	int16_t var$21 = sub($nc(this->asm$)->cpi(), AccessorGenerator::S2);
	$nc(this->asm$)->emitConstantPoolMethodref(var$21, $nc(this->asm$)->cpi());
	this->shortBoxIdx = $nc(this->asm$)->cpi();
	$nc(this->asm$)->emitConstantPoolUTF8("shortValue"_s);
	$nc(this->asm$)->emitConstantPoolUTF8("()S"_s);
	int16_t var$22 = sub($nc(this->asm$)->cpi(), AccessorGenerator::S1);
	$nc(this->asm$)->emitConstantPoolNameAndType(var$22, $nc(this->asm$)->cpi());
	int16_t var$23 = sub($nc(this->asm$)->cpi(), AccessorGenerator::S6);
	$nc(this->asm$)->emitConstantPoolMethodref(var$23, $nc(this->asm$)->cpi());
	this->shortUnboxIdx = $nc(this->asm$)->cpi();
}

int16_t AccessorGenerator::add(int16_t s1, int16_t s2) {
	$init(AccessorGenerator);
	return (int16_t)(s1 + s2);
}

int16_t AccessorGenerator::sub(int16_t s1, int16_t s2) {
	$init(AccessorGenerator);
	return (int16_t)(s1 - s2);
}

bool AccessorGenerator::isStatic() {
	return $Modifier::isStatic(this->modifiers);
}

bool AccessorGenerator::isPrivate() {
	return $Modifier::isPrivate(this->modifiers);
}

$String* AccessorGenerator::getClassName($Class* c, bool addPrefixAndSuffixForNonPrimitiveTypes) {
	$init(AccessorGenerator);
	$useLocalCurrentObjectStackCache();
	if ($nc(c)->isPrimitive()) {
		$init($Boolean);
		if (c == $Boolean::TYPE) {
			return "Z"_s;
		} else {
			$init($Byte);
			if (c == $Byte::TYPE) {
				return "B"_s;
			} else {
				$init($Character);
				if (c == $Character::TYPE) {
					return "C"_s;
				} else {
					$init($Double);
					if (c == $Double::TYPE) {
						return "D"_s;
					} else {
						$init($Float);
						if (c == $Float::TYPE) {
							return "F"_s;
						} else {
							$init($Integer);
							if (c == $Integer::TYPE) {
								return "I"_s;
							} else {
								$init($Long);
								if (c == $Long::TYPE) {
									return "J"_s;
								} else {
									$init($Short);
									if (c == $Short::TYPE) {
										return "S"_s;
									} else {
										$init($Void);
										if (c == $Void::TYPE) {
											return "V"_s;
										}
									}
								}
							}
						}
					}
				}
			}
		}
		$throwNew($InternalError, "Should have found primitive type"_s);
	} else if (c->isArray()) {
		return $str({"["_s, $(getClassName(c->getComponentType(), true))});
	} else if (addPrefixAndSuffixForNonPrimitiveTypes) {
		return internalize($$str({"L"_s, $(c->getName()), ";"_s}));
	} else {
		return internalize($(c->getName()));
	}
}

$String* AccessorGenerator::internalize($String* className) {
	$init(AccessorGenerator);
	return $nc(className)->replace(u'.', u'/');
}

void AccessorGenerator::emitConstructor() {
	$var($ClassFileAssembler, cb, $new($ClassFileAssembler));
	cb->setMaxLocals(1);
	cb->opc_aload_0();
	cb->opc_invokespecial(this->superCtorIdx, 0, 0);
	cb->opc_return();
	emitMethod(this->initIdx, cb->getMaxLocals(), cb, nullptr, nullptr);
}

void AccessorGenerator::emitMethod(int16_t nameIdx, int32_t numArgs, $ClassFileAssembler* code, $ClassFileAssembler* exceptionTable, $shorts* checkedExceptionIndices) {
	int32_t codeLen = $nc(code)->getLength();
	int32_t excLen = 0;
	if (exceptionTable != nullptr) {
		excLen = exceptionTable->getLength();
		if ((excLen % 8) != 0) {
			$throwNew($IllegalArgumentException, "Illegal exception table"_s);
		}
	}
	int32_t attrLen = 12 + codeLen + excLen;
	excLen = excLen / 8;
	$nc(this->asm$)->emitShort($ClassFileConstants::ACC_PUBLIC);
	$nc(this->asm$)->emitShort(nameIdx);
	$nc(this->asm$)->emitShort(add(nameIdx, AccessorGenerator::S1));
	if (checkedExceptionIndices == nullptr) {
		$nc(this->asm$)->emitShort(AccessorGenerator::S1);
	} else {
		$nc(this->asm$)->emitShort(AccessorGenerator::S2);
	}
	$nc(this->asm$)->emitShort(this->codeIdx);
	$nc(this->asm$)->emitInt(attrLen);
	$nc(this->asm$)->emitShort(code->getMaxStack());
	$nc(this->asm$)->emitShort((int16_t)$Math::max(numArgs, (int32_t)code->getMaxLocals()));
	$nc(this->asm$)->emitInt(codeLen);
	$nc(this->asm$)->append(code);
	$nc(this->asm$)->emitShort((int16_t)excLen);
	if (exceptionTable != nullptr) {
		$nc(this->asm$)->append(exceptionTable);
	}
	$nc(this->asm$)->emitShort(AccessorGenerator::S0);
	if (checkedExceptionIndices != nullptr) {
		$nc(this->asm$)->emitShort(this->exceptionsIdx);
		$nc(this->asm$)->emitInt(2 + 2 * checkedExceptionIndices->length);
		$nc(this->asm$)->emitShort((int16_t)checkedExceptionIndices->length);
		for (int32_t i = 0; i < checkedExceptionIndices->length; ++i) {
			$nc(this->asm$)->emitShort(checkedExceptionIndices->get(i));
		}
	}
}

int16_t AccessorGenerator::indexForPrimitiveType($Class* type) {
	$init($Boolean);
	if (type == $Boolean::TYPE) {
		return this->booleanIdx;
	} else {
		$init($Byte);
		if (type == $Byte::TYPE) {
			return this->byteIdx;
		} else {
			$init($Character);
			if (type == $Character::TYPE) {
				return this->characterIdx;
			} else {
				$init($Double);
				if (type == $Double::TYPE) {
					return this->doubleIdx;
				} else {
					$init($Float);
					if (type == $Float::TYPE) {
						return this->floatIdx;
					} else {
						$init($Integer);
						if (type == $Integer::TYPE) {
							return this->integerIdx;
						} else {
							$init($Long);
							if (type == $Long::TYPE) {
								return this->longIdx;
							} else {
								$init($Short);
								if (type == $Short::TYPE) {
									return this->shortIdx;
								}
							}
						}
					}
				}
			}
		}
	}
	$throwNew($InternalError, "Should have found primitive type"_s);
}

int16_t AccessorGenerator::boxingMethodForPrimitiveType($Class* type) {
	$init($Boolean);
	if (type == $Boolean::TYPE) {
		return this->booleanBoxIdx;
	} else {
		$init($Byte);
		if (type == $Byte::TYPE) {
			return this->byteBoxIdx;
		} else {
			$init($Character);
			if (type == $Character::TYPE) {
				return this->characterBoxIdx;
			} else {
				$init($Double);
				if (type == $Double::TYPE) {
					return this->doubleBoxIdx;
				} else {
					$init($Float);
					if (type == $Float::TYPE) {
						return this->floatBoxIdx;
					} else {
						$init($Integer);
						if (type == $Integer::TYPE) {
							return this->integerBoxIdx;
						} else {
							$init($Long);
							if (type == $Long::TYPE) {
								return this->longBoxIdx;
							} else {
								$init($Short);
								if (type == $Short::TYPE) {
									return this->shortBoxIdx;
								}
							}
						}
					}
				}
			}
		}
	}
	$throwNew($InternalError, "Should have found primitive type"_s);
}

bool AccessorGenerator::canWidenTo($Class* type, $Class* otherType) {
	$init(AccessorGenerator);
	if (!$nc(type)->isPrimitive()) {
		return false;
	}
	$init($Boolean);
	if (type == $Boolean::TYPE) {
		if (otherType == $Boolean::TYPE) {
			return true;
		}
	} else {
		$init($Byte);
		if (type == $Byte::TYPE) {
			$init($Short);
			$init($Integer);
			$init($Long);
			$init($Float);
			$init($Double);
			if (otherType == $Byte::TYPE || otherType == $Short::TYPE || otherType == $Integer::TYPE || otherType == $Long::TYPE || otherType == $Float::TYPE || otherType == $Double::TYPE) {
				return true;
			}
		} else {
			$init($Short);
			if (type == $Short::TYPE) {
				$init($Integer);
				$init($Long);
				$init($Float);
				$init($Double);
				if (otherType == $Short::TYPE || otherType == $Integer::TYPE || otherType == $Long::TYPE || otherType == $Float::TYPE || otherType == $Double::TYPE) {
					return true;
				}
			} else {
				$init($Character);
				if (type == $Character::TYPE) {
					$init($Integer);
					$init($Long);
					$init($Float);
					$init($Double);
					if (otherType == $Character::TYPE || otherType == $Integer::TYPE || otherType == $Long::TYPE || otherType == $Float::TYPE || otherType == $Double::TYPE) {
						return true;
					}
				} else {
					$init($Integer);
					if (type == $Integer::TYPE) {
						$init($Long);
						$init($Float);
						$init($Double);
						if (otherType == $Integer::TYPE || otherType == $Long::TYPE || otherType == $Float::TYPE || otherType == $Double::TYPE) {
							return true;
						}
					} else {
						$init($Long);
						if (type == $Long::TYPE) {
							$init($Float);
							$init($Double);
							if (otherType == $Long::TYPE || otherType == $Float::TYPE || otherType == $Double::TYPE) {
								return true;
							}
						} else {
							$init($Float);
							if (type == $Float::TYPE) {
								$init($Double);
								if (otherType == $Float::TYPE || otherType == $Double::TYPE) {
									return true;
								}
							} else {
								$init($Double);
								if (type == $Double::TYPE) {
									if (otherType == $Double::TYPE) {
										return true;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return false;
}

void AccessorGenerator::emitWideningBytecodeForPrimitiveConversion($ClassFileAssembler* cb, $Class* fromType, $Class* toType) {
	$init(AccessorGenerator);
	$init($Byte);
	$init($Short);
	$init($Character);
	$init($Integer);
	if (fromType == $Byte::TYPE || fromType == $Short::TYPE || fromType == $Character::TYPE || fromType == $Integer::TYPE) {
		$init($Long);
		if (toType == $Long::TYPE) {
			$nc(cb)->opc_i2l();
		} else {
			$init($Float);
			if (toType == $Float::TYPE) {
				$nc(cb)->opc_i2f();
			} else {
				$init($Double);
				if (toType == $Double::TYPE) {
					$nc(cb)->opc_i2d();
				}
			}
		}
	} else {
		$init($Long);
		if (fromType == $Long::TYPE) {
			$init($Float);
			if (toType == $Float::TYPE) {
				$nc(cb)->opc_l2f();
			} else {
				$init($Double);
				if (toType == $Double::TYPE) {
					$nc(cb)->opc_l2d();
				}
			}
		} else {
			$init($Float);
			if (fromType == $Float::TYPE) {
				$init($Double);
				if (toType == $Double::TYPE) {
					$nc(cb)->opc_f2d();
				}
			}
		}
	}
}

int16_t AccessorGenerator::unboxingMethodForPrimitiveType($Class* primType) {
	$useLocalCurrentObjectStackCache();
	$init($Boolean);
	if (primType == $Boolean::TYPE) {
		return this->booleanUnboxIdx;
	} else {
		$init($Byte);
		if (primType == $Byte::TYPE) {
			return this->byteUnboxIdx;
		} else {
			$init($Character);
			if (primType == $Character::TYPE) {
				return this->characterUnboxIdx;
			} else {
				$init($Short);
				if (primType == $Short::TYPE) {
					return this->shortUnboxIdx;
				} else {
					$init($Integer);
					if (primType == $Integer::TYPE) {
						return this->integerUnboxIdx;
					} else {
						$init($Long);
						if (primType == $Long::TYPE) {
							return this->longUnboxIdx;
						} else {
							$init($Float);
							if (primType == $Float::TYPE) {
								return this->floatUnboxIdx;
							} else {
								$init($Double);
								if (primType == $Double::TYPE) {
									return this->doubleUnboxIdx;
								}
							}
						}
					}
				}
			}
		}
	}
	$throwNew($InternalError, $$str({"Illegal primitive type "_s, $($nc(primType)->getName())}));
}

bool AccessorGenerator::isPrimitive($Class* c) {
	$init(AccessorGenerator);
	$init($Void);
	return ($nc(c)->isPrimitive() && c != $Void::TYPE);
}

int32_t AccessorGenerator::typeSizeInStackSlots($Class* c) {
	$init($Void);
	if (c == $Void::TYPE) {
		return 0;
	}
	$init($Long);
	$init($Double);
	if (c == $Long::TYPE || c == $Double::TYPE) {
		return 2;
	}
	return 1;
}

$ClassFileAssembler* AccessorGenerator::illegalArgumentCodeBuffer() {
	if (this->illegalArgumentCodeBuffer$ == nullptr) {
		$set(this, illegalArgumentCodeBuffer$, $new($ClassFileAssembler));
		$nc(this->illegalArgumentCodeBuffer$)->opc_new(this->illegalArgumentClass);
		$nc(this->illegalArgumentCodeBuffer$)->opc_dup();
		$nc(this->illegalArgumentCodeBuffer$)->opc_invokespecial(this->illegalArgumentCtorIdx, 0, 0);
		$nc(this->illegalArgumentCodeBuffer$)->opc_athrow();
	}
	return this->illegalArgumentCodeBuffer$;
}

void clinit$AccessorGenerator($Class* class$) {
	$assignStatic(AccessorGenerator::unsafe, $Unsafe::getUnsafe());
	$init($Boolean);
	$init($Byte);
	$init($Character);
	$init($Short);
	$init($Integer);
	$init($Long);
	$init($Float);
	$init($Double);
	$assignStatic(AccessorGenerator::primitiveTypes, $new($ClassArray, {
		$Boolean::TYPE,
		$Byte::TYPE,
		$Character::TYPE,
		$Short::TYPE,
		$Integer::TYPE,
		$Long::TYPE,
		$Float::TYPE,
		$Double::TYPE
	}));
}

AccessorGenerator::AccessorGenerator() {
}

$Class* AccessorGenerator::load$($String* name, bool initialize) {
	$loadClass(AccessorGenerator, name, initialize, &_AccessorGenerator_ClassInfo_, clinit$AccessorGenerator, allocate$AccessorGenerator);
	return class$;
}

$Class* AccessorGenerator::class$ = nullptr;

		} // reflect
	} // internal
} // jdk