#ifndef _FinalizeOverride$NoOverride_h_
#define _FinalizeOverride$NoOverride_h_
//$ class FinalizeOverride$NoOverride
//$ extends FinalizeOverride$PrivateFinalize

#include <FinalizeOverride$PrivateFinalize.h>

class $export FinalizeOverride$NoOverride : public ::FinalizeOverride$PrivateFinalize {
	$class(FinalizeOverride$NoOverride, $NO_CLASS_INIT, ::FinalizeOverride$PrivateFinalize)
public:
	FinalizeOverride$NoOverride();
	void init$(int32_t v);
};

#endif // _FinalizeOverride$NoOverride_h_