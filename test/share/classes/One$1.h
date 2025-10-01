#ifndef _One$1_h_
#define _One$1_h_
//$ class One$1
//$ extends One$Test

#include <One$Test.h>
#include <java/lang/Array.h>

class One$1 : public ::One$Test {
	$class(One$1, $NO_CLASS_INIT, ::One$Test)
public:
	One$1();
	void init$($bytes* in, $String* expect);
	virtual void read() override;
};

#endif // _One$1_h_