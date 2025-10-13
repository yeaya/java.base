#ifndef _java_lang_StackWalker_h_
#define _java_lang_StackWalker_h_
//$ class java.lang.StackWalker
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DEFAULT_EMPTY_OPTION")
#undef DEFAULT_EMPTY_OPTION
#pragma push_macro("DEFAULT_WALKER")
#undef DEFAULT_WALKER

namespace java {
	namespace lang {
		class StackWalker$ExtendedOption;
		class StackWalker$Option;
	}
}
namespace java {
	namespace util {
		class EnumSet;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Consumer;
			class Function;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Stream;
		}
	}
}

namespace java {
	namespace lang {

class $import StackWalker : public ::java::lang::Object {
	$class(StackWalker, 0, ::java::lang::Object)
public:
	StackWalker();
	void init$(::java::util::EnumSet* options);
	void init$(::java::util::EnumSet* options, int32_t estimateDepth);
	void init$(::java::util::EnumSet* options, int32_t estimateDepth, ::java::lang::StackWalker$ExtendedOption* extendedOption);
	static void checkPermission(::java::util::Set* options);
	int32_t estimateDepth();
	void forEach(::java::util::function::Consumer* action);
	$Class* getCallerClass();
	static ::java::lang::StackWalker* getInstance();
	static ::java::lang::StackWalker* getInstance(::java::lang::StackWalker$Option* option);
	static ::java::lang::StackWalker* getInstance(::java::util::Set* options);
	static ::java::lang::StackWalker* getInstance(::java::util::Set* options, int32_t estimateDepth);
	bool hasLocalsOperandsOption();
	bool hasOption(::java::lang::StackWalker$Option* option);
	static $Object* lambda$forEach$0(::java::util::function::Consumer* action, ::java::util::stream::Stream* s);
	static ::java::lang::StackWalker* newInstance(::java::util::Set* options, ::java::lang::StackWalker$ExtendedOption* extendedOption);
	static ::java::util::EnumSet* toEnumSet(::java::util::Set* options);
	$Object* walk(::java::util::function::Function* function);
	static ::java::util::EnumSet* DEFAULT_EMPTY_OPTION;
	static ::java::lang::StackWalker* DEFAULT_WALKER;
	::java::util::Set* options = nullptr;
	::java::lang::StackWalker$ExtendedOption* extendedOption = nullptr;
	int32_t estimateDepth$ = 0;
	bool retainClassRef = false;
};

	} // lang
} // java

#pragma pop_macro("DEFAULT_EMPTY_OPTION")
#pragma pop_macro("DEFAULT_WALKER")

#endif // _java_lang_StackWalker_h_