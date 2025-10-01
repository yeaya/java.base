#ifndef _common_TestMe_h_
#define _common_TestMe_h_
//$ interface common.TestMe
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

namespace common {

class $export TestMe : public ::java::lang::annotation::Annotation {
	$interface(TestMe, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $String* canonical() {return nullptr;}
	virtual $String* desc() {return nullptr;}
	virtual $String* encl() {return nullptr;}
	virtual bool hasCanonical() {return false;}
	virtual $String* simple() {return nullptr;}
};

} // common

#endif // _common_TestMe_h_