#ifndef _java_lang_ProcessEnvironment$StringEntrySet$1_h_
#define _java_lang_ProcessEnvironment$StringEntrySet$1_h_
//$ class java.lang.ProcessEnvironment$StringEntrySet$1
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace lang {
		class ProcessEnvironment$StringEntrySet;
	}
}

namespace java {
	namespace lang {

class ProcessEnvironment$StringEntrySet$1 : public ::java::util::Iterator {
	$class(ProcessEnvironment$StringEntrySet$1, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	ProcessEnvironment$StringEntrySet$1();
	void init$(::java::lang::ProcessEnvironment$StringEntrySet* this$0);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::java::lang::ProcessEnvironment$StringEntrySet* this$0 = nullptr;
	::java::util::Iterator* i = nullptr;
};

	} // lang
} // java

#endif // _java_lang_ProcessEnvironment$StringEntrySet$1_h_