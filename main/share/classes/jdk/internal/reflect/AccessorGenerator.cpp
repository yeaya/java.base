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

$Unsafe* AccessorGenerator::unsafe = nullptr;
$ClassArray* AccessorGenerator::primitiveTypes = nullptr;

void AccessorGenerator::init$() {
}

void AccessorGenerator::emitCommonConstantPoolEntries() {
	$nc(this->asm$)->emitConstantPoolUTF8("java/lang/Throwable"_s);
	this->asm$->emitConstantPoolClass(this->asm$->cpi());
	this->throwableClass = this->asm$->cpi();
	this->asm$->emitConstantPoolUTF8("java/lang/ClassCastException"_s);
	this->asm$->emitConstantPoolClass(this->asm$->cpi());
	this->classCastClass = this->asm$->cpi();
	this->asm$->emitConstantPoolUTF8("java/lang/NullPointerException"_s);
	this->asm$->emitConstantPoolClass(this->asm$->cpi());
	this->nullPointerClass = this->asm$->cpi();
	this->asm$->emitConstantPoolUTF8("java/lang/IllegalArgumentException"_s);
	this->asm$->emitConstantPoolClass(this->asm$->cpi());
	this->illegalArgumentClass = this->asm$->cpi();
	this->asm$->emitConstantPoolUTF8("java/lang/reflect/InvocationTargetException"_s);
	this->asm$->emitConstantPoolClass(this->asm$->cpi());
	this->invocationTargetClass = this->asm$->cpi();
	this->asm$->emitConstantPoolUTF8("<init>"_s);
	this->initIdx = this->asm$->cpi();
	this->asm$->emitConstantPoolUTF8("()V"_s);
	this->asm$->emitConstantPoolNameAndType(this->initIdx, this->asm$->cpi());
	this->initNameAndTypeIdx = this->asm$->cpi();
	this->asm$->emitConstantPoolMethodref(this->nullPointerClass, this->initNameAndTypeIdx);
	this->nullPointerCtorIdx = this->asm$->cpi();
	this->asm$->emitConstantPoolMethodref(this->illegalArgumentClass, this->initNameAndTypeIdx);
	this->illegalArgumentCtorIdx = this->asm$->cpi();
	this->asm$->emitConstantPoolUTF8("(Ljava/lang/String;)V"_s);
	this->asm$->emitConstantPoolNameAndType(this->initIdx, this->asm$->cpi());
	this->initStringNameAndTypeIdx = this->asm$->cpi();
	this->asm$->emitConstantPoolMethodref(this->illegalArgumentClass, this->initStringNameAndTypeIdx);
	this->illegalArgumentStringCtorIdx = this->asm$->cpi();
	this->asm$->emitConstantPoolUTF8("(Ljava/lang/Throwable;)V"_s);
	this->asm$->emitConstantPoolNameAndType(this->initIdx, this->asm$->cpi());
	this->asm$->emitConstantPoolMethodref(this->invocationTargetClass, this->asm$->cpi());
	this->invocationTargetCtorIdx = this->asm$->cpi();
	this->asm$->emitConstantPoolMethodref(this->superClass, this->initNameAndTypeIdx);
	this->superCtorIdx = this->asm$->cpi();
	this->asm$->emitConstantPoolUTF8("java/lang/Object"_s);
	this->asm$->emitConstantPoolClass(this->asm$->cpi());
	this->objectClass = this->asm$->cpi();
	this->asm$->emitConstantPoolUTF8("toString"_s);
	this->asm$->emitConstantPoolUTF8("()Ljava/lang/String;"_s);
	int16_t var$0 = sub(this->asm$->cpi(), AccessorGenerator::S1);
	this->asm$->emitConstantPoolNameAndType(var$0, this->asm$->cpi());
	this->asm$->emitConstantPoolMethodref(this->objectClass, this->asm$->cpi());
	this->toStringIdx = this->asm$->cpi();
	this->asm$->emitConstantPoolUTF8("Code"_s);
	this->codeIdx = this->asm$->cpi();
	this->asm$->emitConstantPoolUTF8("Exceptions"_s);
	this->exceptionsIdx = this->asm$->cpi();
}

void AccessorGenerator::emitBoxingContantPoolEntries() {
	$nc(this->asm$)->emitConstantPoolUTF8("valueOf"_s);
	this->valueOfIdx = this->asm$->cpi();
	this->asm$->emitConstantPoolUTF8("java/lang/Boolean"_s);
	this->asm$->emitConstantPoolClass(this->asm$->cpi());
	this->booleanIdx = this->asm$->cpi();
	this->asm$->emitConstantPoolUTF8("(Z)Ljava/lang/Boolean;"_s);
	this->asm$->emitConstantPoolNameAndType(this->valueOfIdx, this->asm$->cpi());
	int16_t var$0 = sub(this->asm$->cpi(), AccessorGenerator::S2);
	this->asm$->emitConstantPoolMethodref(var$0, this->asm$->cpi());
	this->booleanBoxIdx = this->asm$->cpi();
	this->asm$->emitConstantPoolUTF8("booleanValue"_s);
	this->asm$->emitConstantPoolUTF8("()Z"_s);
	int16_t var$1 = sub(this->asm$->cpi(), AccessorGenerator::S1);
	this->asm$->emitConstantPoolNameAndType(var$1, this->asm$->cpi());
	int16_t var$2 = sub(this->asm$->cpi(), AccessorGenerator::S6);
	this->asm$->emitConstantPoolMethodref(var$2, this->asm$->cpi());
	this->booleanUnboxIdx = this->asm$->cpi();
	this->asm$->emitConstantPoolUTF8("java/lang/Byte"_s);
	this->asm$->emitConstantPoolClass(this->asm$->cpi());
	this->byteIdx = this->asm$->cpi();
	this->asm$->emitConstantPoolUTF8("(B)Ljava/lang/Byte;"_s);
	this->asm$->emitConstantPoolNameAndType(this->valueOfIdx, this->asm$->cpi());
	int16_t var$3 = sub(this->asm$->cpi(), AccessorGenerator::S2);
	this->asm$->emitConstantPoolMethodref(var$3, this->asm$->cpi());
	this->byteBoxIdx = this->asm$->cpi();
	this->asm$->emitConstantPoolUTF8("byteValue"_s);
	this->asm$->emitConstantPoolUTF8("()B"_s);
	int16_t var$4 = sub(this->asm$->cpi(), AccessorGenerator::S1);
	this->asm$->emitConstantPoolNameAndType(var$4, this->asm$->cpi());
	int16_t var$5 = sub(this->asm$->cpi(), AccessorGenerator::S6);
	this->asm$->emitConstantPoolMethodref(var$5, this->asm$->cpi());
	this->byteUnboxIdx = this->asm$->cpi();
	this->asm$->emitConstantPoolUTF8("java/lang/Character"_s);
	this->asm$->emitConstantPoolClass(this->asm$->cpi());
	this->characterIdx = this->asm$->cpi();
	this->asm$->emitConstantPoolUTF8("(C)Ljava/lang/Character;"_s);
	this->asm$->emitConstantPoolNameAndType(this->valueOfIdx, this->asm$->cpi());
	int16_t var$6 = sub(this->asm$->cpi(), AccessorGenerator::S2);
	this->asm$->emitConstantPoolMethodref(var$6, this->asm$->cpi());
	this->characterBoxIdx = this->asm$->cpi();
	this->asm$->emitConstantPoolUTF8("charValue"_s);
	this->asm$->emitConstantPoolUTF8("()C"_s);
	int16_t var$7 = sub(this->asm$->cpi(), AccessorGenerator::S1);
	this->asm$->emitConstantPoolNameAndType(var$7, this->asm$->cpi());
	int16_t var$8 = sub(this->asm$->cpi(), AccessorGenerator::S6);
	this->asm$->emitConstantPoolMethodref(var$8, this->asm$->cpi());
	this->characterUnboxIdx = this->asm$->cpi();
	this->asm$->emitConstantPoolUTF8("java/lang/Double"_s);
	this->asm$->emitConstantPoolClass(this->asm$->cpi());
	this->doubleIdx = this->asm$->cpi();
	this->asm$->emitConstantPoolUTF8("(D)Ljava/lang/Double;"_s);
	this->asm$->emitConstantPoolNameAndType(this->valueOfIdx, this->asm$->cpi());
	int16_t var$9 = sub(this->asm$->cpi(), AccessorGenerator::S2);
	this->asm$->emitConstantPoolMethodref(var$9, this->asm$->cpi());
	this->doubleBoxIdx = this->asm$->cpi();
	this->asm$->emitConstantPoolUTF8("doubleValue"_s);
	this->asm$->emitConstantPoolUTF8("()D"_s);
	int16_t var$10 = sub(this->asm$->cpi(), AccessorGenerator::S1);
	this->asm$->emitConstantPoolNameAndType(var$10, this->asm$->cpi());
	int16_t var$11 = sub(this->asm$->cpi(), AccessorGenerator::S6);
	this->asm$->emitConstantPoolMethodref(var$11, this->asm$->cpi());
	this->doubleUnboxIdx = this->asm$->cpi();
	this->asm$->emitConstantPoolUTF8("java/lang/Float"_s);
	this->asm$->emitConstantPoolClass(this->asm$->cpi());
	this->floatIdx = this->asm$->cpi();
	this->asm$->emitConstantPoolUTF8("(F)Ljava/lang/Float;"_s);
	this->asm$->emitConstantPoolNameAndType(this->valueOfIdx, this->asm$->cpi());
	int16_t var$12 = sub(this->asm$->cpi(), AccessorGenerator::S2);
	this->asm$->emitConstantPoolMethodref(var$12, this->asm$->cpi());
	this->floatBoxIdx = this->asm$->cpi();
	this->asm$->emitConstantPoolUTF8("floatValue"_s);
	this->asm$->emitConstantPoolUTF8("()F"_s);
	int16_t var$13 = sub(this->asm$->cpi(), AccessorGenerator::S1);
	this->asm$->emitConstantPoolNameAndType(var$13, this->asm$->cpi());
	int16_t var$14 = sub(this->asm$->cpi(), AccessorGenerator::S6);
	this->asm$->emitConstantPoolMethodref(var$14, this->asm$->cpi());
	this->floatUnboxIdx = this->asm$->cpi();
	this->asm$->emitConstantPoolUTF8("java/lang/Integer"_s);
	this->asm$->emitConstantPoolClass(this->asm$->cpi());
	this->integerIdx = this->asm$->cpi();
	this->asm$->emitConstantPoolUTF8("(I)Ljava/lang/Integer;"_s);
	this->asm$->emitConstantPoolNameAndType(this->valueOfIdx, this->asm$->cpi());
	int16_t var$15 = sub(this->asm$->cpi(), AccessorGenerator::S2);
	this->asm$->emitConstantPoolMethodref(var$15, this->asm$->cpi());
	this->integerBoxIdx = this->asm$->cpi();
	this->asm$->emitConstantPoolUTF8("intValue"_s);
	this->asm$->emitConstantPoolUTF8("()I"_s);
	int16_t var$16 = sub(this->asm$->cpi(), AccessorGenerator::S1);
	this->asm$->emitConstantPoolNameAndType(var$16, this->asm$->cpi());
	int16_t var$17 = sub(this->asm$->cpi(), AccessorGenerator::S6);
	this->asm$->emitConstantPoolMethodref(var$17, this->asm$->cpi());
	this->integerUnboxIdx = this->asm$->cpi();
	this->asm$->emitConstantPoolUTF8("java/lang/Long"_s);
	this->asm$->emitConstantPoolClass(this->asm$->cpi());
	this->longIdx = this->asm$->cpi();
	this->asm$->emitConstantPoolUTF8("(J)Ljava/lang/Long;"_s);
	this->asm$->emitConstantPoolNameAndType(this->valueOfIdx, this->asm$->cpi());
	int16_t var$18 = sub(this->asm$->cpi(), AccessorGenerator::S2);
	this->asm$->emitConstantPoolMethodref(var$18, this->asm$->cpi());
	this->longBoxIdx = this->asm$->cpi();
	this->asm$->emitConstantPoolUTF8("longValue"_s);
	this->asm$->emitConstantPoolUTF8("()J"_s);
	int16_t var$19 = sub(this->asm$->cpi(), AccessorGenerator::S1);
	this->asm$->emitConstantPoolNameAndType(var$19, this->asm$->cpi());
	int16_t var$20 = sub(this->asm$->cpi(), AccessorGenerator::S6);
	this->asm$->emitConstantPoolMethodref(var$20, this->asm$->cpi());
	this->longUnboxIdx = this->asm$->cpi();
	this->asm$->emitConstantPoolUTF8("java/lang/Short"_s);
	this->asm$->emitConstantPoolClass(this->asm$->cpi());
	this->shortIdx = this->asm$->cpi();
	this->asm$->emitConstantPoolUTF8("(S)Ljava/lang/Short;"_s);
	this->asm$->emitConstantPoolNameAndType(this->valueOfIdx, this->asm$->cpi());
	int16_t var$21 = sub(this->asm$->cpi(), AccessorGenerator::S2);
	this->asm$->emitConstantPoolMethodref(var$21, this->asm$->cpi());
	this->shortBoxIdx = this->asm$->cpi();
	this->asm$->emitConstantPoolUTF8("shortValue"_s);
	this->asm$->emitConstantPoolUTF8("()S"_s);
	int16_t var$22 = sub(this->asm$->cpi(), AccessorGenerator::S1);
	this->asm$->emitConstantPoolNameAndType(var$22, this->asm$->cpi());
	int16_t var$23 = sub(this->asm$->cpi(), AccessorGenerator::S6);
	this->asm$->emitConstantPoolMethodref(var$23, this->asm$->cpi());
	this->shortUnboxIdx = this->asm$->cpi();
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
	$useLocalObjectStack();
	if ($nc(c)->isPrimitive()) {
		if (c == $Boolean::TYPE) {
			return "Z"_s;
		} else if (c == $Byte::TYPE) {
			return "B"_s;
		} else if (c == $Character::TYPE) {
			return "C"_s;
		} else if (c == $Double::TYPE) {
			return "D"_s;
		} else if (c == $Float::TYPE) {
			return "F"_s;
		} else if (c == $Integer::TYPE) {
			return "I"_s;
		} else if (c == $Long::TYPE) {
			return "J"_s;
		} else if (c == $Short::TYPE) {
			return "S"_s;
		} else if (c == $Void::TYPE) {
			return "V"_s;
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
	this->asm$->emitShort(nameIdx);
	this->asm$->emitShort(add(nameIdx, AccessorGenerator::S1));
	if (checkedExceptionIndices == nullptr) {
		this->asm$->emitShort(AccessorGenerator::S1);
	} else {
		this->asm$->emitShort(AccessorGenerator::S2);
	}
	this->asm$->emitShort(this->codeIdx);
	this->asm$->emitInt(attrLen);
	this->asm$->emitShort(code->getMaxStack());
	this->asm$->emitShort((int16_t)$Math::max(numArgs, code->getMaxLocals()));
	this->asm$->emitInt(codeLen);
	this->asm$->append(code);
	this->asm$->emitShort((int16_t)excLen);
	if (exceptionTable != nullptr) {
		this->asm$->append(exceptionTable);
	}
	this->asm$->emitShort(AccessorGenerator::S0);
	if (checkedExceptionIndices != nullptr) {
		this->asm$->emitShort(this->exceptionsIdx);
		this->asm$->emitInt(2 + 2 * checkedExceptionIndices->length);
		this->asm$->emitShort((int16_t)checkedExceptionIndices->length);
		for (int32_t i = 0; i < checkedExceptionIndices->length; ++i) {
			this->asm$->emitShort(checkedExceptionIndices->get(i));
		}
	}
}

int16_t AccessorGenerator::indexForPrimitiveType($Class* type) {
	if (type == $Boolean::TYPE) {
		return this->booleanIdx;
	} else if (type == $Byte::TYPE) {
		return this->byteIdx;
	} else if (type == $Character::TYPE) {
		return this->characterIdx;
	} else if (type == $Double::TYPE) {
		return this->doubleIdx;
	} else if (type == $Float::TYPE) {
		return this->floatIdx;
	} else if (type == $Integer::TYPE) {
		return this->integerIdx;
	} else if (type == $Long::TYPE) {
		return this->longIdx;
	} else if (type == $Short::TYPE) {
		return this->shortIdx;
	}
	$throwNew($InternalError, "Should have found primitive type"_s);
}

int16_t AccessorGenerator::boxingMethodForPrimitiveType($Class* type) {
	if (type == $Boolean::TYPE) {
		return this->booleanBoxIdx;
	} else if (type == $Byte::TYPE) {
		return this->byteBoxIdx;
	} else if (type == $Character::TYPE) {
		return this->characterBoxIdx;
	} else if (type == $Double::TYPE) {
		return this->doubleBoxIdx;
	} else if (type == $Float::TYPE) {
		return this->floatBoxIdx;
	} else if (type == $Integer::TYPE) {
		return this->integerBoxIdx;
	} else if (type == $Long::TYPE) {
		return this->longBoxIdx;
	} else if (type == $Short::TYPE) {
		return this->shortBoxIdx;
	}
	$throwNew($InternalError, "Should have found primitive type"_s);
}

bool AccessorGenerator::canWidenTo($Class* type, $Class* otherType) {
	$init(AccessorGenerator);
	if (!$nc(type)->isPrimitive()) {
		return false;
	}
	if (type == $Boolean::TYPE) {
		if (otherType == $Boolean::TYPE) {
			return true;
		}
	} else if (type == $Byte::TYPE) {
		if (otherType == $Byte::TYPE || otherType == $Short::TYPE || otherType == $Integer::TYPE || otherType == $Long::TYPE || otherType == $Float::TYPE || otherType == $Double::TYPE) {
			return true;
		}
	} else if (type == $Short::TYPE) {
		if (otherType == $Short::TYPE || otherType == $Integer::TYPE || otherType == $Long::TYPE || otherType == $Float::TYPE || otherType == $Double::TYPE) {
			return true;
		}
	} else if (type == $Character::TYPE) {
		if (otherType == $Character::TYPE || otherType == $Integer::TYPE || otherType == $Long::TYPE || otherType == $Float::TYPE || otherType == $Double::TYPE) {
			return true;
		}
	} else if (type == $Integer::TYPE) {
		if (otherType == $Integer::TYPE || otherType == $Long::TYPE || otherType == $Float::TYPE || otherType == $Double::TYPE) {
			return true;
		}
	} else if (type == $Long::TYPE) {
		if (otherType == $Long::TYPE || otherType == $Float::TYPE || otherType == $Double::TYPE) {
			return true;
		}
	} else if (type == $Float::TYPE) {
		if (otherType == $Float::TYPE || otherType == $Double::TYPE) {
			return true;
		}
	} else if (type == $Double::TYPE) {
		if (otherType == $Double::TYPE) {
			return true;
		}
	}
	return false;
}

void AccessorGenerator::emitWideningBytecodeForPrimitiveConversion($ClassFileAssembler* cb, $Class* fromType, $Class* toType) {
	$init(AccessorGenerator);
	if (fromType == $Byte::TYPE || fromType == $Short::TYPE || fromType == $Character::TYPE || fromType == $Integer::TYPE) {
		if (toType == $Long::TYPE) {
			$nc(cb)->opc_i2l();
		} else if (toType == $Float::TYPE) {
			$nc(cb)->opc_i2f();
		} else if (toType == $Double::TYPE) {
			$nc(cb)->opc_i2d();
		}
	} else if (fromType == $Long::TYPE) {
		if (toType == $Float::TYPE) {
			$nc(cb)->opc_l2f();
		} else if (toType == $Double::TYPE) {
			$nc(cb)->opc_l2d();
		}
	} else if (fromType == $Float::TYPE) {
		if (toType == $Double::TYPE) {
			$nc(cb)->opc_f2d();
		}
	}
}

int16_t AccessorGenerator::unboxingMethodForPrimitiveType($Class* primType) {
	$useLocalObjectStack();
	if (primType == $Boolean::TYPE) {
		return this->booleanUnboxIdx;
	} else if (primType == $Byte::TYPE) {
		return this->byteUnboxIdx;
	} else if (primType == $Character::TYPE) {
		return this->characterUnboxIdx;
	} else if (primType == $Short::TYPE) {
		return this->shortUnboxIdx;
	} else if (primType == $Integer::TYPE) {
		return this->integerUnboxIdx;
	} else if (primType == $Long::TYPE) {
		return this->longUnboxIdx;
	} else if (primType == $Float::TYPE) {
		return this->floatUnboxIdx;
	} else if (primType == $Double::TYPE) {
		return this->doubleUnboxIdx;
	}
	$throwNew($InternalError, $$str({"Illegal primitive type "_s, $($nc(primType)->getName())}));
}

bool AccessorGenerator::isPrimitive($Class* c) {
	$init(AccessorGenerator);
	return ($nc(c)->isPrimitive() && c != $Void::TYPE);
}

int32_t AccessorGenerator::typeSizeInStackSlots($Class* c) {
	if (c == $Void::TYPE) {
		return 0;
	}
	if (c == $Long::TYPE || c == $Double::TYPE) {
		return 2;
	}
	return 1;
}

$ClassFileAssembler* AccessorGenerator::illegalArgumentCodeBuffer() {
	if (this->illegalArgumentCodeBuffer$ == nullptr) {
		$set(this, illegalArgumentCodeBuffer$, $new($ClassFileAssembler));
		this->illegalArgumentCodeBuffer$->opc_new(this->illegalArgumentClass);
		this->illegalArgumentCodeBuffer$->opc_dup();
		this->illegalArgumentCodeBuffer$->opc_invokespecial(this->illegalArgumentCtorIdx, 0, 0);
		this->illegalArgumentCodeBuffer$->opc_athrow();
	}
	return this->illegalArgumentCodeBuffer$;
}

void AccessorGenerator::clinit$($Class* clazz) {
	$assignStatic(AccessorGenerator::unsafe, $Unsafe::getUnsafe());
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
	$FieldInfo fieldInfos$$[] = {
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
	$MethodInfo methodInfos$$[] = {
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
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.reflect.AccessorGenerator",
		"java.lang.Object",
		"jdk.internal.reflect.ClassFileConstants",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AccessorGenerator, name, initialize, &classInfo$$, AccessorGenerator::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AccessorGenerator);
	});
	return class$;
}

$Class* AccessorGenerator::class$ = nullptr;

		} // reflect
	} // internal
} // jdk