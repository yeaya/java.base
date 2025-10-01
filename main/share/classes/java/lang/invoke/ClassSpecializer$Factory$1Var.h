#ifndef _java_lang_invoke_ClassSpecializer$Factory$1Var_h_
#define _java_lang_invoke_ClassSpecializer$Factory$1Var_h_
//$ class java.lang.invoke.ClassSpecializer$Factory$1Var
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace invoke {
			class ClassSpecializer$Factory;
			class LambdaForm$BasicType;
		}
	}
}
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
					class MethodVisitor;
				}
			}
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class ClassSpecializer$Factory$1Var : public ::java::lang::Object {
	$class(ClassSpecializer$Factory$1Var, 0, ::java::lang::Object)
public:
	ClassSpecializer$Factory$1Var();
	void init$(::java::lang::invoke::ClassSpecializer$Factory* this$1, int32_t index, int32_t slotIndex, $String* val$className);
	void init$(::java::lang::invoke::ClassSpecializer$Factory* this$1, $String* name, $Class* type, ::java::lang::invoke::ClassSpecializer$Factory$1Var* prev, $String* val$className);
	virtual void emitFieldInsn(int32_t asmop, ::jdk::internal::org::objectweb::asm$::MethodVisitor* mv);
	virtual void emitVarInstruction(int32_t asmop, ::jdk::internal::org::objectweb::asm$::MethodVisitor* mv);
	virtual ::java::util::List* fromTypes(::java::util::List* types);
	virtual bool isInHeap();
	virtual ::java::lang::invoke::ClassSpecializer$Factory$1Var* lastOf(::java::util::List* vars);
	virtual int32_t nextIndex();
	virtual int32_t nextSlotIndex();
	virtual int32_t slotSize();
	::java::lang::invoke::ClassSpecializer$Factory* this$1 = nullptr;
	$String* val$className = nullptr;
	static bool $assertionsDisabled;
	int32_t index = 0;
	$String* name = nullptr;
	$Class* type = nullptr;
	$String* desc = nullptr;
	::java::lang::invoke::LambdaForm$BasicType* basicType = nullptr;
	int32_t slotIndex = 0;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_ClassSpecializer$Factory$1Var_h_