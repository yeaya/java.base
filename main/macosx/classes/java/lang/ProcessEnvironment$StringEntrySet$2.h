#ifndef _java_lang_ProcessEnvironment$StringEntrySet$2_h_
#define _java_lang_ProcessEnvironment$StringEntrySet$2_h_
//$ class java.lang.ProcessEnvironment$StringEntrySet$2
//$ extends java.util.Map$Entry

#include <java/util/Map$Entry.h>

namespace java {
	namespace lang {
		class ProcessEnvironment$Value;
	}
}

namespace java {
	namespace lang {

class ProcessEnvironment$StringEntrySet$2 : public ::java::util::Map$Entry {
	$class(ProcessEnvironment$StringEntrySet$2, $NO_CLASS_INIT, ::java::util::Map$Entry)
public:
	ProcessEnvironment$StringEntrySet$2();
	void init$(Object$* val$o);
	virtual $Object* getKey() override;
	virtual $Object* getValue() override;
	virtual ::java::lang::ProcessEnvironment$Value* setValue(::java::lang::ProcessEnvironment$Value* value);
	virtual $Object* setValue(Object$* value) override;
	$Object* val$o = nullptr;
};

	} // lang
} // java

#endif // _java_lang_ProcessEnvironment$StringEntrySet$2_h_