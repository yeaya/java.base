#ifndef _java_lang_invoke_MethodHandleImpl_h_
#define _java_lang_invoke_MethodHandleImpl_h_
//$ class java.lang.invoke.MethodHandleImpl
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ARRAYS")
#undef ARRAYS
#pragma push_macro("FAKE_METHOD_HANDLE_INVOKE")
#undef FAKE_METHOD_HANDLE_INVOKE
#pragma push_macro("HANDLES")
#undef HANDLES
#pragma push_macro("MAX_JVM_ARITY")
#undef MAX_JVM_ARITY
#pragma push_macro("MH_LIMIT")
#undef MH_LIMIT
#pragma push_macro("NFS")
#undef NFS
#pragma push_macro("NF_LIMIT")
#undef NF_LIMIT

namespace java {
	namespace lang {
		class InternalError;
		class Iterable;
		class Throwable;
	}
}
namespace java {
	namespace lang {
		namespace invoke {
			class BoundMethodHandle$SpeciesData;
			class LambdaForm;
			class LambdaForm$BasicType;
			class LambdaForm$NamedFunction;
			class MemberName;
			class MethodHandle;
			class MethodHandleImpl$ArrayAccess;
			class MethodHandleImpl$CasesHolder;
			class MethodHandleImpl$Intrinsic;
			class MethodHandleImpl$LoopClauses;
			class MethodType;
		}
	}
}
namespace java {
	namespace util {
		class Iterator;
		class List;
	}
}
namespace sun {
	namespace invoke {
		namespace empty {
			class Empty;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class MethodHandleImpl : public ::java::lang::Object {
	$class(MethodHandleImpl, 0, ::java::lang::Object)
public:
	MethodHandleImpl();
	void init$();
	static bool assertCorrectArity(::java::lang::invoke::MethodHandle* mh, int32_t arity);
	static void assertSame(Object$* mh1, Object$* mh2);
	static ::java::lang::invoke::MethodHandle* bindCaller(::java::lang::invoke::MethodHandle* mh, $Class* hostClass);
	static void checkSpreadArgument(Object$* av, int32_t n);
	static $ObjectArray* computeValueConversions(::java::lang::invoke::MethodType* srcType, ::java::lang::invoke::MethodType* dstType, bool strict, bool monobox);
	static int32_t countNonNull($ObjectArray* array);
	static bool countedLoopPredicate(int32_t limit, int32_t counter);
	static int32_t countedLoopStep(int32_t limit, int32_t counter);
	static ::java::lang::invoke::LambdaForm$NamedFunction* createFunction(int8_t func);
	static ::java::lang::invoke::MethodHandle* fakeMethodHandleInvoke(::java::lang::invoke::MemberName* method);
	static ::java::lang::invoke::MethodHandle* fakeVarHandleInvoke(::java::lang::invoke::MemberName* method);
	static ::java::lang::invoke::MethodHandle* getConstantHandle(int32_t idx);
	static ::java::lang::invoke::LambdaForm$NamedFunction* getFunction(int8_t func);
	static $Object* guardWithCatch(::java::lang::invoke::MethodHandle* target, $Class* exType, ::java::lang::invoke::MethodHandle* catcher, $ObjectArray* av);
	static ::java::util::Iterator* initIterator(::java::lang::Iterable* it);
	static bool isCompileConstant(Object$* obj);
	static $Object* iterateNext(::java::util::Iterator* it);
	static bool iteratePredicate(::java::util::Iterator* it);
	static bool lambda$loop$2(::java::lang::invoke::MethodHandle* h);
	static $Class* lambda$makeLoop$0(::java::lang::invoke::MethodHandle* h);
	static $Array<::java::lang::invoke::LambdaForm$BasicType>* lambda$makeLoop$1(int32_t x$0);
	static $Object* loop($Array<::java::lang::invoke::LambdaForm$BasicType>* localTypes, ::java::lang::invoke::MethodHandleImpl$LoopClauses* clauseData, $ObjectArray* av);
	static ::java::lang::invoke::MethodHandle* makeArrayElementAccessor($Class* arrayClass, ::java::lang::invoke::MethodHandleImpl$ArrayAccess* access);
	static ::java::lang::invoke::MethodHandle* makeBlockInliningWrapper(::java::lang::invoke::MethodHandle* target);
	static ::java::lang::invoke::MethodHandle* makeCollector($Class* arrayType, int32_t parameterCount);
	static ::java::lang::invoke::LambdaForm* makeCollectorForm(::java::lang::invoke::MethodType* basicType, $Class* arrayType);
	static ::java::lang::invoke::MethodHandle* makeConstantHandle(int32_t idx);
	static ::java::lang::invoke::MethodHandle* makeGuardWithCatch(::java::lang::invoke::MethodHandle* target, $Class* exType, ::java::lang::invoke::MethodHandle* catcher);
	static ::java::lang::invoke::LambdaForm* makeGuardWithCatchForm(::java::lang::invoke::MethodType* basicType);
	static ::java::lang::invoke::MethodHandle* makeGuardWithTest(::java::lang::invoke::MethodHandle* test, ::java::lang::invoke::MethodHandle* target, ::java::lang::invoke::MethodHandle* fallback);
	static ::java::lang::invoke::LambdaForm* makeGuardWithTestForm(::java::lang::invoke::MethodType* basicType);
	static ::java::lang::invoke::MethodHandle* makeIntrinsic(::java::lang::invoke::MethodHandle* target, ::java::lang::invoke::MethodHandleImpl$Intrinsic* intrinsicName);
	static ::java::lang::invoke::MethodHandle* makeIntrinsic(::java::lang::invoke::MethodHandle* target, ::java::lang::invoke::MethodHandleImpl$Intrinsic* intrinsicName, Object$* intrinsicData);
	static ::java::lang::invoke::MethodHandle* makeIntrinsic(::java::lang::invoke::MethodType* type, ::java::lang::invoke::LambdaForm* form, ::java::lang::invoke::MethodHandleImpl$Intrinsic* intrinsicName);
	static ::java::lang::invoke::MethodHandle* makeLoop($Class* tloop, ::java::util::List* targs, ::java::util::List* init, ::java::util::List* step, ::java::util::List* pred, ::java::util::List* fini);
	static ::java::lang::invoke::LambdaForm* makeLoopForm(::java::lang::invoke::MethodType* basicType, $Array<::java::lang::invoke::LambdaForm$BasicType>* localVarTypes);
	static ::java::lang::invoke::MethodHandle* makePairwiseConvert(::java::lang::invoke::MethodHandle* target, ::java::lang::invoke::MethodType* srcType, bool strict, bool monobox);
	static ::java::lang::invoke::MethodHandle* makePairwiseConvert(::java::lang::invoke::MethodHandle* target, ::java::lang::invoke::MethodType* srcType, bool strict);
	static ::java::lang::invoke::MethodHandle* makePairwiseConvertByEditor(::java::lang::invoke::MethodHandle* target, ::java::lang::invoke::MethodType* srcType, bool strict, bool monobox);
	static ::java::lang::invoke::MethodHandle* makeTableSwitch(::java::lang::invoke::MethodType* type, ::java::lang::invoke::MethodHandle* defaultCase, $Array<::java::lang::invoke::MethodHandle>* caseActions);
	static ::java::lang::invoke::LambdaForm* makeTableSwitchForm(::java::lang::invoke::MethodType* basicType, ::java::lang::invoke::BoundMethodHandle$SpeciesData* data, int32_t numCases);
	static ::java::lang::invoke::MethodHandle* makeTryFinally(::java::lang::invoke::MethodHandle* target, ::java::lang::invoke::MethodHandle* cleanup, $Class* rtype, ::java::util::List* argTypes);
	static ::java::lang::invoke::LambdaForm* makeTryFinallyForm(::java::lang::invoke::MethodType* basicType);
	static ::java::lang::invoke::MethodHandle* makeVarargsCollector(::java::lang::invoke::MethodHandle* target, $Class* arrayType);
	static ::java::lang::invoke::MethodHandle* makeWrappedMember(::java::lang::invoke::MethodHandle* target, ::java::lang::invoke::MemberName* member, bool isInvokeSpecial);
	static $ObjectArray* prepend($ObjectArray* array, $ObjectArray* elems);
	static ::java::lang::invoke::MethodHandle* profile(::java::lang::invoke::MethodHandle* target);
	static bool profileBoolean(bool result, $ints* counters);
	static ::java::lang::invoke::MethodHandle* selectAlternative(bool testResult, ::java::lang::invoke::MethodHandle* target, ::java::lang::invoke::MethodHandle* fallback);
	static ::java::lang::invoke::MethodHandle* setCachedHandle(int32_t idx, ::java::lang::invoke::MethodHandle* method);
	static $Object* tableSwitch(int32_t input, ::java::lang::invoke::MethodHandle* defaultCase, ::java::lang::invoke::MethodHandleImpl$CasesHolder* holder, $ObjectArray* args);
	static ::java::lang::invoke::MethodHandle* throwException(::java::lang::invoke::MethodType* type);
	static ::sun::invoke::empty::Empty* throwException($Throwable* t);
	static $Array<::java::lang::invoke::MethodHandle>* toArray(::java::util::List* l);
	static $Object* tryFinally(::java::lang::invoke::MethodHandle* target, ::java::lang::invoke::MethodHandle* cleanup, $ObjectArray* av);
	static ::java::lang::invoke::MethodHandle* unboxResultHandle($Class* returnType);
	static ::java::lang::InternalError* unmatchedArrayAccess(::java::lang::invoke::MethodHandleImpl$ArrayAccess* a);
	static $Object* valueConversion($Class* src, $Class* dst, bool strict, bool monobox);
	static ::java::lang::invoke::MethodHandle* varargsArray(int32_t nargs);
	static ::java::lang::invoke::MethodHandle* varargsArray($Class* arrayType, int32_t nargs);
	static bool $assertionsDisabled;
	static $Array<::java::lang::invoke::MethodHandle>* FAKE_METHOD_HANDLE_INVOKE;
	static $Array<::java::lang::invoke::MethodHandle>* ARRAYS;
	static const int32_t MAX_JVM_ARITY = 255;
	static const int8_t NF_checkSpreadArgument = 0;
	static const int8_t NF_guardWithCatch = 1;
	static const int8_t NF_throwException = 2;
	static const int8_t NF_tryFinally = 3;
	static const int8_t NF_loop = 4;
	static const int8_t NF_profileBoolean = 5;
	static const int8_t NF_tableSwitch = 6;
	static const int8_t NF_LIMIT = 7;
	static $Array<::java::lang::invoke::LambdaForm$NamedFunction>* NFS;
	static const int32_t MH_cast = 0;
	static const int32_t MH_selectAlternative = 1;
	static const int32_t MH_countedLoopPred = 2;
	static const int32_t MH_countedLoopStep = 3;
	static const int32_t MH_initIterator = 4;
	static const int32_t MH_iteratePred = 5;
	static const int32_t MH_iterateNext = 6;
	static const int32_t MH_Array_newInstance = 7;
	static const int32_t MH_LIMIT = 8;
	static $Array<::java::lang::invoke::MethodHandle>* HANDLES;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("ARRAYS")
#pragma pop_macro("FAKE_METHOD_HANDLE_INVOKE")
#pragma pop_macro("HANDLES")
#pragma pop_macro("MAX_JVM_ARITY")
#pragma pop_macro("MH_LIMIT")
#pragma pop_macro("NFS")
#pragma pop_macro("NF_LIMIT")

#endif // _java_lang_invoke_MethodHandleImpl_h_