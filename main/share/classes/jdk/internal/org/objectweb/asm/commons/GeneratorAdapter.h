#ifndef _jdk_internal_org_objectweb_asm$_commons_GeneratorAdapter_h_
#define _jdk_internal_org_objectweb_asm$_commons_GeneratorAdapter_h_
//$ class jdk.internal.org.objectweb.asm.commons.GeneratorAdapter
//$ extends jdk.internal.org.objectweb.asm.commons.LocalVariablesSorter

#include <java/lang/Array.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/commons/LocalVariablesSorter.h>

#pragma push_macro("ADD")
#undef ADD
#pragma push_macro("BYTE_TYPE")
#undef BYTE_TYPE
#pragma push_macro("LT")
#undef LT
#pragma push_macro("INTEGER_TYPE")
#undef INTEGER_TYPE
#pragma push_macro("ISHL")
#undef ISHL
#pragma push_macro("USHR")
#undef USHR
#pragma push_macro("ISUB")
#undef ISUB
#pragma push_macro("LONG_VALUE")
#undef LONG_VALUE
#pragma push_macro("SHL")
#undef SHL
#pragma push_macro("ISHR")
#undef ISHR
#pragma push_macro("IMUL")
#undef IMUL
#pragma push_macro("IFGE")
#undef IFGE
#pragma push_macro("SHR")
#undef SHR
#pragma push_macro("CHARACTER_TYPE")
#undef CHARACTER_TYPE
#pragma push_macro("SUB")
#undef SUB
#pragma push_macro("MUL")
#undef MUL
#pragma push_macro("INEG")
#undef INEG
#pragma push_macro("IDIV")
#undef IDIV
#pragma push_macro("IFEQ")
#undef IFEQ
#pragma push_macro("EQ")
#undef EQ
#pragma push_macro("FLOAT_VALUE")
#undef FLOAT_VALUE
#pragma push_macro("IREM")
#undef IREM
#pragma push_macro("IFNE")
#undef IFNE
#pragma push_macro("AND")
#undef AND
#pragma push_macro("NE")
#undef NE
#pragma push_macro("SHORT_TYPE")
#undef SHORT_TYPE
#pragma push_macro("IADD")
#undef IADD
#pragma push_macro("XOR")
#undef XOR
#pragma push_macro("INT_VALUE")
#undef INT_VALUE
#pragma push_macro("DOUBLE_TYPE")
#undef DOUBLE_TYPE
#pragma push_macro("IFLT")
#undef IFLT
#pragma push_macro("DOUBLE_VALUE")
#undef DOUBLE_VALUE
#pragma push_macro("FLOAT_TYPE")
#undef FLOAT_TYPE
#pragma push_macro("OBJECT_TYPE")
#undef OBJECT_TYPE
#pragma push_macro("CLASS_DESCRIPTOR")
#undef CLASS_DESCRIPTOR
#pragma push_macro("IUSHR")
#undef IUSHR
#pragma push_macro("GE")
#undef GE
#pragma push_macro("NUMBER_TYPE")
#undef NUMBER_TYPE
#pragma push_macro("LONG_TYPE")
#undef LONG_TYPE
#pragma push_macro("OR")
#undef OR
#pragma push_macro("IFGT")
#undef IFGT
#pragma push_macro("BOOLEAN_TYPE")
#undef BOOLEAN_TYPE
#pragma push_macro("IAND")
#undef IAND
#pragma push_macro("IOR")
#undef IOR
#pragma push_macro("GT")
#undef GT
#pragma push_macro("BOOLEAN_VALUE")
#undef BOOLEAN_VALUE
#pragma push_macro("DIV")
#undef DIV
#pragma push_macro("IXOR")
#undef IXOR
#pragma push_macro("NEG")
#undef NEG
#pragma push_macro("CHAR_VALUE")
#undef CHAR_VALUE
#pragma push_macro("IFLE")
#undef IFLE
#pragma push_macro("LE")
#undef LE
#pragma push_macro("REM")
#undef REM

namespace java {
	namespace util {
		class List;
	}
}
namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					class ClassVisitor;
					class ConstantDynamic;
					class Handle;
					class Label;
					class MethodVisitor;
					class Type;
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
					namespace commons {
						class Method;
						class TableSwitchGenerator;
					}
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
					namespace commons {

class $export GeneratorAdapter : public ::jdk::internal::org::objectweb::asm$::commons::LocalVariablesSorter {
	$class(GeneratorAdapter, 0, ::jdk::internal::org::objectweb::asm$::commons::LocalVariablesSorter)
public:
	GeneratorAdapter();
	void init$(::jdk::internal::org::objectweb::asm$::MethodVisitor* methodVisitor, int32_t access, $String* name, $String* descriptor);
	void init$(int32_t api, ::jdk::internal::org::objectweb::asm$::MethodVisitor* methodVisitor, int32_t access, $String* name, $String* descriptor);
	void init$(int32_t access, ::jdk::internal::org::objectweb::asm$::commons::Method* method, ::jdk::internal::org::objectweb::asm$::MethodVisitor* methodVisitor);
	void init$(int32_t access, ::jdk::internal::org::objectweb::asm$::commons::Method* method, $String* signature, $Array<::jdk::internal::org::objectweb::asm$::Type>* exceptions, ::jdk::internal::org::objectweb::asm$::ClassVisitor* classVisitor);
	virtual void arrayLength();
	virtual void arrayLoad(::jdk::internal::org::objectweb::asm$::Type* type);
	virtual void arrayStore(::jdk::internal::org::objectweb::asm$::Type* type);
	virtual void box(::jdk::internal::org::objectweb::asm$::Type* type);
	virtual void cast(::jdk::internal::org::objectweb::asm$::Type* from, ::jdk::internal::org::objectweb::asm$::Type* to);
	virtual void catchException(::jdk::internal::org::objectweb::asm$::Label* start, ::jdk::internal::org::objectweb::asm$::Label* end, ::jdk::internal::org::objectweb::asm$::Type* exception);
	virtual void checkCast(::jdk::internal::org::objectweb::asm$::Type* type);
	virtual void dup();
	virtual void dup2();
	virtual void dup2X1();
	virtual void dup2X2();
	virtual void dupX1();
	virtual void dupX2();
	virtual void endMethod();
	void fieldInsn(int32_t opcode, ::jdk::internal::org::objectweb::asm$::Type* ownerType, $String* name, ::jdk::internal::org::objectweb::asm$::Type* fieldType);
	virtual int32_t getAccess();
	int32_t getArgIndex(int32_t arg);
	virtual $Array<::jdk::internal::org::objectweb::asm$::Type>* getArgumentTypes();
	static ::jdk::internal::org::objectweb::asm$::Type* getBoxedType(::jdk::internal::org::objectweb::asm$::Type* type);
	virtual void getField(::jdk::internal::org::objectweb::asm$::Type* owner, $String* name, ::jdk::internal::org::objectweb::asm$::Type* type);
	static $StringArray* getInternalNames($Array<::jdk::internal::org::objectweb::asm$::Type>* types);
	virtual ::jdk::internal::org::objectweb::asm$::Type* getLocalType(int32_t local);
	virtual $String* getName();
	virtual ::jdk::internal::org::objectweb::asm$::Type* getReturnType();
	virtual void getStatic(::jdk::internal::org::objectweb::asm$::Type* owner, $String* name, ::jdk::internal::org::objectweb::asm$::Type* type);
	virtual void goTo(::jdk::internal::org::objectweb::asm$::Label* label);
	virtual void ifCmp(::jdk::internal::org::objectweb::asm$::Type* type, int32_t mode, ::jdk::internal::org::objectweb::asm$::Label* label);
	virtual void ifICmp(int32_t mode, ::jdk::internal::org::objectweb::asm$::Label* label);
	virtual void ifNonNull(::jdk::internal::org::objectweb::asm$::Label* label);
	virtual void ifNull(::jdk::internal::org::objectweb::asm$::Label* label);
	virtual void ifZCmp(int32_t mode, ::jdk::internal::org::objectweb::asm$::Label* label);
	virtual void iinc(int32_t local, int32_t amount);
	virtual void instanceOf(::jdk::internal::org::objectweb::asm$::Type* type);
	virtual void invokeConstructor(::jdk::internal::org::objectweb::asm$::Type* type, ::jdk::internal::org::objectweb::asm$::commons::Method* method);
	virtual void invokeDynamic($String* name, $String* descriptor, ::jdk::internal::org::objectweb::asm$::Handle* bootstrapMethodHandle, $ObjectArray* bootstrapMethodArguments);
	void invokeInsn(int32_t opcode, ::jdk::internal::org::objectweb::asm$::Type* type, ::jdk::internal::org::objectweb::asm$::commons::Method* method, bool isInterface);
	virtual void invokeInterface(::jdk::internal::org::objectweb::asm$::Type* owner, ::jdk::internal::org::objectweb::asm$::commons::Method* method);
	virtual void invokeStatic(::jdk::internal::org::objectweb::asm$::Type* owner, ::jdk::internal::org::objectweb::asm$::commons::Method* method);
	virtual void invokeVirtual(::jdk::internal::org::objectweb::asm$::Type* owner, ::jdk::internal::org::objectweb::asm$::commons::Method* method);
	virtual void loadArg(int32_t arg);
	virtual void loadArgArray();
	virtual void loadArgs(int32_t arg, int32_t count);
	virtual void loadArgs();
	void loadInsn(::jdk::internal::org::objectweb::asm$::Type* type, int32_t index);
	virtual void loadLocal(int32_t local);
	virtual void loadLocal(int32_t local, ::jdk::internal::org::objectweb::asm$::Type* type);
	virtual void loadThis();
	virtual void mark(::jdk::internal::org::objectweb::asm$::Label* label);
	virtual ::jdk::internal::org::objectweb::asm$::Label* mark();
	virtual void math(int32_t op, ::jdk::internal::org::objectweb::asm$::Type* type);
	virtual void monitorEnter();
	virtual void monitorExit();
	virtual void newArray(::jdk::internal::org::objectweb::asm$::Type* type);
	virtual void newInstance(::jdk::internal::org::objectweb::asm$::Type* type);
	virtual ::jdk::internal::org::objectweb::asm$::Label* newLabel();
	virtual void not$();
	virtual void pop();
	virtual void pop2();
	virtual void push(bool value);
	virtual void push(int32_t value);
	virtual void push(int64_t value);
	virtual void push(float value);
	virtual void push(double value);
	virtual void push($String* value);
	virtual void push(::jdk::internal::org::objectweb::asm$::Type* value);
	virtual void push(::jdk::internal::org::objectweb::asm$::Handle* handle);
	virtual void push(::jdk::internal::org::objectweb::asm$::ConstantDynamic* constantDynamic);
	virtual void putField(::jdk::internal::org::objectweb::asm$::Type* owner, $String* name, ::jdk::internal::org::objectweb::asm$::Type* type);
	virtual void putStatic(::jdk::internal::org::objectweb::asm$::Type* owner, $String* name, ::jdk::internal::org::objectweb::asm$::Type* type);
	virtual void ret(int32_t local);
	virtual void returnValue();
	virtual void setLocalType(int32_t local, ::jdk::internal::org::objectweb::asm$::Type* type) override;
	virtual void storeArg(int32_t arg);
	void storeInsn(::jdk::internal::org::objectweb::asm$::Type* type, int32_t index);
	virtual void storeLocal(int32_t local);
	virtual void storeLocal(int32_t local, ::jdk::internal::org::objectweb::asm$::Type* type);
	virtual void swap();
	virtual void swap(::jdk::internal::org::objectweb::asm$::Type* prev, ::jdk::internal::org::objectweb::asm$::Type* type);
	virtual void tableSwitch($ints* keys, ::jdk::internal::org::objectweb::asm$::commons::TableSwitchGenerator* generator);
	virtual void tableSwitch($ints* keys, ::jdk::internal::org::objectweb::asm$::commons::TableSwitchGenerator* generator, bool useTable);
	virtual void throwException();
	virtual void throwException(::jdk::internal::org::objectweb::asm$::Type* type, $String* message);
	void typeInsn(int32_t opcode, ::jdk::internal::org::objectweb::asm$::Type* type);
	virtual void unbox(::jdk::internal::org::objectweb::asm$::Type* type);
	virtual void valueOf(::jdk::internal::org::objectweb::asm$::Type* type);
	static $String* CLASS_DESCRIPTOR;
	static ::jdk::internal::org::objectweb::asm$::Type* BYTE_TYPE;
	static ::jdk::internal::org::objectweb::asm$::Type* BOOLEAN_TYPE;
	static ::jdk::internal::org::objectweb::asm$::Type* SHORT_TYPE;
	static ::jdk::internal::org::objectweb::asm$::Type* CHARACTER_TYPE;
	static ::jdk::internal::org::objectweb::asm$::Type* INTEGER_TYPE;
	static ::jdk::internal::org::objectweb::asm$::Type* FLOAT_TYPE;
	static ::jdk::internal::org::objectweb::asm$::Type* LONG_TYPE;
	static ::jdk::internal::org::objectweb::asm$::Type* DOUBLE_TYPE;
	static ::jdk::internal::org::objectweb::asm$::Type* NUMBER_TYPE;
	static ::jdk::internal::org::objectweb::asm$::Type* OBJECT_TYPE;
	static ::jdk::internal::org::objectweb::asm$::commons::Method* BOOLEAN_VALUE;
	static ::jdk::internal::org::objectweb::asm$::commons::Method* CHAR_VALUE;
	static ::jdk::internal::org::objectweb::asm$::commons::Method* INT_VALUE;
	static ::jdk::internal::org::objectweb::asm$::commons::Method* FLOAT_VALUE;
	static ::jdk::internal::org::objectweb::asm$::commons::Method* LONG_VALUE;
	static ::jdk::internal::org::objectweb::asm$::commons::Method* DOUBLE_VALUE;
	static const int32_t ADD = ::jdk::internal::org::objectweb::asm$::Opcodes::IADD;
	static const int32_t SUB = ::jdk::internal::org::objectweb::asm$::Opcodes::ISUB;
	static const int32_t MUL = ::jdk::internal::org::objectweb::asm$::Opcodes::IMUL;
	static const int32_t DIV = ::jdk::internal::org::objectweb::asm$::Opcodes::IDIV;
	static const int32_t REM = ::jdk::internal::org::objectweb::asm$::Opcodes::IREM;
	static const int32_t NEG = ::jdk::internal::org::objectweb::asm$::Opcodes::INEG;
	static const int32_t SHL = ::jdk::internal::org::objectweb::asm$::Opcodes::ISHL;
	static const int32_t SHR = ::jdk::internal::org::objectweb::asm$::Opcodes::ISHR;
	static const int32_t USHR = ::jdk::internal::org::objectweb::asm$::Opcodes::IUSHR;
	static const int32_t AND = ::jdk::internal::org::objectweb::asm$::Opcodes::IAND;
	static const int32_t OR = ::jdk::internal::org::objectweb::asm$::Opcodes::IOR;
	static const int32_t XOR = ::jdk::internal::org::objectweb::asm$::Opcodes::IXOR;
	static const int32_t EQ = ::jdk::internal::org::objectweb::asm$::Opcodes::IFEQ;
	static const int32_t NE = ::jdk::internal::org::objectweb::asm$::Opcodes::IFNE;
	static const int32_t LT = ::jdk::internal::org::objectweb::asm$::Opcodes::IFLT;
	static const int32_t GE = ::jdk::internal::org::objectweb::asm$::Opcodes::IFGE;
	static const int32_t GT = ::jdk::internal::org::objectweb::asm$::Opcodes::IFGT;
	static const int32_t LE = ::jdk::internal::org::objectweb::asm$::Opcodes::IFLE;
	int32_t access = 0;
	$String* name = nullptr;
	::jdk::internal::org::objectweb::asm$::Type* returnType = nullptr;
	$Array<::jdk::internal::org::objectweb::asm$::Type>* argumentTypes = nullptr;
	::java::util::List* localTypes = nullptr;
};

					} // commons
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#pragma pop_macro("ADD")
#pragma pop_macro("BYTE_TYPE")
#pragma pop_macro("LT")
#pragma pop_macro("INTEGER_TYPE")
#pragma pop_macro("ISHL")
#pragma pop_macro("USHR")
#pragma pop_macro("ISUB")
#pragma pop_macro("LONG_VALUE")
#pragma pop_macro("SHL")
#pragma pop_macro("ISHR")
#pragma pop_macro("IMUL")
#pragma pop_macro("IFGE")
#pragma pop_macro("SHR")
#pragma pop_macro("CHARACTER_TYPE")
#pragma pop_macro("SUB")
#pragma pop_macro("MUL")
#pragma pop_macro("INEG")
#pragma pop_macro("IDIV")
#pragma pop_macro("IFEQ")
#pragma pop_macro("EQ")
#pragma pop_macro("FLOAT_VALUE")
#pragma pop_macro("IREM")
#pragma pop_macro("IFNE")
#pragma pop_macro("AND")
#pragma pop_macro("NE")
#pragma pop_macro("SHORT_TYPE")
#pragma pop_macro("IADD")
#pragma pop_macro("XOR")
#pragma pop_macro("INT_VALUE")
#pragma pop_macro("DOUBLE_TYPE")
#pragma pop_macro("IFLT")
#pragma pop_macro("DOUBLE_VALUE")
#pragma pop_macro("FLOAT_TYPE")
#pragma pop_macro("OBJECT_TYPE")
#pragma pop_macro("CLASS_DESCRIPTOR")
#pragma pop_macro("IUSHR")
#pragma pop_macro("GE")
#pragma pop_macro("NUMBER_TYPE")
#pragma pop_macro("LONG_TYPE")
#pragma pop_macro("OR")
#pragma pop_macro("IFGT")
#pragma pop_macro("BOOLEAN_TYPE")
#pragma pop_macro("IAND")
#pragma pop_macro("IOR")
#pragma pop_macro("GT")
#pragma pop_macro("BOOLEAN_VALUE")
#pragma pop_macro("DIV")
#pragma pop_macro("IXOR")
#pragma pop_macro("NEG")
#pragma pop_macro("CHAR_VALUE")
#pragma pop_macro("IFLE")
#pragma pop_macro("LE")
#pragma pop_macro("REM")

#endif // _jdk_internal_org_objectweb_asm$_commons_GeneratorAdapter_h_