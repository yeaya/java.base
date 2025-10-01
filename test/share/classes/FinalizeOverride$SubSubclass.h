#ifndef _FinalizeOverride$SubSubclass_h_
#define _FinalizeOverride$SubSubclass_h_
//$ class FinalizeOverride$SubSubclass
//$ extends FinalizeOverride$Subclass

#include <FinalizeOverride$Subclass.h>

class $export FinalizeOverride$SubSubclass : public ::FinalizeOverride$Subclass {
	$class(FinalizeOverride$SubSubclass, $HAS_FINALIZE | $NO_CLASS_INIT, ::FinalizeOverride$Subclass)
public:
	FinalizeOverride$SubSubclass();
	void init$(int32_t v);
	virtual void finalize() override;
};

#endif // _FinalizeOverride$SubSubclass_h_