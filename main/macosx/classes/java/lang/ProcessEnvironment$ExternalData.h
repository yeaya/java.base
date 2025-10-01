#ifndef _java_lang_ProcessEnvironment$ExternalData_h_
#define _java_lang_ProcessEnvironment$ExternalData_h_
//$ class java.lang.ProcessEnvironment$ExternalData
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {

class ProcessEnvironment$ExternalData : public ::java::lang::Object {
	$class(ProcessEnvironment$ExternalData, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ProcessEnvironment$ExternalData();
	void init$($String* str, $bytes* bytes);
	virtual bool equals(Object$* o) override;
	virtual $bytes* getBytes();
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	$String* str = nullptr;
	$bytes* bytes = nullptr;
};

	} // lang
} // java

#endif // _java_lang_ProcessEnvironment$ExternalData_h_