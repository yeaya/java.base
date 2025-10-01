#ifndef _StringContentEqualsBug$Tester_h_
#define _StringContentEqualsBug$Tester_h_
//$ class StringContentEqualsBug$Tester
//$ extends StringContentEqualsBug$Task

#include <StringContentEqualsBug$Task.h>

namespace java {
	namespace lang {
		class StringBuffer;
	}
}

class $export StringContentEqualsBug$Tester : public ::StringContentEqualsBug$Task {
	$class(StringContentEqualsBug$Tester, $NO_CLASS_INIT, ::StringContentEqualsBug$Task)
public:
	StringContentEqualsBug$Tester();
	void init$(::java::lang::StringBuffer* sb);
	virtual void doWith(::java::lang::StringBuffer* sb) override;
};

#endif // _StringContentEqualsBug$Tester_h_