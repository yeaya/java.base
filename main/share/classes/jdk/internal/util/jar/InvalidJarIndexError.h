#ifndef _jdk_internal_util_jar_InvalidJarIndexError_h_
#define _jdk_internal_util_jar_InvalidJarIndexError_h_
//$ class jdk.internal.util.jar.InvalidJarIndexError
//$ extends java.lang.Error

#include <java/lang/Error.h>

namespace jdk {
	namespace internal {
		namespace util {
			namespace jar {

class $export InvalidJarIndexError : public ::java::lang::Error {
	$class(InvalidJarIndexError, $NO_CLASS_INIT, ::java::lang::Error)
public:
	InvalidJarIndexError();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0;
	InvalidJarIndexError(const InvalidJarIndexError& e);
	InvalidJarIndexError wrapper$();
	virtual void throwWrapper$() override;
};

			} // jar
		} // util
	} // internal
} // jdk

#endif // _jdk_internal_util_jar_InvalidJarIndexError_h_