#ifndef _jdk_internal_org_objectweb_asm$_Frame_h_
#define _jdk_internal_org_objectweb_asm$_Frame_h_
//$ class jdk.internal.org.objectweb.asm.Frame
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("FULL_FRAME")
#undef FULL_FRAME
#pragma push_macro("STACK_KIND")
#undef STACK_KIND
#pragma push_macro("SAME_FRAME_EXTENDED")
#undef SAME_FRAME_EXTENDED
#pragma push_macro("ITEM_DOUBLE")
#undef ITEM_DOUBLE
#pragma push_macro("ITEM_NULL")
#undef ITEM_NULL
#pragma push_macro("ARRAY_OF")
#undef ARRAY_OF
#pragma push_macro("SAME_LOCALS_1_STACK_ITEM_FRAME_EXTENDED")
#undef SAME_LOCALS_1_STACK_ITEM_FRAME_EXTENDED
#pragma push_macro("FLAGS_SHIFT")
#undef FLAGS_SHIFT
#pragma push_macro("BYTE")
#undef BYTE
#pragma push_macro("ITEM_ASM_BOOLEAN")
#undef ITEM_ASM_BOOLEAN
#pragma push_macro("ITEM_LONG")
#undef ITEM_LONG
#pragma push_macro("KIND_SIZE")
#undef KIND_SIZE
#pragma push_macro("INTEGER")
#undef INTEGER
#pragma push_macro("SAME_FRAME")
#undef SAME_FRAME
#pragma push_macro("NULL")
#undef NULL
#pragma push_macro("ELEMENT_OF")
#undef ELEMENT_OF
#pragma push_macro("FLAGS_SIZE")
#undef FLAGS_SIZE
#pragma push_macro("REFERENCE_KIND")
#undef REFERENCE_KIND
#pragma push_macro("BOOLEAN")
#undef BOOLEAN
#pragma push_macro("APPEND_FRAME")
#undef APPEND_FRAME
#pragma push_macro("TOP")
#undef TOP
#pragma push_macro("ITEM_UNINITIALIZED_THIS")
#undef ITEM_UNINITIALIZED_THIS
#pragma push_macro("ITEM_UNINITIALIZED")
#undef ITEM_UNINITIALIZED
#pragma push_macro("DIM_SHIFT")
#undef DIM_SHIFT
#pragma push_macro("ITEM_ASM_CHAR")
#undef ITEM_ASM_CHAR
#pragma push_macro("ITEM_ASM_BYTE")
#undef ITEM_ASM_BYTE
#pragma push_macro("FLOAT")
#undef FLOAT
#pragma push_macro("DIM_SIZE")
#undef DIM_SIZE
#pragma push_macro("CHAR")
#undef CHAR
#pragma push_macro("CHOP_FRAME")
#undef CHOP_FRAME
#pragma push_macro("UNINITIALIZED_KIND")
#undef UNINITIALIZED_KIND
#pragma push_macro("LOCAL_KIND")
#undef LOCAL_KIND
#pragma push_macro("ITEM_INTEGER")
#undef ITEM_INTEGER
#pragma push_macro("ITEM_ASM_SHORT")
#undef ITEM_ASM_SHORT
#pragma push_macro("VALUE_SIZE")
#undef VALUE_SIZE
#pragma push_macro("DIM_MASK")
#undef DIM_MASK
#pragma push_macro("CONSTANT_KIND")
#undef CONSTANT_KIND
#pragma push_macro("DOUBLE")
#undef DOUBLE
#pragma push_macro("TOP_IF_LONG_OR_DOUBLE_FLAG")
#undef TOP_IF_LONG_OR_DOUBLE_FLAG
#pragma push_macro("LONG")
#undef LONG
#pragma push_macro("ITEM_TOP")
#undef ITEM_TOP
#pragma push_macro("ITEM_FLOAT")
#undef ITEM_FLOAT
#pragma push_macro("KIND_MASK")
#undef KIND_MASK
#pragma push_macro("RESERVED")
#undef RESERVED
#pragma push_macro("ITEM_OBJECT")
#undef ITEM_OBJECT
#pragma push_macro("KIND_SHIFT")
#undef KIND_SHIFT
#pragma push_macro("UNINITIALIZED_THIS")
#undef UNINITIALIZED_THIS
#pragma push_macro("VALUE_MASK")
#undef VALUE_MASK
#pragma push_macro("SHORT")
#undef SHORT
#pragma push_macro("SAME_LOCALS_1_STACK_ITEM_FRAME")
#undef SAME_LOCALS_1_STACK_ITEM_FRAME

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					class ByteVector;
					class Label;
					class MethodWriter;
					class Symbol;
					class SymbolTable;
				}
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {

class Frame : public ::java::lang::Object {
	$class(Frame, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Frame();
	void init$(::jdk::internal::org::objectweb::asm$::Label* owner);
	void accept(::jdk::internal::org::objectweb::asm$::MethodWriter* methodWriter);
	void addInitializedType(int32_t abstractType);
	void copyFrom(::jdk::internal::org::objectweb::asm$::Frame* frame);
	virtual void execute(int32_t opcode, int32_t arg, ::jdk::internal::org::objectweb::asm$::Symbol* argSymbol, ::jdk::internal::org::objectweb::asm$::SymbolTable* symbolTable);
	static int32_t getAbstractTypeFromApiFormat(::jdk::internal::org::objectweb::asm$::SymbolTable* symbolTable, Object$* type);
	static int32_t getAbstractTypeFromDescriptor(::jdk::internal::org::objectweb::asm$::SymbolTable* symbolTable, $String* buffer, int32_t offset);
	static int32_t getAbstractTypeFromInternalName(::jdk::internal::org::objectweb::asm$::SymbolTable* symbolTable, $String* internalName);
	int32_t getConcreteOutputType(int32_t abstractOutputType, int32_t numStack);
	int32_t getInitializedType(::jdk::internal::org::objectweb::asm$::SymbolTable* symbolTable, int32_t abstractType);
	int32_t getInputStackSize();
	int32_t getLocal(int32_t localIndex);
	bool merge(::jdk::internal::org::objectweb::asm$::SymbolTable* symbolTable, ::jdk::internal::org::objectweb::asm$::Frame* dstFrame, int32_t catchTypeIndex);
	static bool merge(::jdk::internal::org::objectweb::asm$::SymbolTable* symbolTable, int32_t sourceType, $ints* dstTypes, int32_t dstIndex);
	int32_t pop();
	void pop(int32_t elements);
	void pop($String* descriptor);
	void push(int32_t abstractType);
	void push(::jdk::internal::org::objectweb::asm$::SymbolTable* symbolTable, $String* descriptor);
	static void putAbstractType(::jdk::internal::org::objectweb::asm$::SymbolTable* symbolTable, int32_t abstractType, ::jdk::internal::org::objectweb::asm$::ByteVector* output);
	void setInputFrameFromApiFormat(::jdk::internal::org::objectweb::asm$::SymbolTable* symbolTable, int32_t numLocal, $ObjectArray* local, int32_t numStack, $ObjectArray* stack);
	void setInputFrameFromDescriptor(::jdk::internal::org::objectweb::asm$::SymbolTable* symbolTable, int32_t access, $String* descriptor, int32_t maxLocals);
	void setLocal(int32_t localIndex, int32_t abstractType);
	static const int32_t SAME_FRAME = 0;
	static const int32_t SAME_LOCALS_1_STACK_ITEM_FRAME = 64;
	static const int32_t RESERVED = 128;
	static const int32_t SAME_LOCALS_1_STACK_ITEM_FRAME_EXTENDED = 247;
	static const int32_t CHOP_FRAME = 248;
	static const int32_t SAME_FRAME_EXTENDED = 251;
	static const int32_t APPEND_FRAME = 252;
	static const int32_t FULL_FRAME = 255;
	static const int32_t ITEM_TOP = 0;
	static const int32_t ITEM_INTEGER = 1;
	static const int32_t ITEM_FLOAT = 2;
	static const int32_t ITEM_DOUBLE = 3;
	static const int32_t ITEM_LONG = 4;
	static const int32_t ITEM_NULL = 5;
	static const int32_t ITEM_UNINITIALIZED_THIS = 6;
	static const int32_t ITEM_OBJECT = 7;
	static const int32_t ITEM_UNINITIALIZED = 8;
	static const int32_t ITEM_ASM_BOOLEAN = 9;
	static const int32_t ITEM_ASM_BYTE = 10;
	static const int32_t ITEM_ASM_CHAR = 11;
	static const int32_t ITEM_ASM_SHORT = 12;
	static const int32_t DIM_SIZE = 6;
	static const int32_t KIND_SIZE = 4;
	static const int32_t FLAGS_SIZE = 2;
	static const int32_t VALUE_SIZE = 20; // 32 - DIM_SIZE - KIND_SIZE - FLAGS_SIZE
	static const int32_t DIM_SHIFT = 26; // KIND_SIZE + FLAGS_SIZE + VALUE_SIZE
	static const int32_t KIND_SHIFT = 22; // FLAGS_SIZE + VALUE_SIZE
	static const int32_t FLAGS_SHIFT = VALUE_SIZE;
	static const int32_t DIM_MASK = 0xFC000000; // ((1 << DIM_SIZE) - 1) << DIM_SHIFT
	static const int32_t KIND_MASK = 62914560; // ((1 << KIND_SIZE) - 1) << KIND_SHIFT
	static const int32_t VALUE_MASK = 1048575; // (1 << VALUE_SIZE) - 1
	static const int32_t ARRAY_OF = 67108864; // +1 << DIM_SHIFT
	static const int32_t ELEMENT_OF = 0xFC000000; // (int32_t)((uint32_t)(-1) << DIM_SHIFT)
	static const int32_t CONSTANT_KIND = 4194304; // 1 << KIND_SHIFT
	static const int32_t REFERENCE_KIND = 8388608; // 2 << KIND_SHIFT
	static const int32_t UNINITIALIZED_KIND = 12582912; // 3 << KIND_SHIFT
	static const int32_t LOCAL_KIND = 16777216; // 4 << KIND_SHIFT
	static const int32_t STACK_KIND = 20971520; // 5 << KIND_SHIFT
	static const int32_t TOP_IF_LONG_OR_DOUBLE_FLAG = 1048576; // 1 << FLAGS_SHIFT
	static const int32_t TOP = 4194304; // CONSTANT_KIND | ITEM_TOP
	static const int32_t BOOLEAN = 4194313; // CONSTANT_KIND | ITEM_ASM_BOOLEAN
	static const int32_t BYTE = 4194314; // CONSTANT_KIND | ITEM_ASM_BYTE
	static const int32_t CHAR = 4194315; // CONSTANT_KIND | ITEM_ASM_CHAR
	static const int32_t SHORT = 4194316; // CONSTANT_KIND | ITEM_ASM_SHORT
	static const int32_t INTEGER = 4194305; // CONSTANT_KIND | ITEM_INTEGER
	static const int32_t FLOAT = 4194306; // CONSTANT_KIND | ITEM_FLOAT
	static const int32_t LONG = 4194308; // CONSTANT_KIND | ITEM_LONG
	static const int32_t DOUBLE = 4194307; // CONSTANT_KIND | ITEM_DOUBLE
	static const int32_t NULL = 4194309; // CONSTANT_KIND | ITEM_NULL
	static const int32_t UNINITIALIZED_THIS = 4194310; // CONSTANT_KIND | ITEM_UNINITIALIZED_THIS
	::jdk::internal::org::objectweb::asm$::Label* owner = nullptr;
	$ints* inputLocals = nullptr;
	$ints* inputStack = nullptr;
	$ints* outputLocals = nullptr;
	$ints* outputStack = nullptr;
	int16_t outputStackStart = 0;
	int16_t outputStackTop = 0;
	int32_t initializationCount = 0;
	$ints* initializations = nullptr;
};

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#pragma pop_macro("FULL_FRAME")
#pragma pop_macro("STACK_KIND")
#pragma pop_macro("SAME_FRAME_EXTENDED")
#pragma pop_macro("ITEM_DOUBLE")
#pragma pop_macro("ITEM_NULL")
#pragma pop_macro("ARRAY_OF")
#pragma pop_macro("SAME_LOCALS_1_STACK_ITEM_FRAME_EXTENDED")
#pragma pop_macro("FLAGS_SHIFT")
#pragma pop_macro("BYTE")
#pragma pop_macro("ITEM_ASM_BOOLEAN")
#pragma pop_macro("ITEM_LONG")
#pragma pop_macro("KIND_SIZE")
#pragma pop_macro("INTEGER")
#pragma pop_macro("SAME_FRAME")
#pragma pop_macro("NULL")
#pragma pop_macro("ELEMENT_OF")
#pragma pop_macro("FLAGS_SIZE")
#pragma pop_macro("REFERENCE_KIND")
#pragma pop_macro("BOOLEAN")
#pragma pop_macro("APPEND_FRAME")
#pragma pop_macro("TOP")
#pragma pop_macro("ITEM_UNINITIALIZED_THIS")
#pragma pop_macro("ITEM_UNINITIALIZED")
#pragma pop_macro("DIM_SHIFT")
#pragma pop_macro("ITEM_ASM_CHAR")
#pragma pop_macro("ITEM_ASM_BYTE")
#pragma pop_macro("FLOAT")
#pragma pop_macro("DIM_SIZE")
#pragma pop_macro("CHAR")
#pragma pop_macro("CHOP_FRAME")
#pragma pop_macro("UNINITIALIZED_KIND")
#pragma pop_macro("LOCAL_KIND")
#pragma pop_macro("ITEM_INTEGER")
#pragma pop_macro("ITEM_ASM_SHORT")
#pragma pop_macro("VALUE_SIZE")
#pragma pop_macro("DIM_MASK")
#pragma pop_macro("CONSTANT_KIND")
#pragma pop_macro("DOUBLE")
#pragma pop_macro("TOP_IF_LONG_OR_DOUBLE_FLAG")
#pragma pop_macro("LONG")
#pragma pop_macro("ITEM_TOP")
#pragma pop_macro("ITEM_FLOAT")
#pragma pop_macro("KIND_MASK")
#pragma pop_macro("RESERVED")
#pragma pop_macro("ITEM_OBJECT")
#pragma pop_macro("KIND_SHIFT")
#pragma pop_macro("UNINITIALIZED_THIS")
#pragma pop_macro("VALUE_MASK")
#pragma pop_macro("SHORT")
#pragma pop_macro("SAME_LOCALS_1_STACK_ITEM_FRAME")

#endif // _jdk_internal_org_objectweb_asm$_Frame_h_