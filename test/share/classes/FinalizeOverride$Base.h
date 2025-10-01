#ifndef _FinalizeOverride$Base_h_
#define _FinalizeOverride$Base_h_
//$ class FinalizeOverride$Base
//$ extends java.lang.Object

#include <java/lang/Object.h>

class $export FinalizeOverride$Base : public ::java::lang::Object {
	$class(FinalizeOverride$Base, $HAS_FINALIZE | $NO_CLASS_INIT, ::java::lang::Object)
public:
	FinalizeOverride$Base();
	void init$(int32_t v);
	virtual int32_t called();
	virtual void finalize() override;
	int32_t value = 0;
};

#endif // _FinalizeOverride$Base_h_