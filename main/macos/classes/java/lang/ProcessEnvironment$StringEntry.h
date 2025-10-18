#ifndef _java_lang_ProcessEnvironment$StringEntry_h_
#define _java_lang_ProcessEnvironment$StringEntry_h_
//$ class java.lang.ProcessEnvironment$StringEntry
//$ extends java.util.Map$Entry

#include <java/util/Map$Entry.h>

namespace java {
	namespace lang {

class ProcessEnvironment$StringEntry : public ::java::util::Map$Entry {
	$class(ProcessEnvironment$StringEntry, $NO_CLASS_INIT, ::java::util::Map$Entry)
public:
	ProcessEnvironment$StringEntry();
	void init$(::java::util::Map$Entry* e);
	virtual bool equals(Object$* o) override;
	virtual $Object* getKey() override;
	virtual $Object* getValue() override;
	virtual int32_t hashCode() override;
	virtual $String* setValue($String* newValue);
	virtual $Object* setValue(Object$* newValue) override;
	virtual $String* toString() override;
	::java::util::Map$Entry* e = nullptr;
};

	} // lang
} // java

#endif // _java_lang_ProcessEnvironment$StringEntry_h_