#ifndef _HugeCapacity$MyHugeCharSeq_h_
#define _HugeCapacity$MyHugeCharSeq_h_
//$ class HugeCapacity$MyHugeCharSeq
//$ extends java.lang.CharSequence

#include <java/lang/CharSequence.h>

class HugeCapacity$MyHugeCharSeq : public ::java::lang::CharSequence {
	$class(HugeCapacity$MyHugeCharSeq, $NO_CLASS_INIT, ::java::lang::CharSequence)
public:
	HugeCapacity$MyHugeCharSeq();
	void init$();
	virtual char16_t charAt(int32_t i) override;
	virtual int32_t length() override;
	virtual ::java::lang::CharSequence* subSequence(int32_t st, int32_t e) override;
	virtual $String* toString() override;
};

#endif // _HugeCapacity$MyHugeCharSeq_h_