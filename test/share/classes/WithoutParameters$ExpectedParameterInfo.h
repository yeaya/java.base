#ifndef _WithoutParameters$ExpectedParameterInfo_h_
#define _WithoutParameters$ExpectedParameterInfo_h_
//$ interface WithoutParameters$ExpectedParameterInfo
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

class WithoutParameters$ParameterizedInfo;

class $export WithoutParameters$ExpectedParameterInfo : public ::java::lang::annotation::Annotation {
	$interface(WithoutParameters$ExpectedParameterInfo, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual bool isVarArgs() {return false;}
	virtual int32_t parameterCount() {return 0;}
	virtual $ClassArray* parameterTypes() {return nullptr;}
	virtual $Array<WithoutParameters$ParameterizedInfo>* parameterizedTypes() {return nullptr;}
};

#endif // _WithoutParameters$ExpectedParameterInfo_h_