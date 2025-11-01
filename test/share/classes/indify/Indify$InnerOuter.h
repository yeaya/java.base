#ifndef _indify_Indify$InnerOuter_h_
#define _indify_Indify$InnerOuter_h_
//$ class indify.Indify$InnerOuter
//$ extends indify.Indify$Outer
//$ implements indify.Indify$Inner

#include <indify/Indify$Inner.h>
#include <indify/Indify$Outer.h>

namespace indify {

class $export Indify$InnerOuter : public ::indify::Indify$Outer, public ::indify::Indify$Inner {
	$class(Indify$InnerOuter, 0, ::indify::Indify$Outer, ::indify::Indify$Inner)
public:
	Indify$InnerOuter();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void linkOuter(::indify::Indify$Outer* o) override;
	using ::indify::Indify$Outer::outer;
	virtual ::indify::Indify$Outer* outer() override;
	virtual $String* toString() override;
	static bool $assertionsDisabled;
	::indify::Indify$Outer* outer$ = nullptr;
};

} // indify

#endif // _indify_Indify$InnerOuter_h_