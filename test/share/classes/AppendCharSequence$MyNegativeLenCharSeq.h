#ifndef _AppendCharSequence$MyNegativeLenCharSeq_h_
#define _AppendCharSequence$MyNegativeLenCharSeq_h_
//$ class AppendCharSequence$MyNegativeLenCharSeq
//$ extends java.lang.CharSequence

#include <java/lang/CharSequence.h>

class AppendCharSequence$MyNegativeLenCharSeq : public ::java::lang::CharSequence {
	$class(AppendCharSequence$MyNegativeLenCharSeq, $NO_CLASS_INIT, ::java::lang::CharSequence)
public:
	AppendCharSequence$MyNegativeLenCharSeq();
	void init$(int32_t length);
	virtual char16_t charAt(int32_t i) override;
	virtual int32_t length() override;
	virtual ::java::lang::CharSequence* subSequence(int32_t st, int32_t e) override;
	virtual $String* toString() override;
	int32_t length$ = 0;
};

#endif // _AppendCharSequence$MyNegativeLenCharSeq_h_