#ifndef _StackRecorderUtil_h_
#define _StackRecorderUtil_h_
//$ class StackRecorderUtil
//$ extends java.lang.Iterable

#include <java/lang/Iterable.h>

namespace java {
	namespace lang {
		class StackWalker$StackFrame;
	}
}
namespace java {
	namespace util {
		class Iterator;
		class List;
		class Set;
	}
}

class $export StackRecorderUtil : public ::java::lang::Iterable {
	$class(StackRecorderUtil, $NO_CLASS_INIT, ::java::lang::Iterable)
public:
	StackRecorderUtil();
	void init$(::java::util::Set* swOptions);
	virtual void add($Class* declaringClass, $String* methodName, $String* fileName);
	virtual void compareFrame(int32_t index, ::java::lang::StackWalker$StackFrame* sf);
	virtual int32_t frameCount();
	virtual ::java::util::Iterator* iterator() override;
	::java::util::List* testFrames = nullptr;
	bool compareClasses = false;
	bool compareClassNames = false;
	bool compareMethodNames = false;
	bool compareSTEs = false;
};

#endif // _StackRecorderUtil_h_