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

#ifndef _java_lang_interpreter_Interpreter_h_
#define _java_lang_interpreter_Interpreter_h_

#include <java/lang/interpreter/ByteCodeClass.h>

#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/Float.h>
#include <java/lang/Double.h>
#include <java/lang/Array.h>
#include <java/lang/ThreadLocal.h>
#include <java/util/ArrayList.h>
#include <jdk/internal/reflect/ConstantPool.h>

namespace jdk {
	namespace internal {
		namespace reflect {
			class ConstantPool;
		}
	}
}

namespace java {
	namespace lang {
		namespace interpreter {

enum MemoryItemType {
	BOOL_TYPE = 0x01000000,
	BYTE_TYPE = 0x02000000,
	SHORT_TYPE = 0x03000000,
	INT_TYPE = 0x04000000,
	LONG_TYPE = 0x05000000,
	FLOAT_TYPE = 0x06000000,
	DOUBLE_TYPE = 0x07000000,
	CHAR_TYPE = 0x08000000,
	OBJECT_TYPE = 0
};

#define MemoryItem int64_t
#define PRIMITIVE_TYPE_PADDING	0x00FFFFFF
#define PRIMITIVE_TYPE_MASK		0x0F000000

class ByteCodeInterpreter;

class Frame : public $Object {
	//$class(Frame, $NO_CLASS_INIT, $Object)
public:
	Frame();
	void init$(ByteCodeInterpreter* interpreter, ByteCodeMethod* method, int32_t operandStackTop);
	void init$(ByteCodeInterpreter* interpreter, int32_t operandStackTop, int32_t stackSlotsForParameters);

	ByteCodeInterpreter* interpreter = nullptr;
    ByteCodeMethod* byteCodeMethod = nullptr;
	Frame* next = nullptr;
	int32_t firstLocalIndex;
	int32_t firstOperandIndex;
    // >= number of operands
	int32_t operandsTop;

    // The index of the instruction that is currently being execute (= the invoke* instruction in parent frames).
	int32_t pc;
    // The length of the invoke* instruction, to calculate the next instruction upon return
    // (only used when a parent frame is popped).
	int32_t invokeLength;
	int32_t stackSlotsForParameters;

	inline static MemoryItem markMemoryItem(int32_t value, MemoryItemType type);
	inline static MemoryItem markObjectMemoryItem(Object$* value);
	inline static MemoryItemType getMemoryItemType(MemoryItem item);
	inline static int32_t getMemoryItemValue(MemoryItem item);
	inline static $Object* getObjectFromMemoryItem(MemoryItem item);

	inline $Value getReturn($Class* type) {
		if (type->isPrimitive()) {
			if (type == Boolean::TYPE) {
				return (bool)getLocalInt(0);
			}
			if (type == Byte::TYPE) {
				return (int8_t)getLocalInt(0);
			}
			if (type == Short::TYPE) {
				return (int16_t)getLocalInt(0);
			}
			if (type == Integer::TYPE) {
				return (int32_t)getLocalInt(0);
			}
			if (type == Long::TYPE) {
				return (int64_t)getLocalLong(0);
			}
			if (type == Float::TYPE) {
				return getLocalFloat(0);
			}
			if (type == Double::TYPE) {
				return getLocalDouble(0);
			}
			if (type == Character::TYPE) {
				return (char16_t)(getLocalInt(0));
			}
			// TODO
			return nullptr;
		} else {
			return type->cast(getLocalPointer(0));
		}
	}

	inline void setReturn($Class* returnType, $Object* returnValue) {
		setLocal(0, returnType, returnValue);
	}

	inline MemoryItem getLocal(int32_t index);

	void setLocal(int32_t index, $Class* type, $Object* value);
	Object$* getLocal(int32_t index, $Class* type);
	int32_t getLocalInt(int32_t index);
	inline void setLocalInt(int32_t index, int32_t value);
	int64_t getLocalLong(int32_t index);
	inline void setLocalLong(int32_t index, int64_t value);
	float getLocalFloat(int32_t index);
	inline void setLocalFloat(int32_t index, float value);
	double getLocalDouble(int32_t index);
	inline void setLocalDouble(int32_t index, double value);

	$Object* getLocalPointer(int32_t index);
	inline void setLocalPointer(int32_t index, Object$* value);
	inline void push(MemoryItem item);
	inline MemoryItem pop();

    inline void clear() {
        operandsTop = 0;
    }

	inline void push(int32_t value, MemoryItemType type);
	inline void pushBool(bool value);
	inline void pushInt8(int8_t value);
	inline void pushInt16(int16_t value);
	inline void pushInt32(int32_t value);
	inline void pushInt64(int64_t value);
	inline void pushChar16(char16_t value);
	inline void pushFloat(float value);
	inline void pushDouble(double value);
	inline void pushObject(Object$* operand);
	inline bool popBool();
	inline int8_t popInt8();
	inline int16_t popInt16();
	inline int32_t popInt32();
	inline int64_t popInt64();
	inline char16_t popChar16();
	inline float popFloat();
	inline double popDouble();
	inline $Object* popObject();

	inline void arrayStoreByte();
	inline void arrayStoreShort();
	inline void arrayStoreInt();
	inline void arrayStoreLong();
	inline void arrayStoreFloat();
	inline void arrayStoreDouble();
	inline void arrayStoreChar();
	inline void arrayStorePointer();

	inline void arrayLoadByte();
	inline void arrayLoadShort();
	inline void arrayLoadInt();
	inline void arrayLoadLong();
	inline void arrayLoadFloat();
	inline void arrayLoadDouble();
	inline void arrayLoadChar();
	inline void arrayLoadPointer();
};

class ByteCodeInterpreter : public $Object {
	$class(ByteCodeInterpreter, $NO_CLASS_INIT, $Object)
public:
	ByteCodeInterpreter();
	void init$(ByteCodeClass* clazz);
	$Value interpret(ByteCodeMethod* byteCodeMethod, Object$* instance, $Class* returnType,
		$ClassArray* parameterTypes, $Value* argv);
	inline void executeInstruction();
	inline void executeComparison(bool condition, ByteArray* code, int32_t pos, int32_t startPc);
	void handleThrow();
	void nativeCall(MethodCache* methodCache, bool special);
	void virtualCall(MethodCache* methodCache);
	void invokeDynamic(uint16_t method_index);
	$ObjectArray* makeArgs(bool isVarArgs, int32_t localIndex, int32_t slots, $ClassArray* parameterTypes);

	void prepareArgs(Object$* instance, $ClassArray* parameterTypes, $Value* argv);

	inline void throwIt($Throwable* it) {
		$set(this, currentException, it);
	}

	inline void setMemoryItem(int32_t index, MemoryItem value);
	inline void setMemoryItem(int32_t index, MemoryItem value0, MemoryItem value1);
	inline MemoryItem getMemoryItem(int32_t index);
	inline void saveMemoryObject(int32_t index, Object$* obj);
	inline void clearMemoryObject(int32_t index);

	static bool existsStackTraceElement();
	static void initStackTraceElements($Array<StackTraceElement>* elements);
	static void initStackTraceElements(Frame* frame, $Array<StackTraceElement>* elements, int32_t& elementsIndex);
private:
	$Class* loadClass($String* name);
	::java::lang::reflect::Field* resolveField(int16_t constindex);
	void getStatic(::java::lang::reflect::Field* field);
	void putStatic(::java::lang::reflect::Field* field);
	void getField(::java::lang::reflect::Field* field);
	void putField(::java::lang::reflect::Field* field);

	void throwNewArithmeticExceptionDivisionByZero();

	inline ByteCodeClass* getCurrentClass();
	inline ::jdk::internal::reflect::ConstantPool* getConstantPool();

	Frame* frame = nullptr;
	Frame* frameStack = nullptr;
	$longs* memory = nullptr;
	$ObjectArray* memoryObject = nullptr;
	$Throwable* currentException = nullptr;
	bool shouldExit = false;
	ByteCodeInterpreter* next = nullptr;
public:
	void pushFrame(Frame* frame);
	void popFrame();
	void pushAndCreateFrame(ByteCodeMethod* method);
	void pushAndCreateFrame4Native(int32_t stackSlotsForArgs, int32_t realReturnCategory);
	void pushAndCreateFrame4Invokedynamic($ClassArray* ptypes);
	static ::java::lang::ThreadLocal* currentInterpreters;
};

		} // interpreter
	} // lang
} // java

#endif // _java_lang_interpreter_Interpreter_h_