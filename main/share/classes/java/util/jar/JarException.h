#ifndef _java_util_jar_JarException_h_
#define _java_util_jar_JarException_h_
//$ class java.util.jar.JarException
//$ extends java.util.zip.ZipException

#include <java/util/zip/ZipException.h>

namespace java {
	namespace util {
		namespace jar {

class $export JarException : public ::java::util::zip::ZipException {
	$class(JarException, $NO_CLASS_INIT, ::java::util::zip::ZipException)
public:
	JarException();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0x635CA48583F88729;
	JarException(const JarException& e);
	virtual void throw$() override;
	inline JarException* operator ->() {
		return (JarException*)throwing$;
	}
};

		} // jar
	} // util
} // java

#endif // _java_util_jar_JarException_h_