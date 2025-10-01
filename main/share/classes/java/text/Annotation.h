#ifndef _java_text_Annotation_h_
#define _java_text_Annotation_h_
//$ class java.text.Annotation
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace text {

class $export Annotation : public ::java::lang::Object {
	$class(Annotation, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Annotation();
	void init$(Object$* value);
	virtual $Object* getValue();
	virtual $String* toString() override;
	$Object* value = nullptr;
};

	} // text
} // java

#endif // _java_text_Annotation_h_