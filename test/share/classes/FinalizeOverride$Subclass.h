#ifndef _FinalizeOverride$Subclass_h_
#define _FinalizeOverride$Subclass_h_
//$ class FinalizeOverride$Subclass
//$ extends FinalizeOverride$Base

#include <FinalizeOverride$Base.h>

class $export FinalizeOverride$Subclass : public ::FinalizeOverride$Base {
	$class(FinalizeOverride$Subclass, $HAS_FINALIZE | $NO_CLASS_INIT, ::FinalizeOverride$Base)
public:
	FinalizeOverride$Subclass();
	void init$(int32_t v);
	virtual void finalize() override;
};

#endif // _FinalizeOverride$Subclass_h_