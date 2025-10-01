#ifndef _java_lang_StackStreamFactory$LiveStackInfoTraverser_h_
#define _java_lang_StackStreamFactory$LiveStackInfoTraverser_h_
//$ class java.lang.StackStreamFactory$LiveStackInfoTraverser
//$ extends java.lang.StackStreamFactory$StackFrameTraverser

#include <java/lang/StackStreamFactory$StackFrameTraverser.h>

namespace java {
	namespace lang {
		class StackWalker;
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

class StackStreamFactory$LiveStackInfoTraverser : public ::java::lang::StackStreamFactory$StackFrameTraverser {
	$class(StackStreamFactory$LiveStackInfoTraverser, 0, ::java::lang::StackStreamFactory$StackFrameTraverser)
public:
	StackStreamFactory$LiveStackInfoTraverser();
	void init$(::java::lang::StackWalker* walker, ::java::util::function::Function* function);
	virtual void initFrameBuffer() override;
};

	} // lang
} // java

#endif // _java_lang_StackStreamFactory$LiveStackInfoTraverser_h_