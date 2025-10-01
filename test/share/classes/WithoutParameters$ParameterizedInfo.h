#ifndef _WithoutParameters$ParameterizedInfo_h_
#define _WithoutParameters$ParameterizedInfo_h_
//$ interface WithoutParameters$ParameterizedInfo
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

class $export WithoutParameters$ParameterizedInfo : public ::java::lang::annotation::Annotation {
	$interface(WithoutParameters$ParameterizedInfo, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $String* string() {return nullptr;}
	virtual $Class* value() {return nullptr;}
};

#endif // _WithoutParameters$ParameterizedInfo_h_