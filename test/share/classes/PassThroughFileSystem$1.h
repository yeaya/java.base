#ifndef _PassThroughFileSystem$1_h_
#define _PassThroughFileSystem$1_h_
//$ class PassThroughFileSystem$1
//$ extends java.lang.Iterable

#include <java/lang/Iterable.h>

class PassThroughFileSystem;
namespace java {
	namespace util {
		class Iterator;
	}
}

class PassThroughFileSystem$1 : public ::java::lang::Iterable {
	$class(PassThroughFileSystem$1, $NO_CLASS_INIT, ::java::lang::Iterable)
public:
	PassThroughFileSystem$1();
	void init$(::PassThroughFileSystem* this$0, ::java::lang::Iterable* val$roots);
	virtual ::java::util::Iterator* iterator() override;
	::PassThroughFileSystem* this$0 = nullptr;
	::java::lang::Iterable* val$roots = nullptr;
};

#endif // _PassThroughFileSystem$1_h_