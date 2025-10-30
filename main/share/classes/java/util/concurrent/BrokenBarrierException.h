#ifndef _java_util_concurrent_BrokenBarrierException_h_
#define _java_util_concurrent_BrokenBarrierException_h_
//$ class java.util.concurrent.BrokenBarrierException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace java {
	namespace util {
		namespace concurrent {

class $export BrokenBarrierException : public ::java::lang::Exception {
	$class(BrokenBarrierException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	BrokenBarrierException();
	void init$();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0x62C610B23D3CA0E4;
	BrokenBarrierException(const BrokenBarrierException& e);
	virtual void throw$() override;
	inline BrokenBarrierException* operator ->() {
		return (BrokenBarrierException*)throwing$;
	}
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_BrokenBarrierException_h_