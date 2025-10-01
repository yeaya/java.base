#ifndef _test_java_time_format_MockIOExceptionAppendable_h_
#define _test_java_time_format_MockIOExceptionAppendable_h_
//$ class test.java.time.format.MockIOExceptionAppendable
//$ extends java.lang.Appendable

#include <java/lang/Appendable.h>

namespace java {
	namespace lang {
		class CharSequence;
	}
}

namespace test {
	namespace java {
		namespace time {
			namespace format {

class $export MockIOExceptionAppendable : public ::java::lang::Appendable {
	$class(MockIOExceptionAppendable, $NO_CLASS_INIT, ::java::lang::Appendable)
public:
	MockIOExceptionAppendable();
	void init$();
	virtual ::java::lang::Appendable* append(::java::lang::CharSequence* csq) override;
	virtual ::java::lang::Appendable* append(char16_t c) override;
	virtual ::java::lang::Appendable* append(::java::lang::CharSequence* csq, int32_t start, int32_t end) override;
};

			} // format
		} // time
	} // java
} // test

#endif // _test_java_time_format_MockIOExceptionAppendable_h_