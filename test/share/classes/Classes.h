#ifndef _Classes_h_
#define _Classes_h_
//$ interface Classes
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

class Classes : public ::java::lang::annotation::Annotation {
	$interface(Classes, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $StringArray* value() {return nullptr;}
};

#endif // _Classes_h_