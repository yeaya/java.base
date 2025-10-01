#ifndef _jdk_internal_reflect_ClassFileAssembler_h_
#define _jdk_internal_reflect_ClassFileAssembler_h_
//$ class jdk.internal.reflect.ClassFileAssembler
//$ extends jdk.internal.reflect.ClassFileConstants

#include <jdk/internal/reflect/ClassFileConstants.h>

namespace jdk {
	namespace internal {
		namespace reflect {
			class ByteVector;
			class Label;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace reflect {

class ClassFileAssembler : public ::jdk::internal::reflect::ClassFileConstants {
	$class(ClassFileAssembler, $NO_CLASS_INIT, ::jdk::internal::reflect::ClassFileConstants)
public:
	ClassFileAssembler();
	void init$();
	void init$(::jdk::internal::reflect::ByteVector* vec);
	virtual void append(::jdk::internal::reflect::ClassFileAssembler* asm$);
	virtual void append(::jdk::internal::reflect::ByteVector* vec);
	virtual int16_t cpi();
	void decStack();
	virtual void emitByte(int8_t val);
	virtual void emitConstantPoolClass(int16_t index);
	virtual void emitConstantPoolFieldref(int16_t classIndex, int16_t nameAndTypeIndex);
	virtual void emitConstantPoolInterfaceMethodref(int16_t classIndex, int16_t nameAndTypeIndex);
	virtual void emitConstantPoolMethodref(int16_t classIndex, int16_t nameAndTypeIndex);
	virtual void emitConstantPoolNameAndType(int16_t nameIndex, int16_t typeIndex);
	virtual void emitConstantPoolString(int16_t utf8Index);
	virtual void emitConstantPoolUTF8($String* str);
	virtual void emitInt(int32_t val);
	virtual void emitMagicAndVersion();
	virtual void emitShort(int16_t val);
	virtual void emitShort(int16_t bci, int16_t val);
	virtual ::jdk::internal::reflect::ByteVector* getData();
	virtual int16_t getLength();
	virtual int16_t getMaxLocals();
	virtual int16_t getMaxStack();
	virtual int32_t getStack();
	void incStack();
	virtual void opc_aaload();
	virtual void opc_aconst_null();
	virtual void opc_aload_0();
	virtual void opc_aload_1();
	virtual void opc_aload_2();
	virtual void opc_aload_3();
	virtual void opc_areturn();
	virtual void opc_arraylength();
	virtual void opc_astore_0();
	virtual void opc_astore_1();
	virtual void opc_astore_2();
	virtual void opc_astore_3();
	virtual void opc_athrow();
	virtual void opc_checkcast(int16_t classIndex);
	virtual void opc_dload_0();
	virtual void opc_dload_1();
	virtual void opc_dload_2();
	virtual void opc_dload_3();
	virtual void opc_dreturn();
	virtual void opc_dup();
	virtual void opc_dup_x1();
	virtual void opc_f2d();
	virtual void opc_fload_0();
	virtual void opc_fload_1();
	virtual void opc_fload_2();
	virtual void opc_fload_3();
	virtual void opc_freturn();
	virtual void opc_getfield(int16_t fieldIndex, int32_t fieldSizeInStackSlots);
	virtual void opc_getstatic(int16_t fieldIndex, int32_t fieldSizeInStackSlots);
	virtual void opc_goto(int16_t bciOffset);
	virtual void opc_goto(::jdk::internal::reflect::Label* l);
	virtual void opc_i2d();
	virtual void opc_i2f();
	virtual void opc_i2l();
	virtual void opc_if_icmpeq(int16_t bciOffset);
	virtual void opc_if_icmpeq(::jdk::internal::reflect::Label* l);
	virtual void opc_ifeq(int16_t bciOffset);
	virtual void opc_ifeq(::jdk::internal::reflect::Label* l);
	virtual void opc_ifnonnull(int16_t bciOffset);
	virtual void opc_ifnonnull(::jdk::internal::reflect::Label* l);
	virtual void opc_ifnull(int16_t bciOffset);
	virtual void opc_ifnull(::jdk::internal::reflect::Label* l);
	virtual void opc_iload_0();
	virtual void opc_iload_1();
	virtual void opc_iload_2();
	virtual void opc_iload_3();
	virtual void opc_instanceof(int16_t classIndex);
	virtual void opc_invokeinterface(int16_t methodIndex, int32_t numArgs, int8_t count, int32_t numReturnValues);
	virtual void opc_invokespecial(int16_t methodIndex, int32_t numArgs, int32_t numReturnValues);
	virtual void opc_invokestatic(int16_t methodIndex, int32_t numArgs, int32_t numReturnValues);
	virtual void opc_invokevirtual(int16_t methodIndex, int32_t numArgs, int32_t numReturnValues);
	virtual void opc_ireturn();
	virtual void opc_l2d();
	virtual void opc_l2f();
	virtual void opc_ldc(int8_t cpIdx);
	virtual void opc_lload_0();
	virtual void opc_lload_1();
	virtual void opc_lload_2();
	virtual void opc_lload_3();
	virtual void opc_lreturn();
	virtual void opc_new(int16_t classIndex);
	virtual void opc_pop();
	virtual void opc_putfield(int16_t fieldIndex, int32_t fieldSizeInStackSlots);
	virtual void opc_putstatic(int16_t fieldIndex, int32_t fieldSizeInStackSlots);
	virtual void opc_return();
	virtual void opc_sipush(int16_t constant);
	virtual void opc_swap();
	virtual void setMaxLocals(int32_t maxLocals);
	virtual void setStack(int32_t value);
	::jdk::internal::reflect::ByteVector* vec = nullptr;
	int16_t cpIdx = 0;
	int32_t stack = 0;
	int32_t maxStack = 0;
	int32_t maxLocals = 0;
};

		} // reflect
	} // internal
} // jdk

#endif // _jdk_internal_reflect_ClassFileAssembler_h_