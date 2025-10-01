#ifndef _indify_Indify$Method_h_
#define _indify_Indify$Method_h_
//$ class indify.Indify$Method
//$ extends indify.Indify$Member

#include <indify/Indify$Member.h>

namespace indify {
	class Indify$Code;
	class Indify$Instruction;
}

namespace indify {

class $export Indify$Method : public ::indify::Indify$Member {
	$class(Indify$Method, $NO_CLASS_INIT, ::indify::Indify$Member)
public:
	Indify$Method();
	void init$();
	virtual ::indify::Indify$Code* code();
	virtual ::indify::Indify$Instruction* instructions();
	using ::indify::Indify$Member::outer;
};

} // indify

#endif // _indify_Indify$Method_h_