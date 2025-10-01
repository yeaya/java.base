#ifndef _One$3_h_
#define _One$3_h_
//$ class One$3
//$ extends One$Test

#include <One$Test.h>
#include <java/lang/Array.h>

class One$3 : public ::One$Test {
	$class(One$3, $NO_CLASS_INIT, ::One$Test)
public:
	One$3();
	void init$($bytes* in, $String* expect);
	virtual void read() override;
};

#endif // _One$3_h_