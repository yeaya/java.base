#ifndef _java_lang_ProcessEnvironment$CheckedEntrySet$1_h_
#define _java_lang_ProcessEnvironment$CheckedEntrySet$1_h_
//$ class java.lang.ProcessEnvironment$CheckedEntrySet$1
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace lang {
		class ProcessEnvironment$CheckedEntrySet;
	}
}

namespace java {
	namespace lang {

class ProcessEnvironment$CheckedEntrySet$1 : public ::java::util::Iterator {
	$class(ProcessEnvironment$CheckedEntrySet$1, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	ProcessEnvironment$CheckedEntrySet$1();
	void init$(::java::lang::ProcessEnvironment$CheckedEntrySet* this$0);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::java::lang::ProcessEnvironment$CheckedEntrySet* this$0 = nullptr;
	::java::util::Iterator* i = nullptr;
};

	} // lang
} // java

#endif // _java_lang_ProcessEnvironment$CheckedEntrySet$1_h_