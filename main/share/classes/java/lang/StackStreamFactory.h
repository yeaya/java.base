#ifndef _java_lang_StackStreamFactory_h_
#define _java_lang_StackStreamFactory_h_
//$ class java.lang.StackStreamFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("BATCH_SIZE")
#undef BATCH_SIZE
#pragma push_macro("DEFAULT_MODE")
#undef DEFAULT_MODE
#pragma push_macro("FILL_CLASS_REFS_ONLY")
#undef FILL_CLASS_REFS_ONLY
#pragma push_macro("FILL_LIVE_STACK_FRAMES")
#undef FILL_LIVE_STACK_FRAMES
#pragma push_macro("GET_CALLER_CLASS")
#undef GET_CALLER_CLASS
#pragma push_macro("LARGE_BATCH_SIZE")
#undef LARGE_BATCH_SIZE
#pragma push_macro("MIN_BATCH_SIZE")
#undef MIN_BATCH_SIZE
#pragma push_macro("SHOW_HIDDEN_FRAMES")
#undef SHOW_HIDDEN_FRAMES
#pragma push_macro("SMALL_BATCH")
#undef SMALL_BATCH

namespace java {
	namespace lang {
		class StackStreamFactory$CallerClassFinder;
		class StackStreamFactory$StackFrameTraverser;
		class StackWalker;
	}
}
namespace java {
	namespace util {
		class Set;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Function;
		}
	}
}

namespace java {
	namespace lang {

class StackStreamFactory : public ::java::lang::Object {
	$class(StackStreamFactory, 0, ::java::lang::Object)
public:
	StackStreamFactory();
	void init$();
	static bool checkStackWalkModes();
	static bool filterStackWalkImpl($Class* c);
	static ::java::util::Set* init();
	static bool isMethodHandleFrame($Class* c);
	static bool isReflectionFrame($Class* c);
	static ::java::lang::StackStreamFactory$CallerClassFinder* makeCallerFinder(::java::lang::StackWalker* walker);
	static ::java::lang::StackStreamFactory$StackFrameTraverser* makeStackTraverser(::java::lang::StackWalker* walker, ::java::util::function::Function* function);
	static ::java::util::Set* stackWalkImplClasses;
	static const int32_t SMALL_BATCH = 8;
	static const int32_t BATCH_SIZE = 32;
	static const int32_t LARGE_BATCH_SIZE = 256;
	static const int32_t MIN_BATCH_SIZE = SMALL_BATCH;
	static const int32_t DEFAULT_MODE = 0;
	static const int32_t FILL_CLASS_REFS_ONLY = 2;
	static const int32_t GET_CALLER_CLASS = 4;
	static const int32_t SHOW_HIDDEN_FRAMES = 32;
	static const int32_t FILL_LIVE_STACK_FRAMES = 256;
	static bool isDebug;
};

	} // lang
} // java

#pragma pop_macro("BATCH_SIZE")
#pragma pop_macro("DEFAULT_MODE")
#pragma pop_macro("FILL_CLASS_REFS_ONLY")
#pragma pop_macro("FILL_LIVE_STACK_FRAMES")
#pragma pop_macro("GET_CALLER_CLASS")
#pragma pop_macro("LARGE_BATCH_SIZE")
#pragma pop_macro("MIN_BATCH_SIZE")
#pragma pop_macro("SHOW_HIDDEN_FRAMES")
#pragma pop_macro("SMALL_BATCH")

#endif // _java_lang_StackStreamFactory_h_