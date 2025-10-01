#ifndef _StringContentEqualsBug$Disturber_h_
#define _StringContentEqualsBug$Disturber_h_
//$ class StringContentEqualsBug$Disturber
//$ extends StringContentEqualsBug$Task

#include <StringContentEqualsBug$Task.h>

namespace java {
	namespace lang {
		class StringBuffer;
	}
}

class $export StringContentEqualsBug$Disturber : public ::StringContentEqualsBug$Task {
	$class(StringContentEqualsBug$Disturber, $NO_CLASS_INIT, ::StringContentEqualsBug$Task)
public:
	StringContentEqualsBug$Disturber();
	void init$(::java::lang::StringBuffer* sb);
	virtual void doWith(::java::lang::StringBuffer* sb) override;
};

#endif // _StringContentEqualsBug$Disturber_h_