#ifndef _One$2_h_
#define _One$2_h_
//$ class One$2
//$ extends One$Test

#include <One$Test.h>
#include <java/lang/Array.h>

class One$2 : public ::One$Test {
	$class(One$2, $NO_CLASS_INIT, ::One$Test)
public:
	One$2();
	void init$($bytes* in, $String* expect);
	virtual void read() override;
};

#endif // _One$2_h_