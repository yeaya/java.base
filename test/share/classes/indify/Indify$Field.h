#ifndef _indify_Indify$Field_h_
#define _indify_Indify$Field_h_
//$ class indify.Indify$Field
//$ extends indify.Indify$Member

#include <indify/Indify$Member.h>

namespace indify {

class $export Indify$Field : public ::indify::Indify$Member {
	$class(Indify$Field, $NO_CLASS_INIT, ::indify::Indify$Member)
public:
	Indify$Field();
	void init$();
	using ::indify::Indify$Member::outer;
};

} // indify

#endif // _indify_Indify$Field_h_