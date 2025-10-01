#ifndef _StackStreamState_h_
#define _StackStreamState_h_
//$ class StackStreamState
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class StackWalker;
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Stream;
		}
	}
}

class $export StackStreamState : public ::java::lang::Object {
	$class(StackStreamState, $NO_CLASS_INIT, ::java::lang::Object)
public:
	StackStreamState();
	void init$();
	virtual void checkStreamState(::java::util::stream::Stream* stream);
	$Object* lambda$testInstance$1(::java::util::stream::Stream* s);
	static ::java::util::stream::Stream* lambda$testLocal$2(::java::util::stream::Stream* s);
	static $Object* lambda$testStatic$0(::java::util::stream::Stream* s);
	static void main($StringArray* args);
	virtual void testInstance();
	virtual void testLocal();
	virtual void testStatic();
	static ::java::util::stream::Stream* staticStream;
	::java::util::stream::Stream* instanceStream = nullptr;
	::java::lang::StackWalker* walker = nullptr;
};

#endif // _StackStreamState_h_