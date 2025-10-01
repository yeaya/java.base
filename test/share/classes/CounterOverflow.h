#ifndef _CounterOverflow_h_
#define _CounterOverflow_h_
//$ class CounterOverflow
//$ extends java.io.DataOutputStream

#include <java/io/DataOutputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class OutputStream;
	}
}

class $export CounterOverflow : public ::java::io::DataOutputStream {
	$class(CounterOverflow, $NO_CLASS_INIT, ::java::io::DataOutputStream)
public:
	CounterOverflow();
	void init$(::java::io::OutputStream* out);
	static void main($StringArray* args);
	using ::java::io::DataOutputStream::write;
};

#endif // _CounterOverflow_h_