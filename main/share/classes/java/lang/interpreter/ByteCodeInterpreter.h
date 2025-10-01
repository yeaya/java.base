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
#include <java/util/ArrayList.h>
#include <jdk/internal/reflect/ConstantPool.h>

namespace java {
	namespace lang {
		namespace interpreter {

enum MemoryItemType {
	BOOL_TYPE = 0x10000000,
	BYTE_TYPE = 0x20000000,
	SHORT_TYPE = 0x30000000,
	INT_TYPE = 0x40000000,
	LONG_TYPE = 0x50000000,
	FLOAT_TYPE = 0x60000000,
	DOUBLE_TYPE = 0x70000000,
	CHAR_TYPE = 0x80000000,
	OBJECT_TYPE = 0
};

#define MemoryItem int64_t
#define PRIMITIVE_TYPE_PADDING	0x0FFFFFFF
#define PRIMITIVE_TYPE_MASK		0xF0000000

class Interpreter;

class Frame : public ::java::lang::Object {
public:
	Frame();
	void init$(Interpreter* interpreter, ByteCodeMethod* method, int32_t operand_stack_top, bool is_root_frame);
	void init$(Interpreter* interpreter, int32_t operand_stack_top, int32_t stack_slots_for_parameters, bool is_root_frame);

	Interpreter* interpreter = nullptr;
    ByteCodeMethod* method = nullptr;
	int32_t firstLocalIndex;
	int32_t firstOperandIndex;
    // >= number of operands
	int32_t operandsTop;
	int32_t previousStackMemoryUsage;

    // The index of the instruction that is currently being execute (= the invoke* instruction in parent frames).
	int32_t pc;
    // The length of the invoke* instruction, to calculate the next instruction upon return
    // (only used when a parent frame is popped).
    unsigned char invokeLength;

    bool is_root_frame;

	int32_t stack_slots_for_parameters;

    inline uint8_t read_u1() {
		return method->code->get(pc + 1);
    }

    inline uint8_t consume_u1() {
	 	return method->code->get(++pc);// & (uint8_t)255;
    }

    inline uint16_t read_u2() {
	 	return static_cast<uint16_t>(((method->code->get(pc + 1) & (uint16_t)255) << 8) | (method->code->get(pc + 2) & (uint16_t)255));
    }

    inline uint16_t consume_u2() {
		uint16_t value = static_cast<uint16_t>(((method->code->get(pc + 1) & (uint16_t)255) << 8) | (method->code->get(pc + 2) & (uint16_t)255));
        pc += 2;
        return value;
    }

	inline static MemoryItem markMemoryItem(int32_t value, MemoryItemType type);
	inline static MemoryItem markObjectMemoryItem(Object$* value);
	inline static MemoryItemType getMemoryItemType(MemoryItem item);
	inline static int32_t getMemoryItemValue(MemoryItem item);
	inline static ::java::lang::Object* getObjectFromMemoryItem(MemoryItem item);

	inline $Value getReturn(::java::lang::Class* type) {
	//	return (::java::lang::Object*)getLocal(0, type);
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
			return Class::cast0(type, getLocalPointer(0));
		}
	}

	inline void setReturn(::java::lang::Class* returnType, ::java::lang::Object* returnValue) {
		setLocal(0, returnType, returnValue);
	}

	inline MemoryItem getLocal(int32_t index);

	void setLocal(int32_t index, ::java::lang::Class* type, ::java::lang::Object* value);
	Object$* getLocal(int32_t index, ::java::lang::Class* type);
	int32_t getLocalInt(int32_t index);
	inline void setLocalInt(int32_t index, int32_t value);
	int64_t getLocalLong(int32_t index);
	inline void setLocalLong(int32_t index, int64_t value);
	float getLocalFloat(int32_t index);
	inline void setLocalFloat(int32_t index, float value);
	double getLocalDouble(int32_t index);
	inline void setLocalDouble(int32_t index, double value);

	::java::lang::Object* getLocalPointer(int32_t index);
	inline void setLocalPointer(int32_t index, ::java::lang::Object* value);
    inline MemoryItem pop();
	inline void push(MemoryItem item);
    inline int64_t pop2();
    inline void push(Object$* operand$OBJ);

    inline void clear() {
        operandsTop = 0;
    }

	inline void pushs4(int32_t value, MemoryItemType type);
	inline void pushbool(bool value);
	inline void pushs1(int8_t value);
	inline void pushs2(int16_t value);
	inline void pushu2(uint16_t value);
	inline void pushfloat(float value);
	inline void pushpointer(void* value);
	inline int32_t pops4();
	inline bool popbool();
	inline int8_t pops1();
	inline int16_t pops2();
	inline uint16_t popu2();
	inline float popfloat();
	inline ::java::lang::Object* poppointer();
	inline void pushs8(int64_t value);
	inline void pushdouble(double value);
	inline int64_t pops8();
	inline double popdouble();

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

class Interpreter : public ::java::lang::Object {
public:
	Interpreter();
	void init$(ByteCodeClass* clazz);
	$Value interpret(ByteCodeMethod *method, ::java::lang::Object* instance, ::java::lang::Class* returnType,
		$ClassArray* parameterTypes, $Value* argv);
	inline void executeInstruction();
	inline void goto_();
	inline void execute_comparison(bool condition);
	void handleThrow();
	void nativeCall(MethodCache* methodCache, bool special);
	$ObjectArray* makeArgs(bool isVarArgs, int32_t localIndex, int32_t slots, $ClassArray* parameterTypes);

	void popFrame();

	void prepareArgs(::java::lang::Object* instance, $ClassArray* parameterTypes, $Value* argv);

	inline void throwIt(::java::lang::Throwable* it) {
		$set(this, currentException, it);
	}
private:
	::java::lang::Class* loadClass(::java::lang::String* name);
	::java::lang::reflect::Field* resolveField(int16_t constindex);
	void getStatic(::java::lang::reflect::Field* field);
	void putStatic(::java::lang::reflect::Field* field);
	void getField(::java::lang::reflect::Field* field);
	void putField(::java::lang::reflect::Field* field);

	void throw_new(const char *name, const char *message = nullptr) {

	}

	void throw_new_frame(const char *name, const char *message = nullptr) {

	}

	void throw_new(ByteCodeClass *clazz, const char *message = nullptr) {

	}

	void fill_in_stack_trace(::java::lang::Object* throwable) {

	}

	void init_stack_trace_element_array(::java::lang::Object* elements, ::java::lang::Object* throwable) {

	}

	void throw_new_ArithmeticException_division_by_zero() {

	}

	//void storeArrayPointer();
	ByteCodeClass* clazz = nullptr;
	::jdk::internal::reflect::ConstantPool* constantPool = nullptr;
	Frame* frame = nullptr;

	bool shouldExit = false;
public:
	int64_t memoryUsed = 0;

	$longs* memory = nullptr;
	$ObjectArray* memoryObject = nullptr;
	::java::util::ArrayList* frames = nullptr;

	void pushFrame(Frame* frame);

	/// Pushes current_frame onto the list of parent frames and sets to current frame to run `method` in `clazz`
	Frame* pushAndCreateFrame(Frame* current_frame, ByteCodeMethod* method);
	Frame* pushAndCreateFrame4Native(Frame* current_frame, MethodCache* methodCache);

	Frame* popFrame0();
	::java::lang::Throwable* currentException = nullptr;
};

		} // interpreter
	} // lang
} // java

#endif //_java_lang_interpreter_Interpreter_h_