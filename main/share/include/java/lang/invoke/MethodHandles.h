#ifndef _java_lang_invoke_MethodHandles_h_
#define _java_lang_invoke_MethodHandles_h_
//$ class java.lang.invoke.MethodHandles
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("IDENTITY_MHS")
#undef IDENTITY_MHS
#pragma push_macro("ZERO_MHS")
#undef ZERO_MHS
#pragma push_macro("IMPL_NAMES")
#undef IMPL_NAMES
#pragma push_macro("ACCESS_PERMISSION")
#undef ACCESS_PERMISSION

namespace java {
	namespace lang {
		class RuntimeException;
	}
}
namespace java {
	namespace lang {
		namespace invoke {
			class BoundMethodHandle;
			class MemberName$Factory;
			class MethodHandle;
			class MethodHandles$Lookup;
			class MethodType;
			class VarHandle;
			class VarHandle$AccessMode;
		}
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Member;
		}
	}
}
namespace java {
	namespace nio {
		class ByteOrder;
	}
}
namespace java {
	namespace security {
		class Permission;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Stream;
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

class $import MethodHandles : public ::java::lang::Object {
	$class(MethodHandles, $PRELOAD, ::java::lang::Object)
public:
	MethodHandles();
	void init$();
	static ::java::lang::invoke::MethodHandle* argumentsWithCombiner(bool filter, ::java::lang::invoke::MethodHandle* target, int32_t position, ::java::lang::invoke::MethodHandle* combiner, $ints* argPositions);
	static $Class* argumentsWithCombinerChecks(int32_t position, bool filter, ::java::lang::invoke::MethodType* targetType, ::java::lang::invoke::MethodType* combinerType, $ints* argPos);
	static ::java::lang::invoke::MethodHandle* arrayConstructor($Class* arrayClass);
	static ::java::lang::invoke::MethodHandle* arrayElementGetter($Class* arrayClass);
	static ::java::lang::invoke::MethodHandle* arrayElementSetter($Class* arrayClass);
	static ::java::lang::invoke::VarHandle* arrayElementVarHandle($Class* arrayClass);
	static ::java::lang::invoke::MethodHandle* arrayLength($Class* arrayClass);
	static ::java::lang::invoke::MethodHandle* basicInvoker(::java::lang::invoke::MethodType* type);
	static ::java::util::List* buildCommonSuffix(::java::util::List* init, ::java::util::List* step, ::java::util::List* pred, ::java::util::List* fini, int32_t cpSize);
	static ::java::lang::invoke::VarHandle* byteArrayViewVarHandle($Class* viewArrayClass, ::java::nio::ByteOrder* byteOrder);
	static ::java::lang::invoke::VarHandle* byteBufferViewVarHandle($Class* viewArrayClass, ::java::nio::ByteOrder* byteOrder);
	static ::java::lang::invoke::MethodHandle* catchException(::java::lang::invoke::MethodHandle* target, $Class* exType, ::java::lang::invoke::MethodHandle* handler);
	static $Object* classData(::java::lang::invoke::MethodHandles$Lookup* caller, $String* name, $Class* type);
	static $Object* classDataAt(::java::lang::invoke::MethodHandles$Lookup* caller, $String* name, $Class* type, int32_t index);
	static ::java::lang::invoke::MethodHandle* collectArguments(::java::lang::invoke::MethodHandle* target, int32_t pos, ::java::lang::invoke::MethodHandle* filter);
	static ::java::lang::invoke::MethodType* collectArgumentsChecks(::java::lang::invoke::MethodHandle* target, int32_t pos, ::java::lang::invoke::MethodHandle* filter);
	static ::java::lang::invoke::MethodHandle* collectReturnValue(::java::lang::invoke::MethodHandle* target, ::java::lang::invoke::MethodHandle* filter);
	static ::java::lang::invoke::MethodHandle* constant($Class* type, Object$* value);
	static ::java::util::List* copyTypes($ObjectArray* array);
	static ::java::lang::invoke::MethodHandle* countedLoop(::java::lang::invoke::MethodHandle* iterations, ::java::lang::invoke::MethodHandle* init, ::java::lang::invoke::MethodHandle* body);
	static ::java::lang::invoke::MethodHandle* countedLoop(::java::lang::invoke::MethodHandle* start, ::java::lang::invoke::MethodHandle* end, ::java::lang::invoke::MethodHandle* init, ::java::lang::invoke::MethodHandle* body);
	static void countedLoopChecks(::java::lang::invoke::MethodHandle* start, ::java::lang::invoke::MethodHandle* end, ::java::lang::invoke::MethodHandle* init, ::java::lang::invoke::MethodHandle* body);
	static ::java::lang::invoke::MethodHandle* doWhileLoop(::java::lang::invoke::MethodHandle* init, ::java::lang::invoke::MethodHandle* body, ::java::lang::invoke::MethodHandle* pred);
	static int32_t dropArgumentChecks(::java::lang::invoke::MethodType* oldType, int32_t pos, ::java::util::List* valueTypes);
	static ::java::lang::invoke::MethodHandle* dropArguments(::java::lang::invoke::MethodHandle* target, int32_t pos, ::java::util::List* valueTypes);
	static ::java::lang::invoke::MethodHandle* dropArguments(::java::lang::invoke::MethodHandle* target, int32_t pos, $ClassArray* valueTypes);
	static ::java::lang::invoke::MethodHandle* dropArguments0(::java::lang::invoke::MethodHandle* target, int32_t pos, ::java::util::List* valueTypes);
	static ::java::lang::invoke::MethodHandle* dropArgumentsToMatch(::java::lang::invoke::MethodHandle* target, int32_t skip, ::java::util::List* newTypes, int32_t pos, bool nullOnFailure);
	static ::java::lang::invoke::MethodHandle* dropArgumentsToMatch(::java::lang::invoke::MethodHandle* target, int32_t skip, ::java::util::List* newTypes, int32_t pos);
	static ::java::lang::invoke::MethodHandle* dropReturn(::java::lang::invoke::MethodHandle* target);
	static ::java::lang::invoke::MethodHandle* empty(::java::lang::invoke::MethodType* type);
	static ::java::lang::invoke::MethodHandle* exactInvoker(::java::lang::invoke::MethodType* type);
	static ::java::lang::invoke::MethodHandle* explicitCastArguments(::java::lang::invoke::MethodHandle* target, ::java::lang::invoke::MethodType* newType);
	static void explicitCastArgumentsChecks(::java::lang::invoke::MethodHandle* target, ::java::lang::invoke::MethodType* newType);
	static ::java::util::List* fillParameterTypes(::java::util::List* hs, ::java::util::List* targetParams);
	static ::java::lang::invoke::MethodHandle* filterArgument(::java::lang::invoke::MethodHandle* target, int32_t pos, ::java::lang::invoke::MethodHandle* filter);
	static void filterArgumentChecks(::java::lang::invoke::MethodHandle* target, int32_t pos, ::java::lang::invoke::MethodHandle* filter);
	static ::java::lang::invoke::MethodHandle* filterArguments(::java::lang::invoke::MethodHandle* target, int32_t pos, $Array<::java::lang::invoke::MethodHandle>* filters);
	static void filterArgumentsCheckArity(::java::lang::invoke::MethodHandle* target, int32_t pos, $Array<::java::lang::invoke::MethodHandle>* filters);
	static ::java::lang::invoke::MethodHandle* filterArgumentsWithCombiner(::java::lang::invoke::MethodHandle* target, int32_t position, ::java::lang::invoke::MethodHandle* combiner, $ints* argPositions);
	static ::java::lang::invoke::MethodHandle* filterRepeatedArgument(::java::lang::invoke::MethodHandle* adapter, ::java::lang::invoke::MethodHandle* filter, $ints* positions);
	static ::java::lang::invoke::MethodHandle* filterReturnValue(::java::lang::invoke::MethodHandle* target, ::java::lang::invoke::MethodHandle* filter);
	static void filterReturnValueChecks(::java::lang::invoke::MethodType* targetType, ::java::lang::invoke::MethodType* filterType);
	static int32_t findFirstDupOrDrop($ints* reorder, int32_t newArity);
	static ::java::util::List* fixArities(::java::util::List* hs);
	static $Class* foldArgumentChecks(int32_t foldPos, ::java::lang::invoke::MethodType* targetType, ::java::lang::invoke::MethodType* combinerType);
	static ::java::lang::invoke::MethodHandle* foldArguments(::java::lang::invoke::MethodHandle* target, ::java::lang::invoke::MethodHandle* combiner);
	static ::java::lang::invoke::MethodHandle* foldArguments(::java::lang::invoke::MethodHandle* target, int32_t pos, ::java::lang::invoke::MethodHandle* combiner);
	static ::java::lang::invoke::MethodHandle* foldArgumentsWithCombiner(::java::lang::invoke::MethodHandle* target, int32_t position, ::java::lang::invoke::MethodHandle* combiner, $ints* argPositions);
	static ::java::lang::invoke::MethodHandle* guardWithTest(::java::lang::invoke::MethodHandle* test, ::java::lang::invoke::MethodHandle* target, ::java::lang::invoke::MethodHandle* fallback);
	static ::java::lang::invoke::MethodHandle* identity($Class* type);
	static ::java::lang::invoke::MethodHandle* identityOrVoid($Class* type);
	static ::java::lang::invoke::BoundMethodHandle* insertArgumentPrimitive(::java::lang::invoke::BoundMethodHandle* result, int32_t pos, $Class* ptype, Object$* value);
	static ::java::lang::invoke::MethodHandle* insertArguments(::java::lang::invoke::MethodHandle* target, int32_t pos, $ObjectArray* values);
	static $ClassArray* insertArgumentsChecks(::java::lang::invoke::MethodHandle* target, int32_t insCount, int32_t pos);
	static ::java::lang::invoke::MethodHandle* invoker(::java::lang::invoke::MethodType* type);
	static ::java::lang::invoke::MethodHandle* iteratedLoop(::java::lang::invoke::MethodHandle* iterator, ::java::lang::invoke::MethodHandle* init, ::java::lang::invoke::MethodHandle* body);
	static $Class* iteratedLoopChecks(::java::lang::invoke::MethodHandle* iterator, ::java::lang::invoke::MethodHandle* init, ::java::lang::invoke::MethodHandle* body);
	static ::java::lang::invoke::MethodHandle* lambda$fillParameterTypes$13(::java::util::List* targetParams, ::java::lang::invoke::MethodHandle* h);
	static bool lambda$longestParameterList$6(int32_t skipSize, ::java::lang::invoke::MethodType* t);
	static ::java::util::List* lambda$longestParameterList$7(::java::util::List* p, ::java::util::List* q);
	static bool lambda$loop$0($Array<::java::lang::invoke::MethodHandle>* c);
	static void lambda$loop$1(::java::util::List* init, ::java::util::List* step, ::java::util::List* pred, ::java::util::List* fini, $Array<::java::lang::invoke::MethodHandle>* clause);
	static bool lambda$loop$2($Class* t);
	static bool lambda$loop$3(::java::util::List* commonSuffix, ::java::util::List* pl);
	static bool lambda$loopChecks0$5($Array<::java::lang::invoke::MethodHandle>* c);
	static bool lambda$loopChecks1b$9(::java::util::List* commonSuffix, ::java::lang::invoke::MethodType* t);
	static bool lambda$loopChecks1cd$10($Class* loopReturnType, $Class* t);
	static bool lambda$loopChecks1cd$11($Class* t);
	static ::java::util::List* longestParameterList(::java::util::stream::Stream* mhs, int32_t skipSize);
	static ::java::util::List* longestParameterList(::java::util::List* lists);
	static ::java::lang::invoke::MethodHandles$Lookup* lookup();
	static ::java::lang::invoke::MethodHandle* loop($Array<::java::lang::invoke::MethodHandle, 2>* clauses);
	static void loopChecks0($Array<::java::lang::invoke::MethodHandle, 2>* clauses);
	static void loopChecks1a(int32_t i, ::java::lang::invoke::MethodHandle* in, ::java::lang::invoke::MethodHandle* st);
	static void loopChecks1b(::java::util::List* init, ::java::util::List* commonSuffix);
	static void loopChecks1cd(::java::util::List* pred, ::java::util::List* fini, $Class* loopReturnType);
	static void loopChecks2(::java::util::List* step, ::java::util::List* pred, ::java::util::List* fini, ::java::util::List* commonParameterSequence);
	static ::java::lang::invoke::MethodHandle* makeIdentity($Class* ptype);
	static ::java::lang::invoke::MethodHandle* makeZero($Class* rtype);
	static ::java::lang::RuntimeException* misMatchedTypes($String* what, Object$* t1, Object$* t2);
	static bool permuteArgumentChecks($ints* reorder, ::java::lang::invoke::MethodType* newType, ::java::lang::invoke::MethodType* oldType);
	static ::java::lang::invoke::MethodHandle* permuteArguments(::java::lang::invoke::MethodHandle* target, ::java::lang::invoke::MethodType* newType, $ints* reorder);
	static ::java::lang::invoke::MethodHandles$Lookup* privateLookupIn($Class* targetClass, ::java::lang::invoke::MethodHandles$Lookup* caller);
	static ::java::lang::invoke::MethodHandles$Lookup* publicLookup();
	static ::java::lang::reflect::Member* reflectAs($Class* expected, ::java::lang::invoke::MethodHandle* target);
	static ::java::lang::invoke::MethodHandles$Lookup* reflected$lookup();
	static ::java::lang::invoke::MethodHandle* setCachedMethodHandle($Array<::java::lang::invoke::MethodHandle>* cache, int32_t pos, ::java::lang::invoke::MethodHandle* value);
	static ::java::lang::invoke::MethodHandle* spreadInvoker(::java::lang::invoke::MethodType* type, int32_t leadingArgCount);
	static ::java::lang::invoke::MethodHandle* swapArguments(::java::lang::invoke::MethodHandle* mh, int32_t i, int32_t j);
	static ::java::lang::invoke::MethodHandle* tableSwitch(::java::lang::invoke::MethodHandle* fallback, $Array<::java::lang::invoke::MethodHandle>* targets);
	static ::java::lang::invoke::MethodType* tableSwitchChecks(::java::lang::invoke::MethodHandle* defaultCase, $Array<::java::lang::invoke::MethodHandle>* caseActions);
	static ::java::lang::invoke::MethodHandle* throwException($Class* returnType, $Class* exType);
	static ::java::lang::invoke::MethodHandle* tryFinally(::java::lang::invoke::MethodHandle* target, ::java::lang::invoke::MethodHandle* cleanup);
	static void tryFinallyChecks(::java::lang::invoke::MethodHandle* target, ::java::lang::invoke::MethodHandle* cleanup);
	static ::java::lang::invoke::MethodHandle* varHandleExactInvoker(::java::lang::invoke::VarHandle$AccessMode* accessMode, ::java::lang::invoke::MethodType* type);
	static ::java::lang::invoke::MethodHandle* varHandleInvoker(::java::lang::invoke::VarHandle$AccessMode* accessMode, ::java::lang::invoke::MethodType* type);
	static ::java::lang::invoke::MethodHandle* whileLoop(::java::lang::invoke::MethodHandle* init, ::java::lang::invoke::MethodHandle* pred, ::java::lang::invoke::MethodHandle* body);
	static void whileLoopChecks(::java::lang::invoke::MethodHandle* init, ::java::lang::invoke::MethodHandle* pred, ::java::lang::invoke::MethodHandle* body);
	static ::java::lang::invoke::MethodHandle* zero($Class* type);
	static ::java::lang::invoke::MethodHandle* zero(::sun::invoke::util::Wrapper* btw, $Class* rtype);
	static bool $assertionsDisabled;
	static ::java::lang::invoke::MemberName$Factory* IMPL_NAMES;
	static ::java::security::Permission* ACCESS_PERMISSION;
	static $Array<::java::lang::invoke::MethodHandle>* IDENTITY_MHS;
	static $Array<::java::lang::invoke::MethodHandle>* ZERO_MHS;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("IDENTITY_MHS")
#pragma pop_macro("ZERO_MHS")
#pragma pop_macro("IMPL_NAMES")
#pragma pop_macro("ACCESS_PERMISSION")

#endif // _java_lang_invoke_MethodHandles_h_