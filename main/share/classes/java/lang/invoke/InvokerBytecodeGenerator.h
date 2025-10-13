#ifndef _java_lang_invoke_InvokerBytecodeGenerator_h_
#define _java_lang_invoke_InvokerBytecodeGenerator_h_
//$ class java.lang.invoke.InvokerBytecodeGenerator
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CLASS_PREFIX")
#undef CLASS_PREFIX
#pragma push_macro("CLS")
#undef CLS
#pragma push_macro("DONTINLINE_SIG")
#undef DONTINLINE_SIG
#pragma push_macro("DUMP_CLASS_FILES_COUNTERS")
#undef DUMP_CLASS_FILES_COUNTERS
#pragma push_macro("DUMP_CLASS_FILES_DIR")
#undef DUMP_CLASS_FILES_DIR
#pragma push_macro("FORCEINLINE_SIG")
#undef FORCEINLINE_SIG
#pragma push_macro("HIDDEN_SIG")
#undef HIDDEN_SIG
#pragma push_macro("HOST_CLASS")
#undef HOST_CLASS
#pragma push_macro("INJECTEDPROFILE_SIG")
#undef INJECTEDPROFILE_SIG
#pragma push_macro("INVOKER_SUPER_NAME")
#undef INVOKER_SUPER_NAME
#pragma push_macro("LF")
#undef LF
#pragma push_macro("LFN")
#undef LFN
#pragma push_macro("LFN_SIG")
#undef LFN_SIG
#pragma push_macro("LF_COMPILED_SIG")
#undef LF_COMPILED_SIG
#pragma push_macro("LF_SIG")
#undef LF_SIG
#pragma push_macro("LLV_SIG")
#undef LLV_SIG
#pragma push_macro("LL_SIG")
#undef LL_SIG
#pragma push_macro("LOOKUP")
#undef LOOKUP
#pragma push_macro("LOOP_CLAUSES")
#undef LOOP_CLAUSES
#pragma push_macro("MEMBERNAME_FACTORY")
#undef MEMBERNAME_FACTORY
#pragma push_macro("MH")
#undef MH
#pragma push_macro("MHARY2")
#undef MHARY2
#pragma push_macro("MHI")
#undef MHI
#pragma push_macro("MH_SIG")
#undef MH_SIG
#pragma push_macro("OBJ")
#undef OBJ
#pragma push_macro("OBJARY")
#undef OBJARY
#pragma push_macro("SOURCE_PREFIX")
#undef SOURCE_PREFIX
#pragma push_macro("STATICALLY_INVOCABLE_PACKAGES")
#undef STATICALLY_INVOCABLE_PACKAGES

namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace lang {
		namespace invoke {
			class LambdaForm;
			class LambdaForm$BasicType;
			class LambdaForm$Name;
			class LambdaForm$NamedFunction;
			class MemberName;
			class MemberName$Factory;
			class MethodHandles$Lookup;
			class MethodType;
			class MethodTypeForm;
		}
	}
}
namespace java {
	namespace util {
		class HashMap;
		class List;
	}
}
namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					class ClassWriter;
					class MethodVisitor;
				}
			}
		}
	}
}
namespace sun {
	namespace invoke {
		namespace util {
			class Wrapper;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class InvokerBytecodeGenerator : public ::java::lang::Object {
	$class(InvokerBytecodeGenerator, 0, ::java::lang::Object)
public:
	InvokerBytecodeGenerator();
	void init$(::java::lang::invoke::LambdaForm* lambdaForm, int32_t localsMapSize, $String* name, $String* invokerName, ::java::lang::invoke::MethodType* invokerType);
	void init$($String* name, $String* invokerName, ::java::lang::invoke::MethodType* invokerType);
	void init$($String* name, ::java::lang::invoke::LambdaForm* form, ::java::lang::invoke::MethodType* invokerType);
	void init$($String* name, $String* invokerName, ::java::lang::invoke::LambdaForm* form, ::java::lang::invoke::MethodType* invokerType);
	virtual void addMethod();
	int32_t arrayInsnOpcode(int8_t tcode, int32_t aaop);
	int8_t arrayTypeCode(::sun::invoke::util::Wrapper* elementType);
	bool assertStaticType($Class* cls, ::java::lang::invoke::LambdaForm$Name* n);
	void bogusMethod(Object$* os);
	bool checkActualReceiver();
	static bool checkClassName($String* cn);
	virtual $String* classData(Object$* arg);
	virtual ::java::util::List* classDataValues();
	::jdk::internal::org::objectweb::asm$::ClassWriter* classFilePrologue();
	static $String* className($String* cn);
	static void clinit(::jdk::internal::org::objectweb::asm$::ClassWriter* cw, $String* className, ::java::util::List* classData);
	static $String* debugString(Object$* arg);
	void emitAloadInsn(int32_t index);
	virtual void emitArrayLength(::java::lang::invoke::LambdaForm$Name* name);
	virtual void emitArrayLoad(::java::lang::invoke::LambdaForm$Name* name);
	virtual void emitArrayOp(::java::lang::invoke::LambdaForm$Name* name, int32_t arrayOpcode);
	virtual void emitArrayStore(::java::lang::invoke::LambdaForm$Name* name);
	void emitAstoreInsn(int32_t index);
	void emitBoxing(::sun::invoke::util::Wrapper* wrapper);
	void emitConst(Object$* con);
	::java::lang::invoke::LambdaForm$Name* emitGuardWithCatch(int32_t pos);
	void emitI2X(::sun::invoke::util::Wrapper* type);
	void emitIconstInsn(int32_t cst);
	static void emitIconstInsn(::jdk::internal::org::objectweb::asm$::MethodVisitor* mv, int32_t cst);
	void emitImplicitConversion(::java::lang::invoke::LambdaForm$BasicType* ptype, $Class* pclass, Object$* arg);
	virtual void emitInvoke(::java::lang::invoke::LambdaForm$Name* name);
	void emitLoadInsn(::java::lang::invoke::LambdaForm$BasicType* type, int32_t index);
	::java::lang::invoke::LambdaForm$Name* emitLoop(int32_t pos);
	void emitLoopHandleInvoke(::java::lang::invoke::LambdaForm$Name* holder, int32_t handles, int32_t clause, ::java::lang::invoke::LambdaForm$Name* args, bool pushLocalState, ::java::lang::invoke::MethodType* type, $ClassArray* loopLocalStateTypes, int32_t clauseDataSlot, int32_t firstLoopStateSlot);
	void emitPopInsn(::java::lang::invoke::LambdaForm$BasicType* type);
	void emitPrimCast(::sun::invoke::util::Wrapper* from, ::sun::invoke::util::Wrapper* to);
	void emitPushArgument(::java::lang::invoke::LambdaForm$Name* name, int32_t paramIndex);
	void emitPushArgument($Class* ptype, Object$* arg);
	void emitPushArguments(::java::lang::invoke::LambdaForm$Name* args, int32_t start);
	void emitPushClauseArray(int32_t clauseDataSlot, int32_t which);
	void emitReferenceCast($Class* cls, Object$* arg);
	void emitReturn(::java::lang::invoke::LambdaForm$Name* onStack);
	void emitReturnInsn(::java::lang::invoke::LambdaForm$BasicType* type);
	::java::lang::invoke::LambdaForm$Name* emitSelectAlternative(::java::lang::invoke::LambdaForm$Name* selectAlternativeName, ::java::lang::invoke::LambdaForm$Name* invokeBasicName);
	virtual void emitStaticInvoke(::java::lang::invoke::LambdaForm$Name* name);
	virtual void emitStaticInvoke(::java::lang::invoke::MemberName* member, ::java::lang::invoke::LambdaForm$Name* name);
	void emitStoreInsn(::java::lang::invoke::LambdaForm$BasicType* type, int32_t index);
	void emitStoreResult(::java::lang::invoke::LambdaForm$Name* name);
	::java::lang::invoke::LambdaForm$Name* emitTableSwitch(int32_t pos, int32_t numCases);
	::java::lang::invoke::LambdaForm$Name* emitTryFinally(int32_t pos);
	void emitUnboxing(::sun::invoke::util::Wrapper* wrapper);
	void emitX2I(::sun::invoke::util::Wrapper* type);
	void emitZero(::java::lang::invoke::LambdaForm$BasicType* type);
	int32_t extendLocalsMap($ClassArray* types);
	static ::java::lang::invoke::MemberName* generateCustomizedCode(::java::lang::invoke::LambdaForm* form, ::java::lang::invoke::MethodType* invokerType);
	$bytes* generateCustomizedCodeBytes();
	static ::java::lang::invoke::MemberName* generateLambdaFormInterpreterEntryPoint(::java::lang::invoke::MethodType* mt);
	$bytes* generateLambdaFormInterpreterEntryPointBytes();
	static ::java::lang::invoke::MemberName* generateNamedFunctionInvoker(::java::lang::invoke::MethodTypeForm* typeForm);
	$bytes* generateNamedFunctionInvokerImpl(::java::lang::invoke::MethodTypeForm* typeForm);
	$String* getInternalName($Class* c);
	static bool isStaticallyInvocable($Array<::java::lang::invoke::LambdaForm$NamedFunction>* functions);
	static bool isStaticallyInvocable(::java::lang::invoke::LambdaForm$Name* name);
	static bool isStaticallyInvocable(::java::lang::invoke::MemberName* member);
	static bool isStaticallyInvocableType(::java::lang::invoke::MethodType* mtype);
	static bool isStaticallyNameable($Class* cls);
	static bool lambda$emitLoop$0(::java::lang::invoke::LambdaForm$BasicType* bt);
	static $ClassArray* lambda$emitLoop$1(int32_t x$0);
	int32_t loadInsnOpcode(::java::lang::invoke::LambdaForm$BasicType* type);
	::java::lang::invoke::MemberName* loadMethod($bytes* classFile);
	static ::java::lang::invoke::MethodHandles$Lookup* lookup();
	static ::java::lang::invoke::MemberName* lookupPregenerated(::java::lang::invoke::LambdaForm* form, ::java::lang::invoke::MethodType* invokerType);
	static $String* makeDumpableClassName($String* className);
	void maybeDump($bytes* classFile);
	static void maybeDump($String* className, $bytes* classFile);
	void methodEpilogue();
	void methodPrologue();
	static int32_t popInsnOpcode(::java::lang::invoke::LambdaForm$BasicType* type);
	virtual int32_t refKindOpcode(int8_t refKind);
	static ::java::lang::invoke::MemberName* resolveFrom($String* name, ::java::lang::invoke::MethodType* type, $Class* holder);
	static ::java::lang::invoke::MemberName* resolveInvokerMember($Class* invokerClass, $String* name, ::java::lang::invoke::MethodType* type);
	virtual void setClassWriter(::jdk::internal::org::objectweb::asm$::ClassWriter* cw);
	int32_t storeInsnOpcode(::java::lang::invoke::LambdaForm$BasicType* type);
	$bytes* toByteArray();
	static bool $assertionsDisabled;
	static $String* MH;
	static $String* MHI;
	static $String* LF;
	static $String* LFN;
	static $String* CLS;
	static $String* OBJ;
	static $String* OBJARY;
	static $String* LOOP_CLAUSES;
	static $String* MHARY2;
	static $String* MH_SIG;
	static $String* LF_SIG;
	static $String* LFN_SIG;
	static $String* LL_SIG;
	static $String* LLV_SIG;
	static $String* CLASS_PREFIX;
	static $String* SOURCE_PREFIX;
	static $String* INVOKER_SUPER_NAME;
	$String* name = nullptr;
	$String* className$ = nullptr;
	::java::lang::invoke::LambdaForm* lambdaForm = nullptr;
	$String* invokerName = nullptr;
	::java::lang::invoke::MethodType* invokerType = nullptr;
	$ints* localsMap = nullptr;
	$ClassArray* localClasses = nullptr;
	::jdk::internal::org::objectweb::asm$::ClassWriter* cw = nullptr;
	::jdk::internal::org::objectweb::asm$::MethodVisitor* mv = nullptr;
	::java::util::List* classData$ = nullptr;
	$Class* lastClass = nullptr;
	$String* lastInternalName = nullptr;
	static ::java::lang::invoke::MemberName$Factory* MEMBERNAME_FACTORY;
	static $Class* HOST_CLASS;
	static ::java::lang::invoke::MethodHandles$Lookup* LOOKUP;
	static ::java::util::HashMap* DUMP_CLASS_FILES_COUNTERS;
	static ::java::io::File* DUMP_CLASS_FILES_DIR;
	static $String* DONTINLINE_SIG;
	static $String* FORCEINLINE_SIG;
	static $String* HIDDEN_SIG;
	static $String* INJECTEDPROFILE_SIG;
	static $String* LF_COMPILED_SIG;
	static $ClassArray* STATICALLY_INVOCABLE_PACKAGES;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("CLASS_PREFIX")
#pragma pop_macro("CLS")
#pragma pop_macro("DONTINLINE_SIG")
#pragma pop_macro("DUMP_CLASS_FILES_COUNTERS")
#pragma pop_macro("DUMP_CLASS_FILES_DIR")
#pragma pop_macro("FORCEINLINE_SIG")
#pragma pop_macro("HIDDEN_SIG")
#pragma pop_macro("HOST_CLASS")
#pragma pop_macro("INJECTEDPROFILE_SIG")
#pragma pop_macro("INVOKER_SUPER_NAME")
#pragma pop_macro("LF")
#pragma pop_macro("LFN")
#pragma pop_macro("LFN_SIG")
#pragma pop_macro("LF_COMPILED_SIG")
#pragma pop_macro("LF_SIG")
#pragma pop_macro("LLV_SIG")
#pragma pop_macro("LL_SIG")
#pragma pop_macro("LOOKUP")
#pragma pop_macro("LOOP_CLAUSES")
#pragma pop_macro("MEMBERNAME_FACTORY")
#pragma pop_macro("MH")
#pragma pop_macro("MHARY2")
#pragma pop_macro("MHI")
#pragma pop_macro("MH_SIG")
#pragma pop_macro("OBJ")
#pragma pop_macro("OBJARY")
#pragma pop_macro("SOURCE_PREFIX")
#pragma pop_macro("STATICALLY_INVOCABLE_PACKAGES")

#endif // _java_lang_invoke_InvokerBytecodeGenerator_h_