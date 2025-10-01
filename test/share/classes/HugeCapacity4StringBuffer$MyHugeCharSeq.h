#ifndef _HugeCapacity4StringBuffer$MyHugeCharSeq_h_
#define _HugeCapacity4StringBuffer$MyHugeCharSeq_h_
//$ class HugeCapacity4StringBuffer$MyHugeCharSeq
//$ extends java.lang.CharSequence

#include <java/lang/CharSequence.h>

class HugeCapacity4StringBuffer$MyHugeCharSeq : public ::java::lang::CharSequence {
	$class(HugeCapacity4StringBuffer$MyHugeCharSeq, $NO_CLASS_INIT, ::java::lang::CharSequence)
public:
	HugeCapacity4StringBuffer$MyHugeCharSeq();
	void init$();
	virtual char16_t charAt(int32_t i) override;
	virtual int32_t length() override;
	virtual ::java::lang::CharSequence* subSequence(int32_t st, int32_t e) override;
	virtual $String* toString() override;
};

#endif // _HugeCapacity4StringBuffer$MyHugeCharSeq_h_