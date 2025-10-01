#ifndef _java_lang_ProcessEnvironment$CheckedEntry_h_
#define _java_lang_ProcessEnvironment$CheckedEntry_h_
//$ class java.lang.ProcessEnvironment$CheckedEntry
//$ extends java.util.Map$Entry

#include <java/util/Map$Entry.h>

namespace java {
	namespace lang {

class ProcessEnvironment$CheckedEntry : public ::java::util::Map$Entry {
	$class(ProcessEnvironment$CheckedEntry, $NO_CLASS_INIT, ::java::util::Map$Entry)
public:
	ProcessEnvironment$CheckedEntry();
	void init$(::java::util::Map$Entry* e);
	virtual bool equals(Object$* o) override;
	virtual $Object* getKey() override;
	virtual $Object* getValue() override;
	virtual int32_t hashCode() override;
	virtual $String* setValue($String* value);
	virtual $Object* setValue(Object$* value) override;
	virtual $String* toString() override;
	::java::util::Map$Entry* e = nullptr;
};

	} // lang
} // java

#endif // _java_lang_ProcessEnvironment$CheckedEntry_h_