#ifndef _java_lang_invoke_LambdaForm_h_
#define _java_lang_invoke_LambdaForm_h_
//$ class java.lang.invoke.LambdaForm
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("COMPILE_THRESHOLD")
#undef COMPILE_THRESHOLD
#pragma push_macro("DEBUG_NAMES")
#undef DEBUG_NAMES
#pragma push_macro("DEBUG_NAME_COUNTERS")
#undef DEBUG_NAME_COUNTERS
#pragma push_macro("IMPL_NAMES")
#undef IMPL_NAMES
#pragma push_macro("INTERNED_ARGUMENTS")
#undef INTERNED_ARGUMENTS
#pragma push_macro("INTERNED_ARGUMENT_LIMIT")
#undef INTERNED_ARGUMENT_LIMIT
#pragma push_macro("LAST_RESULT")
#undef LAST_RESULT
#pragma push_macro("LF_FAILED")
#undef LF_FAILED
#pragma push_macro("TRACE_INTERPRETER")
#undef TRACE_INTERPRETER
#pragma push_macro("VOID_RESULT")
#undef VOID_RESULT

namespace java {
	namespace lang {
		namespace invoke {
			class LambdaForm$BasicType;
			class LambdaForm$Kind;
			class LambdaForm$Name;
			class LambdaForm$NamedFunction;
			class LambdaFormEditor;
			class MemberName;
			class MemberName$Factory;
			class MethodHandle;
			class MethodType;
		}
	}
}
namespace java {
	namespace util {
		class HashMap;
	}
}
namespace jdk {
	namespace internal {
		namespace perf {
			class PerfCounter;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class LambdaForm : public ::java::lang::Object {
	$class(LambdaForm, 0, ::java::lang::Object)
public:
	LambdaForm();
	void init$(int32_t arity, $Array<::java::lang::invoke::LambdaForm$Name>* names, int32_t result);
	void init$(int32_t arity, $Array<::java::lang::invoke::LambdaForm$Name>* names, int32_t result, ::java::lang::invoke::LambdaForm$Kind* kind);
	void init$(int32_t arity, $Array<::java::lang::invoke::LambdaForm$Name>* names, int32_t result, bool forceInline, ::java::lang::invoke::MethodHandle* customized);
	void init$(int32_t arity, $Array<::java::lang::invoke::LambdaForm$Name>* names, int32_t result, bool forceInline, ::java::lang::invoke::MethodHandle* customized, ::java::lang::invoke::LambdaForm$Kind* kind);
	void init$(int32_t arity, $Array<::java::lang::invoke::LambdaForm$Name>* names);
	void init$(int32_t arity, $Array<::java::lang::invoke::LambdaForm$Name>* names, ::java::lang::invoke::LambdaForm$Kind* kind);
	void init$(int32_t arity, $Array<::java::lang::invoke::LambdaForm$Name>* names, bool forceInline, ::java::lang::invoke::LambdaForm$Kind* kind);
	void init$(::java::lang::invoke::MethodType* mt);
	static ::java::lang::invoke::LambdaForm$Name* argument(int32_t which, ::java::lang::invoke::LambdaForm$BasicType* type);
	static bool argumentTypesMatch($String* sig, $ObjectArray* av);
	static $Array<::java::lang::invoke::LambdaForm$Name>* arguments(int32_t extra, ::java::lang::invoke::MethodType* types);
	virtual int32_t arity();
	bool arityCheck($ObjectArray* argumentValues);
	static void associateWithDebugName(::java::lang::invoke::LambdaForm* form, $String* name);
	$String* basicTypeSignature();
	static $String* basicTypeSignature(::java::lang::invoke::MethodType* type);
	static $Array<::java::lang::invoke::LambdaForm$Name>* buildEmptyNames(int32_t arity, ::java::lang::invoke::MethodType* mt, bool isVoid);
	static $Array<::java::lang::invoke::LambdaForm$Name>* buildNames($Array<::java::lang::invoke::LambdaForm$Name>* formals, $Array<::java::lang::invoke::LambdaForm$Name>* temps, ::java::lang::invoke::LambdaForm$Name* result);
	static bool checkInt($Class* type, Object$* x);
	void checkInvocationCounter();
	static bool checkRef($Class* type, Object$* x);
	virtual void compileToBytecode();
	static ::java::lang::invoke::LambdaForm$NamedFunction* constantZero(::java::lang::invoke::LambdaForm$BasicType* type);
	virtual bool contains(::java::lang::invoke::LambdaForm$Name* name);
	static void createFormsFor(::java::lang::invoke::LambdaForm$BasicType* type);
	virtual ::java::lang::invoke::LambdaForm* customize(::java::lang::invoke::MethodHandle* mh);
	static bool debugNames();
	virtual ::java::lang::invoke::LambdaFormEditor* editor();
	virtual bool equals(Object$* obj) override;
	virtual bool equals(::java::lang::invoke::LambdaForm* that);
	virtual int32_t expressionCount();
	static ::jdk::internal::perf::PerfCounter* failedCompilationCounter();
	static int32_t fixResult(int32_t result, $Array<::java::lang::invoke::LambdaForm$Name>* names);
	bool forceInterpretation();
	$String* generateDebugName();
	virtual int32_t hashCode() override;
	static ::java::lang::invoke::LambdaForm$NamedFunction* identity(::java::lang::invoke::LambdaForm$BasicType* type);
	static ::java::lang::invoke::LambdaForm* identityForm(::java::lang::invoke::LambdaForm$BasicType* type);
	static double identity_D(double x);
	static float identity_F(float x);
	static int32_t identity_I(int32_t x);
	static int64_t identity_J(int64_t x);
	static $Object* identity_L(Object$* x);
	static void identity_V();
	static ::java::lang::invoke::LambdaForm$Name* internArgument(::java::lang::invoke::LambdaForm$Name* n);
	virtual $Object* interpretName(::java::lang::invoke::LambdaForm$Name* name, $ObjectArray* values);
	virtual $Object* interpretWithArguments($ObjectArray* argumentValues);
	virtual $Object* interpretWithArgumentsTracing($ObjectArray* argumentValues);
	bool isEmpty();
	virtual bool isGuardWithCatch(int32_t pos);
	virtual bool isLoop(int32_t pos);
	bool isMatchingIdiom(int32_t pos, $String* idiomName, int32_t nArgs);
	virtual bool isSelectAlternative(int32_t pos);
	virtual bool isTableSwitch(int32_t pos);
	virtual bool isTryFinally(int32_t pos);
	static bool isValidSignature($String* sig);
	virtual $String* lambdaName();
	virtual int32_t lastUseIndex(::java::lang::invoke::LambdaForm$Name* n);
	virtual ::java::lang::invoke::MethodType* methodType();
	virtual bool nameRefsAreLegal();
	static bool namesOK(int32_t arity, $Array<::java::lang::invoke::LambdaForm$Name>* names);
	int32_t normalize();
	virtual ::java::lang::invoke::LambdaForm$Name* parameter(int32_t n);
	virtual $Object* parameterConstraint(int32_t n);
	virtual ::java::lang::invoke::LambdaForm$BasicType* parameterType(int32_t n);
	virtual void prepare();
	bool resultCheck($ObjectArray* argumentValues, Object$* result);
	virtual ::java::lang::invoke::LambdaForm$BasicType* returnType();
	static $String* shortenSignature($String* signature);
	static int32_t signatureArity($String* sig);
	virtual $String* toString() override;
	static void traceInterpreter($String* event, Object$* obj, $ObjectArray* args);
	static void traceInterpreter($String* event, Object$* obj);
	virtual ::java::lang::invoke::LambdaForm* uncustomize();
	virtual int32_t useCount(::java::lang::invoke::LambdaForm$Name* n);
	static bool valueMatches(::java::lang::invoke::LambdaForm$BasicType* tc, $Class* type, Object$* x);
	static ::java::lang::invoke::LambdaForm* zeroForm(::java::lang::invoke::LambdaForm$BasicType* type);
	static double zero_D();
	static float zero_F();
	static int32_t zero_I();
	static int64_t zero_J();
	static $Object* zero_L();
	static bool $assertionsDisabled;
	int32_t arity$ = 0;
	int32_t result = 0;
	bool forceInline = false;
	::java::lang::invoke::MethodHandle* customized = nullptr;
	$Array<::java::lang::invoke::LambdaForm$Name>* names = nullptr;
	::java::lang::invoke::LambdaForm$Kind* kind = nullptr;
	::java::lang::invoke::MemberName* vmentry = nullptr;
	bool isCompiled = false;
	$volatile($Object*) transformCache = nullptr;
	static const int32_t VOID_RESULT = (-1);
	static const int32_t LAST_RESULT = (-2);
	static ::jdk::internal::perf::PerfCounter* LF_FAILED;
	static int32_t COMPILE_THRESHOLD;
	int32_t invocationCounter = 0;
	static const int32_t INTERNED_ARGUMENT_LIMIT = 10;
	static $Array<::java::lang::invoke::LambdaForm$Name, 2>* INTERNED_ARGUMENTS;
	static ::java::lang::invoke::MemberName$Factory* IMPL_NAMES;
	static $Array<::java::lang::invoke::LambdaForm>* LF_identity;
	static $Array<::java::lang::invoke::LambdaForm>* LF_zero;
	static $Array<::java::lang::invoke::LambdaForm$NamedFunction>* NF_identity;
	static $Array<::java::lang::invoke::LambdaForm$NamedFunction>* NF_zero;
	static $Object* createFormsLock;
	static ::java::util::HashMap* DEBUG_NAME_COUNTERS;
	static ::java::util::HashMap* DEBUG_NAMES;
	static bool TRACE_INTERPRETER;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("COMPILE_THRESHOLD")
#pragma pop_macro("DEBUG_NAMES")
#pragma pop_macro("DEBUG_NAME_COUNTERS")
#pragma pop_macro("IMPL_NAMES")
#pragma pop_macro("INTERNED_ARGUMENTS")
#pragma pop_macro("INTERNED_ARGUMENT_LIMIT")
#pragma pop_macro("LAST_RESULT")
#pragma pop_macro("LF_FAILED")
#pragma pop_macro("TRACE_INTERPRETER")
#pragma pop_macro("VOID_RESULT")

#endif // _java_lang_invoke_LambdaForm_h_