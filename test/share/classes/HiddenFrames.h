#ifndef _HiddenFrames_h_
#define _HiddenFrames_h_
//$ class HiddenFrames
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class Integer;
		class StackWalker;
		class StackWalker$Option;
		class StackWalker$StackFrame;
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

class $export HiddenFrames : public ::java::lang::Object {
	$class(HiddenFrames, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HiddenFrames();
	void init$();
	void init$(::java::lang::StackWalker$Option* option);
	virtual void checkFrame(::java::lang::StackWalker$StackFrame* frame);
	$Object* lambda$walk$0(::java::util::stream::Stream* s);
	void lambda$walk$1(::java::lang::Integer* i);
	static void main($StringArray* args);
	virtual void test();
	virtual void walk();
	virtual void walkFromReflection();
	::java::lang::StackWalker$Option* option = nullptr;
	::java::lang::StackWalker* walker = nullptr;
	::java::util::List* lambdas = nullptr;
	::java::util::List* reflects = nullptr;
};

#endif // _HiddenFrames_h_