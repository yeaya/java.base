#ifndef _java_lang_ProcessEnvironment$Value_h_
#define _java_lang_ProcessEnvironment$Value_h_
//$ class java.lang.ProcessEnvironment$Value
//$ extends java.lang.ProcessEnvironment$ExternalData
//$ implements java.lang.Comparable

#include <java/lang/Array.h>
#include <java/lang/Comparable.h>
#include <java/lang/ProcessEnvironment$ExternalData.h>

namespace java {
	namespace lang {

class ProcessEnvironment$Value : public ::java::lang::ProcessEnvironment$ExternalData, public ::java::lang::Comparable {
	$class(ProcessEnvironment$Value, $NO_CLASS_INIT, ::java::lang::ProcessEnvironment$ExternalData, ::java::lang::Comparable)
public:
	ProcessEnvironment$Value();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* str, $bytes* bytes);
	virtual int32_t compareTo(::java::lang::ProcessEnvironment$Value* value);
	virtual int32_t compareTo(Object$* value) override;
	virtual bool equals(Object$* o) override;
	virtual $String* toString() override;
	static ::java::lang::ProcessEnvironment$Value* valueOf($String* str);
	static ::java::lang::ProcessEnvironment$Value* valueOf($bytes* bytes);
	static ::java::lang::ProcessEnvironment$Value* valueOfQueryOnly(Object$* str);
	static ::java::lang::ProcessEnvironment$Value* valueOfQueryOnly($String* str);
};

	} // lang
} // java

#endif // _java_lang_ProcessEnvironment$Value_h_