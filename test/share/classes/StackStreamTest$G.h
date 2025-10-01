#ifndef _StackStreamTest$G_h_
#define _StackStreamTest$G_h_
//$ class StackStreamTest$G
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("STE_WALKER")
#undef STE_WALKER
#pragma push_macro("DEFAULT_WALKER")
#undef DEFAULT_WALKER
#pragma push_macro("GOLDEN_CLASS_NAMES")
#undef GOLDEN_CLASS_NAMES
#pragma push_macro("GOLDEN_METHOD_NAMES")
#undef GOLDEN_METHOD_NAMES

namespace java {
	namespace lang {
		class StackTraceElement;
		class StackWalker;
		class StackWalker$StackFrame;
	}
}
namespace java {
	namespace util {
		class List;
		class Optional;
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Stream;
		}
	}
}

class $export StackStreamTest$G : public ::java::lang::Object {
	$class(StackStreamTest$G, 0, ::java::lang::Object)
public:
	StackStreamTest$G();
	void init$();
	static void checkStackTraceElements(::java::util::List* classNames, ::java::util::List* methodNames, ::java::util::List* stes);
	static void dumpSTEInfo(::java::util::List* classNames, ::java::util::List* methodNames, ::java::util::List* stes);
	static void firstFrame();
	static void g();
	static void lambda$firstFrame$5(::java::lang::StackWalker$StackFrame* e);
	static bool lambda$firstFrame$6(::java::lang::StackWalker$StackFrame* e);
	static ::java::util::Optional* lambda$firstFrame$7(::java::util::stream::Stream* s);
	static ::java::util::List* lambda$g$0(::java::util::stream::Stream* s);
	static ::java::util::List* lambda$g$1(::java::util::stream::Stream* s);
	static void lambda$g$2(::java::lang::StackTraceElement* ste);
	static $Object* lambda$g$3(::java::util::stream::Stream* s);
	static ::java::util::List* lambda$g$4(::java::util::stream::Stream* s);
	static ::java::lang::StackWalker* STE_WALKER;
	static ::java::lang::StackWalker* DEFAULT_WALKER;
	static ::java::util::List* GOLDEN_CLASS_NAMES;
	static ::java::util::List* GOLDEN_METHOD_NAMES;
};

#pragma pop_macro("STE_WALKER")
#pragma pop_macro("DEFAULT_WALKER")
#pragma pop_macro("GOLDEN_CLASS_NAMES")
#pragma pop_macro("GOLDEN_METHOD_NAMES")

#endif // _StackStreamTest$G_h_