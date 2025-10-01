#ifndef _WalkFunction_h_
#define _WalkFunction_h_
//$ class WalkFunction
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class StackWalker;
		class StackWalker$StackFrame;
		class Void;
	}
}
namespace java {
	namespace util {
		class Optional;
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
	namespace util {
		namespace stream {
			class Stream;
		}
	}
}

class $export WalkFunction : public ::java::lang::Object {
	$class(WalkFunction, 0, ::java::lang::Object)
public:
	WalkFunction();
	void init$();
	static ::java::util::function::Function* counter();
	static ::java::lang::Void* function(::java::util::stream::Stream* s);
	static ::java::lang::StackWalker$StackFrame* lambda$reduce$0(::java::lang::StackWalker$StackFrame* r, ::java::lang::StackWalker$StackFrame* f);
	static void main($StringArray* args);
	static ::java::util::Optional* reduce(::java::util::stream::Stream* stream);
	static void testFunctions();
	static void testWildcards();
	static ::java::util::function::Function* wildCounter();
	static ::java::lang::StackWalker* walker;
};

#endif // _WalkFunction_h_