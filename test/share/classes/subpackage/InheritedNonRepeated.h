#ifndef _subpackage_InheritedNonRepeated_h_
#define _subpackage_InheritedNonRepeated_h_
//$ interface subpackage.InheritedNonRepeated
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

namespace subpackage {

class $export InheritedNonRepeated : public ::java::lang::annotation::Annotation {
	$interface(InheritedNonRepeated, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual int32_t value() {return 0;}
};

} // subpackage

#endif // _subpackage_InheritedNonRepeated_h_