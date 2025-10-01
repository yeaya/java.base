#ifndef _FinalizeOverride$PublicFinalize_h_
#define _FinalizeOverride$PublicFinalize_h_
//$ class FinalizeOverride$PublicFinalize
//$ extends FinalizeOverride$Base

#include <FinalizeOverride$Base.h>

class $export FinalizeOverride$PublicFinalize : public ::FinalizeOverride$Base {
	$class(FinalizeOverride$PublicFinalize, $HAS_FINALIZE | $NO_CLASS_INIT, ::FinalizeOverride$Base)
public:
	FinalizeOverride$PublicFinalize();
	void init$(int32_t v);
	virtual void finalize() override;
};

#endif // _FinalizeOverride$PublicFinalize_h_