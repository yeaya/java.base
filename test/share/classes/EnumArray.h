#ifndef _EnumArray_h_
#define _EnumArray_h_
//$ interface EnumArray
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

namespace java {
	namespace lang {
		namespace annotation {
			class RetentionPolicy;
		}
	}
}

class EnumArray : public ::java::lang::annotation::Annotation {
	$interface(EnumArray, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $Array<::java::lang::annotation::RetentionPolicy>* value() {return nullptr;}
};

#endif // _EnumArray_h_