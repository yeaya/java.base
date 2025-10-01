#ifndef _java_lang_invoke_StringConcatFactory_h_
#define _java_lang_invoke_StringConcatFactory_h_
//$ class java.lang.invoke.StringConcatFactory
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("NEW_STRING")
#undef NEW_STRING
#pragma push_macro("OBJECT_STRINGIFIER")
#undef OBJECT_STRINGIFIER
#pragma push_macro("FLOAT_STRINGIFIER")
#undef FLOAT_STRINGIFIER
#pragma push_macro("NEW_STRINGIFIER")
#undef NEW_STRINGIFIER
#pragma push_macro("INITIAL_CODER")
#undef INITIAL_CODER
#pragma push_macro("SIMPLE_CONCAT")
#undef SIMPLE_CONCAT
#pragma push_macro("NEW_ARRAY")
#undef NEW_ARRAY
#pragma push_macro("LONG_STRINGIFIER")
#undef LONG_STRINGIFIER
#pragma push_macro("DOUBLE_STRINGIFIER")
#undef DOUBLE_STRINGIFIER
#pragma push_macro("TAG_CONST")
#undef TAG_CONST
#pragma push_macro("CHAR_STRINGIFIER")
#undef CHAR_STRINGIFIER
#pragma push_macro("PREPENDERS")
#undef PREPENDERS
#pragma push_macro("MAX_INDY_CONCAT_ARG_SLOTS")
#undef MAX_INDY_CONCAT_ARG_SLOTS
#pragma push_macro("NEW_ARRAY_SUFFIX")
#undef NEW_ARRAY_SUFFIX
#pragma push_macro("MIXERS")
#undef MIXERS
#pragma push_macro("NULL_PREPEND")
#undef NULL_PREPEND
#pragma push_macro("TAG_ARG")
#undef TAG_ARG
#pragma push_macro("BOOLEAN_STRINGIFIER")
#undef BOOLEAN_STRINGIFIER
#pragma push_macro("INT_STRINGIFIER")
#undef INT_STRINGIFIER
#pragma push_macro("NULL_PREPENDERS")
#undef NULL_PREPENDERS
#pragma push_macro("MIX")
#undef MIX
#pragma push_macro("JLA")
#undef JLA
#pragma push_macro("PREPEND")
#undef PREPEND

namespace java {
	namespace lang {
		namespace invoke {
			class CallSite;
			class MethodHandle;
			class MethodHandles$Lookup;
			class MethodType;
			class StringConcatException;
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentMap;
		}
	}
}
namespace java {
	namespace util {
		namespace function {
			class Function;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace access {
			class JavaLangAccess;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class $import StringConcatFactory : public ::java::lang::Object {
	$class(StringConcatFactory, $PRELOAD, ::java::lang::Object)
public:
	StringConcatFactory();
	void init$();
	static ::java::lang::invoke::StringConcatException* argumentMismatch(::java::lang::invoke::MethodType* concatType, int32_t oCount);
	static ::java::lang::invoke::MethodHandle* booleanStringifier();
	static ::java::lang::invoke::MethodHandle* charStringifier();
	static ::java::lang::invoke::StringConcatException* constantMismatch($ObjectArray* constants, int32_t cCount);
	static ::java::lang::invoke::MethodHandle* doubleStringifier();
	static ::java::lang::invoke::MethodHandle* floatStringifier();
	static ::java::lang::invoke::MethodHandle* generateMHInlineCopy(::java::lang::invoke::MethodType* mt, ::java::util::List* elements);
	static ::java::lang::invoke::MethodHandle* intStringifier();
	static ::java::lang::invoke::MethodHandle* longStringifier();
	static ::java::lang::invoke::MethodHandle* lookupStatic(::java::lang::invoke::MethodHandles$Lookup* lookup, $Class* refc, $String* name, $Class* rtype, $ClassArray* ptypes);
	static ::java::lang::invoke::CallSite* makeConcat(::java::lang::invoke::MethodHandles$Lookup* lookup, $String* name, ::java::lang::invoke::MethodType* concatType);
	static ::java::lang::invoke::CallSite* makeConcatWithConstants(::java::lang::invoke::MethodHandles$Lookup* lookup, $String* name, ::java::lang::invoke::MethodType* concatType, $String* recipe, $ObjectArray* constants);
	static ::java::lang::invoke::MethodHandle* mixer($Class* cl);
	static ::java::lang::invoke::MethodHandle* newArray();
	static ::java::lang::invoke::MethodHandle* newArrayWithSuffix($String* suffix);
	static ::java::lang::invoke::MethodHandle* newString();
	static ::java::lang::invoke::MethodHandle* newStringifier();
	static ::java::lang::invoke::MethodHandle* objectStringifier();
	static ::java::util::List* parseRecipe(::java::lang::invoke::MethodType* concatType, $String* recipe, $ObjectArray* constants);
	static ::java::lang::invoke::MethodHandle* prepender($String* prefix, $Class* cl);
	static ::java::lang::invoke::MethodHandle* simpleConcat();
	static ::java::lang::invoke::MethodHandle* stringifierFor($Class* t);
	static ::java::lang::invoke::MethodHandle* unaryConcat($Class* cl);
	static bool $assertionsDisabled;
	static const char16_t TAG_ARG = ((char16_t)1);
	static const char16_t TAG_CONST = ((char16_t)2);
	static const int32_t MAX_INDY_CONCAT_ARG_SLOTS = 200;
	static ::jdk::internal::access::JavaLangAccess* JLA;
	static ::java::util::function::Function* PREPEND;
	static ::java::util::function::Function* NULL_PREPEND;
	static ::java::util::function::Function* MIX;
	static ::java::lang::invoke::MethodHandle* SIMPLE_CONCAT;
	static ::java::lang::invoke::MethodHandle* NEW_STRING;
	static ::java::lang::invoke::MethodHandle* NEW_ARRAY_SUFFIX;
	static ::java::lang::invoke::MethodHandle* NEW_ARRAY;
	static ::java::lang::invoke::MethodHandle* OBJECT_STRINGIFIER;
	static ::java::lang::invoke::MethodHandle* FLOAT_STRINGIFIER;
	static ::java::lang::invoke::MethodHandle* DOUBLE_STRINGIFIER;
	static ::java::lang::invoke::MethodHandle* INT_STRINGIFIER;
	static ::java::lang::invoke::MethodHandle* LONG_STRINGIFIER;
	static ::java::lang::invoke::MethodHandle* CHAR_STRINGIFIER;
	static ::java::lang::invoke::MethodHandle* BOOLEAN_STRINGIFIER;
	static ::java::lang::invoke::MethodHandle* NEW_STRINGIFIER;
	static ::java::util::concurrent::ConcurrentMap* PREPENDERS;
	static ::java::util::concurrent::ConcurrentMap* NULL_PREPENDERS;
	static ::java::util::concurrent::ConcurrentMap* MIXERS;
	static int64_t INITIAL_CODER;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("NEW_STRING")
#pragma pop_macro("OBJECT_STRINGIFIER")
#pragma pop_macro("FLOAT_STRINGIFIER")
#pragma pop_macro("NEW_STRINGIFIER")
#pragma pop_macro("INITIAL_CODER")
#pragma pop_macro("SIMPLE_CONCAT")
#pragma pop_macro("NEW_ARRAY")
#pragma pop_macro("LONG_STRINGIFIER")
#pragma pop_macro("DOUBLE_STRINGIFIER")
#pragma pop_macro("TAG_CONST")
#pragma pop_macro("CHAR_STRINGIFIER")
#pragma pop_macro("PREPENDERS")
#pragma pop_macro("MAX_INDY_CONCAT_ARG_SLOTS")
#pragma pop_macro("NEW_ARRAY_SUFFIX")
#pragma pop_macro("MIXERS")
#pragma pop_macro("NULL_PREPEND")
#pragma pop_macro("TAG_ARG")
#pragma pop_macro("BOOLEAN_STRINGIFIER")
#pragma pop_macro("INT_STRINGIFIER")
#pragma pop_macro("NULL_PREPENDERS")
#pragma pop_macro("MIX")
#pragma pop_macro("JLA")
#pragma pop_macro("PREPEND")

#endif // _java_lang_invoke_StringConcatFactory_h_