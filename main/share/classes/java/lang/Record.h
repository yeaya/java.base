#ifndef _java_lang_Record_h_
#define _java_lang_Record_h_
//$ class java.lang.Record
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {

class $export Record : public ::java::lang::Object {
	$class(Record, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Record();
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	void init$();
	virtual $String* toString() override;
};

	} // lang
} // java

#endif // _java_lang_Record_h_