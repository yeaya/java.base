/*
 * Copyright (c) 2025, Yao Yuan <yeaya@163.com>. All rights reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 only, as
 * published by the Free Software Foundation.  This file as subject to the
 * "Classpath" exception in the LICENSE file that accompanied this code.
 *
 * This code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * version 2 for more details (a copy is included in the LICENSE file that
 * accompanied this code).
 *
 * You should have received a copy of the GNU General Public License version
 * 2 along with this work; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#include <java/lang/interpreter/ByteCodeInterpreter.h>

#include <limits>
#include <string>
#include <cmath>
#include <cstdlib>

#include "opcodes.h"
#include <math.h>

#include <java/lang/ClassCastException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>

#include <java/lang/reflect/Array.h>
#include <java/lang/reflect/Modifier.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/util/ArrayList.h>
#include <jdk/internal/reflect/ConstantPool.h>
#include <jdk/internal/reflect/ConstantBase.h>
#include <jdk/internal/reflect/ConstantClass.h>
#include <jdk/internal/reflect/ConstantDouble.h>
#include <jdk/internal/reflect/ConstantDynamic.h>
#include <jdk/internal/reflect/ConstantFieldRef.h>
#include <jdk/internal/reflect/ConstantFloat.h>
#include <jdk/internal/reflect/ConstantInt.h>
#include <jdk/internal/reflect/ConstantInterfaceMethodRef.h>
#include <jdk/internal/reflect/ConstantInvokeDynamic.h>
#include <jdk/internal/reflect/ConstantLong.h>
#include <jdk/internal/reflect/ConstantMethodHandle.h>
#include <jdk/internal/reflect/ConstantMethodRef.h>
#include <jdk/internal/reflect/ConstantMethodType.h>
#include <jdk/internal/reflect/ConstantModule.h>
#include <jdk/internal/reflect/ConstantNameAndType.h>
#include <jdk/internal/reflect/ConstantPackage.h>
#include <jdk/internal/reflect/ConstantString.h>
#include <jdk/internal/reflect/ConstantUTF8.h>

#include <jcpp.h>

using namespace ::java::lang;
using _Array = ::java::lang::reflect::Array;
using namespace ::java::lang::reflect;
using namespace ::java::util;
using namespace ::jdk::internal::reflect;

namespace java {
	namespace lang {
		namespace interpreter {

static inline int32_t addOverflow(int32_t a, int32_t b) {
	return (int32_t)((uint32_t)a + (uint32_t)b);
}

static inline int64_t addOverflow(int64_t a, int64_t b) {
	return (int64_t)((uint64_t)a + (uint64_t)b);
}

static inline int32_t subOverflow(int32_t a, int32_t b) {
	return (int32_t)((uint32_t)a - (uint32_t)b);
}

static inline int64_t subOverflow(int64_t a, int64_t b) {
	return (int64_t)((uint64_t)a - (uint64_t)b);
}

static inline int32_t mulOverflow(int32_t a, int32_t b) {
	return (int32_t)((uint32_t)a * (uint32_t)b);
}

static inline int64_t mulOverflow(int64_t a, int64_t b) {
	return (int64_t)((uint64_t)a * (uint64_t)b);
}

template<typename T>
static inline T divOverflow(T dividend, T divisor) {
	if (dividend == std::numeric_limits<T>::min() && divisor == -1) {
		return dividend;
	}
	// TODO test rounding
	return dividend / divisor;
}

template<typename F, typename I>
static inline I floatingToInteger(F f) {
	if (std::isnan(f)) {
		return 0;
	} else if (f > static_cast<F>(std::numeric_limits<I>::max())) {
		return std::numeric_limits<I>::max();
	} else if (f < static_cast<F>(std::numeric_limits<I>::min())) {
		return std::numeric_limits<I>::min();
	} else {
		return static_cast<I>(f);
	}
}

// Table 6.5.newarray-A. Array type codes
enum class ArrayPrimitiveTypes {
	T_BOOLEAN = 4,
	T_CHAR = 5,
	T_FLOAT = 6,
	T_DOUBLE = 7,
	T_BYTE = 8,
	T_SHORT = 9,
	T_INT = 10,
	T_LONG = 11,
};

Interpreter::Interpreter() {
}

void Interpreter::init$(ByteCodeClass* clazz) {
	$set(this, clazz, clazz);
	$set(this, constantPool, clazz->getConstantPool());
	$set(this, memory, $new($longs, 4 * 1024));
	$set(this, memoryObject, $new($ObjectArray, 4 * 1024));
	$set(this, frames, $new(::java::util::ArrayList));
}

$Value Interpreter::interpret(ByteCodeMethod* method, Object* instance, Class* returnType,
		$ClassArray* parameterTypes, $Value* argv) {
	int32_t frameSize = frames->size();
	$set(this, frame, $new<Frame>(this, method, method->stack_slots_for_parameters, true));
	this->prepareArgs(instance, parameterTypes, argv);

	while (!shouldExit) {
		if (currentException != nullptr) {
			handleThrow();
		} else {
			executeInstruction();
		}
	}

	assert(this->frames->size() == frameSize);
	assert(this->memoryUsed == memoryUsed);

	if (method->return_category != 0 && returnType != nullptr) {
		return frame->getReturn(returnType);
	}
	return $of();
}

int32_t index = 0;
inline void Interpreter::executeInstruction() {
	ByteArray& code = *frame->method->code;
	auto opcode = code[frame->pc];
	switch (static_cast<OpCodes>(opcode)) {
		case OpCodes::nop:
			break;
		case OpCodes::aconst_null:
			frame->push(nullptr);
			break;
		case OpCodes::iconst_m1:
		case OpCodes::iconst_0:
		case OpCodes::iconst_1:
		case OpCodes::iconst_2:
		case OpCodes::iconst_3:
		case OpCodes::iconst_4:
		case OpCodes::iconst_5:
			frame->pushs4(opcode - static_cast<uint8_t>(OpCodes::iconst_0), INT_TYPE);
			break;
		case OpCodes::lconst_0:
		case OpCodes::lconst_1:
			frame->pushs8(opcode - static_cast<uint8_t>(OpCodes::lconst_0));
			break;
		case OpCodes::fconst_0:
		case OpCodes::fconst_1:
		case OpCodes::fconst_2:
			frame->pushfloat(static_cast<float>(opcode - static_cast<uint8_t>(OpCodes::fconst_0)));
			break;
		case OpCodes::dconst_0:
		case OpCodes::dconst_1:
			frame->pushdouble(static_cast<double>(opcode - static_cast<uint8_t>(OpCodes::dconst_0)));
			break;
		case OpCodes::bipush: {
			int8_t v = frame->consume_u1();
			frame->pushs4(static_cast<int32_t>(v), BYTE_TYPE);
			break;
		}
		case OpCodes::sipush: {
			int16_t value = frame->consume_u2();
			frame->pushs4(static_cast<int32_t>(value), SHORT_TYPE);
			break;
		}
		case OpCodes::ldc: {
			uint8_t index = frame->consume_u1();
			int8_t tag = constantPool->getTag(index);
			switch (tag) {
			case ConstantBase::Tag_Integer:
				frame->pushs4(constantPool->getInt(index), INT_TYPE);
				break;
			case ConstantBase::Tag_Float:
				frame->pushfloat(constantPool->getFloat(index));
				break;
			case ConstantBase::Tag_Class: {
				ConstantClass* constantClass = constantPool->getClass(index);
				$var(Class, clazz, loadClass(constantClass->utf8));
				frame->pushpointer(clazz);
				break;
			}
			case ConstantBase::Tag_String: {
				ConstantString* str = constantPool->getString(index);
				frame->pushpointer(str->utf8);
				break;
			}
			case ConstantBase::Tag_Dynamic: {
				// TODO
				ConstantDynamic* constantDynamic = constantPool->getDynamic(index);
				frame->pushpointer(constantDynamic);
				break;
			}
			default:
				// TODO
				$throwNew(RuntimeException, "ldc refers to invalid/unimplemented type"_s);
			}
			break;
		}
		case OpCodes::ldc_w: {
			int32_t index = frame->consume_u2();
			int8_t tag = constantPool->getTag(index);
			switch (tag) {
			case ConstantBase::Tag_Integer:
				frame->pushs4(constantPool->getInt(index), INT_TYPE);
				break;
			case ConstantBase::Tag_Float:
				frame->pushfloat(constantPool->getFloat(index));
				break;
			case ConstantBase::Tag_Class: {
				ConstantClass* constantClass = constantPool->getClass(index);
				$var(Class, clazz, loadClass(constantClass->utf8));
				frame->pushpointer(clazz);
				break;
			}
			case ConstantBase::Tag_String: {
				ConstantString* str = constantPool->getString(index);
				frame->pushpointer(str->utf8);
				break;
			}
			default:
				// TODO
				$throwNew(RuntimeException, "ldc refers to invalid/unimplemented type"_s);
			}
			break;
		}
		case OpCodes::ldc2_w: {
			int32_t index = frame->consume_u2();
			int8_t tag = constantPool->getTag(index);
			if (tag == ConstantBase::Tag_Long) {
				frame->pushs8(constantPool->getLong(index));
			} else if (tag == ConstantBase::Tag_Double) {
				frame->pushdouble(constantPool->getDouble(index));
			} else {
				// TODO
				$throwNew(RuntimeException, "ldc2_w refers to invalid/unimplemented type"_s);
			}
			break;
		}

		case OpCodes::iload: {
			frame->pushs4(frame->getLocalInt(frame->consume_u1()), INT_TYPE);
			break;
		}
		case OpCodes::lload: {
			frame->pushs8(frame->getLocalLong(frame->consume_u1()));
			break;
		}
		case OpCodes::fload: {
			frame->pushfloat(frame->getLocalFloat(frame->consume_u1()));
		}
			break;
		case OpCodes::dload: {
			frame->pushdouble(frame->getLocalDouble(frame->consume_u1()));
		}
			break;
		case OpCodes::aload: {
			$var(Object, obj, frame->getLocalPointer(frame->consume_u1()));
			frame->pushpointer(obj);
		}
			break;

		case OpCodes::iload_0:
		case OpCodes::iload_1:
		case OpCodes::iload_2:
		case OpCodes::iload_3: {
			frame->pushs4(frame->getLocalInt(opcode - static_cast<uint8_t>(OpCodes::iload_0)), INT_TYPE);
		}
			break;
		case OpCodes::lload_0:
		case OpCodes::lload_1:
		case OpCodes::lload_2:
		case OpCodes::lload_3: {
			frame->pushs8(frame->getLocalLong(static_cast<uint8_t>(opcode - static_cast<uint8_t>(OpCodes::lload_0))));
		}
			break;
		case OpCodes::fload_0:
		case OpCodes::fload_1:
		case OpCodes::fload_2:
		case OpCodes::fload_3: {
			frame->pushfloat(frame->getLocalFloat(opcode - static_cast<uint8_t>(OpCodes::fload_0)));
		}
			break;
		case OpCodes::dload_0:
		case OpCodes::dload_1:
		case OpCodes::dload_2:
		case OpCodes::dload_3: {
			frame->pushdouble(frame->getLocalDouble(static_cast<uint8_t>(opcode - static_cast<uint8_t>(OpCodes::dload_0))));
		}
			break;
		case OpCodes::aload_0:
		case OpCodes::aload_1:
		case OpCodes::aload_2:
		case OpCodes::aload_3: {
			$var(Object, obj, frame->getLocalPointer(opcode - static_cast<uint8_t>(OpCodes::aload_0)));
			frame->pushpointer(obj);
		}
			break;
		case OpCodes::iaload:
			frame->arrayLoadInt();
			break;
		case OpCodes::laload:
			frame->arrayLoadLong();
			break;
		case OpCodes::faload:
			frame->arrayLoadFloat();
			break;
		case OpCodes::daload:
			frame->arrayLoadDouble();
			break;
		case OpCodes::aaload:
			frame->arrayLoadPointer();
			break;
		case OpCodes::baload:
			frame->arrayLoadByte();
			break;
		case OpCodes::caload:
			frame->arrayLoadChar();
			break;
		case OpCodes::saload:
			frame->arrayLoadShort();
			break;

		case OpCodes::istore: {
			int32_t value = frame->pops4();
			frame->setLocalInt(frame->consume_u1(), value);
		}
			break;
		case OpCodes::lstore: {
			int64_t value = frame->pops8();
			frame->setLocalLong(frame->consume_u1(), value);
		}
			break;
		case OpCodes::fstore: {
			float value = frame->popfloat();
			frame->setLocalFloat(frame->consume_u1(), value);
		}
			break;
		case OpCodes::dstore: {
			double value = frame->popdouble();
			frame->setLocalDouble(frame->consume_u1(), value);
		}
			break;
		case OpCodes::astore: {
			$var(Object, value, frame->poppointer());
			frame->setLocalPointer(frame->consume_u1(), value);
		}
			break;
		case OpCodes::istore_0:
		case OpCodes::istore_1:
		case OpCodes::istore_2:
		case OpCodes::istore_3: {
			int32_t value = frame->pops4();
			frame->setLocalInt(opcode - static_cast<uint8_t>(OpCodes::istore_0), value);
		}
			break;
		case OpCodes::lstore_0:
		case OpCodes::lstore_1:
		case OpCodes::lstore_2:
		case OpCodes::lstore_3: {
			int64_t value = frame->pops8();
			frame->setLocalLong(opcode - static_cast<uint8_t>(OpCodes::lstore_0), value);
		}
			break;
		case OpCodes::fstore_0:
		case OpCodes::fstore_1:
		case OpCodes::fstore_2:
		case OpCodes::fstore_3: {
			float value = frame->popfloat();
			frame->setLocalFloat(opcode - static_cast<uint8_t>(OpCodes::fstore_0), value);
		}
			break;
		case OpCodes::dstore_0:
		case OpCodes::dstore_1:
		case OpCodes::dstore_2:
		case OpCodes::dstore_3: {
			double value = frame->popdouble();
			frame->setLocalDouble(opcode - static_cast<uint8_t>(OpCodes::dstore_0), value);
		}
			break;
		case OpCodes::astore_0:
		case OpCodes::astore_1:
		case OpCodes::astore_2:
		case OpCodes::astore_3: {
			$var(Object, value, frame->poppointer());
			frame->setLocalPointer(opcode - static_cast<uint8_t>(OpCodes::astore_0), value);
		}
			break;
		case OpCodes::iastore:
			frame->arrayStoreInt();
			break;
		case OpCodes::lastore:
			frame->arrayStoreLong();
			break;
		case OpCodes::fastore:
			frame->arrayStoreFloat();
			break;
		case OpCodes::dastore:
			frame->arrayStoreDouble();
			break;
		case OpCodes::aastore:
			frame->arrayStorePointer();
			break;
		case OpCodes::bastore:
			frame->arrayStoreByte();
			break;
		case OpCodes::castore:
			frame->arrayStoreChar();
			break;
		case OpCodes::sastore:
			frame->arrayStoreShort();
			break;

		case OpCodes::pop: {
			frame->pops4();
			break;
		}
		case OpCodes::pop2:
			frame->pop2();
			break;
		case OpCodes::dup: {
			MemoryItem value = frame->pop();
			frame->push(value);
			frame->push(value);
			break;
		}
		case OpCodes::dup_x1: {
			MemoryItem value1 = frame->pop();
			MemoryItem value2 = frame->pop();
			frame->push(value1);
			frame->push(value2);
			frame->push(value1);
			break;
		}
		case OpCodes::dup_x2: {
			MemoryItem value1 = frame->pop();
			MemoryItem value2 = frame->pop();
			MemoryItem value3 = frame->pop();
			frame->push(value1);
			frame->push(value3);
			frame->push(value2);
			frame->push(value1);
			break;
		}
		case OpCodes::dup2: {
			MemoryItem value1 = frame->pop();
			MemoryItem value2 = frame->pop();
			frame->push(value2);
			frame->push(value1);
			frame->push(value2);
			frame->push(value1);
			break;
		}
		case OpCodes::dup2_x1: {
			MemoryItem value1 = frame->pop();
			MemoryItem value2 = frame->pop();
			MemoryItem value3 = frame->pop();
			frame->push(value2);
			frame->push(value1);
			frame->push(value3);
			frame->push(value2);
			frame->push(value1);
			break;
		}
		case OpCodes::dup2_x2: {
			MemoryItem value1 = frame->pop();
			MemoryItem value2 = frame->pop();
			MemoryItem value3 = frame->pop();
			MemoryItem value4 = frame->pop();
			frame->push(value2);
			frame->push(value1);
			frame->push(value4);
			frame->push(value3);
			frame->push(value2);
			frame->push(value1);
			break;
		}
		case OpCodes::swap: {
			MemoryItem value1 = frame->pop();
			MemoryItem value2 = frame->pop();
			frame->push(value1);
			frame->push(value2);
			break;
		}

		case OpCodes::iadd: {
			int32_t b = frame->pops4();
			int32_t a = frame->pops4();
			int32_t result = addOverflow(a, b);
			frame->pushs4(result, INT_TYPE);
			break;
		}
		case OpCodes::ladd: {
			int64_t b = frame->pops8();
			int64_t a = frame->pops8();
			int64_t result = addOverflow(a, b);
			frame->pushs8(result);
			break;
		}
		case OpCodes::fadd: {
			float b = frame->popfloat();
			float a = frame->popfloat();
			frame->pushfloat(a + b);
			break;
		}
		case OpCodes::dadd: {
			double b = frame->popdouble();
			double a = frame->popdouble();
			frame->pushdouble(a + b);
			break;
		}
		case OpCodes::isub: {
			int32_t b = frame->pops4();
			int32_t a = frame->pops4();
			int32_t result = subOverflow(a, b);
			frame->pushs4(result, INT_TYPE);
			break;
		}
		case OpCodes::lsub: {
			int64_t b = frame->pops8();
			int64_t a = frame->pops8();
			frame->pushs8(subOverflow(a, b));
			break;
		}
		case OpCodes::fsub: {
			float b = frame->popfloat();
			float a = frame->popfloat();
			frame->pushfloat(a - b);
			break;
		}
		case OpCodes::dsub: {
			double b = frame->popdouble();
			double a = frame->popdouble();
			frame->pushdouble(a - b);
			break;
		}
		case OpCodes::imul: {
			int32_t a = frame->pops4();
			int32_t b = frame->pops4();
			frame->pushs4(mulOverflow(a, b), INT_TYPE);
			break;
		}
		case OpCodes::lmul: {
			int64_t a = frame->pops8();
			int64_t b = frame->pops8();
			frame->pushs8(mulOverflow(a, b));
			break;
		}
		case OpCodes::fmul: {
			float a = frame->popfloat();
			float b = frame->popfloat();
			frame->pushfloat(a * b);
			break;
		}
		case OpCodes::dmul: {
			double a = frame->popdouble();
			double b = frame->popdouble();
			frame->pushdouble(a * b);
			break;
		}
		case OpCodes::idiv: {
			int32_t divisor = frame->pops4();
			int32_t dividend = frame->pops4();
			if (divisor == 0) {
				return throw_new_ArithmeticException_division_by_zero();
			}
			frame->pushs4(divOverflow(dividend, divisor), INT_TYPE);
			break;
		}
		case OpCodes::ldiv: {
			int64_t divisor = frame->pops8();
			int64_t dividend = frame->pops8();
			if (divisor == 0) {
				return throw_new_ArithmeticException_division_by_zero();
			}
			frame->pushs8(divOverflow(dividend, divisor));
			break;
		}
		case OpCodes::fdiv: {
			float divisor = frame->popfloat();
			float dividend = frame->popfloat();
			frame->pushfloat(dividend / divisor);
			break;
		}
		case OpCodes::ddiv: {
			double divisor = frame->popdouble();
			double dividend = frame->popdouble();
			frame->pushdouble(dividend / divisor);
			break;
		}

		case OpCodes::irem: {
			int32_t divisor = frame->pops4();
			int32_t dividend = frame->pops4();
			if (divisor == 0) {
				return throw_new_ArithmeticException_division_by_zero();
			}
			int32_t result = dividend - mulOverflow(divOverflow(dividend, divisor), divisor);
			frame->pushs4(result, INT_TYPE);
			break;
		}
		case OpCodes::lrem: {
			int64_t divisor = frame->pops8();
			int64_t dividend = frame->pops8();
			if (divisor == 0) {
				return throw_new_ArithmeticException_division_by_zero();
			}
			int64_t result = dividend - mulOverflow(divOverflow(dividend, divisor), divisor);
			frame->pushs8(result);
			break;
		}
		case OpCodes::frem: {
			float divisor = frame->popfloat();
			float dividend = frame->popfloat();
			float result = std::fmod(dividend, divisor);
			frame->pushfloat(result);
			break;
		}
		case OpCodes::drem: {
			double divisor = frame->popdouble();
			double dividend = frame->popdouble();
			double result = std::fmod(dividend, divisor);
			frame->pushdouble(result);
			break;
		}
		case OpCodes::ineg: {
			int32_t a = frame->pops4();
			frame->pushs4(subOverflow(static_cast<int32_t>(0), a), INT_TYPE);
			break;
		}
		case OpCodes::lneg: {
			int64_t a = frame->pops8();
			frame->pushs8(subOverflow(static_cast<int64_t>(0), a));
			break;
		}
		case OpCodes::fneg: {
			float a = frame->popfloat();
			frame->pushfloat(-a);
			break;
		}
		case OpCodes::dneg: {
			double a = frame->popdouble();
			frame->pushdouble(-a);
			break;
		}
		case OpCodes::ishl: {
			int32_t shift = frame->pops4();
			int32_t value = frame->pops4();
			int32_t result = $sl(value, shift);
			frame->pushs4(result, INT_TYPE);
			break;
		}
		case OpCodes::lshl: {
			int32_t shift = frame->pops4();
			int64_t value = frame->pops8();
			int64_t result = $sl(value, shift);
			frame->pushs8(result);
			break;
		}
		case OpCodes::ishr: {
			int32_t shift = frame->pops4();
			int32_t value = frame->pops4();
			int32_t result = $sr(value, shift);
			frame->pushs4(result, INT_TYPE);
			break;
		}
		case OpCodes::lshr: {
			int32_t shift = frame->pops4();
			int64_t value = frame->pops8();
			int64_t result = $sr(value, shift);
			frame->pushs8(result);
			break;
		}
		case OpCodes::iushr: {
			int32_t shift = frame->pops4();
			int32_t value = frame->pops4();
			int32_t result = $usr(value, shift);
			frame->pushs4(result, INT_TYPE);
			break;
		}
		case OpCodes::lushr: {
			int32_t shift = frame->pops4();
			int64_t value = frame->pops8();
			int64_t result = $usr(value, shift);
			frame->pushs8(result);
			break;
		}
		case OpCodes::iand:
			frame->pushs4(frame->pops4() & frame->pops4(), INT_TYPE);
			break;
		case OpCodes::land:
			frame->pushs8(frame->pops8() & frame->pops8());
			break;
		case OpCodes::ior:
			frame->pushs4(frame->pops4() | frame->pops4(), INT_TYPE);
			break;
		case OpCodes::lor:
			frame->pushs8(frame->pops8() | frame->pops8());
			break;
		case OpCodes::ixor:
			frame->pushs4(frame->pops4() ^ frame->pops4(), INT_TYPE);
			break;
		case OpCodes::lxor:
			frame->pushs8(frame->pops8() ^ frame->pops8());
			break;
		case OpCodes::iinc: {
			int32_t local = frame->consume_u1();
			int8_t value = frame->consume_u1();
			int32_t result = addOverflow(frame->getLocalInt(local), value);
			frame->setLocalInt(local, result);
			break;
		}

		case OpCodes::i2l:
			frame->pushs8(static_cast<int64_t>(frame->pops4()));
			break;
		case OpCodes::i2f:
			frame->pushfloat(static_cast<float>(frame->pops4()));
			break;
		case OpCodes::i2d:
			frame->pushdouble(static_cast<double>(frame->pops4()));
			break;
		case OpCodes::l2i:
			frame->pushs4(static_cast<int32_t>(frame->pops8()), INT_TYPE);
			break;
		case OpCodes::l2f:
			frame->pushfloat(static_cast<float>(frame->pops8()));
			break;
		case OpCodes::l2d:
			frame->pushdouble(static_cast<double>(frame->pops8()));
			break;
		case OpCodes::f2i: {
			frame->pushs4(floatingToInteger<float, int32_t>(frame->popfloat()), INT_TYPE);
			break;
		}
		case OpCodes::f2l:
			frame->pushs8(floatingToInteger<float, int64_t>(frame->popfloat()));
			break;
		case OpCodes::f2d:
			frame->pushdouble(static_cast<double>(frame->popfloat()));
			break;
		case OpCodes::d2i:
			frame->pushs4(floatingToInteger<double, int32_t>(frame->popdouble()), INT_TYPE);
			break;
		case OpCodes::d2l:
			frame->pushs8(floatingToInteger<double, int64_t>(frame->popdouble()));
			break;
		case OpCodes::d2f:
			frame->pushfloat(static_cast<float>(frame->popdouble()));
			break;
		case OpCodes::i2b:
			frame->pushs4(static_cast<int32_t>(static_cast<int8_t>(frame->pops4())), BYTE_TYPE);
			break;
		case OpCodes::i2c:
			frame->pushs4(static_cast<int32_t>(static_cast<uint16_t>(frame->pops4())), CHAR_TYPE);
			break;
		case OpCodes::i2s:
			frame->pushs4(static_cast<int32_t>(static_cast<int16_t>(frame->pops4())), SHORT_TYPE);
			break;

		case OpCodes::lcmp: {
			auto b = frame->pops8();
			auto a = frame->pops8();
			if (a > b) {
				frame->pushs4(1, INT_TYPE);
			} else if (a == b) {
				frame->pushs4(0, INT_TYPE);
			} else {
				frame->pushs4(-1, INT_TYPE);
			}
			break;
		}
		case OpCodes::fcmpl:
		case OpCodes::fcmpg: {
			// TODO "value set conversion" ?
			float b = frame->popfloat();
			float a = frame->popfloat();
			if (a > b) {
				frame->pushs4(1, INT_TYPE);
			} else if (a == b) {
				frame->pushs4(0, INT_TYPE);
			} else if (a < b) {
				frame->pushs4(-1, INT_TYPE);
			} else {
				// at least one of a' or b' is NaN
				frame->pushs4(static_cast<OpCodes>(opcode) == OpCodes::fcmpg ? -1 : 1, INT_TYPE);
			}
			break;
		}
		case OpCodes::dcmpl:
		case OpCodes::dcmpg: {
			// TODO "value set conversion" ?
			auto b = frame->popdouble();
			auto a = frame->popdouble();
			if (a > b) {
				frame->pushs4(1, INT_TYPE);
			} else if (a == b) {
				frame->pushs4(0, INT_TYPE);
			} else if (a < b) {
				frame->pushs4(-1, INT_TYPE);
			} else {
				// at least one of a' or b' is NaN
				frame->pushs4(static_cast<OpCodes>(opcode) == OpCodes::dcmpl ? -1 : 1, INT_TYPE);
			}
			break;
		}
		case OpCodes::ifeq:
			execute_comparison(frame->pops4() == 0);
			return;
		case OpCodes::ifne:
			execute_comparison(frame->pops4() != 0);
			return;
		case OpCodes::iflt:
			execute_comparison(frame->pops4() < 0);
			return;
		case OpCodes::ifge:
			execute_comparison(frame->pops4() >= 0);
			return;
		case OpCodes::ifgt:
			execute_comparison(frame->pops4() > 0);
			return;
		case OpCodes::ifle:
			execute_comparison(frame->pops4() <= 0);
			return;
		case OpCodes::if_icmpeq:
			execute_comparison(frame->pops4() == frame->pops4());
			return;
		case OpCodes::if_icmpne:
			execute_comparison(frame->pops4() != frame->pops4());
			return;
		case OpCodes::if_icmplt:
			execute_comparison(frame->pops4() > frame->pops4());
			return;
		case OpCodes::if_icmpge:
			execute_comparison(frame->pops4() <= frame->pops4());
			return;
		case OpCodes::if_icmpgt:
			execute_comparison(frame->pops4() < frame->pops4());
			return;
		case OpCodes::if_icmple:
			execute_comparison(frame->pops4() >= frame->pops4());
			return;
		case OpCodes::if_acmpeq:
			execute_comparison($equals($ref(frame->poppointer()), $ref(frame->poppointer())));
			return;
		case OpCodes::if_acmpne:
			execute_comparison(!$equals($ref(frame->poppointer()), $ref(frame->poppointer())));
			return;

		case OpCodes::goto_:
			goto_();
			return;
		case OpCodes::jsr:
		case OpCodes::ret:
			$throwNew(RuntimeException, "jsr and ret are unsupported"_s);
		case OpCodes::tableswitch: {
			int32_t pc = frame->pc;
			int32_t opcode_address = pc;

			// skip opcode + 0-3 bytes of padding
			pc = (pc + 4) & -4ul;

			int32_t default_ = static_cast<int32_t>((code[pc] << 24) | (code[pc + 1] << 16) | (code[pc + 2] << 8) | code[pc + 3]);
			pc += 4;
			int32_t low = static_cast<int32_t>((code[pc] << 24) | (code[pc + 1] << 16) | (code[pc + 2] << 8) | code[pc + 3]);
			pc += 4;
			int32_t high = static_cast<int32_t>((code[pc] << 24) | (code[pc + 1] << 16) | (code[pc + 2] << 8) | code[pc + 3]);
			pc += 4;
			assert(low <= high);

//			s4 count  = high - low + 1;
			int32_t index = frame->pops4();

			int32_t offset;
			if (index < low || index > high) {
				offset = default_;
			} else {
				pc += 4 * static_cast<uint32_t>(index - low);
				offset = static_cast<int32_t>((code[pc] << 24) | (code[pc + 1] << 16) | (code[pc + 2] << 8) | code[pc + 3]);
			}

			frame->pc = opcode_address + static_cast<int32_t>(static_cast<int64_t>(offset));
			return;
		}
		case OpCodes::lookupswitch: {
			auto pc = frame->pc;
			int32_t opcode_address = pc;

			// skip opcode + 0-3 bytes of padding
			pc = (pc + 4) & -4ul;

			int32_t default_ = static_cast<int32_t>((code[pc] << 24) | (code[pc + 1] << 16) | (code[pc + 2] << 8) | code[pc + 3]);
			pc += 4;
			int32_t npairs = static_cast<int32_t>((code[pc] << 24) | (code[pc + 1] << 16) | (code[pc + 2] << 8) | code[pc + 3]);
			pc += 4;
			assert(npairs >= 0);

			int32_t key = frame->pops4();
			int32_t offset = default_;

			for (int32_t i = 0; i < npairs; ++i) {
				int32_t match = static_cast<int32_t>((code[pc] << 24) | (code[pc + 1] << 16) | (code[pc + 2] << 8) |
										   code[pc + 3]);
				pc += 4;
				if (key == match) {
					offset = static_cast<int32_t>((code[pc] << 24) | (code[pc + 1] << 16) | (code[pc + 2] << 8) |
											 code[pc + 3]);
					break;
				}
				pc += 4;
			}

			frame->pc = opcode_address + static_cast<int32_t>(static_cast<int64_t>(offset));
			return;
		}

		case OpCodes::ireturn:
			frame->setLocalInt(0, frame->pops4());
			popFrame();
			return;
		case OpCodes::lreturn:
			frame->setLocalLong(0, frame->pop2());
			popFrame();
			return;
		case OpCodes::freturn:
			frame->setLocalFloat(0, frame->popfloat());
			popFrame();
			return;
		case OpCodes::dreturn:
			frame->setLocalDouble(0, frame->popdouble());
			popFrame();
			return;
		case OpCodes::areturn:
			frame->setLocalPointer(0, $ref(frame->poppointer()));
			popFrame();
			return;
		case OpCodes::return_: {
			popFrame();
			return;
		}

		case OpCodes::getstatic:
		case OpCodes::putstatic:
		case OpCodes::getfield:
		case OpCodes::putfield: {
			uint16_t index = frame->read_u2();
			$var(Field, field0, resolveField(index));

			frame->pc += 2;

			switch (static_cast<OpCodes>(opcode)) {
				case OpCodes::getstatic: {
					getStatic(field0);
					break;
				}
				case OpCodes::putstatic: {
					putStatic(field0);
					break;
				}
				case OpCodes::getfield: {
					getField(field0);
					break;
				}
				case OpCodes::putfield: {
					putField(field0);
					break;
				}
				default:
					assert(false);
			}

			break;
		}
		case OpCodes::invokevirtual: {
			uint16_t method_index = frame->read_u2();
			frame->invokeLength = 3;
			$var(MethodCache, methodCache, clazz->findMethodCache(method_index));
			if (methodCache->method->getClass() == ::java::lang::reflect::Method::class$) {
				$set(this, frame, pushAndCreateFrame4Native(frame, methodCache));
				nativeCall(methodCache, false);
			} else {
				ByteCodeMethod* method0 = $fcast<ByteCodeMethod>(methodCache->method);
				$set(this, frame, pushAndCreateFrame(frame, method0));
			}
			return;
		}
		case OpCodes::invokespecial: {
			uint16_t method_index = frame->read_u2();
			frame->invokeLength = 3;
			$var(MethodCache, methodCache, clazz->findMethodCache(method_index));
			if (methodCache->method->getClass() == ::java::lang::reflect::Method::class$) {
				$set(this, frame, pushAndCreateFrame4Native(frame, methodCache));
				nativeCall(methodCache, true);
			} else if (methodCache->method->getClass() == ::java::lang::reflect::Constructor::class$) {
				$set(this, frame, pushAndCreateFrame4Native(frame, methodCache));
				nativeCall(methodCache, true);
			} else {
				ByteCodeMethod* method0 = $fcast<ByteCodeMethod>(methodCache->method);
				$set(this, frame, pushAndCreateFrame(frame, method0));
			}
			return;
		}
		case OpCodes::invokestatic: {
			uint16_t method_index = frame->read_u2();
			frame->invokeLength = 3;
			$var(MethodCache, methodCache, clazz->findMethodCache(method_index));
			if (methodCache->method->getClass() == ::java::lang::reflect::Method::class$) {
				$set(this, frame, pushAndCreateFrame4Native(frame, methodCache));
				nativeCall(methodCache, false);
			} else {
				ByteCodeMethod* method0 = $fcast<ByteCodeMethod>(methodCache->method);
				$set(this, frame, pushAndCreateFrame(frame, method0));
			}
			return;
		}
		case OpCodes::invokeinterface: {
			uint16_t method_index = frame->read_u2();
			frame->invokeLength = 5;
			$var(MethodCache, methodCache, clazz->findMethodCache(method_index));
			if (methodCache->method->getClass() == ::java::lang::reflect::Method::class$) {
				$set(this, frame, pushAndCreateFrame4Native(frame, methodCache));
				nativeCall(methodCache, false);
			} else {
				ByteCodeMethod* method0 = $fcast<ByteCodeMethod>(methodCache->method);
				$set(this, frame, pushAndCreateFrame(frame, method0));
			}
			return;
		}
		case OpCodes::new_: {
			// TODO
			uint16_t index = frame->read_u2();
			ConstantClass* constantClass = constantPool->getClass(index);
			frame->pc += 2;
			$var(Class, clazz, loadClass(constantClass->utf8));
			$var(Object, instance, clazz->allocateInstance());
			frame->pushpointer(instance);
			// TODO: the next two instructions are probably dup+invokespecial. We could optimize for that pattern.
			break;
		}
		case OpCodes::newarray: {
			int32_t count = frame->pops4();
			if (count < 0) {
				$throwNew(RuntimeException, "TODO NegativeArraySizeException"_s);
			}
			int32_t type = frame->consume_u1();

			switch (static_cast<ArrayPrimitiveTypes>(type)) {
				case ArrayPrimitiveTypes::T_INT: {
					$var(Object, reference, $new<$ints>(count));
					frame->pushpointer(reference);
					break;
				}
				case ArrayPrimitiveTypes::T_BOOLEAN: {
					$var(Object, reference, $new<$booleans>(count));
					frame->pushpointer(reference);
					break;
				}
				case ArrayPrimitiveTypes::T_CHAR: {
					$var(Object, reference, $new<$chars>(count));
					frame->pushpointer(reference);
					break;
				}
				case ArrayPrimitiveTypes::T_FLOAT: {
					$var(Object, reference, $new<$floats>(count));
					frame->pushpointer(reference);
					break;
				}
				case ArrayPrimitiveTypes::T_DOUBLE: {
					$var(Object, reference, $new<$doubles>(count));
					frame->pushpointer(reference);
					break;
				}
				case ArrayPrimitiveTypes::T_BYTE: {
					$var(Object, reference, $new<$bytes>(count));
					frame->pushpointer(reference);
					break;
				}
				case ArrayPrimitiveTypes::T_SHORT: {
					$var(Object, reference, $new<$shorts>(count));
					frame->pushpointer(reference);
					break;
				}
				case ArrayPrimitiveTypes::T_LONG: {
					$var(Object, reference, $new<$longs>(count));
					frame->pushpointer(reference);
					break;
				}
			}
			break;
		}
		case OpCodes::anewarray: {
			uint16_t index = frame->read_u2();
			ConstantClass* constClass = constantPool->getClass(index);
			frame->pc += 2;

			int32_t count = frame->pops4();
			if (count < 0) {
				$throwNew(RuntimeException, "TODO NegativeArraySizeException"_s);
			}

			$var(Class, clazz0, loadClass(constClass->utf8));
			$var(Object, array, _Array::newArray(clazz0, count));
			frame->pushpointer(array);
			break;
		}
		case OpCodes::arraylength: {
			$var(Object, arrayref, frame->poppointer());
			$nullcheck(arrayref);
			int32_t length = _Array::getLength(arrayref);
			frame->pushs4(length, INT_TYPE);
			break;
		}

		case OpCodes::athrow: {
			$var(Object, value, frame->poppointer());
			$nullcheck(value);
			throwIt($cast<Throwable>(value));
			return;
		}

		case OpCodes::checkcast: {
			uint16_t index = frame->read_u2();
			ConstantClass* constantClass = constantPool->getClass(index);
			Class* clazz = nullptr;
			try {
				clazz = this->loadClass(constantClass->utf8);
			} catch (Throwable& e) {
				$set(this, currentException, e);
				return;
			}

			$var(Object, objectref, frame->poppointer());
			frame->pushpointer(objectref);

			if (objectref != nullptr) {
				if (!clazz->isInstance(objectref)) {
					$set(this, currentException, $new<ClassCastException>(constantClass->utf8));
					return;
				}

				//if (resolve_class(class_info)) {
				//	return;
				//}

				// TODO
				//if (!objectref.object()->clazz->is_instance_of(class_info->clazz)) {
				//	return throw_new(thread, frame, Names::java_lang_ClassCastException);
				//}
			}
			frame->pc += 2;
			break;
		}

		case OpCodes::instanceof: {
			uint16_t index = frame->read_u2();
			ConstantClass* constantClass = constantPool->getClass(index);
			Class* clazz = nullptr;
			try {
				clazz = this->loadClass(constantClass->utf8);
			} catch (Throwable& e) {
				$set(this, currentException, e);
				return;
			}

			$var(Object, objectref, frame->poppointer());
			if (objectref == nullptr) {
			 //   frame->pushs4(0);
				frame->pushbool(false);
			} else {
			//	frame->pushpointer(objectref);
	/*			if (resolve_class(class_info)) {
					return;
				}*/
			//	frame->poppointer();
				bool ret = clazz->isInstance(objectref);
				frame->pushbool(ret);
				// TODO
				//frame->push<bool>(objectref.object()->clazz->is_instance_of(class_info->clazz));
			}
			frame->pc += 2;
			break;
		}
		case OpCodes::monitorenter: {
			$var(Object, reference, frame->poppointer());
			Object0::sureObject0(reference)->lock();
			break;
		}
		case OpCodes::monitorexit: {
			$var(Object, reference, frame->poppointer());
			Object0::sureObject0(reference)->unlock();
			break;
		}

		case OpCodes::wide: {
			uint8_t type = frame->consume_u1();
			uint16_t index = frame->consume_u2();
	  //	  $var(Object, local, frame->locals->get(index));

			switch (static_cast<OpCodes>(type)) {
			case OpCodes::iload: {
				frame->pushs4(frame->getLocalInt(index), INT_TYPE);
			}
				break;
			case OpCodes::lload: {
				frame->pushs8(frame->getLocalLong(index));
			}
				   break;
			case OpCodes::fload: {
				frame->pushfloat(frame->getLocalFloat(index));
			}
					break;
			case OpCodes::dload: {
				frame->pushdouble(frame->getLocalDouble(index));
			}
					break;
			case OpCodes::aload: {
				$var(Object, local, frame->getLocalPointer(index));
				frame->pushpointer(local);
			}
					break;

				case OpCodes::istore:
					frame->setLocalInt(index, frame->pops4());
					break;
				case OpCodes::lstore:
					frame->setLocalLong(index, frame->pops8());
					break;
				case OpCodes::fstore:
					frame->setLocalFloat(index, frame->popfloat());
					break;
				case OpCodes::dstore:
					frame->setLocalDouble(index, frame->popdouble());
					break;
				case OpCodes::astore: {
					$var(Object, local, frame->poppointer());
					frame->setLocalPointer(index, local);
				}
					break;

				case OpCodes::iinc: {
					int32_t local = frame->getLocalInt(index);
					int16_t constant = frame->consume_u2();
					frame->setLocalInt(index, local + constant);
					frame->pc++;
					return;
				}

				case OpCodes::ret:
					$throwNew(RuntimeException, "jsr and ret are unsupported"_s);
				default:
					abort();
			}
			break;
		}
		case OpCodes::multianewarray: {
			uint16_t index = frame->read_u2();
			ConstantClass* constantClass = constantPool->getClass(index);
			frame->pc += 2;

			Class* componentType = this->loadClass(constantClass->utf8);
			uint8_t dimensions = frame->consume_u1();
			assert(dimensions >= 1);

			$var($ints, dims, $new<$ints>(dimensions));
			for (int32_t i = 0; i < dimensions; i++) {
				int32_t count = frame->pops4();
				dims->set(i, count);
			}
			frame->pushpointer(_Array::multiNewArray(componentType, dims));
			break;
		}
		case OpCodes::ifnull:
			execute_comparison(frame->poppointer() == nullptr);
			return;
		case OpCodes::ifnonnull:
			execute_comparison(frame->poppointer() != nullptr);
			return;
		case OpCodes::goto_w: {
			auto pc = frame->pc;
			int32_t offset = static_cast<int32_t>((code[pc + 1] << 24) | (code[pc + 2] << 16) | (code[pc + 3] << 8) |
										code[pc + 4]);
			frame->pc += static_cast<int32_t>(static_cast<int64_t>(offset));
			return;
		}
		case OpCodes::jsr_w:
			$throwNew(RuntimeException, "jsr and ret are unsupported"_s);

		default:
			$throwNew(RuntimeException,
				$ref(String::valueOf({ $cstr("Unimplemented/unknown opcode "), $$str(opcode), $cstr(" at "), $$str((int64_t)frame->pc) }))
			);
	}

	frame->pc++;
}

void Interpreter::execute_comparison(bool condition) {
	if (condition) {
		return goto_();
	} else {
		frame->pc += 3;
	}
}

void Interpreter::goto_() {
	int16_t offset = frame->read_u2();
	frame->pc = frame->pc + offset;
}

void Interpreter::handleThrow() {
	while (true) {
		std::vector<ExceptionTableEntry>& exceptionTable = frame->method->exception_table;

		int32_t index = 0;
		bool matched = false;
		for (; index < exceptionTable.size(); index++) {
			ExceptionTableEntry& e = exceptionTable[index];
			if (e.start_pc <= frame->pc && frame->pc < e.end_pc) {
				if (e.catch_type == 0) {
					matched = true;
					break;
				} else {
					ConstantClass* constantClass = this->constantPool->getClass(e.catch_type);
					$var(String, className, constantClass->utf8->replace('/', '.'));
					Class* c = currentException->getClass();
					while (c != nullptr) {
						if (className->equals(c->getName())) {
							matched = true;
							break;
						}
						c = c->getSuperclass();
					}
					if (matched) {
						break;
					}
				}
			}
			if (matched) {
				break;
			}
		}

		if (!matched) {
			popFrame();
			$throw(this->currentException);
		} else {
			frame->clear();
			frame->pushpointer(currentException);
			frame->pc = exceptionTable[index].handler_pc;
			$set(this, currentException, nullptr);
			return;
		}
	}
}

void Interpreter::popFrame() {
	memoryUsed = frame->previousStackMemoryUsage;
	if (frame->is_root_frame) {
		shouldExit = true;
	} else {
		$set(this, frame, popFrame0());

		if (currentException == nullptr) {
			frame->pc += frame->invokeLength;
		}
	}
}

Frame::Frame() {

}

void Frame::init$(Interpreter* interpreter, ByteCodeMethod* method, int32_t operand_stack_top, bool is_root_frame) {
	Object::init$();
	this->method = (method);
	//this->code = (nullptr);
	this->operandsTop = (0),
	this->previousStackMemoryUsage = (interpreter->memoryUsed),
	this->pc = (0),
	this->invokeLength = (0),
	this->is_root_frame = (is_root_frame);

	$set(this, interpreter, interpreter);
	firstLocalIndex = operand_stack_top - method->stack_slots_for_parameters;

	if (method->code != nullptr && method->code->length > 0) {
	 //   code = &method->code;
	 //   code = method->code->begin();
		firstOperandIndex = firstLocalIndex + method->max_locals;
		interpreter->memoryUsed = firstOperandIndex + method->max_stack;
	} else {
		firstOperandIndex = operand_stack_top;
		interpreter->memoryUsed = operand_stack_top;
	}
}

void Frame::init$(Interpreter* interpreter, int32_t operand_stack_top, int32_t stack_slots_for_parameters, bool is_root_frame) {
	Object::init$();
	this->method = (nullptr),
	//	this->code = (nullptr),
		this->operandsTop = (0),
		this->previousStackMemoryUsage = (interpreter->memoryUsed),
		this->pc = (0),
		this->invokeLength = (0),
		this->is_root_frame = (is_root_frame);
	//assert(method->code_attribute->max_locals >= method->parameter_count);
	//assert(stack->memory_used >= stack_slots_for_parameters);
	//assert(operand_stack_top >= stack_slots_for_parameters);

	this->stack_slots_for_parameters = stack_slots_for_parameters;
	$set(this, interpreter, interpreter);
	firstLocalIndex = operand_stack_top - stack_slots_for_parameters;

	firstOperandIndex = operand_stack_top;
	interpreter->memoryUsed = operand_stack_top;
}

inline MemoryItem Frame::getLocal(int32_t index) {
	int32_t index0 = firstLocalIndex + index;
	MemoryItem* begin = interpreter->memory->begin() + index0;
	return begin[0];
}

void Frame::setLocal(int32_t index, Class* type, Object* value) {
	if (type->isPrimitive()) {
		Class* valueClazz = $nc(value)->getClass();
		if (valueClazz == Boolean::class$) {
			setLocalInt(index, $cast<Boolean>(value)->booleanValue());
		} else if (valueClazz == Byte::class$) {
			setLocalInt(index, $cast<Byte>(value)->byteValue());
		} else if (valueClazz == Short::class$) {
			setLocalInt(index, $cast<Short>(value)->shortValue());
		} else if (valueClazz == Integer::class$) {
			setLocalInt(index, $cast<Integer>(value)->intValue());
		} else if (valueClazz == Long::class$) {
			setLocalLong(index, $cast<Long>(value)->longValue());
		} else if (valueClazz == Float::class$) {
			setLocalFloat(index, $cast<Float>(value)->floatValue());
		} else if (valueClazz == Double::class$) {
			setLocalDouble(index, $cast<Double>(value)->doubleValue());
		} else if (valueClazz == Character::class$) {
			setLocalInt(index, $cast<Character>(value)->charValue());
		}
	} else {
		setLocalPointer(index, value);
	}
}

inline Object$* Frame::getLocal(int32_t index, Class* type) {
	if (type->isPrimitive()) {
		if (type == Boolean::TYPE) {
			return Byte::valueOf((int8_t)getLocalInt(index));
		}
		if (type == Byte::TYPE) {
			return Byte::valueOf((int8_t)getLocalInt(index));
		}
		if (type == Short::TYPE) {
			return Short::valueOf((int16_t)getLocalInt(index));
		}
		if (type == Integer::TYPE) {
			return Integer::valueOf((int32_t)getLocalInt(index));
		}
		if (type == Long::TYPE) {
			return Long::valueOf((int64_t)getLocalLong(index));
		}
		if (type == Float::TYPE) {
			return Float::valueOf(getLocalFloat(index));
		}
		if (type == Double::TYPE) {
			return Double::valueOf(getLocalDouble(index));
		}
		if (type == Character::TYPE) {
			return Character::valueOf(getLocalInt(index));
		}
		// TODO
		return nullptr;
	} else {
		return Class::cast0(type, getLocalPointer(index));
	}
}

inline MemoryItem Frame::markMemoryItem(int32_t value, MemoryItemType type) {
	MemoryItem mv = value;
	mv = (mv << 32) | type | PRIMITIVE_TYPE_PADDING;
	// TODO remove
 //   if (mv == 1610612735) {
 //	   mv = 1610612735;
 //   }
	return mv;
}

inline MemoryItemType Frame::getMemoryItemType(MemoryItem item) {
	if ((item & PRIMITIVE_TYPE_PADDING) == PRIMITIVE_TYPE_PADDING) {
		return (MemoryItemType)(item & PRIMITIVE_TYPE_MASK);
	} else {
		return OBJECT_TYPE;
	}
}

inline int32_t Frame::getMemoryItemValue(MemoryItem item) {
	return (int32_t)((item >> 32) & (uint32_t)0xFFFFFFFF);
}

inline Object* Frame::getObjectFromMemoryItem(MemoryItem item) {
	return (Object*)item;
}

inline MemoryItem Frame::markObjectMemoryItem(Object$* value) {
	return (MemoryItem)value;
}

inline int32_t Frame::getLocalInt(int32_t index) {
	int32_t index0 = firstLocalIndex + index;
	MemoryItem* begin = interpreter->memory->begin() + index0;
	return getMemoryItemValue(begin[0]);
}

inline void Frame::setLocalInt(int32_t index, int32_t value) {
	int32_t index0 = firstLocalIndex + index;
	MemoryItem* begin = interpreter->memory->begin() + index0;
	begin[0] = markMemoryItem(value, INT_TYPE);
}

inline int64_t Frame::getLocalLong(int32_t index) {
	int32_t high32 = getLocalInt(index);
	int32_t low32 = getLocalInt(index + 1);
	int64_t ret = high32;
	ret = (ret << 32);
	ret = ret | (low32 & (uint32_t)0xFFFFFFFF);
	return ret;
}

inline void Frame::setLocalLong(int32_t index, int64_t value) {
	uint64_t u64 = value;
	int32_t low32 = (int32_t)(u64 & (uint32_t)0xFFFFFFFF);
	int32_t high32 = (int32_t)((u64 >> 32) & (uint32_t)0xFFFFFFFF);

	int32_t index0 = firstLocalIndex + index;
	MemoryItem* begin = interpreter->memory->begin() + index0;
	begin[0] = markMemoryItem(high32, LONG_TYPE);
	begin[1] = markMemoryItem(low32, INT_TYPE);
}

inline float Frame::getLocalFloat(int32_t index) {
	int32_t value = getLocalInt(index);
	float result = Float::intBitsToFloat(value);
	return result;
}

inline void Frame::setLocalFloat(int32_t index, float value) {
	int32_t index0 = firstLocalIndex + index;
	MemoryItem* begin = interpreter->memory->begin() + index0;
	
 //   begin[0] = markMemoryItem(future::bit_cast<int32_t, float>(value), FLOAT_TYPE);
	int32_t result = Float::floatToRawIntBits(value);
	begin[0] = markMemoryItem(result, FLOAT_TYPE);
}

inline double Frame::getLocalDouble(int32_t index) {
	int64_t value = getLocalLong(index);
	double result = Double::longBitsToDouble(value);
	return result;
}

inline void Frame::setLocalDouble(int32_t index, double value) {
	uint64_t u64 = Double::doubleToRawLongBits(value);
	int32_t low32 = (int32_t)(u64 & (uint32_t)0xFFFFFFFF);
	int32_t high32 = (int32_t)((u64 >> 32) & (uint32_t)0xFFFFFFFF);

	int32_t index0 = firstLocalIndex + index;
	MemoryItem* begin = interpreter->memory->begin() + index0;
	begin[0] = markMemoryItem(high32, DOUBLE_TYPE);
	begin[1] = markMemoryItem(low32, INT_TYPE);
}

inline Object* Frame::getLocalPointer(int32_t index) {
	int32_t index0 = firstLocalIndex + index;
	MemoryItem* begin = interpreter->memory->begin() + index0;
	Object* obj = (Object*)begin[0];
	return obj;
}

inline void Frame::setLocalPointer(int32_t index, Object* value) {
	int32_t index0 = firstLocalIndex + index;
	MemoryItem* begin = interpreter->memory->begin() + index0;

	MemoryItemType oldType = getMemoryItemType(begin[0]);
  //  if (oldType != MemoryItemType::OBJECT_TYPE) {
   //	 begin[0] = 0;
  //  }
	interpreter->memoryObject->set(index0, value);
 //   $set(interpreter->memory, (Object$*&)begin[0], value);
	begin[0] = (MemoryItem)value;
}

inline MemoryItem Frame::pop() {
	int32_t index0 = firstOperandIndex + (--operandsTop);
	MemoryItem* begin = interpreter->memory->begin() + index0;
//	return begin[0];

	MemoryItem item = begin[0];
	MemoryItemType oldType = getMemoryItemType(begin[0]);
	if (oldType == MemoryItemType::OBJECT_TYPE) {
	 //  $set(interpreter->memory, (Object$*&)begin[0], nullptr);
		interpreter->memoryObject->set(index0, nullptr);
	}
	return item;
}

inline void Frame::push(MemoryItem item) {
	int32_t index0 = firstOperandIndex + operandsTop;
	MemoryItem* begin = interpreter->memory->begin() + index0;
	begin[0] = item;
//	begin[0] = 0;
	MemoryItemType type = getMemoryItemType(item);
	if (type == MemoryItemType::OBJECT_TYPE) {
	//   $set(interpreter->memory, (Object$*&)begin[0], getObjectFromMemoryItem(item));
		interpreter->memoryObject->set(index0, getObjectFromMemoryItem(item));
	} else {
	//	begin[0] = item;
	}
	operandsTop++;
}

inline int64_t Frame::pop2() {
	int32_t low32 = pops4();
	int64_t high32 = pops4();
	int64_t i64 = (high32 << 32) | (low32 & (uint32_t)0xFFFFFFFF);
	return i64;
}

inline void Frame::push(Object$* operand$OBJ) {
	int32_t index0 = firstOperandIndex + operandsTop;
	MemoryItem* begin = interpreter->memory->begin() + index0;
  //  begin[0] = 0;
	begin[0] = markObjectMemoryItem(operand$OBJ);
  //  $set(interpreter->memory, (Object$*&)begin[0], operand$OBJ);
	interpreter->memoryObject->set(index0, operand$OBJ);
	operandsTop++;
}

inline void Frame::pushs4(int32_t value, MemoryItemType type) {
	int32_t index0 = firstOperandIndex + operandsTop;
	MemoryItem* begin = interpreter->memory->begin() + index0;
	begin[0] = markMemoryItem(value, type);
	operandsTop++;
}

inline void Frame::pushbool(bool value) {
	pushs4(value, BOOL_TYPE);
}

inline void Frame::pushs1(int8_t value) {
	pushs4(value, BYTE_TYPE);
}

inline void Frame::pushs2(int16_t value) {
	pushs4(value, SHORT_TYPE);
}

inline void Frame::pushu2(uint16_t value) {
	pushs4(value, CHAR_TYPE);
}

inline void Frame::pushfloat(float value) {
	int32_t result = Float::floatToRawIntBits(value);
	pushs4(result, FLOAT_TYPE);
}

inline void Frame::pushpointer(void* value) {
	push(static_cast<Object*>(value));
}

inline int32_t Frame::pops4() {
	int32_t index0 = firstOperandIndex + (--operandsTop);
	MemoryItem* begin = interpreter->memory->begin() + index0;
	return getMemoryItemValue(begin[0]);
}

inline bool Frame::popbool() {
	return static_cast<bool>(pops4() != 0);
}

inline int8_t Frame::pops1() {
	return static_cast<int8_t>(pops4());
}

inline int16_t Frame::pops2() {
	return static_cast<int16_t>(pops4());
}

inline uint16_t Frame::popu2() {
	return static_cast<uint16_t>(pops4());
}

inline float Frame::popfloat() {
	int32_t s4 = pops4();
	float result = Float::intBitsToFloat(s4);
	return result;
}

inline Object* Frame::poppointer() {
	int32_t index0 = firstOperandIndex + (--operandsTop);
	MemoryItem* begin = interpreter->memory->begin() + index0;
	$var(Object, obj, getObjectFromMemoryItem(begin[0]));
   // $set(interpreter->memory, (Object$*&)begin[0], nullptr);
	interpreter->memoryObject->set(index0, nullptr);
	return obj;
}

inline void Frame::pushs8(int64_t value) {
	uint64_t u64 = value;
	int32_t low32 = (int32_t)(u64 & (uint32_t)0xFFFFFFFF);
	int32_t high32 = (int32_t)((u64 >> 32) & (uint32_t)0xFFFFFFFF);
	pushs4(high32, LONG_TYPE);
	pushs4(low32, LONG_TYPE);
}

inline void Frame::pushdouble(double value) {
	uint64_t u64 = Double::doubleToRawLongBits(value);
	int32_t low32 = (int32_t)(u64 & (uint32_t)0xFFFFFFFF);
	int32_t high32 = (int32_t)((u64 >> 32) & (uint32_t)0xFFFFFFFF);
	pushs4(high32, DOUBLE_TYPE);
	pushs4(low32, DOUBLE_TYPE);
}

inline int64_t Frame::pops8() {
	return pop2();
}

inline double Frame::popdouble() {
	int64_t value = pop2();
	double result = Double::longBitsToDouble(value);
	return result;
}

inline void Frame::arrayStoreByte() {
	int8_t value = pops1();
	int32_t index = pops4();

	$var(ByteArray, arrayref, (ByteArray*)poppointer());
	if (arrayref == nullptr) {
		interpreter->throwIt($$new(NullPointerException));
		return;
	}

	if (index < 0 || index >= arrayref->length) {
		interpreter->throwIt($$new(ArrayIndexOutOfBoundsException));
		return;
	}
	arrayref->set(index, value);
}

inline void Frame::arrayStoreShort() {
	int16_t value = pops2();
	int32_t index = pops4();

	$var(ShortArray, arrayref, (ShortArray*)poppointer());
	if (arrayref == nullptr) {
		interpreter->throwIt($$new(NullPointerException));
		return;
	}

	if (index < 0 || index >= arrayref->length) {
		interpreter->throwIt($$new(ArrayIndexOutOfBoundsException));
		return;
	}
	arrayref->set(index, value);
}

inline void Frame::arrayStoreInt() {
	int32_t value = pops4();
	int32_t index = pops4();

	$var(IntArray, arrayref, (IntArray*)poppointer());
	if (arrayref == nullptr) {
		interpreter->throwIt($$new(NullPointerException));
		return;
	}

	if (index < 0 || index >= arrayref->length) {
		interpreter->throwIt($$new(ArrayIndexOutOfBoundsException));
		return;
	}
	arrayref->set(index, value);
}

inline void Frame::arrayStoreLong() {
	int64_t value = pops8();
	int32_t index = pops4();

	$var(LongArray, arrayref, (LongArray*)poppointer());
	if (arrayref == nullptr) {
		interpreter->throwIt($$new(NullPointerException));
		return;
	}

	if (index < 0 || index >= arrayref->length) {
		interpreter->throwIt($$new(ArrayIndexOutOfBoundsException));
		return;
	}
	arrayref->set(index, value);
}

inline void Frame::arrayStoreFloat() {
	float value = popfloat();
	int32_t index = pops4();

	$var(FloatArray, arrayref, (FloatArray*)poppointer());
	if (arrayref == nullptr) {
		interpreter->throwIt($$new(NullPointerException));
		return;
	}

	if (index < 0 || index >= arrayref->length) {
		interpreter->throwIt($$new(ArrayIndexOutOfBoundsException));
		return;
	}
	arrayref->set(index, value);
}

inline void Frame::arrayStoreDouble() {
	double value = popdouble();
	int32_t index = pops4();

	$var(DoubleArray, arrayref, (DoubleArray*)poppointer());
	if (arrayref == nullptr) {
		interpreter->throwIt($$new(NullPointerException));
		return;
	}

	if (index < 0 || index >= arrayref->length) {
		interpreter->throwIt($$new(ArrayIndexOutOfBoundsException));
		return;
	}
	arrayref->set(index, value);
}

inline void Frame::arrayStoreChar() {
	char16_t value = popu2();
	int32_t index = pops4();

	$var(CharArray, arrayref, (CharArray*)poppointer());
	if (arrayref == nullptr) {
		interpreter->throwIt($$new(NullPointerException));
		return;
	}

	if (index < 0 || index >= arrayref->length) {
		interpreter->throwIt($$new(ArrayIndexOutOfBoundsException));
		return;
	}
	arrayref->set(index, value);
}

inline void Frame::arrayStorePointer() {
	$var(Object, value, poppointer());
	int32_t index = pops4();

	$var($ObjectArray, arrayref, ($ObjectArray*)poppointer());
	if (arrayref == nullptr) {
		interpreter->throwIt($$new(NullPointerException));
		return;
	}

	if (index < 0 || index >= arrayref->length) {
		interpreter->throwIt($$new(ArrayIndexOutOfBoundsException));
		return;
	}
	arrayref->set(index, value);
}

inline void Frame::arrayLoadByte() {
	int32_t index = pops4();

	$var(ByteArray, arrayref, (ByteArray*)poppointer());
	if (arrayref == nullptr) {
		interpreter->throwIt($$new(NullPointerException));
		return;
	}

	if (index < 0 || index >= arrayref->length) {
		interpreter->throwIt($$new(ArrayIndexOutOfBoundsException));
		return;
	}
	pushs1(arrayref->get(index));
}

inline void Frame::arrayLoadShort() {
	int32_t index = pops4();

	$var(ShortArray, arrayref, (ShortArray*)poppointer());
	if (arrayref == nullptr) {
		interpreter->throwIt($$new(NullPointerException));
		return;
	}

	if (index < 0 || index >= arrayref->length) {
		interpreter->throwIt($$new(ArrayIndexOutOfBoundsException));
		return;
	}
	pushs4(arrayref->get(index), SHORT_TYPE);
}

inline void Frame::arrayLoadInt() {
	int32_t index = pops4();

	$var(IntArray, arrayref, (IntArray*)poppointer());
	if (arrayref == nullptr) {
		interpreter->throwIt($$new(NullPointerException));
		return;
	}

	if (index < 0 || index >= arrayref->length) {
		interpreter->throwIt($$new(ArrayIndexOutOfBoundsException));
		return;
	}
	pushs4(arrayref->get(index), INT_TYPE);
}

inline void Frame::arrayLoadLong() {
	int32_t index = pops4();

	$var(LongArray, arrayref, (LongArray*)poppointer());
	if (arrayref == nullptr) {
		interpreter->throwIt($$new(NullPointerException));
		return;
	}

	if (index < 0 || index >= arrayref->length) {
		interpreter->throwIt($$new(ArrayIndexOutOfBoundsException));
		return;
	}
	pushs8(arrayref->get(index));
}

inline void Frame::arrayLoadFloat() {
	int32_t index = pops4();

	$var(FloatArray, arrayref, (FloatArray*)poppointer());
	if (arrayref == nullptr) {
		interpreter->throwIt($$new(NullPointerException));
		return;
	}

	if (index < 0 || index >= arrayref->length) {
		interpreter->throwIt($$new(ArrayIndexOutOfBoundsException));
		return;
	}
	pushfloat(arrayref->get(index));
}

inline void Frame::arrayLoadDouble() {
	int32_t index = pops4();

	$var(DoubleArray, arrayref, (DoubleArray*)poppointer());
	if (arrayref == nullptr) {
		interpreter->throwIt($$new(NullPointerException));
		return;
	}

	if (index < 0 || index >= arrayref->length) {
		interpreter->throwIt($$new(ArrayIndexOutOfBoundsException));
		return;
	}
	pushdouble(arrayref->get(index));
}

inline void Frame::arrayLoadChar() {
	int32_t index = pops4();

	$var(CharArray, arrayref, (CharArray*)poppointer());
	if (arrayref == nullptr) {
		interpreter->throwIt($$new(NullPointerException));
		return;
	}

	if (index < 0 || index >= arrayref->length) {
		interpreter->throwIt($$new(ArrayIndexOutOfBoundsException));
		return;
	}
	pushu2(arrayref->get(index));
}

inline void Frame::arrayLoadPointer() {
	int32_t index = pops4();

	$var($ObjectArray, arrayref, ($ObjectArray*)poppointer());
	if (arrayref == nullptr) {
		interpreter->throwIt($$new(NullPointerException));
		return;
	}

	if (index < 0 || index >= arrayref->length) {
		interpreter->throwIt($$new(ArrayIndexOutOfBoundsException));
		return;
	}
	pushpointer(arrayref->get(index));
}

int32_t calc_category(Class* type) {
	if (type->isArray()) {
		return 1;
	}
	if (type == Void::TYPE) {
		return 0;
	}
	if (!type->isPrimitive()) {
		return 1;
	}
	if (type == Long::TYPE || type == Double::TYPE) {
		return 2;
	}
	return 1;
}

int32_t calc_stack_slots_for_parameters(::java::lang::reflect::Method* method) {
	int32_t stack_slots_for_parameters = 0;
	if (!method->isStatic()) {
		stack_slots_for_parameters++;
	}
	$var($ClassArray, parameterTypes, method->getParameterTypes());
	for (int32_t i = 0; i < parameterTypes->length; i++) {
		$var(Class, type, parameterTypes->get(i));
		stack_slots_for_parameters += calc_category(type);
	}
	return stack_slots_for_parameters;
}

int32_t calc_stack_slots_for_parameters(::java::lang::reflect::Constructor* constructor) {
	int32_t stack_slots_for_parameters = 1;

	$var($ClassArray, parameterTypes, constructor->getParameterTypes());
	for (int32_t i = 0; i < parameterTypes->length; i++) {
		$var(Class, type, parameterTypes->get(i));
		stack_slots_for_parameters += calc_category(type);
	}
	return stack_slots_for_parameters;
}

Object$* getParameter(Class* type, Frame* frame, int32_t localIndex) {
	if (type->isArray()) {
		return frame->getLocalPointer(localIndex);
	}
	MemoryItem item = frame->getLocal(localIndex);
	MemoryItemType localType = Frame::getMemoryItemType(item);
	/*
		BOOL_TYPE = 0x10000000,
	BYTE_TYPE = 0x20000000,
	SHORT_TYPE = 0x30000000,
	INT_TYPE = 0x40000000,
	LONG_TYPE = 0x50000000,
	FLOAT_TYPE = 0x60000000,
	DOUBLE_TYPE = 0x70000000,
	CHAR_TYPE = 0x80000000,
	*/
	if (type->isPrimitive()) {
		if (type == Boolean::TYPE) {
			return Boolean::valueOf(frame->getLocalInt(localIndex) != 0);
		}
		if (type == Byte::TYPE) {
			return Byte::valueOf((int8_t)frame->getLocalInt(localIndex));
		}
		if (type == Short::TYPE) {
			return Short::valueOf((int16_t)frame->getLocalInt(localIndex));
		}
		if (type == Integer::TYPE) {
			return Integer::valueOf((int32_t)frame->getLocalInt(localIndex));
		}
		if (type == Long::TYPE) {
			return Long::valueOf((int64_t)frame->getLocalLong(localIndex));
		}
		if (type == Float::TYPE) {
			return Float::valueOf(frame->getLocalFloat(localIndex));
		}
		if (type == Double::TYPE) {
			return Double::valueOf(frame->getLocalDouble(localIndex));
		}
		if (type == Character::TYPE) {
			return Character::valueOf(frame->getLocalInt(localIndex));
		}
	} else {
		if (localType == OBJECT_TYPE) {
			return frame->getLocalPointer(localIndex);
		}
		switch (localType) {
		case BOOL_TYPE:
			return Boolean::valueOf(frame->getLocalInt(localIndex) != 0);
		case BYTE_TYPE:
			return Byte::valueOf((int8_t)frame->getLocalInt(localIndex));
		case SHORT_TYPE:
			return Short::valueOf((int16_t)frame->getLocalInt(localIndex));
		case INT_TYPE:
			return Integer::valueOf((int32_t)frame->getLocalInt(localIndex));
		case LONG_TYPE:
			return Long::valueOf((int64_t)frame->getLocalLong(localIndex));
		case FLOAT_TYPE:
			return Float::valueOf(frame->getLocalFloat(localIndex));
		case DOUBLE_TYPE:
			return Double::valueOf(frame->getLocalDouble(localIndex));
		case CHAR_TYPE:
			return Character::valueOf(frame->getLocalInt(localIndex));
		//case OBJECT_TYPE:
		//	break;
		default:
			break;
		}
	}
	$throwNew(IllegalArgumentException);
}

Class* Interpreter::loadClass(String* name) {
	return clazz->loadClass(name);
}

Field* Interpreter::resolveField(int16_t constIndex) {
	$var(ConstantFieldRef, fieldRef, constantPool->getFieldRef(constIndex));
//		assert(!fieldref_info->resolved);
	$var(Class, clazz, this->loadClass(fieldRef->clazz));
	$var(Field, field, clazz->getDeclaredField(fieldRef->name));
	if (field != nullptr) {

	}
	return field;
}

$ObjectArray* Interpreter::makeArgs(bool isVarArgs, int32_t localIndex, int32_t slots, $ClassArray* parameterTypes) {
	$var($ObjectArray, args, nullptr);
	if (isVarArgs) {
		$var(ArrayList, arrayList, $new(ArrayList));
		Class* varType = $fcast<Class>(parameterTypes->get(parameterTypes->length - 1));
		$var(Object, arg, nullptr);
		for (int32_t i = 0; i < parameterTypes->length - 1; i++) {
			Class* type = $fcast<Class>(parameterTypes->get(i));
			$assign(arg, getParameter(type, frame, localIndex));

			arrayList->add(arg);
			int32_t category = calc_category(type);
			slots += category;
			localIndex += category;
		}

		if (slots == frame->stack_slots_for_parameters) {
			//	   if (arrayList->size() == 1 && arg->getClass() == varType) {
			 //		  _assign(args, arg);
			//	   }
			   //	else {
			$assign(args, arrayList->toArray());
			//	   }
		} else if (slots < this->frame->stack_slots_for_parameters) {
			Class* type = $fcast<Class>(parameterTypes->get(parameterTypes->length - 1));
			type = type->getComponentType();
			$var(Object, arg, getParameter(Object::class$, frame, localIndex));
			int32_t category = 1;//calc_category(Object::class$);
			slots += category;
			localIndex += category;
			if (slots == frame->stack_slots_for_parameters && arg->getClass() == varType) {
				arrayList->add(arg);
				$assign(args, arrayList->toArray());
			} else {
				$var(ArrayList, arrayList2, $new(ArrayList));
				arrayList2->add(arg);
				while (slots < frame->stack_slots_for_parameters) {
					$var(Object, arg, getParameter(type, frame, localIndex));
					arrayList2->add(arg);
					category = calc_category(type);
					slots += category;
					localIndex += category;
				}
				arrayList->add($ref(arrayList2->toArray()));
				$assign(args, arrayList->toArray());
			}
		}
	} else {
		$assign(args, $new<$ObjectArray>(parameterTypes->length));
		for (int32_t i = 0; i < parameterTypes->length; i++) {
			$var(Class, type, parameterTypes->get(i));
			$var(Object, arg, getParameter(type, frame, localIndex));
			args->set(i, arg);
			int32_t category = calc_category(type);
			localIndex += category;
		}
	}
	return args;
}

void Interpreter::nativeCall(MethodCache* methodCache, bool special) {
	// during native calls we push the current frame
	pushFrame(frame);
	$var(Object, this_obj, nullptr);
	int32_t localIndex = 0;
	//int32_t slots = 0;
	if (methodCache->hasThisArg()) {
		$assign(this_obj, frame->getLocalPointer(localIndex));
		localIndex++;

		//slots += calc_category($nullcheck(this_obj)->getClass());
	}
	//$var(Class_Array, parameterTypes, method->getParameterTypes());
	//$var(ObjectArray, args, makeArgs(method->isVarArgs(), localIndex, slots, methodCache->argsTypes));
	$var($ObjectArray, args, $new<$ObjectArray>(methodCache->argsTypes->length));
	for (int32_t i = 0; i < methodCache->argsTypes->length; i++) {
		Class* type = methodCache->argsTypes->get(i);
		$var(Object, arg, getParameter(type, frame, localIndex));
		args->set(i, arg);
		int32_t category = calc_category(type);
		localIndex += category;
	}

	try {
		if (methodCache->method->getClass() == Method::class$) {
			$var(Object, returnValue, nullptr);
			Method* method = $fcast<Method>(methodCache->method);
			WillCallCallerSensitive wccs(this->clazz);
			if (special) {
				$assign(returnValue, method->invokeSpecial(this_obj, args));
			} else {
				$assign(returnValue, method->invoke(this_obj, args));
			}
			if (methodCache->realReturnType != Void::TYPE) {
				frame->setReturn(methodCache->realReturnType, returnValue); // TODO
			}
		} else {
			Constructor* constructor = $fcast<Constructor>(methodCache->method);
			WillCallCallerSensitive wccs(this->clazz);
			constructor->initInstance(this_obj, args);
		}
	} catch (InvocationTargetException& ite) {
		$set(this, currentException, ite->target);
	} catch (Throwable& e) {
		$set(this, currentException, e);
	}
	// restore the native frame
	popFrame();

	// remove the native frame
	popFrame();
}

void Interpreter::prepareArgs(Object* instance, $ClassArray* parameterTypes, $Value* argv) {
	int32_t argIndex = 0;
	if (instance != nullptr) {
		frame->setLocalPointer(argIndex++, instance);
	}
	if (parameterTypes != nullptr) {
		for (int32_t i = 0; i < parameterTypes->length; i++) {
			Class* type = $fcast<Class>(parameterTypes->get(i));
			if (type->isPrimitive()) {
				if (type == Integer::TYPE) {
					frame->setLocalInt(argIndex++, argv[i].intValue());
				} else if (type == Boolean::TYPE) {
					frame->setLocalInt(argIndex++, argv[i].booleanValue());
				} else if (type == Byte::TYPE) {
					frame->setLocalInt(argIndex++, argv[i].byteValue());
				} else if (type == Short::TYPE) {
					frame->setLocalInt(argIndex++, argv[i].shortValue());
				} else if (type == Character::TYPE) {
					frame->setLocalInt(argIndex++, argv[i].charValue());
				} else if (type == Long::TYPE) {
					frame->setLocalLong(argIndex, argv[i].longValue());
					argIndex += 2;
				} else if (type == Float::TYPE) {
					frame->setLocalFloat(argIndex++, argv[i].floatValue());
				} else if (type == Double::TYPE) {
					frame->setLocalDouble(argIndex, argv[i].doubleValue());
					argIndex += 2;
				}
			} else {
				frame->setLocalPointer(argIndex++, argv[i].is<$Object>());
			}
		}
	}
}

void Interpreter::pushFrame(Frame* frame) {
	frames->add(frame);
}

Frame* Interpreter::pushAndCreateFrame(Frame* current_frame, ByteCodeMethod* method) {
	int32_t stack_slots_for_parameters = 0;
	if ((method->accessFlags & Modifier::VARARGS) != 0) {
		stack_slots_for_parameters = current_frame->operandsTop;
	} else {
		stack_slots_for_parameters = method->stack_slots_for_parameters;
	}
	int32_t operand_stack_top = current_frame->firstOperandIndex + current_frame->operandsTop;
	current_frame->operandsTop += -stack_slots_for_parameters + method->return_category;

	pushFrame(current_frame);

	if (memoryUsed > memory->length) {
		$throwNew(RuntimeException, "stack overflow"_s);
	}
	return $new<Frame>(this, method, operand_stack_top, false);
}

Frame* Interpreter::pushAndCreateFrame4Native(Frame* current_frame, MethodCache* methodCache) {
	int32_t operand_stack_top = current_frame->firstOperandIndex + current_frame->operandsTop;
	current_frame->operandsTop += -methodCache->stackSlotsForArgs + methodCache->realReturnCategory;
	pushFrame(current_frame);

	if (memoryUsed > memory->length) {
		$throwNew(RuntimeException, "stack overflow"_s);
	}
	return $new<Frame>(this, operand_stack_top, methodCache->stackSlotsForArgs, false);
}

Frame* Interpreter::popFrame0() {
	return $fcast<Frame>(frames->remove(frames->size() - 1));
}

void Interpreter::getStatic(::java::lang::reflect::Field* field) {
	if (!field->override$) {
		field->override$ = true;
	}
	if (field->type->isPrimitive()) {
		if (field->type == Boolean::TYPE) {
			frame->pushbool(field->getBoolean(nullptr));
		} else if (field->type == Byte::TYPE) {
			frame->pushs1(field->getByte(nullptr));
		} else if (field->type == Short::TYPE) {
			frame->pushu2(field->getShort(nullptr));
		} else if (field->type == Integer::TYPE) {
			frame->pushs4(field->getInt(nullptr), INT_TYPE);
		} else if (field->type == Long::TYPE) {
			frame->pushs8(field->getLong(nullptr));
		} else if (field->type == Float::TYPE) {
			frame->pushfloat(field->getFloat(nullptr));
		} else if (field->type == Double::TYPE) {
			frame->pushdouble(field->getDouble(nullptr));
		} else if (field->type == Character::TYPE) {
			frame->pushu2(field->getChar(nullptr));
		}
	} else {
		frame->pushpointer(field->get(nullptr));
	}
}

void Interpreter::putStatic(::java::lang::reflect::Field* field) {
	if (!field->override$) {
		field->override$ = true;
	}
	if (field->type->isPrimitive()) {
		if (field->type == Boolean::TYPE) {
			field->setBoolean(nullptr, frame->popbool());
		} else if (field->type == Byte::TYPE) {
			field->setByte(nullptr, frame->pops1());
		} else if (field->type == Short::TYPE) {
			field->setShort(nullptr, frame->popu2());
		} else if (field->type == Integer::TYPE) {
			field->setInt(nullptr, frame->pops4());
		} else if (field->type == Long::TYPE) {
			field->setLong(nullptr, frame->pops8());
		} else if (field->type == Float::TYPE) {
			field->setFloat(nullptr, frame->popfloat());
		} else if (field->type == Double::TYPE) {
			field->setDouble(nullptr, frame->popdouble());
		} else if (field->type == Character::TYPE) {
			field->setInt(nullptr, frame->popu2());
		}
	} else {
		// TODO
		if (field->root != nullptr && Modifier::isFinal(field->root->modifiers)) {
			field->root->modifiers &= ~Modifier::FINAL;
		}
		$var(Object, obj, frame->poppointer());
		field->set(nullptr, obj);
	}
}

void Interpreter::getField(::java::lang::reflect::Field* field) {
	if (!field->override$) {
		field->override$ = true;
	}
	$var(Object, obj, frame->poppointer());
	if (field->type->isPrimitive()) {
		if (field->type == Boolean::TYPE) {
			frame->pushbool(field->getBoolean(obj));
		} else if (field->type == Byte::TYPE) {
			frame->pushs1(field->getByte(obj));
		} else if (field->type == Short::TYPE) {
			frame->pushs2(field->getShort(obj));
		} else if (field->type == Integer::TYPE) {
			frame->pushs4(field->getInt(obj), INT_TYPE);
		} else if (field->type == Long::TYPE) {
			frame->pushs8(field->getLong(obj));
		} else if (field->type == Float::TYPE) {
			frame->pushfloat(field->getFloat(obj));
		} else if (field->type == Double::TYPE) {
			frame->pushdouble(field->getDouble(obj));
		} else if (field->type == Character::TYPE) {
			frame->pushu2(field->getChar(obj));
		}
	} else {
		frame->pushpointer(field->get(obj));
	}
}

void Interpreter::putField(::java::lang::reflect::Field* field) {
	// TODO
   // if (field->root != nullptr && Modifier::isFinal(field->root->modifiers)) {
		if (!field->override$) {
	   //	 field->acquireFieldAccessor(true);
			field->override$ = true;
		}
	 //   field->root->modifiers &= ~Modifier::FINAL;
   // }
	if (field->type->isPrimitive()) {
		if (field->type == Boolean::TYPE) {
			bool value = frame->popbool();
			$var(Object, obj, frame->poppointer());
			field->setBoolean(obj, value);
		} else if (field->type == Byte::TYPE) {
			int8_t value = frame->pops1();
			$var(Object, obj, frame->poppointer());
			field->setByte(obj, value);
		} else if (field->type == Short::TYPE) {
			int16_t value = frame->popu2();
			$var(Object, obj, frame->poppointer());
			field->setShort(obj, value);
		} else if (field->type == Integer::TYPE) {
			int32_t value = frame->pops4();
			$var(Object, obj, frame->poppointer());
			field->setInt(obj, value);
		} else if (field->type == Long::TYPE) {
			int64_t value = frame->pops8();
			$var(Object, obj, frame->poppointer());
			field->setLong(obj, value);
		} else if (field->type == Float::TYPE) {
			float value = frame->popfloat();
			$var(Object, obj, frame->poppointer());
			field->setFloat(obj, value);
		} else if (field->type == Double::TYPE) {
			double value = frame->popdouble();
			$var(Object, obj, frame->poppointer());
			field->setDouble(obj, value);
		} else if (field->type == Character::TYPE) {
			char16_t value = frame->popu2();
			$var(Object, obj, frame->poppointer());
			field->setChar(obj, value);
		}
	} else {
		$var(Object, value, frame->poppointer());
		$var(Object, obj, frame->poppointer());
		field->set(obj, value);
	}
}

		} // interpreter
	} // lang
} // java