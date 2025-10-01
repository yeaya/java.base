#ifndef _subpackage_NonRepeated_h_
#define _subpackage_NonRepeated_h_
//$ interface subpackage.NonRepeated
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

namespace subpackage {

class $export NonRepeated : public ::java::lang::annotation::Annotation {
	$interface(NonRepeated, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual int32_t value() {return 0;}
};

} // subpackage

#endif // _subpackage_NonRepeated_h_