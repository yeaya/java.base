#ifndef _java_lang_invoke_MethodHandleStatics_h_
#define _java_lang_invoke_MethodHandleStatics_h_
//$ class java.lang.invoke.MethodHandleStatics
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("COMPILE_THRESHOLD")
#undef COMPILE_THRESHOLD
#pragma push_macro("CUSTOMIZE_THRESHOLD")
#undef CUSTOMIZE_THRESHOLD
#pragma push_macro("DEBUG_METHOD_HANDLE_NAMES")
#undef DEBUG_METHOD_HANDLE_NAMES
#pragma push_macro("DONT_INLINE_THRESHOLD")
#undef DONT_INLINE_THRESHOLD
#pragma push_macro("DUMP_CLASS_FILES")
#undef DUMP_CLASS_FILES
#pragma push_macro("LOG_LF_COMPILATION_FAILURE")
#undef LOG_LF_COMPILATION_FAILURE
#pragma push_macro("MAX_ARITY")
#undef MAX_ARITY
#pragma push_macro("PROFILE_GWT")
#undef PROFILE_GWT
#pragma push_macro("PROFILE_LEVEL")
#undef PROFILE_LEVEL
#pragma push_macro("TRACE_INTERPRETER")
#undef TRACE_INTERPRETER
#pragma push_macro("TRACE_METHOD_LINKAGE")
#undef TRACE_METHOD_LINKAGE
#pragma push_macro("TRACE_RESOLVE")
#undef TRACE_RESOLVE
#pragma push_macro("UNSAFE")
#undef UNSAFE
#pragma push_macro("VAR_HANDLE_GUARDS")
#undef VAR_HANDLE_GUARDS
#pragma push_macro("VAR_HANDLE_IDENTITY_ADAPT")
#undef VAR_HANDLE_IDENTITY_ADAPT

namespace java {
	namespace lang {
		class Error;
		class Exception;
		class InternalError;
		class RuntimeException;
		class Throwable;
	}
}
namespace java {
	namespace lang {
		namespace invoke {
			class MemberName;
			class MethodType;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class MethodHandleStatics : public ::java::lang::Object {
	$class(MethodHandleStatics, 0, ::java::lang::Object)
public:
	MethodHandleStatics();
	void init$();
	static bool debugEnabled();
	static $String* message($String* message, Object$* obj);
	static $String* message($String* message, Object$* obj, Object$* obj2);
	static ::java::lang::RuntimeException* newIllegalArgumentException($String* message);
	static ::java::lang::RuntimeException* newIllegalArgumentException($String* message, Object$* obj);
	static ::java::lang::RuntimeException* newIllegalArgumentException($String* message, Object$* obj, Object$* obj2);
	static ::java::lang::RuntimeException* newIllegalStateException($String* message);
	static ::java::lang::RuntimeException* newIllegalStateException($String* message, Object$* obj);
	static ::java::lang::InternalError* newInternalError($String* message);
	static ::java::lang::InternalError* newInternalError($String* message, ::java::lang::Exception* cause);
	static ::java::lang::InternalError* newInternalError(::java::lang::Exception* cause);
	static int32_t rangeCheck1(int32_t index, int32_t size);
	static void rangeCheck2(int32_t start, int32_t end, int32_t size);
	static void traceLambdaForm($String* name, ::java::lang::invoke::MethodType* type, $Class* holder, ::java::lang::invoke::MemberName* resolvedMember);
	static void traceSpeciesType($String* cn, $Class* salvage);
	static ::java::lang::Error* uncaughtException($Throwable* ex);
	static ::jdk::internal::misc::Unsafe* UNSAFE;
	static bool DEBUG_METHOD_HANDLE_NAMES;
	static bool DUMP_CLASS_FILES;
	static bool TRACE_INTERPRETER;
	static bool TRACE_METHOD_LINKAGE;
	static bool TRACE_RESOLVE;
	static int32_t COMPILE_THRESHOLD;
	static bool LOG_LF_COMPILATION_FAILURE;
	static int32_t DONT_INLINE_THRESHOLD;
	static int32_t PROFILE_LEVEL;
	static bool PROFILE_GWT;
	static int32_t CUSTOMIZE_THRESHOLD;
	static bool VAR_HANDLE_GUARDS;
	static int32_t MAX_ARITY;
	static bool VAR_HANDLE_IDENTITY_ADAPT;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("COMPILE_THRESHOLD")
#pragma pop_macro("CUSTOMIZE_THRESHOLD")
#pragma pop_macro("DEBUG_METHOD_HANDLE_NAMES")
#pragma pop_macro("DONT_INLINE_THRESHOLD")
#pragma pop_macro("DUMP_CLASS_FILES")
#pragma pop_macro("LOG_LF_COMPILATION_FAILURE")
#pragma pop_macro("MAX_ARITY")
#pragma pop_macro("PROFILE_GWT")
#pragma pop_macro("PROFILE_LEVEL")
#pragma pop_macro("TRACE_INTERPRETER")
#pragma pop_macro("TRACE_METHOD_LINKAGE")
#pragma pop_macro("TRACE_RESOLVE")
#pragma pop_macro("UNSAFE")
#pragma pop_macro("VAR_HANDLE_GUARDS")
#pragma pop_macro("VAR_HANDLE_IDENTITY_ADAPT")

#endif // _java_lang_invoke_MethodHandleStatics_h_